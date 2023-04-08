// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceChgSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22051013_rvcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22051013_rvcpu___024root* const __restrict vlSelf = static_cast<Vysyx_22051013_rvcpu___024root*>(voidSelf);
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22051013_rvcpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22051013_rvcpu___024root__traceChgSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst),32);
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc),64);
            tracep->chgIData(oldp+3,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
            tracep->chgCData(oldp+6,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_addr),5);
            tracep->chgBit(oldp+7,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
            tracep->chgIData(oldp+8,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
            tracep->chgCData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl),4);
            tracep->chgCData(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
            tracep->chgBit(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
            tracep->chgIData(oldp+24,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
            tracep->chgIData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
            tracep->chgBit(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
            tracep->chgSData(oldp+45,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
            tracep->chgSData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
            tracep->chgCData(oldp+48,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst)),7);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst),64);
            tracep->chgCData(oldp+51,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+52,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+53,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+54,(((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_addr)) 
                                     & ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_addr) 
                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_addr) 
                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr))) 
                                        | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_addr) 
                                           == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr))))));
            tracep->chgCData(oldp+55,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
            tracep->chgCData(oldp+56,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+57,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 0x19U)),7);
            tracep->chgSData(oldp+58,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
            tracep->chgIData(oldp+60,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 0xcU)),20);
            tracep->chgSData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
            tracep->chgSData(oldp+62,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+69,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
            tracep->chgBit(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
            tracep->chgIData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
            tracep->chgIData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
            tracep->chgWData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul),128);
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+89,((((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[2U])))),64);
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div),64);
            tracep->chgIData(oldp+95,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw),32);
            tracep->chgQData(oldp+96,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw)))),64);
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)))),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem),64);
            tracep->chgIData(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw),32);
            tracep->chgQData(oldp+103,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw)))),64);
            tracep->chgQData(oldp+105,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem)))),64);
            tracep->chgSData(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr),12);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value),64);
            tracep->chgQData(oldp+114,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                        | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+116,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+118,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+122,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+126,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 1U)) 
                                            & ((1U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))))));
            tracep->chgBit(oldp+127,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))))));
            tracep->chgCData(oldp+128,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
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
            tracep->chgBit(oldp+129,((1U & (((0x305U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 2U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgBit(oldp+130,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+133,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+135,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 2U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))));
            tracep->chgBit(oldp+136,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 3U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgQData(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc),64);
            tracep->chgBit(oldp+139,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+140,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause),64);
            tracep->chgCData(oldp+143,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
            tracep->chgCData(oldp+144,((3U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+145,((1U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                    >> 2U)))));
            tracep->chgBit(oldp+146,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
            tracep->chgIData(oldp+211,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+212,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
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
            tracep->chgCData(oldp+214,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgBit(oldp+215,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                           | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+216,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+217,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+218,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                           | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+219,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+220,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+221,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+222,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+223,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+224,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+225,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+226,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr),5);
            tracep->chgBit(oldp+230,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr));
            tracep->chgCData(oldp+231,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
            tracep->chgCData(oldp+232,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
            tracep->chgBit(oldp+233,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+234,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+235,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
            tracep->chgBit(oldp+236,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 1U))));
            tracep->chgBit(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__id_h_stall_ena));
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
            tracep->chgBit(oldp+244,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
            tracep->chgCData(oldp+245,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
            tracep->chgCData(oldp+246,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
            tracep->chgCData(oldp+247,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena))))),4);
            tracep->chgCData(oldp+248,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
            tracep->chgBit(oldp+251,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel));
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
            tracep->chgQData(oldp+254,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__re)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                         : 0ULL)),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__hzd_ctl10__DOT__stall_sum) 
                                            >> 3U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__hzd_ctl10__DOT__stall_sum) 
                                            >> 2U))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__hzd_ctl10__DOT__stall_sum) 
                                            >> 1U))));
            tracep->chgBit(oldp+261,((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__hzd_ctl10__DOT__stall_sum))));
            tracep->chgBit(oldp+262,(vlSelf->ysyx_22051013_rvcpu__DOT__h_ifid_flush));
            tracep->chgBit(oldp+263,(vlSelf->ysyx_22051013_rvcpu__DOT__h_idex_flush));
            tracep->chgBit(oldp+264,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next),64);
            tracep->chgBit(oldp+267,((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb3U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+269,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
            tracep->chgBit(oldp+273,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena));
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena));
            tracep->chgBit(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena));
            tracep->chgBit(oldp+276,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena));
            tracep->chgCData(oldp+277,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+280,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+281,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+282,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+283,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+285,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+286,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+287,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+288,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+291,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+292,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+295,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+296,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+297,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+299,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+302,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+303,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+305,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+306,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+307,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+308,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+309,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+310,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+311,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+312,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+313,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+314,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+315,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+316,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+317,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+318,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+319,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+320,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+321,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+322,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+323,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+324,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+325,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+326,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+327,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+328,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+329,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+330,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+331,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+332,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+333,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+334,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+335,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+336,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+337,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+338,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+339,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+340,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+341,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+342,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))));
            tracep->chgQData(oldp+343,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_o),64);
            tracep->chgBit(oldp+347,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__re));
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
            tracep->chgCData(oldp+350,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
            tracep->chgSData(oldp+351,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
            tracep->chgCData(oldp+352,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__sb_mask),8);
            tracep->chgCData(oldp+353,(vlSelf->ysyx_22051013_rvcpu__DOT__hzd_ctl10__DOT__stall_sum),4);
        }
        tracep->chgBit(oldp+354,(vlSelf->clk));
        tracep->chgBit(oldp+355,(vlSelf->rst));
        tracep->chgBit(oldp+356,(((~ (IData)(vlSelf->rst)) 
                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                        >> 0xbU)))));
        tracep->chgQData(oldp+357,(((IData)(vlSelf->rst)
                                     ? 0ULL : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr)
                                                 ? 
                                                (((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr))
                                                  ? 
                                                 (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena) 
                                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr) 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)))
                                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                   : 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                  [vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr])
                                                  : 0ULL)
                                                 : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc) 
                                               + (((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst))))
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
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst 
                                                                        >> 0x14U))))
                                                     : 
                                                    ((IData)(vlSelf->rst)
                                                      ? 0ULL
                                                      : 4ULL))))))),64);
        tracep->chgBit(oldp+359,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena)) 
                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena)))));
        tracep->chgIData(oldp+360,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->chgQData(oldp+361,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->chgBit(oldp+363,(((~ (IData)(vlSelf->rst)) 
                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel))));
        tracep->chgQData(oldp+364,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)),64);
        tracep->chgQData(oldp+366,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                     : 0ULL)),64);
        tracep->chgQData(oldp+368,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                     : 0ULL)),64);
        tracep->chgQData(oldp+370,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr))
                                     ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena) 
                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr) 
                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                        [vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr])
                                     : 0ULL)),64);
        tracep->chgBit(oldp+372,(((IData)(vlSelf->rst)
                                   ? 0U : (IData)((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst))))));
        tracep->chgQData(oldp+373,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr)
                                     ? (((~ (IData)(vlSelf->rst)) 
                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr))
                                         ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr) 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                            [vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr])
                                         : 0ULL) : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)),64);
        tracep->chgQData(oldp+375,((((IData)(vlSelf->rst)
                                      ? 0U : (IData)(
                                                     (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst))))
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
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr)
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst 
                                                                   >> 0x14U))))
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : 4ULL))))),64);
        tracep->chgQData(oldp+377,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr)
                                      ? (((~ (IData)(vlSelf->rst)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr))
                                          ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr) 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr)))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                              : vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                             [vlSelf->ysyx_22051013_rvcpu__DOT__bpu_reg_addr])
                                          : 0ULL) : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc) 
                                    + (((IData)(vlSelf->rst)
                                         ? 0U : (IData)(
                                                        (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst))))
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
                                            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_jalr)
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_inst 
                                                                      >> 0x14U))))
                                                : ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 4ULL)))))),64);
        tracep->chgBit(oldp+379,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+380,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgQData(oldp+381,(((IData)(vlSelf->rst)
                                     ? 0ULL : (0xfffffffffffffff8ULL 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->chgQData(oldp+383,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->chgCData(oldp+385,(((IData)(vlSelf->rst)
                                     ? 0U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                               ? ((2U 
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
                                               : ((2U 
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
                                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__sb_mask)
                                                    : 0U)))))),8);
        tracep->chgQData(oldp+386,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
        tracep->chgBit(oldp+388,((1U & ((~ ((IData)(vlSelf->rst) 
                                            | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                                        & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                                              >> 3U))))));
        tracep->chgIData(oldp+389,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
        tracep->chgCData(oldp+390,(((IData)(vlSelf->rst)
                                     ? 0U : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 1U))))
                                              ? 3U : 
                                             ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                           >> 1U))))
                                               ? 0xcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                               >> 1U))))
                                                   ? 0x30U
                                                   : 0xc0U))))),8);
        tracep->chgCData(oldp+391,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
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
