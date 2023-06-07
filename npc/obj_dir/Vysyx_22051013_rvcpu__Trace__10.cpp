// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceChgSub10(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 20611);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l7_add) 
                                          >> 2U))));
            tracep->chgBit(oldp+1,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l7_add) 
                                          >> 1U))));
            tracep->chgBit(oldp+2,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l8_add) 
                                          >> 2U))));
            tracep->chgBit(oldp+4,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l8_add) 
                                          >> 1U))));
            tracep->chgBit(oldp+5,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+6,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             << 1U) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                               >> 0x1fU)))),3);
            tracep->chgBit(oldp+7,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 1U) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U]) 
                                           | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                 >> 0x1fU))) 
                                          | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 1U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                                >> 0x1fU))))));
            tracep->chgBit(oldp+8,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                            >> 1U) 
                                           ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U]) 
                                          ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                             >> 0x1fU)))));
            tracep->chgBit(oldp+9,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                          >> 1U))));
            tracep->chgBit(oldp+10,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U])));
            tracep->chgBit(oldp+11,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x61U] 
                                     >> 0x1fU)));
            tracep->chgCData(oldp+12,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 2U))),3);
            tracep->chgBit(oldp+13,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 4U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 3U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 2U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 2U))))));
            tracep->chgBit(oldp+14,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 4U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 3U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 2U)))));
            tracep->chgBit(oldp+15,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 4U))));
            tracep->chgBit(oldp+16,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 3U))));
            tracep->chgBit(oldp+17,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 2U))));
            tracep->chgCData(oldp+18,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 5U))),3);
            tracep->chgBit(oldp+19,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 7U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 6U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 5U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 5U))))));
            tracep->chgBit(oldp+20,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 7U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 6U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 5U)))));
            tracep->chgBit(oldp+21,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 7U))));
            tracep->chgBit(oldp+22,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 6U))));
            tracep->chgBit(oldp+23,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 5U))));
            tracep->chgCData(oldp+24,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 8U))),3);
            tracep->chgBit(oldp+25,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0xaU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 9U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 8U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 8U))))));
            tracep->chgBit(oldp+26,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0xaU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 9U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 8U)))));
            tracep->chgBit(oldp+27,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0xaU))));
            tracep->chgBit(oldp+28,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 9U))));
            tracep->chgBit(oldp+29,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 8U))));
            tracep->chgCData(oldp+30,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0xbU))),3);
            tracep->chgBit(oldp+31,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0xdU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0xcU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0xbU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 0xbU))))));
            tracep->chgBit(oldp+32,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0xdU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0xcU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0xbU)))));
            tracep->chgBit(oldp+33,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0xdU))));
            tracep->chgBit(oldp+34,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0xcU))));
            tracep->chgBit(oldp+35,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0xbU))));
            tracep->chgCData(oldp+36,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0xeU))),3);
            tracep->chgBit(oldp+37,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x10U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0xfU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0xeU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 0xeU))))));
            tracep->chgBit(oldp+38,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x10U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0xfU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0xeU)))));
            tracep->chgBit(oldp+39,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x10U))));
            tracep->chgBit(oldp+40,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+41,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0xeU))));
            tracep->chgCData(oldp+42,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x11U))),3);
            tracep->chgBit(oldp+43,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x13U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x12U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0x11U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 0x11U))))));
            tracep->chgBit(oldp+44,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x13U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x12U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x11U)))));
            tracep->chgBit(oldp+45,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+46,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x12U))));
            tracep->chgBit(oldp+47,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x11U))));
            tracep->chgCData(oldp+48,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x14U))),3);
            tracep->chgBit(oldp+49,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x16U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x15U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0x14U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 0x14U))))));
            tracep->chgBit(oldp+50,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x16U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x15U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x14U)))));
            tracep->chgBit(oldp+51,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+52,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+53,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x14U))));
            tracep->chgCData(oldp+54,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x17U))),3);
            tracep->chgBit(oldp+55,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x19U) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x18U)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0x17U))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 0x17U))))));
            tracep->chgBit(oldp+56,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x19U) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x18U)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x17U)))));
            tracep->chgBit(oldp+57,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x19U))));
            tracep->chgBit(oldp+58,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x18U))));
            tracep->chgBit(oldp+59,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x17U))));
            tracep->chgCData(oldp+60,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x1aU))),3);
            tracep->chgBit(oldp+61,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x1cU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x1bU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0x1aU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 0x1aU))))));
            tracep->chgBit(oldp+62,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x1cU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x1bU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x1aU)))));
            tracep->chgBit(oldp+63,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+64,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+65,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x1aU))));
            tracep->chgCData(oldp+66,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                       >> 0x1dU)),3);
            tracep->chgBit(oldp+67,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x1fU) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x1eU)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                  >> 0x1dU))) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                                 >> 0x1dU))))));
            tracep->chgBit(oldp+68,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                             >> 0x1fU) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                               >> 0x1eU)) 
                                           ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                              >> 0x1dU)))));
            tracep->chgBit(oldp+69,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                     >> 0x1fU)));
            tracep->chgBit(oldp+70,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+71,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x62U] 
                                           >> 0x1dU))));
            tracep->chgCData(oldp+72,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+73,((1U & (((6U == 
                                             (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                           | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                               >> 2U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+74,((1U & VL_REDXOR_32(
                                                       (7U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+75,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 2U))));
            tracep->chgBit(oldp+76,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 1U))));
            tracep->chgBit(oldp+77,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+78,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))),3);
            tracep->chgBit(oldp+79,((1U & (((0x30U 
                                             == (0x30U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x18U 
                                               == (0x18U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x28U 
                                              == (0x28U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+80,((1U & VL_REDXOR_32(
                                                       (0x38U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+81,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 5U))));
            tracep->chgBit(oldp+82,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 4U))));
            tracep->chgBit(oldp+83,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 3U))));
            tracep->chgCData(oldp+84,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))),3);
            tracep->chgBit(oldp+85,((1U & (((0x180U 
                                             == (0x180U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                            | (0xc0U 
                                               == (0xc0U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x140U 
                                              == (0x140U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+86,((1U & VL_REDXOR_32(
                                                       (0x1c0U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+87,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 8U))));
            tracep->chgBit(oldp+88,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 7U))));
            tracep->chgBit(oldp+89,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 6U))));
            tracep->chgCData(oldp+90,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))),3);
            tracep->chgBit(oldp+91,((1U & (((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x600U 
                                               == (0x600U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))) 
                                           | (0xa00U 
                                              == (0xa00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+92,((1U & VL_REDXOR_32(
                                                       (0xe00U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+93,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 0xbU))));
            tracep->chgBit(oldp+94,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 0xaU))));
            tracep->chgBit(oldp+95,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 9U))));
            tracep->chgCData(oldp+96,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+97,((1U & (((0x6000U 
                                             == (0x6000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                            | (0x3000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))) 
                                           | (0x5000U 
                                              == (0x5000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+98,((1U & VL_REDXOR_32(
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+99,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                           >> 0xeU))));
            tracep->chgBit(oldp+100,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+101,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+102,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+103,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+104,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+105,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+106,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+108,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+109,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+110,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+111,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+112,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+113,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+114,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+115,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+116,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+117,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+118,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+119,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+120,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+121,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+122,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+123,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+124,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+125,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+126,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+127,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+128,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+129,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+130,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+131,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+132,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+133,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+134,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+135,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+136,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+137,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+138,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+139,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+140,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+141,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+142,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+143,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+144,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+145,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+146,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+147,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+149,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+150,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+151,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+152,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+154,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+155,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+156,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+157,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+158,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+159,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+160,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+161,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__95__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+162,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U]))))),33);
            tracep->chgBit(oldp+164,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+165,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+180,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+181,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+183,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+184,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+187,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+188,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+189,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+190,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+191,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+192,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+193,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+194,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+195,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+196,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+198,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+199,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+200,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+201,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+202,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+203,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+204,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+205,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+206,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+207,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+208,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U])),3);
            tracep->chgBit(oldp+209,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U])))));
            tracep->chgBit(oldp+210,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U]))));
            tracep->chgBit(oldp+211,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 2U))));
            tracep->chgBit(oldp+212,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 1U))));
            tracep->chgBit(oldp+213,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U])));
            tracep->chgCData(oldp+214,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+215,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+216,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+217,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 5U))));
            tracep->chgBit(oldp+218,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 4U))));
            tracep->chgBit(oldp+219,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 3U))));
            tracep->chgCData(oldp+220,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+221,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+222,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+223,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 8U))));
            tracep->chgBit(oldp+224,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 7U))));
            tracep->chgBit(oldp+225,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 6U))));
            tracep->chgCData(oldp+226,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+227,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+228,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+229,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+230,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+231,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 9U))));
            tracep->chgCData(oldp+232,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+233,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+234,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+235,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+236,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+237,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+238,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+239,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+240,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+241,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+242,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+243,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+244,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+245,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+246,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+247,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+248,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+249,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+250,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+251,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+252,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+253,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+254,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+255,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+256,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+257,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+258,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+259,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+260,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+261,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+262,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+263,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+264,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+265,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+266,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+267,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+268,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+269,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+270,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+271,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U])));
            tracep->chgBit(oldp+272,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+273,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x63U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+274,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+275,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+276,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+277,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+278,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+279,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+280,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+281,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+282,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+283,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+284,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+285,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+286,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+287,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+288,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+289,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+290,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+291,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+292,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+293,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+294,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+295,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+296,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+297,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+298,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+299,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+300,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+301,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+302,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+303,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+304,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+305,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+306,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+307,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+308,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+309,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+310,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+311,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+312,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+313,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+314,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+315,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+316,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+317,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+318,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+320,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+321,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+322,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+323,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+324,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+326,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+327,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+328,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+329,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+330,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+333,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+334,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+335,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+336,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+337,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+339,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+340,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+341,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+342,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+343,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+344,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+345,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+346,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+347,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+348,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+349,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+350,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+351,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+352,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+353,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+354,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+355,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+356,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+357,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+358,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+359,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+360,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+361,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+362,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+363,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__96__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+364,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U])) 
                                              >> 1U)))),33);
            tracep->chgBit(oldp+366,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+367,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+368,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+369,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+370,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+371,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+372,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+373,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+374,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+375,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+376,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+377,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+378,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+379,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+380,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+381,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+382,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+383,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+384,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+385,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+386,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+387,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+388,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+389,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+390,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+391,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+392,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+393,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+394,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+395,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+396,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+397,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+398,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+399,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+400,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+401,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+402,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+403,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+404,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+405,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+406,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+407,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+408,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+409,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+410,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+411,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+412,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+413,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 3U))));
            tracep->chgBit(oldp+414,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 2U))));
            tracep->chgBit(oldp+415,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 1U))));
            tracep->chgCData(oldp+416,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 4U))),3);
            tracep->chgBit(oldp+417,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 6U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 5U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 4U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 4U))))));
            tracep->chgBit(oldp+418,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 6U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 5U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 4U)))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 6U))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 5U))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 4U))));
            tracep->chgCData(oldp+422,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 7U))),3);
            tracep->chgBit(oldp+423,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 9U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 8U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 7U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 7U))))));
            tracep->chgBit(oldp+424,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 9U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 8U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 9U))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 8U))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 7U))));
            tracep->chgCData(oldp+428,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0xaU))),3);
            tracep->chgBit(oldp+429,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0xcU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0xbU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0xaU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+430,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0xcU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0xbU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+434,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0xdU))),3);
            tracep->chgBit(oldp+435,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0xfU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0xeU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0xdU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0xdU))))));
            tracep->chgBit(oldp+436,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0xfU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0xeU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+440,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x10U))),3);
            tracep->chgBit(oldp+441,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x12U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x11U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x10U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x10U))))));
            tracep->chgBit(oldp+442,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x12U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x11U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x10U)))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+446,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x13U))),3);
            tracep->chgBit(oldp+447,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x15U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x14U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x13U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x13U))))));
            tracep->chgBit(oldp+448,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x15U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x14U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x13U)))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+452,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+453,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x18U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x17U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x16U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x16U))))));
            tracep->chgBit(oldp+454,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x18U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x17U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+455,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+457,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+458,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x19U))),3);
            tracep->chgBit(oldp+459,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x1bU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x1aU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x19U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+460,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x1bU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x1aU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x19U)))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+464,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x1cU))),3);
            tracep->chgBit(oldp+465,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x1eU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x1dU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x1cU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x1cU))))));
            tracep->chgBit(oldp+466,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                              >> 0x1eU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                >> 0x1dU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x1cU)))));
            tracep->chgBit(oldp+467,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+468,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+470,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                 >> 0x1fU)))),3);
            tracep->chgBit(oldp+471,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 1U) 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U]) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                   >> 0x1fU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 1U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                                  >> 0x1fU))))));
            tracep->chgBit(oldp+472,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 1U) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U]) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+473,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 1U))));
            tracep->chgBit(oldp+474,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U])));
            tracep->chgBit(oldp+475,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x64U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+476,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+477,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+478,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+479,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+480,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+481,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+482,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+483,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+484,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+485,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+486,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+487,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+488,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+489,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+490,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+492,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+493,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+494,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+495,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+496,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+497,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+498,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+499,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+500,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+501,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+502,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+503,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+504,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+505,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+506,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+507,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+508,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+509,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+510,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+511,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+512,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+513,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+514,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+515,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+516,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+517,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+518,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+519,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+520,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+521,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+522,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+523,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+524,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+525,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+526,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+527,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+528,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+529,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+530,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+531,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+532,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+533,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+534,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+535,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+536,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+537,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+538,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+539,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+540,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+541,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+542,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+543,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+544,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+545,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+546,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+547,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+548,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+549,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+550,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+551,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+552,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+553,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+554,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+555,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+556,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+557,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+558,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+559,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+560,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+561,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+562,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+563,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+564,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+565,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__97__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+566,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U])) 
                                              >> 2U)))),33);
            tracep->chgBit(oldp+568,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+569,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+570,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+571,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+572,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+573,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+574,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+575,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+576,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+577,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+578,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+579,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+580,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+581,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+582,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+583,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+584,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+585,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+586,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+587,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+588,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+589,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+590,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+591,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+592,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+593,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+594,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+595,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+596,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+597,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+598,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+599,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+600,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+601,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+602,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+603,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+604,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+605,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+606,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+607,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+608,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+609,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+610,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+611,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+612,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+613,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 4U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 3U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 2U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 2U))))));
            tracep->chgBit(oldp+614,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 4U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 3U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+615,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 4U))));
            tracep->chgBit(oldp+616,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 3U))));
            tracep->chgBit(oldp+617,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 2U))));
            tracep->chgCData(oldp+618,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 5U))),3);
            tracep->chgBit(oldp+619,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 7U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 6U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 5U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 5U))))));
            tracep->chgBit(oldp+620,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 7U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 6U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 5U)))));
            tracep->chgBit(oldp+621,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 7U))));
            tracep->chgBit(oldp+622,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 6U))));
            tracep->chgBit(oldp+623,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 5U))));
            tracep->chgCData(oldp+624,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 8U))),3);
            tracep->chgBit(oldp+625,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0xaU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 9U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 8U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 8U))))));
            tracep->chgBit(oldp+626,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0xaU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 9U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 8U)))));
            tracep->chgBit(oldp+627,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+628,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 9U))));
            tracep->chgBit(oldp+629,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 8U))));
            tracep->chgCData(oldp+630,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0xbU))),3);
            tracep->chgBit(oldp+631,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0xdU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0xcU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0xbU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+632,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0xdU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0xcU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0xbU)))));
            tracep->chgBit(oldp+633,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+634,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+635,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+636,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+637,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x10U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0xfU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0xeU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+638,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x10U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0xfU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+639,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+640,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+641,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+642,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+643,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x13U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x12U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x11U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x11U))))));
            tracep->chgBit(oldp+644,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x13U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x12U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x11U)))));
            tracep->chgBit(oldp+645,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+646,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+647,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+648,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+649,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x16U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x15U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x14U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x14U))))));
            tracep->chgBit(oldp+650,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x16U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x15U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+651,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+652,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+653,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+654,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x17U))),3);
            tracep->chgBit(oldp+655,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x19U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x18U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x17U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+656,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x19U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x18U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x17U)))));
            tracep->chgBit(oldp+657,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+658,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+659,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+660,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x1aU))),3);
            tracep->chgBit(oldp+661,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x1cU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x1bU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x1aU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+662,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x1cU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x1bU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x1aU)))));
            tracep->chgBit(oldp+663,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+664,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+665,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+666,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+667,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x1fU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x1eU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                   >> 0x1dU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                  >> 0x1dU))))));
            tracep->chgBit(oldp+668,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                              >> 0x1fU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                                >> 0x1eU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                               >> 0x1dU)))));
            tracep->chgBit(oldp+669,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+670,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+671,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x65U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+672,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U])),3);
            tracep->chgBit(oldp+673,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 2U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 1U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U])) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U])))));
            tracep->chgBit(oldp+674,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 2U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 1U)) 
                                            ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U]))));
            tracep->chgBit(oldp+675,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 2U))));
            tracep->chgBit(oldp+676,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 1U))));
            tracep->chgBit(oldp+677,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U])));
            tracep->chgCData(oldp+678,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+679,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+680,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+681,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+682,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+683,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+684,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+685,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+686,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+687,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+688,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+689,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+690,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+691,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+692,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+693,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+694,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+695,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+696,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+697,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+698,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+699,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+700,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+701,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+702,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+703,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+704,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+705,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+706,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+708,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+709,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+710,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+711,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+712,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+713,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+714,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+715,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+716,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+717,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+718,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+719,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+720,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+721,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+722,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+723,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+724,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+725,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+726,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+727,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+728,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+729,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+730,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+731,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+732,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+733,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+734,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+735,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+736,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+737,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+738,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+739,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+740,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+741,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+742,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+743,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+744,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+745,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+746,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+747,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+748,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+749,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+750,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+751,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+752,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+753,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+754,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+755,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+756,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+757,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+758,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+759,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+760,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+761,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+762,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+763,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+764,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+765,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+766,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+767,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__98__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+768,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U])) 
                                              >> 3U)))),33);
            tracep->chgBit(oldp+770,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+771,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+772,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+773,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+774,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+775,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+776,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+777,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+778,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+779,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+780,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+781,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+782,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+783,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+784,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+785,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+786,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+787,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+788,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+789,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+790,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+791,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+792,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+793,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+794,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+795,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+796,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+797,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+798,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+799,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+800,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+801,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+802,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+803,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+804,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l5_add) 
                                            >> 3U))));
            tracep->chgBit(oldp+805,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+806,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+807,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+808,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+809,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+810,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+811,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+812,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+813,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+814,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 3U))),3);
            tracep->chgBit(oldp+815,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 5U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 4U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 3U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 3U))))));
            tracep->chgBit(oldp+816,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 5U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 4U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 3U)))));
            tracep->chgBit(oldp+817,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 5U))));
            tracep->chgBit(oldp+818,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 4U))));
            tracep->chgBit(oldp+819,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 3U))));
            tracep->chgCData(oldp+820,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 6U))),3);
            tracep->chgBit(oldp+821,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 8U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 7U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 6U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+822,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 8U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 7U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 6U)))));
            tracep->chgBit(oldp+823,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 8U))));
            tracep->chgBit(oldp+824,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 7U))));
            tracep->chgBit(oldp+825,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 6U))));
            tracep->chgCData(oldp+826,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 9U))),3);
            tracep->chgBit(oldp+827,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0xbU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0xaU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 9U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 9U))))));
            tracep->chgBit(oldp+828,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0xbU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0xaU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 9U)))));
            tracep->chgBit(oldp+829,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+830,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+831,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 9U))));
            tracep->chgCData(oldp+832,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+833,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0xeU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0xcU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+834,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0xeU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0xdU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+835,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+836,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+837,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+838,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+839,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x11U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x10U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0xfU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0xfU))))));
            tracep->chgBit(oldp+840,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x11U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x10U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0xfU)))));
            tracep->chgBit(oldp+841,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+842,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+843,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+844,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+845,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x14U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x13U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0x12U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x12U))))));
            tracep->chgBit(oldp+846,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x14U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x13U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+847,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+848,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+849,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+850,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x15U))),3);
            tracep->chgBit(oldp+851,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x17U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x16U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0x15U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x15U))))));
            tracep->chgBit(oldp+852,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x17U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x16U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x15U)))));
            tracep->chgBit(oldp+853,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+854,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+855,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+856,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x18U))),3);
            tracep->chgBit(oldp+857,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x1aU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x19U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0x18U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x18U))))));
            tracep->chgBit(oldp+858,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x1aU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x19U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x18U)))));
            tracep->chgBit(oldp+859,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+860,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+861,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+862,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x1bU))),3);
            tracep->chgBit(oldp+863,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x1dU) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x1cU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0x1bU))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+864,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                              >> 0x1dU) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x1cU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+865,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+866,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+867,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+868,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               << 2U) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x1eU)))),3);
            tracep->chgBit(oldp+869,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x1fU)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                   >> 0x1eU))) 
                                            | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+870,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                                >> 0x1fU)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+871,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U])));
            tracep->chgBit(oldp+872,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+873,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x66U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+874,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+875,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 3U) 
                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 2U)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 2U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 1U))) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 1U))))));
            tracep->chgBit(oldp+876,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                              >> 3U) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 2U)) 
                                            ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 1U)))));
            tracep->chgBit(oldp+877,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                            >> 3U))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                            >> 2U))));
            tracep->chgBit(oldp+879,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                            >> 1U))));
            tracep->chgCData(oldp+880,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+881,((1U & (((6U == 
                                              (6U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                                 >> 1U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                            | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                                >> 2U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+882,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+883,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 2U))));
            tracep->chgBit(oldp+884,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 1U))));
            tracep->chgBit(oldp+885,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+886,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                              >> 3U))),3);
            tracep->chgBit(oldp+887,((1U & (((0x30U 
                                              == (0x30U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+888,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+889,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 5U))));
            tracep->chgBit(oldp+890,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 4U))));
            tracep->chgBit(oldp+891,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 3U))));
            tracep->chgCData(oldp+892,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                              >> 6U))),3);
            tracep->chgBit(oldp+893,((1U & (((0x180U 
                                              == (0x180U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+894,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+895,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 8U))));
            tracep->chgBit(oldp+896,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 7U))));
            tracep->chgBit(oldp+897,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 6U))));
            tracep->chgCData(oldp+898,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                              >> 9U))),3);
            tracep->chgBit(oldp+899,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+900,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+901,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0xbU))));
            tracep->chgBit(oldp+902,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0xaU))));
            tracep->chgBit(oldp+903,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 9U))));
            tracep->chgCData(oldp+904,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+905,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+906,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+907,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0xeU))));
            tracep->chgBit(oldp+908,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0xdU))));
            tracep->chgBit(oldp+909,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0xcU))));
            tracep->chgCData(oldp+910,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+911,((1U & (((0x30000U 
                                              == (0x30000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                             | (0x18000U 
                                                == 
                                                (0x18000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x28000U 
                                               == (0x28000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+912,((1U & VL_REDXOR_32(
                                                        (0x38000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+913,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0x11U))));
            tracep->chgBit(oldp+914,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0x10U))));
            tracep->chgBit(oldp+915,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0xfU))));
            tracep->chgCData(oldp+916,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                              >> 0x12U))),3);
            tracep->chgBit(oldp+917,((1U & (((0x180000U 
                                              == (0x180000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)) 
                                             | (0xc0000U 
                                                == 
                                                (0xc0000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))) 
                                            | (0x140000U 
                                               == (0x140000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+918,((1U & VL_REDXOR_32(
                                                        (0x1c0000U 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+919,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0x14U))));
            tracep->chgBit(oldp+920,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0x13U))));
            tracep->chgBit(oldp+921,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l2_add 
                                            >> 0x12U))));
            tracep->chgCData(oldp+922,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+923,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+924,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+925,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+926,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+927,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+928,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+929,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+930,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+931,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+932,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+933,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+934,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+935,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+936,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+937,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+938,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+939,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 6U))));
            tracep->chgCData(oldp+940,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                              >> 9U))),3);
            tracep->chgBit(oldp+941,((1U & (((0xc00U 
                                              == (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x600U 
                                                == 
                                                (0x600U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0xa00U 
                                               == (0xa00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+942,((1U & VL_REDXOR_32(
                                                        (0xe00U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+943,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+944,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+945,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 9U))));
            tracep->chgCData(oldp+946,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+947,((1U & (((0x6000U 
                                              == (0x6000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))) 
                                             | (0x3000U 
                                                == 
                                                (0x3000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))) 
                                            | (0x5000U 
                                               == (0x5000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+948,((1U & VL_REDXOR_32(
                                                        (0x7000U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+949,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+950,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+951,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l3_add) 
                                            >> 0xcU))));
            tracep->chgCData(oldp+952,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+953,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+954,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+955,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+956,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+957,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+958,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+959,((1U & (((0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))) 
                                             | (0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x28U 
                                               == (0x28U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+960,((1U & VL_REDXOR_32(
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+961,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 5U))));
            tracep->chgBit(oldp+962,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 4U))));
            tracep->chgBit(oldp+963,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 3U))));
            tracep->chgCData(oldp+964,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                              >> 6U))),3);
            tracep->chgBit(oldp+965,((1U & (((0x180U 
                                              == (0x180U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))) 
                                             | (0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add)))) 
                                            | (0x140U 
                                               == (0x140U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+966,((1U & VL_REDXOR_32(
                                                        (0x1c0U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+967,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 8U))));
            tracep->chgBit(oldp+968,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 7U))));
            tracep->chgBit(oldp+969,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__99__KET____DOT__w1__DOT__l4_add) 
                                            >> 6U))));
            tracep->chgQData(oldp+970,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U])) 
                                              >> 4U)))),33);
            tracep->chgBit(oldp+972,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+973,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+974,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+975,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+976,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+977,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+978,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+979,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+980,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+981,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+982,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+983,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+984,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+985,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+986,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+987,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+988,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+989,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+990,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+991,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+992,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+993,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+994,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+995,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+996,((1U & (((6U == 
                                              (6U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                                >> 2U) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+997,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+998,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                            >> 2U))));
            tracep->chgBit(oldp+999,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                            >> 1U))));
            tracep->chgBit(oldp+1000,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1001,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1002,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1003,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1004,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1005,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1006,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1007,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1008,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1009,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1010,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1011,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1012,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1013,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1014,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1015,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1016,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1017,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1018,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1019,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1020,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1021,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1022,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1023,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1024,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1025,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1026,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1027,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1028,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1029,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1030,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1031,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1032,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1033,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1034,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1035,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1036,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1037,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1038,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1039,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1040,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1041,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1042,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1043,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1044,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1045,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1046,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1047,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1048,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1049,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1050,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1051,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1052,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1053,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1054,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1055,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1056,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1057,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1058,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1059,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1060,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1061,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1062,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1063,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1064,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1065,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1066,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1067,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1068,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1069,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1070,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1071,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U]) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1072,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U]) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1073,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1074,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U])));
            tracep->chgBit(oldp+1075,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x67U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1076,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1077,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1078,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1079,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1080,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1081,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1082,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1083,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1084,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1085,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1086,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1087,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1088,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1089,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1090,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1091,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1092,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1093,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1094,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1095,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1096,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1097,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1098,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1099,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1100,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1101,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1102,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1103,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1104,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1105,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1106,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1107,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1108,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1109,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1110,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1111,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1112,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1113,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1114,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1115,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1116,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1117,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1118,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1119,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1120,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1121,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1122,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1123,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1124,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1125,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1126,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1127,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1128,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1129,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1130,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1131,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1132,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1133,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1134,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1135,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1136,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1137,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1138,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1139,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1140,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1141,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1142,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1143,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1144,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1145,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1146,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1147,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1148,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1149,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1150,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1151,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1152,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1153,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1154,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1155,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1156,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1157,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1158,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1159,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1160,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1161,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1162,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1163,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1164,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1165,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1166,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1167,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1168,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1169,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1170,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1171,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__100__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1172,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U])) 
                                               >> 5U)))),33);
            tracep->chgBit(oldp+1174,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1175,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1176,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1177,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1178,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1179,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1180,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1181,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1182,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1183,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1184,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1185,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1186,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1187,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1188,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1189,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1190,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1191,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1192,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1193,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1194,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1195,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1196,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1197,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1198,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1199,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1200,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1201,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1202,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1203,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1204,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1205,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1206,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1207,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1208,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1209,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1210,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1211,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1212,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1213,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1214,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1215,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1216,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1217,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1218,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1219,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1220,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1221,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1222,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1223,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1224,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1225,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1226,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1227,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1228,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1230,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1231,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1232,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1233,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1234,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1235,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1236,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1237,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1238,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1239,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1240,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1241,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1242,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1243,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1244,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1245,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1246,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1247,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1248,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1249,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1250,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1251,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1252,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1253,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1254,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1255,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1256,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1257,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1258,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1259,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1260,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1261,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1262,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1263,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1264,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1265,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1266,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1267,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1268,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1269,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1270,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1271,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x68U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1272,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U])),3);
            tracep->chgBit(oldp+1273,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U])) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U])))));
            tracep->chgBit(oldp+1274,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U]))));
            tracep->chgBit(oldp+1275,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1276,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1277,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U])));
            tracep->chgCData(oldp+1278,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1279,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1280,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1281,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1282,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1283,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 3U))));
            tracep->chgCData(oldp+1284,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1285,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1286,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1287,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1288,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1289,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1290,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1291,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1292,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1293,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1294,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1295,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1296,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1297,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1298,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1299,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1300,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1301,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1302,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1303,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1304,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1305,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1306,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1307,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1308,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1309,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1310,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1311,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1312,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1313,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1314,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1315,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1316,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1317,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1318,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1319,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1320,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1321,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1322,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1323,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1324,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1325,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1326,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1327,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1328,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1329,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1330,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1331,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1332,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1333,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1334,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1335,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1336,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1337,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1338,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1339,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1340,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1341,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1342,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1343,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1344,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1345,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1346,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1347,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1348,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1349,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1350,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1351,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1352,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1353,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1354,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1355,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1356,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1357,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1358,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1359,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1360,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1361,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1362,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1363,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1364,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1365,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1366,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1367,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1368,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1369,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1370,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1371,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1372,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1373,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__101__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1374,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U])) 
                                               >> 6U)))),33);
            tracep->chgBit(oldp+1376,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1377,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1378,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1379,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1380,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1381,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1382,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1383,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1384,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1385,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1386,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1387,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1388,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1389,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1390,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1391,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1392,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1393,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1394,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1395,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1396,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1397,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1398,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1399,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1400,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1401,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1402,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1403,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1404,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1405,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1406,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1407,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1408,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1409,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1410,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1411,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1412,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1413,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1414,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1415,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1416,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1417,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1418,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1419,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1420,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1421,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1422,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1423,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1424,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1425,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1426,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1427,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0xbU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xaU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xaU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 9U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0xbU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1428,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0xbU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0xaU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 9U)))));
            tracep->chgBit(oldp+1429,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1430,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1431,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 9U))));
            tracep->chgCData(oldp+1432,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1433,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0xeU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xdU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0xdU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0xcU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0xeU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1434,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0xeU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0xdU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+1435,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1436,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1437,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1438,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1439,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x11U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x10U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x10U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0xfU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x11U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+1440,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x11U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x10U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+1441,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1442,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1443,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1444,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1445,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x14U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x13U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x13U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0x12U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x14U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+1446,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x14U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x13U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1447,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1448,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1449,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1450,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x15U))),3);
            tracep->chgBit(oldp+1451,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x17U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x16U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x16U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0x15U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x17U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0x15U))))));
            tracep->chgBit(oldp+1452,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x17U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x16U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1453,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1454,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1455,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1456,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x18U))),3);
            tracep->chgBit(oldp+1457,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x1aU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x19U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x19U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0x18U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x1aU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0x18U))))));
            tracep->chgBit(oldp+1458,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x1aU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x19U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1459,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1460,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1461,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1462,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x1bU))),3);
            tracep->chgBit(oldp+1463,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x1dU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x1cU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x1cU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0x1bU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x1dU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+1464,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                               >> 0x1dU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x1cU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1465,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1466,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1467,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1468,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                << 2U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x1eU)))),3);
            tracep->chgBit(oldp+1469,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x1fU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                    >> 0x1eU))) 
                                             | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                   >> 0x1eU))))));
            tracep->chgBit(oldp+1470,((1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                 >> 0x1fU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+1471,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU])));
            tracep->chgBit(oldp+1472,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1473,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x69U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1474,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 1U))),3);
            tracep->chgBit(oldp+1475,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 3U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 2U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 2U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 1U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 3U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1476,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 3U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 2U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1477,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1478,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1479,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 1U))));
            tracep->chgCData(oldp+1480,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 4U))),3);
            tracep->chgBit(oldp+1481,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 6U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 5U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 5U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 4U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 6U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1482,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 6U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 5U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 4U)))));
            tracep->chgBit(oldp+1483,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1484,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1485,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 4U))));
            tracep->chgCData(oldp+1486,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1487,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1488,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1489,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1490,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1491,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1492,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1493,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1494,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1495,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1496,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1497,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1498,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1499,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1500,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1501,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1502,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1503,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1504,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1505,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1506,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1507,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1508,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1509,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1510,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1511,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1512,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1513,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1514,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1515,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1516,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1517,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1518,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1519,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1520,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1521,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1522,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1523,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1524,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1525,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1526,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1527,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1528,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1529,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1530,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1531,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1532,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1533,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1534,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1535,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1536,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1537,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1538,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1539,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1540,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1541,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1542,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1543,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1544,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1545,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1546,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1547,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1548,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1549,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1550,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1551,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1552,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1553,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1554,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1555,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1556,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1557,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1558,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1559,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1560,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1561,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1562,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1563,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1564,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1565,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1566,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1567,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1568,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1569,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1570,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1571,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1572,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1573,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1574,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1575,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__102__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1576,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU])) 
                                               >> 7U)))),33);
            tracep->chgBit(oldp+1578,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1579,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1580,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1581,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1582,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1583,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1584,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1585,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1586,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1587,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1588,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1589,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1590,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1591,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1592,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1593,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1594,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1595,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1596,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1597,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1598,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1599,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1600,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1601,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1602,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1603,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1604,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1605,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1606,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1607,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1608,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1609,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1610,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1611,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1612,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1613,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1614,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1615,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1616,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1617,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1618,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1619,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1620,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1621,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1622,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 7U))),3);
            tracep->chgBit(oldp+1623,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 9U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 8U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 8U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 7U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 9U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1624,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 9U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 8U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 7U)))));
            tracep->chgBit(oldp+1625,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1626,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1627,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 7U))));
            tracep->chgCData(oldp+1628,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0xaU))),3);
            tracep->chgBit(oldp+1629,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0xcU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0xbU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0xbU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0xaU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0xcU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1630,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0xcU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0xbU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1631,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1632,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1633,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1634,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0xdU))),3);
            tracep->chgBit(oldp+1635,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0xfU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0xeU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0xeU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0xdU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0xfU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0xdU))))));
            tracep->chgBit(oldp+1636,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0xfU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0xeU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+1637,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1638,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1639,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1640,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x10U))),3);
            tracep->chgBit(oldp+1641,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x12U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x11U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x11U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x10U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x12U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x10U))))));
            tracep->chgBit(oldp+1642,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x12U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x11U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+1643,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1644,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1645,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1646,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x13U))),3);
            tracep->chgBit(oldp+1647,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x15U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x14U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x14U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x13U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x15U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x13U))))));
            tracep->chgBit(oldp+1648,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x15U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x14U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1649,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1650,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1651,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1652,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x16U))),3);
            tracep->chgBit(oldp+1653,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x18U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x17U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x17U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x16U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x18U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x16U))))));
            tracep->chgBit(oldp+1654,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x18U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x17U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1655,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1656,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1657,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1658,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x19U))),3);
            tracep->chgBit(oldp+1659,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x1bU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x1aU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x1aU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x19U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x1bU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x19U))))));
            tracep->chgBit(oldp+1660,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x1bU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x1aU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1661,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1662,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1663,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1664,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x1cU))),3);
            tracep->chgBit(oldp+1665,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x1eU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x1dU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x1dU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x1cU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x1eU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+1666,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                               >> 0x1eU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                 >> 0x1dU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1667,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1668,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1669,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1670,((7U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                << 1U) 
                                               | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1671,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 1U) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU]) 
                                              | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                    >> 0x1fU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 1U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                   >> 0x1fU))))));
            tracep->chgBit(oldp+1672,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 1U) 
                                              ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU]) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1673,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1674,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU])));
            tracep->chgBit(oldp+1675,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6aU] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1676,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 2U))),3);
            tracep->chgBit(oldp+1677,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 4U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 3U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 3U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 2U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 4U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1678,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 4U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 3U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1679,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1680,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1681,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1682,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 5U))),3);
            tracep->chgBit(oldp+1683,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 7U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 6U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 6U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 5U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 7U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1684,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 7U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 6U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 5U)))));
            tracep->chgBit(oldp+1685,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1686,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 6U))));
            tracep->chgBit(oldp+1687,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 5U))));
            tracep->chgCData(oldp+1688,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1689,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1690,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1691,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1692,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1693,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1694,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1695,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1696,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1697,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1698,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1699,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1700,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1701,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1702,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1703,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1704,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1705,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1706,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1707,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1708,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1709,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1710,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1711,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1712,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1713,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1714,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1715,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1716,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1717,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1718,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1719,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1720,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1721,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1722,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1723,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1724,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1725,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1726,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1727,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1728,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1729,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1730,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1731,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1732,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1733,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1734,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1735,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1736,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1737,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1738,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1739,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1740,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1741,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1742,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1743,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1744,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1745,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1746,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1747,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1748,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1749,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1750,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1751,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1752,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1753,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1754,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1755,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1756,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1757,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1758,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1759,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1760,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1761,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1762,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1763,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1764,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1765,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1766,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1767,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1768,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1769,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1770,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1771,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1772,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1773,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1774,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1775,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1776,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1777,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__103__KET____DOT__w1__DOT__l4_add) 
                                             >> 6U))));
            tracep->chgQData(oldp+1778,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU])) 
                                             << 0x18U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU])) 
                                               >> 8U)))),33);
            tracep->chgBit(oldp+1780,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgBit(oldp+1781,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add))))));
            tracep->chgSData(oldp+1782,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_s),11);
            tracep->chgSData(oldp+1783,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l1_c),11);
            tracep->chgCData(oldp+1784,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_s),7);
            tracep->chgCData(oldp+1785,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_c),7);
            tracep->chgIData(oldp+1786,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add),21);
            tracep->chgCData(oldp+1787,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_s),5);
            tracep->chgCData(oldp+1788,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_c),5);
            tracep->chgSData(oldp+1789,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add),15);
            tracep->chgCData(oldp+1790,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_c),3);
            tracep->chgCData(oldp+1791,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_s),3);
            tracep->chgSData(oldp+1792,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add),9);
            tracep->chgCData(oldp+1793,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_s),2);
            tracep->chgCData(oldp+1794,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_c),2);
            tracep->chgCData(oldp+1795,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add),6);
            tracep->chgBit(oldp+1796,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgBit(oldp+1797,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add))))));
            tracep->chgCData(oldp+1798,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add),3);
            tracep->chgBit(oldp+1799,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgBit(oldp+1800,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add))))));
            tracep->chgCData(oldp+1801,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add),3);
            tracep->chgCData(oldp+1802,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add),3);
            tracep->chgCData(oldp+1803,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))),3);
            tracep->chgBit(oldp+1804,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1805,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1806,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1807,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1808,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))));
            tracep->chgCData(oldp+1809,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1810,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add)))))));
            tracep->chgBit(oldp+1811,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add))))));
            tracep->chgBit(oldp+1812,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1813,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1814,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l5_add) 
                                             >> 3U))));
            tracep->chgBit(oldp+1815,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1816,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1817,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l6_add))));
            tracep->chgBit(oldp+1818,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1819,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1820,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l7_add))));
            tracep->chgBit(oldp+1821,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1822,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1823,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l8_add))));
            tracep->chgCData(oldp+1824,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 8U))),3);
            tracep->chgBit(oldp+1825,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0xaU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 9U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 9U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 8U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0xaU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1826,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0xaU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 9U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 8U)))));
            tracep->chgBit(oldp+1827,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1828,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 9U))));
            tracep->chgBit(oldp+1829,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 8U))));
            tracep->chgCData(oldp+1830,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0xbU))),3);
            tracep->chgBit(oldp+1831,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0xdU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xcU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xcU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0xbU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0xdU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1832,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0xdU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0xcU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+1833,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1834,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1835,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1836,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0xeU))),3);
            tracep->chgBit(oldp+1837,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x10U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xfU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0xfU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0xeU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x10U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1838,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x10U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0xfU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+1839,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1840,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1841,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1842,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1843,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x13U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x12U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x12U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0x11U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x13U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x11U))))));
            tracep->chgBit(oldp+1844,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x13U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x12U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1845,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1846,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1847,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1848,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1849,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x15U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x15U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0x14U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x16U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x14U))))));
            tracep->chgBit(oldp+1850,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x16U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x15U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+1851,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1852,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1853,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1854,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x17U))),3);
            tracep->chgBit(oldp+1855,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x19U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x18U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x18U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0x17U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x19U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x17U))))));
            tracep->chgBit(oldp+1856,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x19U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x18U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1857,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1858,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1859,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1860,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x1aU))),3);
            tracep->chgBit(oldp+1861,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x1cU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x1bU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0x1aU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x1cU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x1aU))))));
            tracep->chgBit(oldp+1862,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x1cU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x1bU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1863,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1864,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1865,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1866,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                         >> 0x1dU)),3);
            tracep->chgBit(oldp+1867,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x1fU) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x1eU)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                  >> 0x1eU) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                    >> 0x1dU))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x1fU) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+1868,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                               >> 0x1fU) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                 >> 0x1eU)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1869,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                       >> 0x1fU)));
            tracep->chgBit(oldp+1870,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1871,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6bU] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1872,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU])),3);
            tracep->chgBit(oldp+1873,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 2U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 1U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU])) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU])))));
            tracep->chgBit(oldp+1874,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 2U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 1U)) 
                                             ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU]))));
            tracep->chgBit(oldp+1875,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 2U))));
            tracep->chgBit(oldp+1876,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1877,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU])));
            tracep->chgCData(oldp+1878,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1879,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 5U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 4U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 4U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                    >> 3U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 5U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1880,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 5U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 4U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1881,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 5U))));
            tracep->chgBit(oldp+1882,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 4U))));
            tracep->chgBit(oldp+1883,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 3U))));
            tracep->chgCData(oldp+1884,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1885,((1U & ((((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 8U) 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 7U)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                  >> 7U) 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                    >> 6U))) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 8U) 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1886,((1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                               >> 8U) 
                                              ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                 >> 7U)) 
                                             ^ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                                >> 6U)))));
            tracep->chgBit(oldp+1887,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 8U))));
            tracep->chgBit(oldp+1888,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 7U))));
            tracep->chgBit(oldp+1889,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__part_add[0x6cU] 
                                             >> 6U))));
            tracep->chgCData(oldp+1890,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)),3);
            tracep->chgBit(oldp+1891,((1U & (((6U == 
                                               (6U 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                              | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                                  >> 1U) 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                             | ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                                 >> 2U) 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1892,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1893,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 2U))));
            tracep->chgBit(oldp+1894,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 1U))));
            tracep->chgBit(oldp+1895,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)));
            tracep->chgCData(oldp+1896,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1897,((1U & (((0x30U 
                                               == (0x30U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1898,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1899,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 5U))));
            tracep->chgBit(oldp+1900,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 4U))));
            tracep->chgBit(oldp+1901,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 3U))));
            tracep->chgCData(oldp+1902,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1903,((1U & (((0x180U 
                                               == (0x180U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1904,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1905,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 8U))));
            tracep->chgBit(oldp+1906,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 7U))));
            tracep->chgBit(oldp+1907,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 6U))));
            tracep->chgCData(oldp+1908,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1909,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1910,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1911,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1912,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1913,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 9U))));
            tracep->chgCData(oldp+1914,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1915,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1916,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1917,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1918,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1919,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1920,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                               >> 0xfU))),3);
            tracep->chgBit(oldp+1921,((1U & (((0x30000U 
                                               == (0x30000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                              | (0x18000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1922,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1923,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1924,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1925,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1926,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                               >> 0x12U))),3);
            tracep->chgBit(oldp+1927,((1U & (((0x180000U 
                                               == (0x180000U 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)) 
                                              | (0xc0000U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add))))));
            tracep->chgBit(oldp+1928,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add)))));
            tracep->chgBit(oldp+1929,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1930,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1931,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l2_add 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1932,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))),3);
            tracep->chgBit(oldp+1933,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1934,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1935,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1936,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1937,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))));
            tracep->chgCData(oldp+1938,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1939,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1940,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1941,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1942,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 4U))));
            tracep->chgBit(oldp+1943,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 3U))));
            tracep->chgCData(oldp+1944,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1945,((1U & (((0x180U 
                                               == (0x180U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))) 
                                              | (0xc0U 
                                                 == 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1946,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1947,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 8U))));
            tracep->chgBit(oldp+1948,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 7U))));
            tracep->chgBit(oldp+1949,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 6U))));
            tracep->chgCData(oldp+1950,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1951,((1U & (((0xc00U 
                                               == (0xc00U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x600U 
                                                 == 
                                                 (0x600U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1952,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1953,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1954,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1955,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 9U))));
            tracep->chgCData(oldp+1956,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                               >> 0xcU))),3);
            tracep->chgBit(oldp+1957,((1U & (((0x6000U 
                                               == (0x6000U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))) 
                                              | (0x3000U 
                                                 == 
                                                 (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add)))))));
            tracep->chgBit(oldp+1958,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add))))));
            tracep->chgBit(oldp+1959,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1960,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1961,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l3_add) 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1962,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))),3);
            tracep->chgBit(oldp+1963,((1U & (((6U == 
                                               (6U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1964,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1965,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                             >> 2U))));
            tracep->chgBit(oldp+1966,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                             >> 1U))));
            tracep->chgBit(oldp+1967,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))));
            tracep->chgCData(oldp+1968,((7U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1969,((1U & (((0x30U 
                                               == (0x30U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))) 
                                              | (0x18U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add)))))));
            tracep->chgBit(oldp+1970,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add))))));
            tracep->chgBit(oldp+1971,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                             >> 5U))));
            tracep->chgBit(oldp+1972,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_walloc0__DOT__walloc2__DOT__walloc_array__BRA__104__KET____DOT__w1__DOT__l4_add) 
                                             >> 4U))));
        }
    }
}
