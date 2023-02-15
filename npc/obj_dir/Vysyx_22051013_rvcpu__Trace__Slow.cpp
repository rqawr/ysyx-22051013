// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceInitSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22051013_rvcpu___024root__traceInitTop(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22051013_rvcpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22051013_rvcpu___024root__traceInitSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+87,"clk", false,-1);
        tracep->declBit(c+88,"rst", false,-1);
        tracep->declQuad(c+89,"inst_pc", false,-1, 63,0);
        tracep->declBus(c+91,"inst", false,-1, 31,0);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declQuad(c+89,"ysyx_22051013_rvcpu inst_pc", false,-1, 63,0);
        tracep->declBus(c+91,"ysyx_22051013_rvcpu inst", false,-1, 31,0);
        tracep->declQuad(c+92,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+113,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu id_reg_rd_addr", false,-1, 4,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu id_reg_rd_ena", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu id_ex_jump", false,-1);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22051013_rvcpu id_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22051013_rvcpu id_ex_op2", false,-1, 63,0);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu id_ex_alu_sel", false,-1, 6,0);
        tracep->declQuad(c+11,"ysyx_22051013_rvcpu ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu ex_if_pc", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu ex_if_pc_sel", false,-1);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu ifu0 clk", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu ifu0 rst", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu ifu0 pcsrc_i", false,-1);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu ifu0 ex_pc_i", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22051013_rvcpu ifu0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu ifu0 pc_next", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22051013_rvcpu ifu0 pc_plus4", false,-1, 63,0);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu idu1 rst", false,-1);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu idu1 clk", false,-1);
        tracep->declBus(c+91,"ysyx_22051013_rvcpu idu1 inst_i", false,-1, 31,0);
        tracep->declQuad(c+89,"ysyx_22051013_rvcpu idu1 pc_i", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_22051013_rvcpu idu1 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu idu1 rs1_ena", false,-1);
        tracep->declQuad(c+92,"ysyx_22051013_rvcpu idu1 rs1_data", false,-1, 63,0);
        tracep->declBus(c+113,"ysyx_22051013_rvcpu idu1 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu idu1 rs2_ena", false,-1);
        tracep->declQuad(c+111,"ysyx_22051013_rvcpu idu1 rs2_data", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu idu1 rd_ena", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu idu1 rd_addr", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu idu1 alusrc_o", false,-1, 6,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu idu1 jump_o", false,-1);
        tracep->declQuad(c+6,"ysyx_22051013_rvcpu idu1 op1", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22051013_rvcpu idu1 op2", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu idu1 pc_o", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_22051013_rvcpu idu1 rd", false,-1, 4,0);
        tracep->declBus(c+101,"ysyx_22051013_rvcpu idu1 rs1", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22051013_rvcpu idu1 rs2", false,-1, 4,0);
        tracep->declQuad(c+103,"ysyx_22051013_rvcpu idu1 imm", false,-1, 63,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu idu1 imm_ena", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu idu1 decode rst", false,-1);
        tracep->declBus(c+91,"ysyx_22051013_rvcpu idu1 decode inst", false,-1, 31,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu idu1 decode rs1_ena", false,-1);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu idu1 decode rs2_ena", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu idu1 decode jump", false,-1);
        tracep->declQuad(c+103,"ysyx_22051013_rvcpu idu1 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu idu1 decode imm_ena", false,-1);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu idu1 decode alu_ctl", false,-1, 6,0);
        tracep->declBus(c+105,"ysyx_22051013_rvcpu idu1 decode opcode", false,-1, 6,0);
        tracep->declBus(c+106,"ysyx_22051013_rvcpu idu1 decode funct3", false,-1, 2,0);
        tracep->declBus(c+107,"ysyx_22051013_rvcpu idu1 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+16,"ysyx_22051013_rvcpu idu1 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+108,"ysyx_22051013_rvcpu idu1 decode u_imm", false,-1, 19,0);
        tracep->declBit(c+17,"ysyx_22051013_rvcpu idu1 decode inst_addi", false,-1);
        tracep->declBit(c+18,"ysyx_22051013_rvcpu idu1 decode inst_auipc", false,-1);
        tracep->declBit(c+19,"ysyx_22051013_rvcpu idu1 decode inst_lui", false,-1);
        tracep->declBit(c+20,"ysyx_22051013_rvcpu idu1 decode inst_jal", false,-1);
        tracep->declBit(c+21,"ysyx_22051013_rvcpu idu1 decode inst_jalr", false,-1);
        tracep->declBit(c+109,"ysyx_22051013_rvcpu idu1 decode inst_sd", false,-1);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu idu1 decode inst_ebreak", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu exu2 rst", false,-1);
        tracep->declQuad(c+6,"ysyx_22051013_rvcpu exu2 op1", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22051013_rvcpu exu2 op2", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu exu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu exu2 jump_i", false,-1);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu exu2 alu_sel", false,-1, 6,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu exu2 jump_pc_o", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu exu2 ex_pcsrc_o", false,-1);
        tracep->declQuad(c+11,"ysyx_22051013_rvcpu exu2 alu_res", false,-1, 63,0);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu reg3 clk", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu reg3 rst", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu reg3 waddr", false,-1, 4,0);
        tracep->declQuad(c+11,"ysyx_22051013_rvcpu reg3 wdata", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu reg3 wen", false,-1);
        tracep->declBus(c+94,"ysyx_22051013_rvcpu reg3 raddr1", false,-1, 4,0);
        tracep->declQuad(c+92,"ysyx_22051013_rvcpu reg3 rdata1", false,-1, 63,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu reg3 ren1", false,-1);
        tracep->declBus(c+113,"ysyx_22051013_rvcpu reg3 raddr2", false,-1, 4,0);
        tracep->declQuad(c+111,"ysyx_22051013_rvcpu reg3 rdata2", false,-1, 63,0);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu reg3 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+22+i*2,"ysyx_22051013_rvcpu reg3 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+86,"ysyx_22051013_rvcpu reg3 i", false,-1, 31,0);
    }
}

void Vysyx_22051013_rvcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22051013_rvcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22051013_rvcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22051013_rvcpu___024root__traceRegister(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22051013_rvcpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22051013_rvcpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22051013_rvcpu___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22051013_rvcpu___024root__traceFullSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22051013_rvcpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22051013_rvcpu___024root* const __restrict vlSelf = static_cast<Vysyx_22051013_rvcpu___024root*>(voidSelf);
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22051013_rvcpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22051013_rvcpu___024root__traceFullSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr),5);
        tracep->fullBit(oldp+2,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+3,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))));
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2),64);
        tracep->fullCData(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel),7);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata),64);
        tracep->fullQData(oldp+13,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                     ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                        + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                     : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                         ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                            + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                         : 0ULL))),64);
        tracep->fullBit(oldp+15,((((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi) 
                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)) 
                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal))));
        tracep->fullIData(oldp+16,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm),20);
        tracep->fullBit(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi));
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr));
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[1]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[2]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[3]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[4]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[5]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[6]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[7]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[8]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[9]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[10]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[11]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[12]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[13]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[14]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[15]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[16]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[17]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[18]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[19]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[20]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[21]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[22]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[23]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[24]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[25]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[26]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[27]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[28]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[29]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[30]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[31]),64);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i),32);
        tracep->fullBit(oldp+87,(vlSelf->clk));
        tracep->fullBit(oldp+88,(vlSelf->rst));
        tracep->fullQData(oldp+89,(vlSelf->inst_pc),64);
        tracep->fullIData(oldp+91,(vlSelf->inst),32);
        tracep->fullQData(oldp+92,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                    [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                       ? (0x1fU & (vlSelf->inst 
                                                   >> 0xfU))
                                       : 0U)] : 0ULL)),64);
        tracep->fullCData(oldp+94,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                     ? (0x1fU & (vlSelf->inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->fullBit(oldp+95,((0U != (0x1fU & (vlSelf->inst 
                                                  >> 7U)))));
        tracep->fullQData(oldp+96,(((IData)(vlSelf->rst)
                                     ? 0x80000000ULL
                                     : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))
                                         ? ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                             ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                                + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                             : ((0x10U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                                 ? 
                                                (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                                 : 0ULL))
                                         : ((IData)(vlSelf->rst)
                                             ? 0x80000000ULL
                                             : (4ULL 
                                                + vlSelf->inst_pc))))),64);
        tracep->fullQData(oldp+98,(((IData)(vlSelf->rst)
                                     ? 0x80000000ULL
                                     : (4ULL + vlSelf->inst_pc))),64);
        tracep->fullCData(oldp+100,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+101,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+102,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+103,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))
                                      ? (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
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
                                                               (0xfffff000U 
                                                                & vlSelf->inst))))
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
        tracep->fullCData(oldp+105,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+106,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+107,((vlSelf->inst >> 0x14U)),12);
        tracep->fullIData(oldp+108,((vlSelf->inst >> 0xcU)),20);
        tracep->fullBit(oldp+109,((IData)(((0U == (1U 
                                                   & (IData)(vlSelf->rst))) 
                                           & (0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->inst))))));
        tracep->fullBit(oldp+110,(((IData)(((0U == 
                                             (1U & (IData)(vlSelf->rst))) 
                                            & (0x73U 
                                               == (0x707fU 
                                                   & vlSelf->inst)))) 
                                   & (1U == (vlSelf->inst 
                                             >> 0x14U)))));
        tracep->fullQData(oldp+111,(0ULL),64);
        tracep->fullCData(oldp+113,(0U),5);
        tracep->fullBit(oldp+114,(0U));
    }
}
