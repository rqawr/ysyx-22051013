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
        tracep->declBit(c+228,"clk", false,-1);
        tracep->declBit(c+229,"rst", false,-1);
        tracep->declBit(c+228,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu if_id_inst", false,-1, 31,0);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu if_id_pc", false,-1, 63,0);
        tracep->declBus(c+82,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+83,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+92,"ysyx_22051013_rvcpu id_reg_rd_addr", false,-1, 4,0);
        tracep->declBit(c+93,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu id_reg_rd_ena", false,-1);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu id_ex_imm", false,-1, 63,0);
        tracep->declBit(c+98,"ysyx_22051013_rvcpu id_ex_branch", false,-1);
        tracep->declBit(c+99,"ysyx_22051013_rvcpu id_ex_jump", false,-1);
        tracep->declBus(c+100,"ysyx_22051013_rvcpu id_ls_ctl", false,-1, 3,0);
        tracep->declBus(c+101,"ysyx_22051013_rvcpu id_wb_ctl", false,-1, 1,0);
        tracep->declBus(c+102,"ysyx_22051013_rvcpu id_ex_alu_sel", false,-1, 7,0);
        tracep->declQuad(c+103,"ysyx_22051013_rvcpu id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22051013_rvcpu id_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051013_rvcpu id_ex_op2", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22051013_rvcpu ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051013_rvcpu ex_ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_22051013_rvcpu ex_if_pc", false,-1, 63,0);
        tracep->declBit(c+113,"ysyx_22051013_rvcpu ex_if_pc_sel", false,-1);
        tracep->declQuad(c+230,"ysyx_22051013_rvcpu ls_wb_data", false,-1, 63,0);
        tracep->declQuad(c+232,"ysyx_22051013_rvcpu wb_reg_rd_data", false,-1, 63,0);
        tracep->declQuad(c+234,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+236,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declBit(c+228,"ysyx_22051013_rvcpu ifu0 clk", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu ifu0 rst", false,-1);
        tracep->declBit(c+113,"ysyx_22051013_rvcpu ifu0 pcsrc_i", false,-1);
        tracep->declQuad(c+111,"ysyx_22051013_rvcpu ifu0 ex_pc_i", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu ifu0 pc_o", false,-1, 63,0);
        tracep->declQuad(c+114,"ysyx_22051013_rvcpu ifu0 pc_next", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22051013_rvcpu ifu0 pc_plus4", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu ifu0 rlen", false,-1, 7,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu ifu0 rinst", false,-1, 63,0);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu idu1 rst", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu idu1 inst_i", false,-1, 31,0);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu idu1 pc_i", false,-1, 63,0);
        tracep->declBus(c+82,"ysyx_22051013_rvcpu idu1 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+93,"ysyx_22051013_rvcpu idu1 rs1_ena", false,-1);
        tracep->declQuad(c+234,"ysyx_22051013_rvcpu idu1 rs1_data", false,-1, 63,0);
        tracep->declBus(c+83,"ysyx_22051013_rvcpu idu1 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu idu1 rs2_ena", false,-1);
        tracep->declQuad(c+236,"ysyx_22051013_rvcpu idu1 rs2_data", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu idu1 rd_ena", false,-1);
        tracep->declBus(c+92,"ysyx_22051013_rvcpu idu1 rd_addr", false,-1, 4,0);
        tracep->declBus(c+102,"ysyx_22051013_rvcpu idu1 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+100,"ysyx_22051013_rvcpu idu1 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+101,"ysyx_22051013_rvcpu idu1 wbctl_o", false,-1, 1,0);
        tracep->declBit(c+98,"ysyx_22051013_rvcpu idu1 branch_o", false,-1);
        tracep->declBit(c+99,"ysyx_22051013_rvcpu idu1 jump_o", false,-1);
        tracep->declQuad(c+105,"ysyx_22051013_rvcpu idu1 op1", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051013_rvcpu idu1 op2", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu idu1 imm", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22051013_rvcpu idu1 pc_o", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22051013_rvcpu idu1 rd", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22051013_rvcpu idu1 rs1", false,-1, 4,0);
        tracep->declBus(c+8,"ysyx_22051013_rvcpu idu1 rs2", false,-1, 4,0);
        tracep->declBit(c+116,"ysyx_22051013_rvcpu idu1 imm_ena", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu idu1 decode rst", false,-1);
        tracep->declBus(c+1,"ysyx_22051013_rvcpu idu1 decode inst", false,-1, 31,0);
        tracep->declBit(c+93,"ysyx_22051013_rvcpu idu1 decode rs1_ena", false,-1);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu idu1 decode rs2_ena", false,-1);
        tracep->declBit(c+99,"ysyx_22051013_rvcpu idu1 decode jump", false,-1);
        tracep->declBus(c+101,"ysyx_22051013_rvcpu idu1 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+100,"ysyx_22051013_rvcpu idu1 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+98,"ysyx_22051013_rvcpu idu1 decode branch", false,-1);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu idu1 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+116,"ysyx_22051013_rvcpu idu1 decode imm_ena", false,-1);
        tracep->declBus(c+102,"ysyx_22051013_rvcpu idu1 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+9,"ysyx_22051013_rvcpu idu1 decode opcode", false,-1, 6,0);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu idu1 decode funct3", false,-1, 2,0);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu idu1 decode funct7", false,-1, 6,0);
        tracep->declBus(c+12,"ysyx_22051013_rvcpu idu1 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+13,"ysyx_22051013_rvcpu idu1 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+14,"ysyx_22051013_rvcpu idu1 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+15,"ysyx_22051013_rvcpu idu1 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+16,"ysyx_22051013_rvcpu idu1 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu idu1 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+118,"ysyx_22051013_rvcpu idu1 decode inst_lui", false,-1);
        tracep->declBit(c+119,"ysyx_22051013_rvcpu idu1 decode inst_auipc", false,-1);
        tracep->declBit(c+120,"ysyx_22051013_rvcpu idu1 decode inst_jal", false,-1);
        tracep->declBit(c+121,"ysyx_22051013_rvcpu idu1 decode inst_jalr", false,-1);
        tracep->declBit(c+122,"ysyx_22051013_rvcpu idu1 decode inst_sb", false,-1);
        tracep->declBit(c+123,"ysyx_22051013_rvcpu idu1 decode inst_sh", false,-1);
        tracep->declBit(c+124,"ysyx_22051013_rvcpu idu1 decode inst_sw", false,-1);
        tracep->declBit(c+125,"ysyx_22051013_rvcpu idu1 decode inst_sd", false,-1);
        tracep->declBit(c+126,"ysyx_22051013_rvcpu idu1 decode inst_lb", false,-1);
        tracep->declBit(c+127,"ysyx_22051013_rvcpu idu1 decode inst_lh", false,-1);
        tracep->declBit(c+128,"ysyx_22051013_rvcpu idu1 decode inst_lw", false,-1);
        tracep->declBit(c+129,"ysyx_22051013_rvcpu idu1 decode inst_ld", false,-1);
        tracep->declBit(c+130,"ysyx_22051013_rvcpu idu1 decode inst_lbu", false,-1);
        tracep->declBit(c+131,"ysyx_22051013_rvcpu idu1 decode inst_lhu", false,-1);
        tracep->declBit(c+132,"ysyx_22051013_rvcpu idu1 decode inst_lwu", false,-1);
        tracep->declBit(c+133,"ysyx_22051013_rvcpu idu1 decode inst_beq", false,-1);
        tracep->declBit(c+134,"ysyx_22051013_rvcpu idu1 decode inst_bne", false,-1);
        tracep->declBit(c+135,"ysyx_22051013_rvcpu idu1 decode inst_blt", false,-1);
        tracep->declBit(c+136,"ysyx_22051013_rvcpu idu1 decode inst_bge", false,-1);
        tracep->declBit(c+137,"ysyx_22051013_rvcpu idu1 decode inst_bltu", false,-1);
        tracep->declBit(c+138,"ysyx_22051013_rvcpu idu1 decode inst_bgeu", false,-1);
        tracep->declBit(c+139,"ysyx_22051013_rvcpu idu1 decode inst_add", false,-1);
        tracep->declBit(c+140,"ysyx_22051013_rvcpu idu1 decode inst_sub", false,-1);
        tracep->declBit(c+141,"ysyx_22051013_rvcpu idu1 decode inst_sll", false,-1);
        tracep->declBit(c+142,"ysyx_22051013_rvcpu idu1 decode inst_slt", false,-1);
        tracep->declBit(c+143,"ysyx_22051013_rvcpu idu1 decode inst_sltu", false,-1);
        tracep->declBit(c+144,"ysyx_22051013_rvcpu idu1 decode inst_xor", false,-1);
        tracep->declBit(c+145,"ysyx_22051013_rvcpu idu1 decode inst_srl", false,-1);
        tracep->declBit(c+146,"ysyx_22051013_rvcpu idu1 decode inst_sra", false,-1);
        tracep->declBit(c+147,"ysyx_22051013_rvcpu idu1 decode inst_or", false,-1);
        tracep->declBit(c+148,"ysyx_22051013_rvcpu idu1 decode inst_and", false,-1);
        tracep->declBit(c+149,"ysyx_22051013_rvcpu idu1 decode inst_div", false,-1);
        tracep->declBit(c+150,"ysyx_22051013_rvcpu idu1 decode inst_divu", false,-1);
        tracep->declBit(c+151,"ysyx_22051013_rvcpu idu1 decode inst_mul", false,-1);
        tracep->declBit(c+152,"ysyx_22051013_rvcpu idu1 decode inst_mulh", false,-1);
        tracep->declBit(c+153,"ysyx_22051013_rvcpu idu1 decode inst_mulhsu", false,-1);
        tracep->declBit(c+154,"ysyx_22051013_rvcpu idu1 decode inst_mulhu", false,-1);
        tracep->declBit(c+155,"ysyx_22051013_rvcpu idu1 decode inst_rem", false,-1);
        tracep->declBit(c+156,"ysyx_22051013_rvcpu idu1 decode inst_remu", false,-1);
        tracep->declBit(c+84,"ysyx_22051013_rvcpu idu1 decode inst_addi", false,-1);
        tracep->declBit(c+85,"ysyx_22051013_rvcpu idu1 decode inst_slti", false,-1);
        tracep->declBit(c+86,"ysyx_22051013_rvcpu idu1 decode inst_sltiu", false,-1);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu idu1 decode inst_xori", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu idu1 decode inst_ori", false,-1);
        tracep->declBit(c+89,"ysyx_22051013_rvcpu idu1 decode inst_andi", false,-1);
        tracep->declBit(c+90,"ysyx_22051013_rvcpu idu1 decode inst_slli", false,-1);
        tracep->declBit(c+91,"ysyx_22051013_rvcpu idu1 decode inst_srli", false,-1);
        tracep->declBit(c+157,"ysyx_22051013_rvcpu idu1 decode inst_srai", false,-1);
        tracep->declBit(c+158,"ysyx_22051013_rvcpu idu1 decode inst_addiw", false,-1);
        tracep->declBit(c+159,"ysyx_22051013_rvcpu idu1 decode inst_slliw", false,-1);
        tracep->declBit(c+160,"ysyx_22051013_rvcpu idu1 decode inst_srliw", false,-1);
        tracep->declBit(c+161,"ysyx_22051013_rvcpu idu1 decode inst_sraiw", false,-1);
        tracep->declBit(c+162,"ysyx_22051013_rvcpu idu1 decode inst_addw", false,-1);
        tracep->declBit(c+163,"ysyx_22051013_rvcpu idu1 decode inst_subw", false,-1);
        tracep->declBit(c+164,"ysyx_22051013_rvcpu idu1 decode inst_sllw", false,-1);
        tracep->declBit(c+165,"ysyx_22051013_rvcpu idu1 decode inst_srlw", false,-1);
        tracep->declBit(c+166,"ysyx_22051013_rvcpu idu1 decode inst_sraw", false,-1);
        tracep->declBit(c+167,"ysyx_22051013_rvcpu idu1 decode inst_divuw", false,-1);
        tracep->declBit(c+168,"ysyx_22051013_rvcpu idu1 decode inst_divw", false,-1);
        tracep->declBit(c+169,"ysyx_22051013_rvcpu idu1 decode inst_mulw", false,-1);
        tracep->declBit(c+170,"ysyx_22051013_rvcpu idu1 decode inst_remuw", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu idu1 decode inst_remw", false,-1);
        tracep->declBit(c+172,"ysyx_22051013_rvcpu idu1 decode inst_ebreak", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu exu2 rst", false,-1);
        tracep->declQuad(c+105,"ysyx_22051013_rvcpu exu2 op1", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051013_rvcpu exu2 op2", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu exu2 imm", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22051013_rvcpu exu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+99,"ysyx_22051013_rvcpu exu2 jump_i", false,-1);
        tracep->declBus(c+102,"ysyx_22051013_rvcpu exu2 alu_sel", false,-1, 7,0);
        tracep->declBit(c+98,"ysyx_22051013_rvcpu exu2 branch_i", false,-1);
        tracep->declQuad(c+107,"ysyx_22051013_rvcpu exu2 store_data", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_22051013_rvcpu exu2 jump_pc_o", false,-1, 63,0);
        tracep->declBit(c+113,"ysyx_22051013_rvcpu exu2 ex_pcsrc_o", false,-1);
        tracep->declQuad(c+109,"ysyx_22051013_rvcpu exu2 alu_res", false,-1, 63,0);
        tracep->declQuad(c+173,"ysyx_22051013_rvcpu exu2 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+175,"ysyx_22051013_rvcpu exu2 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22051013_rvcpu exu2 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+179,"ysyx_22051013_rvcpu exu2 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+181,"ysyx_22051013_rvcpu exu2 op1_lt_op2", false,-1);
        tracep->declQuad(c+182,"ysyx_22051013_rvcpu exu2 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+184,"ysyx_22051013_rvcpu exu2 sllw", false,-1, 31,0);
        tracep->declQuad(c+185,"ysyx_22051013_rvcpu exu2 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+187,"ysyx_22051013_rvcpu exu2 srlw", false,-1, 31,0);
        tracep->declQuad(c+188,"ysyx_22051013_rvcpu exu2 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+190,"ysyx_22051013_rvcpu exu2 sraw", false,-1, 31,0);
        tracep->declQuad(c+191,"ysyx_22051013_rvcpu exu2 op1_sraw_op2", false,-1, 63,0);
        tracep->declArray(c+193,"ysyx_22051013_rvcpu exu2 mul", false,-1, 127,0);
        tracep->declQuad(c+197,"ysyx_22051013_rvcpu exu2 op1_mul_op2", false,-1, 63,0);
        tracep->declQuad(c+199,"ysyx_22051013_rvcpu exu2 op1_mulh_op2", false,-1, 63,0);
        tracep->declQuad(c+201,"ysyx_22051013_rvcpu exu2 op1_mulw_op2", false,-1, 63,0);
        tracep->declQuad(c+203,"ysyx_22051013_rvcpu exu2 div", false,-1, 63,0);
        tracep->declBus(c+205,"ysyx_22051013_rvcpu exu2 divw", false,-1, 31,0);
        tracep->declQuad(c+206,"ysyx_22051013_rvcpu exu2 op1_divw_op2", false,-1, 63,0);
        tracep->declQuad(c+208,"ysyx_22051013_rvcpu exu2 op1_divuw_op2", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22051013_rvcpu exu2 rem", false,-1, 63,0);
        tracep->declBus(c+212,"ysyx_22051013_rvcpu exu2 remw", false,-1, 31,0);
        tracep->declQuad(c+213,"ysyx_22051013_rvcpu exu2 op1_remw_op2", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22051013_rvcpu exu2 op1_remuw_op2", false,-1, 63,0);
        tracep->declBit(c+217,"ysyx_22051013_rvcpu exu2 ex_branch", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu lsu3 rst", false,-1);
        tracep->declBit(c+228,"ysyx_22051013_rvcpu lsu3 clk", false,-1);
        tracep->declQuad(c+109,"ysyx_22051013_rvcpu lsu3 alu_res", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22051013_rvcpu lsu3 store_data", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_22051013_rvcpu lsu3 ls_ctl", false,-1, 3,0);
        tracep->declQuad(c+230,"ysyx_22051013_rvcpu lsu3 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22051013_rvcpu lsu3 raddr", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22051013_rvcpu lsu3 waddr", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu lsu3 rlen", false,-1, 7,0);
        tracep->declBus(c+218,"ysyx_22051013_rvcpu lsu3 wlen", false,-1, 7,0);
        tracep->declQuad(c+242,"ysyx_22051013_rvcpu lsu3 data_i", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_22051013_rvcpu lsu3 data_o", false,-1, 63,0);
        tracep->declBit(c+221,"ysyx_22051013_rvcpu lsu3 re", false,-1);
        tracep->declBit(c+244,"ysyx_22051013_rvcpu lsu3 we", false,-1);
        tracep->declQuad(c+245,"ysyx_22051013_rvcpu lsu3 load_data", false,-1, 63,0);
        tracep->declBus(c+222,"ysyx_22051013_rvcpu lsu3 byte_sel", false,-1, 2,0);
        tracep->declBus(c+223,"ysyx_22051013_rvcpu lsu3 half_sel", false,-1, 1,0);
        tracep->declBit(c+224,"ysyx_22051013_rvcpu lsu3 word_sel", false,-1);
        tracep->declBus(c+225,"ysyx_22051013_rvcpu lsu3 data_byte", false,-1, 7,0);
        tracep->declBus(c+226,"ysyx_22051013_rvcpu lsu3 data_half", false,-1, 15,0);
        tracep->declBus(c+227,"ysyx_22051013_rvcpu lsu3 data_word", false,-1, 31,0);
        tracep->declQuad(c+247,"ysyx_22051013_rvcpu lsu3 sb_data", false,-1, 63,0);
        tracep->declQuad(c+249,"ysyx_22051013_rvcpu lsu3 sh_data", false,-1, 63,0);
        tracep->declQuad(c+251,"ysyx_22051013_rvcpu lsu3 sw_data", false,-1, 63,0);
        tracep->declBus(c+253,"ysyx_22051013_rvcpu lsu3 sb_mask", false,-1, 7,0);
        tracep->declBus(c+254,"ysyx_22051013_rvcpu lsu3 sh_mask", false,-1, 7,0);
        tracep->declBus(c+255,"ysyx_22051013_rvcpu lsu3 sw_mask", false,-1, 7,0);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu wbu4 rst", false,-1);
        tracep->declQuad(c+230,"ysyx_22051013_rvcpu wbu4 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_22051013_rvcpu wbu4 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+109,"ysyx_22051013_rvcpu wbu4 alu_res", false,-1, 63,0);
        tracep->declQuad(c+232,"ysyx_22051013_rvcpu wbu4 wb_data", false,-1, 63,0);
        tracep->declBit(c+228,"ysyx_22051013_rvcpu reg3 clk", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu reg3 rst", false,-1);
        tracep->declBus(c+92,"ysyx_22051013_rvcpu reg3 waddr", false,-1, 4,0);
        tracep->declQuad(c+232,"ysyx_22051013_rvcpu reg3 wdata", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu reg3 wen", false,-1);
        tracep->declBus(c+82,"ysyx_22051013_rvcpu reg3 raddr1", false,-1, 4,0);
        tracep->declQuad(c+234,"ysyx_22051013_rvcpu reg3 rdata1", false,-1, 63,0);
        tracep->declBit(c+93,"ysyx_22051013_rvcpu reg3 ren1", false,-1);
        tracep->declBus(c+83,"ysyx_22051013_rvcpu reg3 raddr2", false,-1, 4,0);
        tracep->declQuad(c+236,"ysyx_22051013_rvcpu reg3 rdata2", false,-1, 63,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu reg3 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+17+i*2,"ysyx_22051013_rvcpu reg3 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+81,"ysyx_22051013_rvcpu reg3 i", false,-1, 31,0);
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
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[0]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[1]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[2]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[3]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[4]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[5]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[6]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[7]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[8]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[9]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[10]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[11]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[12]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[13]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[14]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[15]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[16]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[17]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[18]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[19]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[20]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[21]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[22]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[23]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[24]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[25]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[26]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[27]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[28]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[29]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[30]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs[31]),64);
        tracep->fullIData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__i),32);
        tracep->fullCData(oldp+82,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                     ? (0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                         >> 0xfU)))
                                     : 0U)),5);
        tracep->fullCData(oldp+83,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                     ? (0x1fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                         >> 0x14U)))
                                     : 0U)),5);
        tracep->fullBit(oldp+84,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+85,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x2000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+86,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x3000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+87,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x4000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+88,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x6000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+89,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x7000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+90,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x1000ULL 
                                                   == 
                                                   (0x7000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullBit(oldp+91,((1U & (IData)(((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type))) 
                                                & (0x5000ULL 
                                                   == 
                                                   (0x40007000ULL 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst)))))));
        tracep->fullCData(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_addr),5);
        tracep->fullBit(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+95,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rd_ena));
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm),64);
        tracep->fullBit(oldp+98,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                        >> 2U))));
        tracep->fullBit(oldp+99,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr))));
        tracep->fullCData(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl),4);
        tracep->fullCData(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__id_wb_ctl),2);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel),8);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata),64);
        tracep->fullQData(oldp+111,(((1U & ((0x21U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
                                               >> 2U)))
                                      ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_pc 
                                         + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                      : ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_alu_sel))
                                          ? (vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op1 
                                             + vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_imm)
                                          : 0ULL))),64);
        tracep->fullBit(oldp+113,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr)) 
                                   | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
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
                                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2))))))))))));
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next),64);
        tracep->fullBit(oldp+116,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb7U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc)))));
        tracep->fullCData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+123,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+124,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+129,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+139,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+150,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+164,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+165,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak));
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+179,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2));
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw),32);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw),32);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+190,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw),32);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2),64);
        tracep->fullWData(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul),128);
        tracep->fullQData(oldp+197,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+199,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[2U])))),64);
        tracep->fullQData(oldp+201,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U] 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div),64);
        tracep->fullIData(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw),32);
        tracep->fullQData(oldp+206,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__divw)))),64);
        tracep->fullQData(oldp+208,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__div)))),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem),64);
        tracep->fullIData(oldp+212,(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw),32);
        tracep->fullQData(oldp+213,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__remw)))),64);
        tracep->fullQData(oldp+215,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu2__DOT__rem)))),64);
        tracep->fullBit(oldp+217,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type) 
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
        tracep->fullCData(oldp+218,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__wlen),8);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_o),64);
        tracep->fullBit(oldp+221,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re));
        tracep->fullCData(oldp+222,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))),3);
        tracep->fullCData(oldp+223,((3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+224,((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                 >> 2U)))));
        tracep->fullCData(oldp+225,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte),8);
        tracep->fullSData(oldp+226,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half),16);
        tracep->fullIData(oldp+227,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word),32);
        tracep->fullBit(oldp+228,(vlSelf->clk));
        tracep->fullBit(oldp+229,(vlSelf->rst));
        tracep->fullQData(oldp+230,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__re)
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
        tracep->fullQData(oldp+232,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+234,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                     [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                        ? (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                            >> 0xfU)))
                                        : 0U)] : 0ULL)),64);
        tracep->fullQData(oldp+236,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg3__DOT__regs
                                     [((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                        ? (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst 
                                                            >> 0x14U)))
                                        : 0U)] : 0ULL)),64);
        tracep->fullQData(oldp+238,(((IData)(vlSelf->rst)
                                      ? 0x80000000ULL
                                      : (4ULL + vlSelf->ysyx_22051013_rvcpu__DOT__if_id_pc))),64);
        tracep->fullQData(oldp+240,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i),64);
        tracep->fullBit(oldp+244,((1U & ((~ ((IData)(vlSelf->rst) 
                                             | (0U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl)))) 
                                         & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ls_ctl) 
                                               >> 3U))))));
        tracep->fullQData(oldp+245,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+247,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x20U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))))))),64);
        tracep->fullQData(oldp+249,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)))) 
                                                   << 0x30U)))))),64);
        tracep->fullQData(oldp+251,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ex_op2))))),64);
        tracep->fullCData(oldp+253,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 0x20U
                                                    : 0x10U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata))
                                                    ? 2U
                                                    : 1U))))),8);
        tracep->fullCData(oldp+254,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+255,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ex_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullCData(oldp+256,(8U),8);
    }
}
