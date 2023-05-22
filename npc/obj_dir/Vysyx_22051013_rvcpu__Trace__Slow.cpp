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
        tracep->declBit(c+278,"clk", false,-1);
        tracep->declBit(c+279,"rst", false,-1);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu if_id_inst", false,-1, 31,0);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu if_id_pc", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+96,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22051013_rvcpu id_reg_rd_addr", false,-1, 4,0);
        tracep->declBit(c+109,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declBit(c+111,"ysyx_22051013_rvcpu id_reg_rd_ena", false,-1);
        tracep->declQuad(c+112,"ysyx_22051013_rvcpu id_ex_imm", false,-1, 63,0);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu id_ex_branch", false,-1);
        tracep->declBit(c+115,"ysyx_22051013_rvcpu id_ex_jump", false,-1);
        tracep->declBus(c+116,"ysyx_22051013_rvcpu id_ls_ctl", false,-1, 3,0);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu id_wb_ctl", false,-1, 1,0);
        tracep->declBus(c+118,"ysyx_22051013_rvcpu id_ex_alu_sel", false,-1, 7,0);
        tracep->declQuad(c+119,"ysyx_22051013_rvcpu id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+121,"ysyx_22051013_rvcpu id_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22051013_rvcpu id_ex_op2", false,-1, 63,0);
        tracep->declBus(c+125,"ysyx_22051013_rvcpu id_ex_csrctl", false,-1, 3,0);
        tracep->declQuad(c+126,"ysyx_22051013_rvcpu ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22051013_rvcpu ex_ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+128,"ysyx_22051013_rvcpu ex_if_pc", false,-1, 63,0);
        tracep->declBit(c+130,"ysyx_22051013_rvcpu ex_if_pc_sel", false,-1);
        tracep->declQuad(c+280,"ysyx_22051013_rvcpu ls_wb_data", false,-1, 63,0);
        tracep->declQuad(c+282,"ysyx_22051013_rvcpu wb_reg_rd_data", false,-1, 63,0);
        tracep->declQuad(c+284,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+286,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu ifu0 clk", false,-1);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu ifu0 rst", false,-1);
        tracep->declBit(c+130,"ysyx_22051013_rvcpu ifu0 pcsrc_i", false,-1);
        tracep->declQuad(c+128,"ysyx_22051013_rvcpu ifu0 ex_pc_i", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu ifu0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22051013_rvcpu ifu0 pc_next", false,-1, 63,0);
        tracep->declQuad(c+288,"ysyx_22051013_rvcpu ifu0 pc_plus4", false,-1, 63,0);
        tracep->declBus(c+304,"ysyx_22051013_rvcpu ifu0 rlen", false,-1, 7,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu ifu0 rinst", false,-1, 63,0);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu idu1 rst", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu idu1 inst_i", false,-1, 31,0);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu idu1 pc_i", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22051013_rvcpu idu1 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+109,"ysyx_22051013_rvcpu idu1 rs1_ena", false,-1);
        tracep->declQuad(c+284,"ysyx_22051013_rvcpu idu1 rs1_data", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22051013_rvcpu idu1 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu idu1 rs2_ena", false,-1);
        tracep->declQuad(c+286,"ysyx_22051013_rvcpu idu1 rs2_data", false,-1, 63,0);
        tracep->declBit(c+111,"ysyx_22051013_rvcpu idu1 rd_ena", false,-1);
        tracep->declBus(c+108,"ysyx_22051013_rvcpu idu1 rd_addr", false,-1, 4,0);
        tracep->declBus(c+118,"ysyx_22051013_rvcpu idu1 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+116,"ysyx_22051013_rvcpu idu1 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu idu1 wbctl_o", false,-1, 1,0);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu idu1 branch_o", false,-1);
        tracep->declBit(c+115,"ysyx_22051013_rvcpu idu1 jump_o", false,-1);
        tracep->declBus(c+125,"ysyx_22051013_rvcpu idu1 csr_ctl", false,-1, 3,0);
        tracep->declQuad(c+121,"ysyx_22051013_rvcpu idu1 op1", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22051013_rvcpu idu1 op2", false,-1, 63,0);
        tracep->declQuad(c+112,"ysyx_22051013_rvcpu idu1 imm", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_22051013_rvcpu idu1 pc_o", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22051013_rvcpu idu1 rd", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22051013_rvcpu idu1 rs1", false,-1, 4,0);
        tracep->declBus(c+8,"ysyx_22051013_rvcpu idu1 rs2", false,-1, 4,0);
        tracep->declBit(c+133,"ysyx_22051013_rvcpu idu1 imm_ena", false,-1);
        tracep->declBit(c+134,"ysyx_22051013_rvcpu idu1 csr_wr_ena", false,-1);
        tracep->declBit(c+135,"ysyx_22051013_rvcpu idu1 csr_rd_ena", false,-1);
        tracep->declBit(c+136,"ysyx_22051013_rvcpu idu1 mret_ena", false,-1);
        tracep->declBit(c+137,"ysyx_22051013_rvcpu idu1 ecall_ena", false,-1);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu idu1 decode rst", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu idu1 decode inst", false,-1, 31,0);
        tracep->declBit(c+109,"ysyx_22051013_rvcpu idu1 decode rs1_ena", false,-1);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu idu1 decode rs2_ena", false,-1);
        tracep->declBit(c+115,"ysyx_22051013_rvcpu idu1 decode jump", false,-1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu idu1 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+116,"ysyx_22051013_rvcpu idu1 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu idu1 decode branch", false,-1);
        tracep->declQuad(c+112,"ysyx_22051013_rvcpu idu1 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+133,"ysyx_22051013_rvcpu idu1 decode imm_ena", false,-1);
        tracep->declBus(c+118,"ysyx_22051013_rvcpu idu1 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+9,"ysyx_22051013_rvcpu idu1 decode opcode", false,-1, 6,0);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu idu1 decode funct3", false,-1, 2,0);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu idu1 decode funct7", false,-1, 6,0);
        tracep->declBus(c+12,"ysyx_22051013_rvcpu idu1 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+13,"ysyx_22051013_rvcpu idu1 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+14,"ysyx_22051013_rvcpu idu1 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+15,"ysyx_22051013_rvcpu idu1 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+16,"ysyx_22051013_rvcpu idu1 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+138,"ysyx_22051013_rvcpu idu1 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+139,"ysyx_22051013_rvcpu idu1 decode inst_lui", false,-1);
        tracep->declBit(c+140,"ysyx_22051013_rvcpu idu1 decode inst_auipc", false,-1);
        tracep->declBit(c+141,"ysyx_22051013_rvcpu idu1 decode inst_jal", false,-1);
        tracep->declBit(c+142,"ysyx_22051013_rvcpu idu1 decode inst_jalr", false,-1);
        tracep->declBit(c+143,"ysyx_22051013_rvcpu idu1 decode inst_sb", false,-1);
        tracep->declBit(c+144,"ysyx_22051013_rvcpu idu1 decode inst_sh", false,-1);
        tracep->declBit(c+145,"ysyx_22051013_rvcpu idu1 decode inst_sw", false,-1);
        tracep->declBit(c+146,"ysyx_22051013_rvcpu idu1 decode inst_sd", false,-1);
        tracep->declBit(c+147,"ysyx_22051013_rvcpu idu1 decode inst_lb", false,-1);
        tracep->declBit(c+148,"ysyx_22051013_rvcpu idu1 decode inst_lh", false,-1);
        tracep->declBit(c+149,"ysyx_22051013_rvcpu idu1 decode inst_lw", false,-1);
        tracep->declBit(c+150,"ysyx_22051013_rvcpu idu1 decode inst_ld", false,-1);
        tracep->declBit(c+151,"ysyx_22051013_rvcpu idu1 decode inst_lbu", false,-1);
        tracep->declBit(c+152,"ysyx_22051013_rvcpu idu1 decode inst_lhu", false,-1);
        tracep->declBit(c+153,"ysyx_22051013_rvcpu idu1 decode inst_lwu", false,-1);
        tracep->declBit(c+154,"ysyx_22051013_rvcpu idu1 decode inst_beq", false,-1);
        tracep->declBit(c+155,"ysyx_22051013_rvcpu idu1 decode inst_bne", false,-1);
        tracep->declBit(c+156,"ysyx_22051013_rvcpu idu1 decode inst_blt", false,-1);
        tracep->declBit(c+157,"ysyx_22051013_rvcpu idu1 decode inst_bge", false,-1);
        tracep->declBit(c+158,"ysyx_22051013_rvcpu idu1 decode inst_bltu", false,-1);
        tracep->declBit(c+159,"ysyx_22051013_rvcpu idu1 decode inst_bgeu", false,-1);
        tracep->declBit(c+160,"ysyx_22051013_rvcpu idu1 decode inst_add", false,-1);
        tracep->declBit(c+161,"ysyx_22051013_rvcpu idu1 decode inst_sub", false,-1);
        tracep->declBit(c+162,"ysyx_22051013_rvcpu idu1 decode inst_sll", false,-1);
        tracep->declBit(c+163,"ysyx_22051013_rvcpu idu1 decode inst_slt", false,-1);
        tracep->declBit(c+164,"ysyx_22051013_rvcpu idu1 decode inst_sltu", false,-1);
        tracep->declBit(c+165,"ysyx_22051013_rvcpu idu1 decode inst_xor", false,-1);
        tracep->declBit(c+166,"ysyx_22051013_rvcpu idu1 decode inst_srl", false,-1);
        tracep->declBit(c+167,"ysyx_22051013_rvcpu idu1 decode inst_sra", false,-1);
        tracep->declBit(c+168,"ysyx_22051013_rvcpu idu1 decode inst_or", false,-1);
        tracep->declBit(c+169,"ysyx_22051013_rvcpu idu1 decode inst_and", false,-1);
        tracep->declBit(c+170,"ysyx_22051013_rvcpu idu1 decode inst_div", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu idu1 decode inst_divu", false,-1);
        tracep->declBit(c+172,"ysyx_22051013_rvcpu idu1 decode inst_mul", false,-1);
        tracep->declBit(c+173,"ysyx_22051013_rvcpu idu1 decode inst_mulh", false,-1);
        tracep->declBit(c+174,"ysyx_22051013_rvcpu idu1 decode inst_mulhsu", false,-1);
        tracep->declBit(c+175,"ysyx_22051013_rvcpu idu1 decode inst_mulhu", false,-1);
        tracep->declBit(c+176,"ysyx_22051013_rvcpu idu1 decode inst_rem", false,-1);
        tracep->declBit(c+177,"ysyx_22051013_rvcpu idu1 decode inst_remu", false,-1);
        tracep->declBit(c+97,"ysyx_22051013_rvcpu idu1 decode inst_addi", false,-1);
        tracep->declBit(c+98,"ysyx_22051013_rvcpu idu1 decode inst_slti", false,-1);
        tracep->declBit(c+99,"ysyx_22051013_rvcpu idu1 decode inst_sltiu", false,-1);
        tracep->declBit(c+100,"ysyx_22051013_rvcpu idu1 decode inst_xori", false,-1);
        tracep->declBit(c+101,"ysyx_22051013_rvcpu idu1 decode inst_ori", false,-1);
        tracep->declBit(c+102,"ysyx_22051013_rvcpu idu1 decode inst_andi", false,-1);
        tracep->declBit(c+103,"ysyx_22051013_rvcpu idu1 decode inst_slli", false,-1);
        tracep->declBit(c+104,"ysyx_22051013_rvcpu idu1 decode inst_srli", false,-1);
        tracep->declBit(c+178,"ysyx_22051013_rvcpu idu1 decode inst_srai", false,-1);
        tracep->declBit(c+179,"ysyx_22051013_rvcpu idu1 decode inst_addiw", false,-1);
        tracep->declBit(c+180,"ysyx_22051013_rvcpu idu1 decode inst_slliw", false,-1);
        tracep->declBit(c+181,"ysyx_22051013_rvcpu idu1 decode inst_srliw", false,-1);
        tracep->declBit(c+182,"ysyx_22051013_rvcpu idu1 decode inst_sraiw", false,-1);
        tracep->declBit(c+183,"ysyx_22051013_rvcpu idu1 decode inst_addw", false,-1);
        tracep->declBit(c+184,"ysyx_22051013_rvcpu idu1 decode inst_subw", false,-1);
        tracep->declBit(c+185,"ysyx_22051013_rvcpu idu1 decode inst_sllw", false,-1);
        tracep->declBit(c+186,"ysyx_22051013_rvcpu idu1 decode inst_srlw", false,-1);
        tracep->declBit(c+187,"ysyx_22051013_rvcpu idu1 decode inst_sraw", false,-1);
        tracep->declBit(c+188,"ysyx_22051013_rvcpu idu1 decode inst_divuw", false,-1);
        tracep->declBit(c+189,"ysyx_22051013_rvcpu idu1 decode inst_divw", false,-1);
        tracep->declBit(c+190,"ysyx_22051013_rvcpu idu1 decode inst_mulw", false,-1);
        tracep->declBit(c+191,"ysyx_22051013_rvcpu idu1 decode inst_remuw", false,-1);
        tracep->declBit(c+192,"ysyx_22051013_rvcpu idu1 decode inst_remw", false,-1);
        tracep->declBit(c+193,"ysyx_22051013_rvcpu idu1 decode inst_ecall", false,-1);
        tracep->declBit(c+194,"ysyx_22051013_rvcpu idu1 decode inst_mret", false,-1);
        tracep->declBit(c+195,"ysyx_22051013_rvcpu idu1 decode inst_csrrw", false,-1);
        tracep->declBit(c+196,"ysyx_22051013_rvcpu idu1 decode inst_csrrs", false,-1);
        tracep->declBit(c+197,"ysyx_22051013_rvcpu idu1 decode inst_csrrc", false,-1);
        tracep->declBit(c+198,"ysyx_22051013_rvcpu idu1 decode inst_csrrwi", false,-1);
        tracep->declBit(c+199,"ysyx_22051013_rvcpu idu1 decode inst_csrrsi", false,-1);
        tracep->declBit(c+200,"ysyx_22051013_rvcpu idu1 decode inst_csrrci", false,-1);
        tracep->declBit(c+201,"ysyx_22051013_rvcpu idu1 decode inst_ebreak", false,-1);
        tracep->declBit(c+202,"ysyx_22051013_rvcpu idu1 decode inst_csr", false,-1);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu exu2 clk", false,-1);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu exu2 rst", false,-1);
        tracep->declQuad(c+121,"ysyx_22051013_rvcpu exu2 op1", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22051013_rvcpu exu2 op2", false,-1, 63,0);
        tracep->declQuad(c+112,"ysyx_22051013_rvcpu exu2 imm", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_22051013_rvcpu exu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+115,"ysyx_22051013_rvcpu exu2 jump_i", false,-1);
        tracep->declBus(c+118,"ysyx_22051013_rvcpu exu2 alu_sel", false,-1, 7,0);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu exu2 branch_i", false,-1);
        tracep->declBus(c+125,"ysyx_22051013_rvcpu exu2 csr_ctl", false,-1, 3,0);
        tracep->declQuad(c+123,"ysyx_22051013_rvcpu exu2 store_data", false,-1, 63,0);
        tracep->declQuad(c+128,"ysyx_22051013_rvcpu exu2 jump_pc_o", false,-1, 63,0);
        tracep->declBit(c+130,"ysyx_22051013_rvcpu exu2 ex_pcsrc_o", false,-1);
        tracep->declQuad(c+126,"ysyx_22051013_rvcpu exu2 exu_res", false,-1, 63,0);
        tracep->declQuad(c+203,"ysyx_22051013_rvcpu exu2 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+205,"ysyx_22051013_rvcpu exu2 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+207,"ysyx_22051013_rvcpu exu2 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+209,"ysyx_22051013_rvcpu exu2 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+211,"ysyx_22051013_rvcpu exu2 op1_lt_op2", false,-1);
        tracep->declQuad(c+212,"ysyx_22051013_rvcpu exu2 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+214,"ysyx_22051013_rvcpu exu2 sllw", false,-1, 31,0);
        tracep->declQuad(c+215,"ysyx_22051013_rvcpu exu2 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+217,"ysyx_22051013_rvcpu exu2 srlw", false,-1, 31,0);
        tracep->declQuad(c+218,"ysyx_22051013_rvcpu exu2 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+220,"ysyx_22051013_rvcpu exu2 sraw", false,-1, 31,0);
        tracep->declQuad(c+221,"ysyx_22051013_rvcpu exu2 op1_sraw_op2", false,-1, 63,0);
        tracep->declArray(c+223,"ysyx_22051013_rvcpu exu2 mul", false,-1, 127,0);
        tracep->declQuad(c+227,"ysyx_22051013_rvcpu exu2 op1_mul_op2", false,-1, 63,0);
        tracep->declQuad(c+229,"ysyx_22051013_rvcpu exu2 op1_mulh_op2", false,-1, 63,0);
        tracep->declQuad(c+231,"ysyx_22051013_rvcpu exu2 op1_mulw_op2", false,-1, 63,0);
        tracep->declQuad(c+233,"ysyx_22051013_rvcpu exu2 div", false,-1, 63,0);
        tracep->declBus(c+235,"ysyx_22051013_rvcpu exu2 divw", false,-1, 31,0);
        tracep->declQuad(c+236,"ysyx_22051013_rvcpu exu2 op1_divw_op2", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22051013_rvcpu exu2 op1_divuw_op2", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22051013_rvcpu exu2 rem", false,-1, 63,0);
        tracep->declBus(c+242,"ysyx_22051013_rvcpu exu2 remw", false,-1, 31,0);
        tracep->declQuad(c+243,"ysyx_22051013_rvcpu exu2 op1_remw_op2", false,-1, 63,0);
        tracep->declQuad(c+245,"ysyx_22051013_rvcpu exu2 op1_remuw_op2", false,-1, 63,0);
        tracep->declQuad(c+247,"ysyx_22051013_rvcpu exu2 alu_res", false,-1, 63,0);
        tracep->declBit(c+249,"ysyx_22051013_rvcpu exu2 ex_branch", false,-1);
        tracep->declBus(c+250,"ysyx_22051013_rvcpu exu2 csr_addr", false,-1, 11,0);
        tracep->declQuad(c+251,"ysyx_22051013_rvcpu exu2 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+253,"ysyx_22051013_rvcpu exu2 write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+255,"ysyx_22051013_rvcpu exu2 mcause_value", false,-1, 63,0);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu exu2 set_data", false,-1, 63,0);
        tracep->declQuad(c+259,"ysyx_22051013_rvcpu exu2 clear_data", false,-1, 63,0);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu exu2 csr_operate clk", false,-1);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu exu2 csr_operate rst", false,-1);
        tracep->declBus(c+125,"ysyx_22051013_rvcpu exu2 csr_operate csr_ctl", false,-1, 3,0);
        tracep->declBus(c+250,"ysyx_22051013_rvcpu exu2 csr_operate csr_addr", false,-1, 11,0);
        tracep->declQuad(c+255,"ysyx_22051013_rvcpu exu2 csr_operate mcause_value", false,-1, 63,0);
        tracep->declQuad(c+253,"ysyx_22051013_rvcpu exu2 csr_operate write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+251,"ysyx_22051013_rvcpu exu2 csr_operate read_csr_data", false,-1, 63,0);
        tracep->declBit(c+261,"ysyx_22051013_rvcpu exu2 csr_operate mstatus_rd", false,-1);
        tracep->declBit(c+262,"ysyx_22051013_rvcpu exu2 csr_operate mstatus_wr", false,-1);
        tracep->declBit(c+17,"ysyx_22051013_rvcpu exu2 csr_operate mstatus_mie", false,-1);
        tracep->declBit(c+18,"ysyx_22051013_rvcpu exu2 csr_operate mstatus_mpie", false,-1);
        tracep->declBus(c+19,"ysyx_22051013_rvcpu exu2 csr_operate mstatus_mpp", false,-1, 1,0);
        tracep->declQuad(c+20,"ysyx_22051013_rvcpu exu2 csr_operate mstatus", false,-1, 63,0);
        tracep->declBit(c+263,"ysyx_22051013_rvcpu exu2 csr_operate mstatus_ie_ena", false,-1);
        tracep->declBit(c+105,"ysyx_22051013_rvcpu exu2 csr_operate mie_set", false,-1);
        tracep->declBit(c+106,"ysyx_22051013_rvcpu exu2 csr_operate mpie_set", false,-1);
        tracep->declBus(c+107,"ysyx_22051013_rvcpu exu2 csr_operate mpp_set", false,-1, 1,0);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu exu2 csr_operate mtvec_rd", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu exu2 csr_operate mtvec_wr", false,-1);
        tracep->declQuad(c+22,"ysyx_22051013_rvcpu exu2 csr_operate mtvec_base", false,-1, 63,2);
        tracep->declBus(c+305,"ysyx_22051013_rvcpu exu2 csr_operate mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu exu2 csr_operate mtvec", false,-1, 63,0);
        tracep->declBit(c+266,"ysyx_22051013_rvcpu exu2 csr_operate mepc_rd", false,-1);
        tracep->declBit(c+267,"ysyx_22051013_rvcpu exu2 csr_operate mepc_wr", false,-1);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu exu2 csr_operate mepc", false,-1, 63,0);
        tracep->declBit(c+268,"ysyx_22051013_rvcpu exu2 csr_operate mcause_rd", false,-1);
        tracep->declBit(c+269,"ysyx_22051013_rvcpu exu2 csr_operate mcause_wr", false,-1);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu exu2 csr_operate mcause", false,-1, 63,0);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu lsu3 rst", false,-1);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu lsu3 clk", false,-1);
        tracep->declQuad(c+126,"ysyx_22051013_rvcpu lsu3 alu_res", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22051013_rvcpu lsu3 store_data", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22051013_rvcpu lsu3 ls_ctl", false,-1, 3,0);
        tracep->declQuad(c+280,"ysyx_22051013_rvcpu lsu3 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+290,"ysyx_22051013_rvcpu lsu3 raddr", false,-1, 63,0);
        tracep->declQuad(c+292,"ysyx_22051013_rvcpu lsu3 waddr", false,-1, 63,0);
        tracep->declBus(c+304,"ysyx_22051013_rvcpu lsu3 rlen", false,-1, 7,0);
        tracep->declBus(c+294,"ysyx_22051013_rvcpu lsu3 wlen", false,-1, 7,0);
        tracep->declQuad(c+295,"ysyx_22051013_rvcpu lsu3 data_i", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22051013_rvcpu lsu3 data_o", false,-1, 63,0);
        tracep->declBit(c+270,"ysyx_22051013_rvcpu lsu3 re", false,-1);
        tracep->declBit(c+299,"ysyx_22051013_rvcpu lsu3 we", false,-1);
        tracep->declQuad(c+300,"ysyx_22051013_rvcpu lsu3 load_data", false,-1, 63,0);
        tracep->declBus(c+271,"ysyx_22051013_rvcpu lsu3 byte_sel", false,-1, 2,0);
        tracep->declBus(c+272,"ysyx_22051013_rvcpu lsu3 half_sel", false,-1, 1,0);
        tracep->declBit(c+273,"ysyx_22051013_rvcpu lsu3 word_sel", false,-1);
        tracep->declBus(c+274,"ysyx_22051013_rvcpu lsu3 data_byte", false,-1, 7,0);
        tracep->declBus(c+275,"ysyx_22051013_rvcpu lsu3 data_half", false,-1, 15,0);
        tracep->declBus(c+276,"ysyx_22051013_rvcpu lsu3 data_word", false,-1, 31,0);
        tracep->declBus(c+277,"ysyx_22051013_rvcpu lsu3 sb_mask", false,-1, 7,0);
        tracep->declBus(c+302,"ysyx_22051013_rvcpu lsu3 sh_mask", false,-1, 7,0);
        tracep->declBus(c+303,"ysyx_22051013_rvcpu lsu3 sw_mask", false,-1, 7,0);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu wbu4 rst", false,-1);
        tracep->declQuad(c+280,"ysyx_22051013_rvcpu wbu4 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu wbu4 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+126,"ysyx_22051013_rvcpu wbu4 exu_res", false,-1, 63,0);
        tracep->declQuad(c+282,"ysyx_22051013_rvcpu wbu4 wb_data", false,-1, 63,0);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu reg3 clk", false,-1);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu reg3 rst", false,-1);
        tracep->declBus(c+108,"ysyx_22051013_rvcpu reg3 waddr", false,-1, 4,0);
        tracep->declQuad(c+282,"ysyx_22051013_rvcpu reg3 wdata", false,-1, 63,0);
        tracep->declBit(c+111,"ysyx_22051013_rvcpu reg3 wen", false,-1);
        tracep->declBus(c+95,"ysyx_22051013_rvcpu reg3 raddr1", false,-1, 4,0);
        tracep->declQuad(c+284,"ysyx_22051013_rvcpu reg3 rdata1", false,-1, 63,0);
        tracep->declBit(c+109,"ysyx_22051013_rvcpu reg3 ren1", false,-1);
        tracep->declBus(c+96,"ysyx_22051013_rvcpu reg3 raddr2", false,-1, 4,0);
        tracep->declQuad(c+286,"ysyx_22051013_rvcpu reg3 rdata2", false,-1, 63,0);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu reg3 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+30+i*2,"ysyx_22051013_rvcpu reg3 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+94,"ysyx_22051013_rvcpu reg3 i", false,-1, 31,0);
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
        tracep->fullIData(oldp+1,((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)),32);
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst),64);
        tracep->fullCData(oldp+6,((0x1fU & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                    >> 7U)))),5);
        tracep->fullCData(oldp+7,((0x1fU & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                    >> 0xfU)))),5);
        tracep->fullCData(oldp+8,((0x1fU & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                    >> 0x14U)))),5);
        tracep->fullCData(oldp+9,((0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst))),7);
        tracep->fullCData(oldp+10,((7U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                  >> 0xcU)))),3);
        tracep->fullCData(oldp+11,((0x7fU & (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                     >> 0x19U)))),7);
        tracep->fullSData(oldp+12,((0xfffU & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+13,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm),20);
        tracep->fullIData(oldp+14,((0xfffffU & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                        >> 0xcU)))),20);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__s_imm),12);
        tracep->fullSData(oldp+16,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__b_imm),12);
        tracep->fullBit(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie));
        tracep->fullCData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp),2);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mtvec_base),62);
        tracep->fullQData(oldp+24,((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                                    << 2U)),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mepc),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mcause),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[1]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[2]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[3]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[4]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[5]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[6]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[7]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[8]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[9]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[10]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[11]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[12]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[13]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[14]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[15]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[16]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[17]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[18]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[19]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[20]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[21]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[22]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[23]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[24]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[25]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[26]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[27]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[28]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[29]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[30]),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[31]),64);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i),32);
        tracep->fullCData(oldp+95,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                     ? (0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                         >> 0xfU)))
                                     : 0U)),5);
        tracep->fullCData(oldp+96,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                     ? (0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                         >> 0x14U)))
                                     : 0U)),5);
        tracep->fullBit(oldp+97,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+98,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x2000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+99,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x3000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+100,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                 & (0x4000ULL 
                                                    == 
                                                    (0x7000ULL 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+101,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                 & (0x6000ULL 
                                                    == 
                                                    (0x7000ULL 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+102,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                 & (0x7000ULL 
                                                    == 
                                                    (0x7000ULL 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+103,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                 & (0x1000ULL 
                                                    == 
                                                    (0x7000ULL 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+104,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                 & (0x5000ULL 
                                                    == 
                                                    (0x40007000ULL 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+105,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                             >> 1U)) 
                                         & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))))));
        tracep->fullBit(oldp+106,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)))))));
        tracep->fullCData(oldp+107,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                      ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data 
                                                                 >> 0xdU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr),5);
        tracep->fullBit(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+111,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_ena));
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm),64);
        tracep->fullBit(oldp+114,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                         >> 2U))));
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_jump));
        tracep->fullCData(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl),4);
        tracep->fullCData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl),2);
        tracep->fullCData(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel),8);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2),64);
        tracep->fullCData(oldp+125,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl),4);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata),64);
        tracep->fullQData(oldp+128,(((1U & ((0x21U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                               >> 2U)))
                                      ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                         + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                      : ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                          ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                             + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                          : ((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl))))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data
                                              : 0ULL)))),64);
        tracep->fullBit(oldp+130,((1U & ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_jump) 
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
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next),64);
        tracep->fullBit(oldp+133,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb7U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)))));
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__csr_wr_ena));
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__csr_rd_ena));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__mret_ena));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__ecall_ena));
        tracep->fullCData(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+139,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+150,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+164,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+165,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+189,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+190,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+191,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+192,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ecall));
        tracep->fullBit(oldp+194,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mret));
        tracep->fullBit(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+197,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+198,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+199,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+200,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+201,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+202,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_csrrc))));
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+209,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+211,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2));
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+214,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw),32);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+217,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw),32);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+220,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw),32);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2),64);
        tracep->fullWData(oldp+223,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul),128);
        tracep->fullQData(oldp+227,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+229,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[2U])))),64);
        tracep->fullQData(oldp+231,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U] 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div),64);
        tracep->fullIData(oldp+235,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw),32);
        tracep->fullQData(oldp+236,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw)))),64);
        tracep->fullQData(oldp+238,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div)))),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem),64);
        tracep->fullIData(oldp+242,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw),32);
        tracep->fullQData(oldp+243,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw)))),64);
        tracep->fullQData(oldp+245,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem)))),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__alu_res),64);
        tracep->fullBit(oldp+249,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                    >> 2U) & ((0xeU 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                               ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                                  == vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)
                                               : ((0x1cU 
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
        tracep->fullSData(oldp+250,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr),12);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__write_csr_data),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mcause_value),64);
        tracep->fullQData(oldp+257,((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1)),64);
        tracep->fullQData(oldp+259,((vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1))),64);
        tracep->fullBit(oldp+261,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+262,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr));
        tracep->fullBit(oldp+263,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena));
        tracep->fullBit(oldp+264,((1U & (((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                             >> 2U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullBit(oldp+265,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                      >> 3U))));
        tracep->fullBit(oldp+266,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl)))));
        tracep->fullBit(oldp+267,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                             >> 3U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullBit(oldp+268,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+269,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_csrctl) 
                                      >> 3U))));
        tracep->fullBit(oldp+270,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re));
        tracep->fullCData(oldp+271,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))),3);
        tracep->fullCData(oldp+272,((3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+273,((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                 >> 2U)))));
        tracep->fullCData(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte),8);
        tracep->fullSData(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half),16);
        tracep->fullIData(oldp+276,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word),32);
        tracep->fullCData(oldp+277,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__sb_mask),8);
        tracep->fullBit(oldp+278,(vlSelf->clk));
        tracep->fullBit(oldp+279,(vlSelf->rst));
        tracep->fullQData(oldp+280,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re)
                                      ? ((IData)(vlSelf->rst)
                                          ? 0ULL : 
                                         ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                           ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                               ? ((2U 
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
                                               : ((2U 
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
        tracep->fullQData(oldp+282,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re)
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
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata
                                                  : 0ULL)))),64);
        tracep->fullQData(oldp+284,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                     [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                        ? (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                            >> 0xfU)))
                                        : 0U)] : 0ULL)),64);
        tracep->fullQData(oldp+286,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                     [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                        ? (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                            >> 0x14U)))
                                        : 0U)] : 0ULL)),64);
        tracep->fullQData(oldp+288,(((IData)(vlSelf->rst)
                                      ? 0x80000000ULL
                                      : (4ULL + vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc))),64);
        tracep->fullQData(oldp+290,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))),64);
        tracep->fullQData(oldp+292,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata)),64);
        tracep->fullCData(oldp+294,(((IData)(vlSelf->rst)
                                      ? 0U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                   ? 
                                                  ((2U 
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
                                                   : 
                                                  ((2U 
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
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i),64);
        tracep->fullQData(oldp+297,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((8U 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl))
                                                 ? 0ULL
                                                 : 
                                                ((4U 
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
        tracep->fullBit(oldp+299,((1U & ((~ ((IData)(vlSelf->rst) 
                                             | (0U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl)))) 
                                         & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl) 
                                               >> 3U))))));
        tracep->fullQData(oldp+300,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((8U 
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
                                                 : 0ULL))),64);
        tracep->fullCData(oldp+302,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
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
                                                    : 0xc0U))))),8);
        tracep->fullCData(oldp+303,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullCData(oldp+304,(8U),8);
        tracep->fullCData(oldp+305,(0U),2);
    }
}
