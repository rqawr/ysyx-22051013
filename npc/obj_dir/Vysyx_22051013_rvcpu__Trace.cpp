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
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr),5);
            tracep->chgBit(oldp+1,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+2,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))));
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2),64);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel),7);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata),64);
            tracep->chgQData(oldp+12,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                        ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                           + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                        : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                            : 0ULL))),64);
            tracep->chgBit(oldp+14,((((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)) 
                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal))));
            tracep->chgIData(oldp+15,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm),20);
            tracep->chgBit(oldp+16,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi));
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[1]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[2]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[3]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[4]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[5]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[6]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[7]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[8]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[9]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[10]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[11]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[12]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[13]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[14]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[15]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[16]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[17]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[18]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[19]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[20]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[21]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[22]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[23]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[24]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[25]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[26]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[27]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[28]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[29]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[30]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[31]),64);
            tracep->chgIData(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i),32);
        }
        tracep->chgBit(oldp+86,(vlSelf->clk));
        tracep->chgBit(oldp+87,(vlSelf->rst));
        tracep->chgQData(oldp+88,(vlSelf->inst_pc),64);
        tracep->chgIData(oldp+90,(vlSelf->inst),32);
        tracep->chgQData(oldp+91,((((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                   [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                      ? (0x1fU & (vlSelf->inst 
                                                  >> 0xfU))
                                      : 0U)] : 0ULL)),64);
        tracep->chgCData(oldp+93,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                    ? (0x1fU & (vlSelf->inst 
                                                >> 0xfU))
                                    : 0U)),5);
        tracep->chgBit(oldp+94,((0U != (0x1fU & (vlSelf->inst 
                                                 >> 7U)))));
        tracep->chgQData(oldp+95,(((IData)(vlSelf->rst)
                                    ? 0x80000000ULL
                                    : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))
                                        ? ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                            : ((0x10U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                : 0ULL))
                                        : ((IData)(vlSelf->rst)
                                            ? 0x80000000ULL
                                            : (4ULL 
                                               + vlSelf->inst_pc))))),64);
        tracep->chgQData(oldp+97,(((IData)(vlSelf->rst)
                                    ? 0x80000000ULL
                                    : (4ULL + vlSelf->inst_pc))),64);
        tracep->chgCData(oldp+99,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+100,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+101,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgQData(oldp+102,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi) 
                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))
                                     ? (((- (QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x14U))))
                                     : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xff000000U 
                                                               & (vlSelf->inst 
                                                                  << 0xcU)))))
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal)
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm 
                                                                        >> 0x13U))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm 
                                                                      << 1U)))))
                                             : 0ULL)))),64);
        tracep->chgCData(oldp+104,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+105,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgSData(oldp+106,((vlSelf->inst >> 0x14U)),12);
        tracep->chgIData(oldp+107,((vlSelf->inst >> 0xcU)),20);
        tracep->chgBit(oldp+108,((IData)(((0U == (1U 
                                                  & (IData)(vlSelf->rst))) 
                                          & (0x3023U 
                                             == (0x707fU 
                                                 & vlSelf->inst))))));
        tracep->chgBit(oldp+109,(((IData)(((0U == (1U 
                                                   & (IData)(vlSelf->rst))) 
                                           & (0x73U 
                                              == (0x707fU 
                                                  & vlSelf->inst)))) 
                                  & (1U == (vlSelf->inst 
                                            >> 0x14U)))));
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
