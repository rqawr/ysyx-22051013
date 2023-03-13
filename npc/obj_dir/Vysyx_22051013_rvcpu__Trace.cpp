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
            tracep->chgIData(oldp+0,((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)),32);
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst),64);
            tracep->chgCData(oldp+5,((0x1fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                       >> 7U)))),5);
            tracep->chgCData(oldp+6,((0x1fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                       >> 0xfU)))),5);
            tracep->chgCData(oldp+7,((0x1fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                       >> 0x14U)))),5);
            tracep->chgCData(oldp+8,((0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))),7);
            tracep->chgCData(oldp+9,((7U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                    >> 0xcU)))),3);
            tracep->chgCData(oldp+10,((0x7fU & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                        >> 0x19U)))),7);
            tracep->chgSData(oldp+11,((0xfffU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                         >> 0x14U)))),12);
            tracep->chgIData(oldp+12,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm),20);
            tracep->chgIData(oldp+13,((0xfffffU & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                           >> 0xcU)))),20);
            tracep->chgSData(oldp+14,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__s_imm),12);
            tracep->chgSData(oldp+15,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__b_imm),12);
            tracep->chgBit(oldp+16,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+23,((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                                       << 2U)),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mepc),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mcause),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[1]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[2]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[3]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[4]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[5]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[6]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[7]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[8]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[9]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[10]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[11]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[12]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[13]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[14]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[15]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[16]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[17]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[18]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[19]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[20]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[21]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[22]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[23]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[24]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[25]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[26]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[27]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[28]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[29]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[30]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[31]),64);
            tracep->chgIData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgCData(oldp+94,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                        ? ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? 0x11U
                                            : (0x1fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                          >> 0xfU))))
                                        : 0U)),5);
            tracep->chgCData(oldp+95,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                        ? (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                            >> 0x14U)))
                                        : 0U)),5);
            tracep->chgBit(oldp+96,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                   & (0ULL 
                                                      == 
                                                      (0x7000ULL 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+97,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                   & (0x2000ULL 
                                                      == 
                                                      (0x7000ULL 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+98,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                   & (0x3000ULL 
                                                      == 
                                                      (0x7000ULL 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+99,((1U & (IData)((
                                                   (0x10U 
                                                    == 
                                                    (0x10U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                   & (0x4000ULL 
                                                      == 
                                                      (0x7000ULL 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+100,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                    & (0x6000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+101,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                    & (0x7000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+102,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000ULL 
                                                       == 
                                                       (0x7000ULL 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+103,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                    & (0x5000ULL 
                                                       == 
                                                       (0x40007000ULL 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
            tracep->chgBit(oldp+104,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                                >> 1U)) 
                                            & ((1U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))))));
            tracep->chgBit(oldp+105,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                                | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)))))));
            tracep->chgCData(oldp+106,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                         ? 3U : ((1U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data 
                                                                 >> 0xdU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr),5);
            tracep->chgBit(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_ena));
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm),64);
            tracep->chgBit(oldp+113,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_jump));
            tracep->chgCData(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl),4);
            tracep->chgCData(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl),2);
            tracep->chgCData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel),8);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2),64);
            tracep->chgCData(oldp+124,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl),4);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata),64);
            tracep->chgQData(oldp+127,(((1U & ((0x21U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                               | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                                  >> 2U)))
                                         ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                            + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                         : ((0x42U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                             ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                             : ((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))))
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data
                                                 : 0ULL)))),64);
            tracep->chgBit(oldp+129,((1U & ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_jump) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                                  >> 2U) 
                                                 & ((0xeU 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                     ? 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                     == vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                      ? 
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                      != vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                      : 
                                                     ((0xe0U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                       ? 
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                       < vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                        >= vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                        : 
                                                       ((0x38U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2)
                                                         : 
                                                        ((0x70U 
                                                          == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                                         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2)))))))))) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl)))));
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next),64);
            tracep->chgBit(oldp+132,((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb7U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)))));
            tracep->chgBit(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__csr_wr_ena));
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__csr_rd_ena));
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__mret_ena));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__ecall_ena));
            tracep->chgCData(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+147,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+164,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+165,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+189,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+190,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+191,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+192,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+194,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+197,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+198,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+199,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+200,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+201,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrc))));
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+208,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2)))),64);
            tracep->chgBit(oldp+210,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2));
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2),64);
            tracep->chgIData(oldp+213,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw),32);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2),64);
            tracep->chgIData(oldp+216,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw),32);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2),64);
            tracep->chgIData(oldp+219,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw),32);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2),64);
            tracep->chgWData(oldp+222,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul),128);
            tracep->chgQData(oldp+226,((((QData)((IData)(
                                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+228,((((QData)((IData)(
                                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[2U])))),64);
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U] 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div),64);
            tracep->chgIData(oldp+234,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw),32);
            tracep->chgQData(oldp+235,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw)))),64);
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div)))),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem),64);
            tracep->chgIData(oldp+241,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw),32);
            tracep->chgQData(oldp+242,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw)))),64);
            tracep->chgQData(oldp+244,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem)))),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__alu_res),64);
            tracep->chgBit(oldp+248,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                       >> 2U) & ((0xeU 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                  ? 
                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                  == vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                   ? 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   != vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                    < vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                     ? 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                     >= vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                     : 
                                                    ((0x38U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2)
                                                      : 
                                                     ((0x70U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2)))))))))));
            tracep->chgSData(oldp+249,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr),12);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mcause_value),64);
            tracep->chgQData(oldp+256,((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data 
                                        | vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1)),64);
            tracep->chgQData(oldp+258,((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1))),64);
            tracep->chgBit(oldp+260,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+261,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+262,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+263,((1U & (((0x305U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                                >> 2U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgBit(oldp+264,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                         >> 3U))));
            tracep->chgBit(oldp+265,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                                >> 2U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl)))));
            tracep->chgBit(oldp+266,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                                >> 3U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgBit(oldp+267,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+268,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                         >> 3U))));
            tracep->chgBit(oldp+269,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re));
            tracep->chgCData(oldp+270,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))),3);
            tracep->chgCData(oldp+271,((3U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+272,((1U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                    >> 2U)))));
            tracep->chgCData(oldp+273,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte),8);
            tracep->chgSData(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half),16);
            tracep->chgIData(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word),32);
            tracep->chgCData(oldp+276,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__sb_mask),8);
        }
        tracep->chgBit(oldp+277,(vlSelf->clk));
        tracep->chgBit(oldp+278,(vlSelf->rst));
        tracep->chgQData(oldp+279,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re)
                                     ? ((IData)(vlSelf->rst)
                                         ? 0ULL : (
                                                   (8U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                       ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word))
                                                       : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                       ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte))
                                                       : vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word)))
                                                       : 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half) 
                                                                               >> 0xfU))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte) 
                                                                               >> 7U))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte)))
                                                       : 0ULL)))
                                                    : 0ULL))
                                     : 0ULL)),64);
        tracep->chgQData(oldp+281,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl))
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re)
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                         ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word))
                                                         : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                         ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte))
                                                         : vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word)))
                                                         : 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half) 
                                                                                >> 0xfU))))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte) 
                                                                                >> 7U))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte)))
                                                         : 0ULL)))
                                                      : 0ULL))
                                                    : 0ULL)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl))
                                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata
                                                    : 0ULL)))),64);
        tracep->chgQData(oldp+283,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                    [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                       ? ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                           ? 0x11U : 
                                          (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                            >> 0xfU))))
                                       : 0U)] : 0ULL)),64);
        tracep->chgQData(oldp+285,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                    [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                       ? (0x1fU & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                           >> 0x14U)))
                                       : 0U)] : 0ULL)),64);
        tracep->chgQData(oldp+287,(((IData)(vlSelf->rst)
                                     ? 0x80000000ULL
                                     : (4ULL + vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc))),64);
        tracep->chgQData(oldp+289,(((IData)(vlSelf->rst)
                                     ? 0ULL : (0xfffffffffffffff8ULL 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))),64);
        tracep->chgQData(oldp+291,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata)),64);
        tracep->chgCData(oldp+293,(((IData)(vlSelf->rst)
                                     ? 0U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                    ? 0xffU
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                                 >> 2U)))
                                                      ? 0xf0U
                                                      : 0xfU))))
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                                  >> 1U))))
                                                      ? 3U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                                   >> 1U))))
                                                       ? 0xcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                                    >> 1U))))
                                                        ? 0x30U
                                                        : 0xc0U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__sb_mask)
                                                    : 0U)))))),8);
        tracep->chgQData(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i),64);
        tracep->chgQData(oldp+296,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((8U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                ? 0ULL
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                     ? 0ULL
                                                     : vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? 0ULL
                                                      : vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2
                                                      : 0ULL)))))),64);
        tracep->chgBit(oldp+298,((1U & ((~ ((IData)(vlSelf->rst) 
                                            | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl)))) 
                                        & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl) 
                                              >> 3U))))));
        tracep->chgQData(oldp+299,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((8U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word))
                                                      : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte))
                                                      : vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word)))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half) 
                                                                              >> 0xfU))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte) 
                                                                              >> 7U))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte)))
                                                      : 0ULL)))
                                                : 0ULL))),64);
        tracep->chgCData(oldp+301,(((IData)(vlSelf->rst)
                                     ? 0U : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 1U))))
                                              ? 3U : 
                                             ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                           >> 1U))))
                                               ? 0xcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                               >> 1U))))
                                                   ? 0x30U
                                                   : 0xc0U))))),8);
        tracep->chgCData(oldp+302,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
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
