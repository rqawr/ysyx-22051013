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
            tracep->chgBit(oldp+0,((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc),64);
            tracep->chgBit(oldp+5,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))));
            tracep->chgQData(oldp+6,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__dpic_inst_i
                                       : 0ULL)),64);
            tracep->chgBit(oldp+8,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))));
            tracep->chgIData(oldp+9,((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst)),32);
            tracep->chgIData(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
            tracep->chgBit(oldp+13,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
            tracep->chgIData(oldp+14,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
            tracep->chgBit(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
            tracep->chgCData(oldp+24,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl),4);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
            tracep->chgIData(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
            tracep->chgIData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
            tracep->chgCData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state),2);
            tracep->chgCData(oldp+52,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                        ? ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                            ? 2U : 1U)
                                        : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                            ? ((2U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                                ? 1U
                                                : 2U)
                                            : 1U))),2);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__dpic_inst_i),64);
            tracep->chgIData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
            tracep->chgSData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
            tracep->chgCData(oldp+57,((0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst))),7);
            tracep->chgBit(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__jump_sign));
            tracep->chgCData(oldp+59,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+60,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+61,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+62,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
            tracep->chgCData(oldp+63,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+64,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 0x19U)),7);
            tracep->chgSData(oldp+65,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
            tracep->chgIData(oldp+67,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 0xcU)),20);
            tracep->chgSData(oldp+68,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
            tracep->chgSData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
            tracep->chgIData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
            tracep->chgWData(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul),128);
            tracep->chgQData(oldp+94,((((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+96,((((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[2U])))),64);
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div),64);
            tracep->chgIData(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw),32);
            tracep->chgQData(oldp+103,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw)))),64);
            tracep->chgQData(oldp+105,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)))),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem),64);
            tracep->chgIData(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw),32);
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw)))),64);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem)))),64);
            tracep->chgSData(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr),12);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value),64);
            tracep->chgQData(oldp+121,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                        | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+123,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+125,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+126,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+128,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+129,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgBit(oldp+132,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+133,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 1U)) 
                                            & ((1U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))))));
            tracep->chgBit(oldp+134,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))))));
            tracep->chgCData(oldp+135,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
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
            tracep->chgBit(oldp+136,((1U & (((0x305U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 2U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgBit(oldp+137,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+140,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+142,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 2U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))));
            tracep->chgBit(oldp+143,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 3U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc),64);
            tracep->chgBit(oldp+146,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+147,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause),64);
            tracep->chgCData(oldp+150,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
            tracep->chgCData(oldp+151,((3U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+152,((1U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                    >> 2U)))));
            tracep->chgBit(oldp+153,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
            tracep->chgIData(oldp+218,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+219,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
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
            tracep->chgCData(oldp+221,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgBit(oldp+222,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                           | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+223,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+224,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+225,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                           | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+226,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+227,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+229,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+230,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+231,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+232,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+233,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+234,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+235,((1U & (IData)(
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
            tracep->chgCData(oldp+236,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
            tracep->chgCData(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
            tracep->chgBit(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+239,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+240,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
            tracep->chgBit(oldp+241,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 1U))));
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
            tracep->chgBit(oldp+248,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
            tracep->chgCData(oldp+249,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
            tracep->chgCData(oldp+250,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
            tracep->chgCData(oldp+251,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena))))),4);
            tracep->chgCData(oldp+252,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
            tracep->chgBit(oldp+255,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel));
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
            tracep->chgQData(oldp+258,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__re)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                         : 0ULL)),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
            tracep->chgBit(oldp+262,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
            tracep->chgBit(oldp+263,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
            tracep->chgBit(oldp+264,((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb3U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+266,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+269,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
            tracep->chgBit(oldp+270,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena));
            tracep->chgBit(oldp+271,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena));
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena));
            tracep->chgBit(oldp+273,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena));
            tracep->chgCData(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+276,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+277,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+280,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+281,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+282,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+283,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+285,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+286,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+287,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+288,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+291,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+292,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+295,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+296,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+297,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+299,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+302,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+303,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+305,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+306,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+307,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+308,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+309,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+310,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+311,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+312,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+313,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+314,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+315,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+316,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+317,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+318,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+319,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+320,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+321,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+322,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+323,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+324,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+325,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+326,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+327,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+328,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+329,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+330,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+331,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+332,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+333,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+334,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+335,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+336,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+337,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+338,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+339,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))));
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_o),64);
            tracep->chgBit(oldp+344,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__re));
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
            tracep->chgCData(oldp+347,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
            tracep->chgSData(oldp+348,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
            tracep->chgCData(oldp+349,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__sb_mask),8);
        }
        tracep->chgBit(oldp+350,(vlSelf->clk));
        tracep->chgBit(oldp+351,(vlSelf->rst));
        tracep->chgBit(oldp+352,(((~ (IData)(vlSelf->rst)) 
                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                        >> 0xbU)))));
        tracep->chgQData(oldp+353,(((IData)(vlSelf->rst)
                                     ? 0ULL : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                               + (((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (0x6fULL 
                                                               == 
                                                               (0x7fULL 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst))))
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
        tracep->chgIData(oldp+355,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->chgQData(oldp+356,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->chgQData(oldp+358,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)),64);
        tracep->chgQData(oldp+360,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                     : 0ULL)),64);
        tracep->chgQData(oldp+362,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                     : 0ULL)),64);
        tracep->chgBit(oldp+364,(((IData)(vlSelf->rst)
                                   ? 0U : (IData)((0x6fULL 
                                                   == 
                                                   (0x7fULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst))))));
        tracep->chgQData(oldp+365,((((IData)(vlSelf->rst)
                                      ? 0U : (IData)(
                                                     (0x6fULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst))))
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
        tracep->chgQData(oldp+367,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    + (((IData)(vlSelf->rst)
                                         ? 0U : (IData)(
                                                        (0x6fULL 
                                                         == 
                                                         (0x7fULL 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst))))
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
        tracep->chgBit(oldp+369,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+370,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgQData(oldp+371,(((IData)(vlSelf->rst)
                                     ? 0ULL : (0xfffffffffffffff8ULL 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->chgQData(oldp+373,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->chgCData(oldp+375,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+376,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
        tracep->chgBit(oldp+378,((1U & ((~ ((IData)(vlSelf->rst) 
                                            | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                                        & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                                              >> 3U))))));
        tracep->chgIData(oldp+379,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
        tracep->chgCData(oldp+380,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+381,(((IData)(vlSelf->rst)
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
