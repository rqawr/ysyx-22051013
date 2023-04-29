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
        tracep->declBit(c+374,"clk", false,-1);
        tracep->declBit(c+375,"rst", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu inst_not_ready", false,-1);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu axi_if_inst", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu ifu_ar_addr", false,-1, 63,0);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu ifu_ar_valid", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu ifu_ar_ready", false,-1);
        tracep->declQuad(c+7,"ysyx_22051013_rvcpu ifu_r_data", false,-1, 63,0);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu ifu_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu ifu_r_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu ifu_r_ready", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu data_not_ready", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu lsu_axi_we", false,-1);
        tracep->declBit(c+255,"ysyx_22051013_rvcpu lsu_axi_re", false,-1);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu lsu_axi_wmask", false,-1, 7,0);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu lsu_axi_datapc", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22051013_rvcpu lsu_axi_read_data", false,-1, 63,0);
        tracep->declQuad(c+259,"ysyx_22051013_rvcpu lsu_axi_write_data", false,-1, 63,0);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu lsu_aw_addr", false,-1, 63,0);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu lsu_aw_valid", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu lsu_aw_ready", false,-1);
        tracep->declQuad(c+259,"ysyx_22051013_rvcpu lsu_w_data", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu lsu_w_strb", false,-1, 7,0);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu lsu_w_valid", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu lsu_w_ready", false,-1);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu lsu_b_resp", false,-1, 1,0);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu lsu_b_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu lsu_b_ready", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu lsu_ar_addr", false,-1, 63,0);
        tracep->declBit(c+255,"ysyx_22051013_rvcpu lsu_ar_valid", false,-1);
        tracep->declBit(c+13,"ysyx_22051013_rvcpu lsu_ar_ready", false,-1);
        tracep->declQuad(c+14,"ysyx_22051013_rvcpu lsu_r_data", false,-1, 63,0);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu lsu_r_resp", false,-1, 1,0);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu lsu_r_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu lsu_r_ready", false,-1);
        tracep->declBit(c+376,"ysyx_22051013_rvcpu bpu_ifid_jump", false,-1);
        tracep->declQuad(c+377,"ysyx_22051013_rvcpu bpu_if_pc", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu ifid_if_inst", false,-1, 31,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu ifid_if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22051013_rvcpu ifid_id_inst", false,-1, 31,0);
        tracep->declQuad(c+19,"ysyx_22051013_rvcpu ifid_id_pc", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22051013_rvcpu ifid_id_jump", false,-1);
        tracep->declBus(c+261,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+262,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+263,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declQuad(c+234,"ysyx_22051013_rvcpu id_if_pc", false,-1, 63,0);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu id_if_pc_sel", false,-1);
        tracep->declBit(c+403,"ysyx_22051013_rvcpu id_ifid_jumpflush", false,-1);
        tracep->declBit(c+266,"ysyx_22051013_rvcpu id_load_flag", false,-1);
        tracep->declBus(c+379,"ysyx_22051013_rvcpu idex_id_inst", false,-1, 31,0);
        tracep->declQuad(c+380,"ysyx_22051013_rvcpu idex_id_pc", false,-1, 63,0);
        tracep->declQuad(c+267,"ysyx_22051013_rvcpu idex_id_op1", false,-1, 63,0);
        tracep->declQuad(c+269,"ysyx_22051013_rvcpu idex_id_op2", false,-1, 63,0);
        tracep->declQuad(c+271,"ysyx_22051013_rvcpu idex_id_imm", false,-1, 63,0);
        tracep->declBit(c+273,"ysyx_22051013_rvcpu idex_id_rd_ena", false,-1);
        tracep->declBus(c+236,"ysyx_22051013_rvcpu idex_id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+274,"ysyx_22051013_rvcpu idex_id_lsctl", false,-1, 3,0);
        tracep->declBus(c+275,"ysyx_22051013_rvcpu idex_id_wbctl", false,-1, 1,0);
        tracep->declBus(c+276,"ysyx_22051013_rvcpu idex_id_csrctl", false,-1, 3,0);
        tracep->declBus(c+277,"ysyx_22051013_rvcpu idex_id_alu_sel", false,-1, 7,0);
        tracep->declBus(c+22,"ysyx_22051013_rvcpu idex_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+23,"ysyx_22051013_rvcpu idex_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22051013_rvcpu idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu idex_ex_op2", false,-1, 63,0);
        tracep->declQuad(c+29,"ysyx_22051013_rvcpu idex_ex_imm", false,-1, 63,0);
        tracep->declBit(c+31,"ysyx_22051013_rvcpu idex_ex_rd_ena", false,-1);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu idex_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu idex_ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu idex_ex_wbctl", false,-1, 1,0);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu idex_ex_csrctl", false,-1, 3,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu idex_ex_alu_sel", false,-1, 7,0);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu ex_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+278,"ysyx_22051013_rvcpu ex_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22051013_rvcpu ex_load_ena", false,-1);
        tracep->declQuad(c+382,"ysyx_22051013_rvcpu ex_if_pc", false,-1, 63,0);
        tracep->declBit(c+280,"ysyx_22051013_rvcpu ex_if_pc_sel", false,-1);
        tracep->declQuad(c+278,"ysyx_22051013_rvcpu exls_ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu exls_ex_store_data", false,-1, 63,0);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu exls_ls_inst", false,-1, 31,0);
        tracep->declQuad(c+39,"ysyx_22051013_rvcpu exls_ls_pc", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22051013_rvcpu exls_ls_aludata", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu exls_ls_store_data", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu exls_ls_rd_ena", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu exls_ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_22051013_rvcpu exls_ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+48,"ysyx_22051013_rvcpu exls_ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+281,"ysyx_22051013_rvcpu ls_lswb_data_forward", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu ls_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+281,"ysyx_22051013_rvcpu ls_id_data_forward", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22051013_rvcpu lswb_ls_wbdata", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu lswb_wb_inst", false,-1, 31,0);
        tracep->declQuad(c+50,"ysyx_22051013_rvcpu lswb_wb_pc", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu lswb_wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+53,"ysyx_22051013_rvcpu lswb_wb_wbdata", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22051013_rvcpu lswb_wb_aludata", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22051013_rvcpu lswb_wb_rd_ena", false,-1);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu lswb_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"ysyx_22051013_rvcpu wb_reg_rd_data", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22051013_rvcpu wb_reg_rd_ena", false,-1);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu wb_reg_rd_addr", false,-1, 4,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu wb_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+285,"ysyx_22051013_rvcpu wb_id_data_forward", false,-1, 63,0);
        tracep->declQuad(c+384,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+386,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+404,"ysyx_22051013_rvcpu reg_bpu_data", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu if_valid", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu id_valid", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu ex_valid", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu ls_valid", false,-1);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu wb_ready", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu ls_ready", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu ex_ready", false,-1);
        tracep->declBit(c+287,"ysyx_22051013_rvcpu id_ready", false,-1);
        tracep->declBit(c+280,"ysyx_22051013_rvcpu ex_flush", false,-1);
        tracep->declBit(c+288,"ysyx_22051013_rvcpu id_idex_flush", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu id_ifid_flush", false,-1);
        tracep->declBit(c+407,"ysyx_22051013_rvcpu ls_lswb_flush", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu axi_ifu_master0 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu axi_ifu_master0 rst", false,-1);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu axi_ifu_master0 inst_pc", false,-1, 63,0);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu axi_ifu_master0 inst_64", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_ifu_master0 inst_not_ready", false,-1);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu axi_ifu_master0 ifu_ar_addr", false,-1, 63,0);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_ifu_master0 ifu_ar_valid", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu axi_ifu_master0 ifu_ar_ready", false,-1);
        tracep->declQuad(c+7,"ysyx_22051013_rvcpu axi_ifu_master0 ifu_r_data", false,-1, 63,0);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu axi_ifu_master0 ifu_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_ifu_master0 ifu_r_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_ifu_master0 ifu_r_ready", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_ifu_master0 rc_shakehand", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu axi_ifu_slave1 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu axi_ifu_slave1 rst", false,-1);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu axi_ifu_slave1 ifu_ar_addr", false,-1, 63,0);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_ifu_slave1 ifu_ar_valid", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu axi_ifu_slave1 ifu_ar_ready", false,-1);
        tracep->declQuad(c+7,"ysyx_22051013_rvcpu axi_ifu_slave1 ifu_r_data", false,-1, 63,0);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu axi_ifu_slave1 ifu_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_ifu_slave1 ifu_r_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_ifu_slave1 ifu_r_ready", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu axi_ifu_slave1 arc_shakehand", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_ifu_slave1 rc_shakehand", false,-1);
        tracep->declBus(c+59,"ysyx_22051013_rvcpu axi_ifu_slave1 s_read_state", false,-1, 1,0);
        tracep->declBus(c+60,"ysyx_22051013_rvcpu axi_ifu_slave1 s_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu axi_ifu_slave1 dpic_inst_i", false,-1, 63,0);
        tracep->declBus(c+408,"ysyx_22051013_rvcpu axi_ifu_slave1 rlen", false,-1, 7,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu axi_lsu_master2 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu axi_lsu_master2 rst", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu axi_lsu_master2 data_pc", false,-1, 63,0);
        tracep->declQuad(c+259,"ysyx_22051013_rvcpu axi_lsu_master2 data_i", false,-1, 63,0);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_master2 we", false,-1);
        tracep->declBit(c+255,"ysyx_22051013_rvcpu axi_lsu_master2 re", false,-1);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu axi_lsu_master2 wmask", false,-1, 7,0);
        tracep->declQuad(c+10,"ysyx_22051013_rvcpu axi_lsu_master2 data_o", false,-1, 63,0);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu axi_lsu_master2 data_not_ready", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_aw_addr", false,-1, 63,0);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_aw_valid", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_aw_ready", false,-1);
        tracep->declQuad(c+259,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_w_data", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_w_strb", false,-1, 7,0);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_w_valid", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_w_ready", false,-1);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_b_resp", false,-1, 1,0);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_b_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_b_ready", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_ar_addr", false,-1, 63,0);
        tracep->declBit(c+255,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_ar_valid", false,-1);
        tracep->declBit(c+13,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_ar_ready", false,-1);
        tracep->declQuad(c+14,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_r_data", false,-1, 63,0);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_r_resp", false,-1, 1,0);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_r_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_lsu_master2 lsu_r_ready", false,-1);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu axi_lsu_master2 bc_shakehand", false,-1);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu axi_lsu_master2 data_w_not_ready", false,-1);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu axi_lsu_master2 rc_shakehand", false,-1);
        tracep->declBit(c+64,"ysyx_22051013_rvcpu axi_lsu_master2 data_r_not_ready", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu axi_lsu_slave3 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu axi_lsu_slave3 rst", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_ar_addr", false,-1, 63,0);
        tracep->declBit(c+255,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_ar_valid", false,-1);
        tracep->declBit(c+13,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_ar_ready", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_aw_addr", false,-1, 63,0);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_aw_valid", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_aw_ready", false,-1);
        tracep->declQuad(c+259,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_w_data", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_w_strb", false,-1, 7,0);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_w_valid", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_w_ready", false,-1);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_b_resp", false,-1, 1,0);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_b_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_b_ready", false,-1);
        tracep->declQuad(c+14,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_r_data", false,-1, 63,0);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_r_resp", false,-1, 1,0);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_r_valid", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu axi_lsu_slave3 lsu_r_ready", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_slave3 awc_shakehand", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu axi_lsu_slave3 wc_shakehand", false,-1);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu axi_lsu_slave3 bc_shakehand", false,-1);
        tracep->declBus(c+65,"ysyx_22051013_rvcpu axi_lsu_slave3 s_write_state", false,-1, 1,0);
        tracep->declBus(c+237,"ysyx_22051013_rvcpu axi_lsu_slave3 s_write_state_next", false,-1, 1,0);
        tracep->declBit(c+289,"ysyx_22051013_rvcpu axi_lsu_slave3 arc_shakehand", false,-1);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu axi_lsu_slave3 rc_shakehand", false,-1);
        tracep->declBus(c+66,"ysyx_22051013_rvcpu axi_lsu_slave3 s_read_state", false,-1, 1,0);
        tracep->declBus(c+238,"ysyx_22051013_rvcpu axi_lsu_slave3 s_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+67,"ysyx_22051013_rvcpu axi_lsu_slave3 dpic_read_data", false,-1, 63,0);
        tracep->declBus(c+408,"ysyx_22051013_rvcpu axi_lsu_slave3 rlen", false,-1, 7,0);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu bpu_static rst", false,-1);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu bpu_static inst", false,-1, 31,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu bpu_static pc_i", false,-1, 63,0);
        tracep->declQuad(c+377,"ysyx_22051013_rvcpu bpu_static pc_o", false,-1, 63,0);
        tracep->declBit(c+376,"ysyx_22051013_rvcpu bpu_static bpu_jump", false,-1);
        tracep->declBus(c+69,"ysyx_22051013_rvcpu bpu_static j_imm", false,-1, 20,1);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu bpu_static b_imm", false,-1, 12,1);
        tracep->declBus(c+71,"ysyx_22051013_rvcpu bpu_static opcode", false,-1, 6,0);
        tracep->declBit(c+388,"ysyx_22051013_rvcpu bpu_static inst_jal", false,-1);
        tracep->declBit(c+290,"ysyx_22051013_rvcpu bpu_static inst_bxx", false,-1);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu bpu_static op1", false,-1, 63,0);
        tracep->declQuad(c+389,"ysyx_22051013_rvcpu bpu_static op2", false,-1, 63,0);
        tracep->declQuad(c+391,"ysyx_22051013_rvcpu bpu_static pr_pc", false,-1, 63,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu ifu0 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu ifu0 rst", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu ifu0 id_pc_jump", false,-1);
        tracep->declQuad(c+234,"ysyx_22051013_rvcpu ifu0 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+280,"ysyx_22051013_rvcpu ifu0 ex_pc_jump", false,-1);
        tracep->declQuad(c+382,"ysyx_22051013_rvcpu ifu0 ex_pc_i", false,-1, 63,0);
        tracep->declQuad(c+377,"ysyx_22051013_rvcpu ifu0 bpu_pc_i", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu ifu0 inst_not_ready", false,-1);
        tracep->declBit(c+287,"ysyx_22051013_rvcpu ifu0 id_ready", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu ifu0 if_valid", false,-1);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu ifu0 inst_i", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu ifu0 pc_o", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22051013_rvcpu ifu0 jump_sign", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu reg_ifid1 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu reg_ifid1 rst", false,-1);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu reg_ifid1 if_inst", false,-1, 31,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu reg_ifid1 if_pc", false,-1, 63,0);
        tracep->declBit(c+376,"ysyx_22051013_rvcpu reg_ifid1 bpu_jump", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu reg_ifid1 if_valid", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu reg_ifid1 id_flush", false,-1);
        tracep->declBit(c+280,"ysyx_22051013_rvcpu reg_ifid1 ex_flush", false,-1);
        tracep->declBit(c+287,"ysyx_22051013_rvcpu reg_ifid1 id_ready", false,-1);
        tracep->declBit(c+21,"ysyx_22051013_rvcpu reg_ifid1 id_jump", false,-1);
        tracep->declBus(c+18,"ysyx_22051013_rvcpu reg_ifid1 id_inst", false,-1, 31,0);
        tracep->declQuad(c+19,"ysyx_22051013_rvcpu reg_ifid1 id_pc", false,-1, 63,0);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu idu2 rst", false,-1);
        tracep->declBus(c+18,"ysyx_22051013_rvcpu idu2 inst_i", false,-1, 31,0);
        tracep->declQuad(c+19,"ysyx_22051013_rvcpu idu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22051013_rvcpu idu2 bpu_jump", false,-1);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu idu2 ex_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+278,"ysyx_22051013_rvcpu idu2 ex_data_forward", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu idu2 ls_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+281,"ysyx_22051013_rvcpu idu2 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu idu2 wb_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+285,"ysyx_22051013_rvcpu idu2 wb_data_forward", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22051013_rvcpu idu2 ex_load_ena", false,-1);
        tracep->declBus(c+261,"ysyx_22051013_rvcpu idu2 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+263,"ysyx_22051013_rvcpu idu2 rs1_ena", false,-1);
        tracep->declQuad(c+384,"ysyx_22051013_rvcpu idu2 rs1_data", false,-1, 63,0);
        tracep->declBus(c+262,"ysyx_22051013_rvcpu idu2 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu idu2 rs2_ena", false,-1);
        tracep->declQuad(c+386,"ysyx_22051013_rvcpu idu2 rs2_data", false,-1, 63,0);
        tracep->declBit(c+273,"ysyx_22051013_rvcpu idu2 rd_ena", false,-1);
        tracep->declBus(c+236,"ysyx_22051013_rvcpu idu2 rd_addr", false,-1, 4,0);
        tracep->declBus(c+277,"ysyx_22051013_rvcpu idu2 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+274,"ysyx_22051013_rvcpu idu2 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+275,"ysyx_22051013_rvcpu idu2 wbctl_o", false,-1, 1,0);
        tracep->declBus(c+276,"ysyx_22051013_rvcpu idu2 csr_ctl", false,-1, 3,0);
        tracep->declBit(c+266,"ysyx_22051013_rvcpu idu2 load_flag", false,-1);
        tracep->declQuad(c+267,"ysyx_22051013_rvcpu idu2 op1", false,-1, 63,0);
        tracep->declQuad(c+269,"ysyx_22051013_rvcpu idu2 op2", false,-1, 63,0);
        tracep->declQuad(c+271,"ysyx_22051013_rvcpu idu2 imm", false,-1, 63,0);
        tracep->declBus(c+379,"ysyx_22051013_rvcpu idu2 inst_o", false,-1, 31,0);
        tracep->declQuad(c+380,"ysyx_22051013_rvcpu idu2 pc_o", false,-1, 63,0);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu idu2 ex_ready", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu idu2 if_valid", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu idu2 id_flush", false,-1);
        tracep->declBit(c+288,"ysyx_22051013_rvcpu idu2 id_ex_flush", false,-1);
        tracep->declBit(c+287,"ysyx_22051013_rvcpu idu2 id_ready", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu idu2 id_valid", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu idu2 jump_ena", false,-1);
        tracep->declQuad(c+234,"ysyx_22051013_rvcpu idu2 jump_pc", false,-1, 63,0);
        tracep->declBus(c+73,"ysyx_22051013_rvcpu idu2 rd", false,-1, 4,0);
        tracep->declBus(c+74,"ysyx_22051013_rvcpu idu2 rs1", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_22051013_rvcpu idu2 rs2", false,-1, 4,0);
        tracep->declBit(c+291,"ysyx_22051013_rvcpu idu2 imm_ena", false,-1);
        tracep->declBit(c+292,"ysyx_22051013_rvcpu idu2 branch", false,-1);
        tracep->declBit(c+393,"ysyx_22051013_rvcpu idu2 op1_relate", false,-1);
        tracep->declBit(c+394,"ysyx_22051013_rvcpu idu2 op2_relate", false,-1);
        tracep->declBit(c+288,"ysyx_22051013_rvcpu idu2 id_stall_ena", false,-1);
        tracep->declBit(c+239,"ysyx_22051013_rvcpu idu2 ex_op1_forward", false,-1);
        tracep->declBit(c+240,"ysyx_22051013_rvcpu idu2 ls_op1_forward", false,-1);
        tracep->declBit(c+241,"ysyx_22051013_rvcpu idu2 wb_op1_forward", false,-1);
        tracep->declBit(c+242,"ysyx_22051013_rvcpu idu2 ex_op2_forward", false,-1);
        tracep->declBit(c+243,"ysyx_22051013_rvcpu idu2 ls_op2_forward", false,-1);
        tracep->declBit(c+244,"ysyx_22051013_rvcpu idu2 wb_op2_forward", false,-1);
        tracep->declBit(c+293,"ysyx_22051013_rvcpu idu2 ex_branch", false,-1);
        tracep->declQuad(c+294,"ysyx_22051013_rvcpu idu2 op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+296,"ysyx_22051013_rvcpu idu2 op1_lt_op2", false,-1);
        tracep->declBit(c+297,"ysyx_22051013_rvcpu idu2 csr_wr_ena", false,-1);
        tracep->declBit(c+298,"ysyx_22051013_rvcpu idu2 csr_rd_ena", false,-1);
        tracep->declBit(c+299,"ysyx_22051013_rvcpu idu2 mret_ena", false,-1);
        tracep->declBit(c+300,"ysyx_22051013_rvcpu idu2 ecall_ena", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu idu2 decode rst", false,-1);
        tracep->declBus(c+18,"ysyx_22051013_rvcpu idu2 decode inst", false,-1, 31,0);
        tracep->declBit(c+263,"ysyx_22051013_rvcpu idu2 decode rs1_ena", false,-1);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu idu2 decode rs2_ena", false,-1);
        tracep->declBus(c+275,"ysyx_22051013_rvcpu idu2 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+274,"ysyx_22051013_rvcpu idu2 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+292,"ysyx_22051013_rvcpu idu2 decode branch", false,-1);
        tracep->declQuad(c+271,"ysyx_22051013_rvcpu idu2 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+291,"ysyx_22051013_rvcpu idu2 decode imm_ena", false,-1);
        tracep->declBit(c+266,"ysyx_22051013_rvcpu idu2 decode load", false,-1);
        tracep->declBus(c+277,"ysyx_22051013_rvcpu idu2 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+76,"ysyx_22051013_rvcpu idu2 decode opcode", false,-1, 6,0);
        tracep->declBus(c+77,"ysyx_22051013_rvcpu idu2 decode funct3", false,-1, 2,0);
        tracep->declBus(c+78,"ysyx_22051013_rvcpu idu2 decode funct7", false,-1, 6,0);
        tracep->declBus(c+79,"ysyx_22051013_rvcpu idu2 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+80,"ysyx_22051013_rvcpu idu2 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+81,"ysyx_22051013_rvcpu idu2 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+82,"ysyx_22051013_rvcpu idu2 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+83,"ysyx_22051013_rvcpu idu2 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+301,"ysyx_22051013_rvcpu idu2 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+302,"ysyx_22051013_rvcpu idu2 decode inst_lui", false,-1);
        tracep->declBit(c+303,"ysyx_22051013_rvcpu idu2 decode inst_auipc", false,-1);
        tracep->declBit(c+304,"ysyx_22051013_rvcpu idu2 decode inst_jal", false,-1);
        tracep->declBit(c+305,"ysyx_22051013_rvcpu idu2 decode inst_jalr", false,-1);
        tracep->declBit(c+306,"ysyx_22051013_rvcpu idu2 decode inst_sb", false,-1);
        tracep->declBit(c+307,"ysyx_22051013_rvcpu idu2 decode inst_sh", false,-1);
        tracep->declBit(c+308,"ysyx_22051013_rvcpu idu2 decode inst_sw", false,-1);
        tracep->declBit(c+309,"ysyx_22051013_rvcpu idu2 decode inst_sd", false,-1);
        tracep->declBit(c+310,"ysyx_22051013_rvcpu idu2 decode inst_lb", false,-1);
        tracep->declBit(c+311,"ysyx_22051013_rvcpu idu2 decode inst_lh", false,-1);
        tracep->declBit(c+312,"ysyx_22051013_rvcpu idu2 decode inst_lw", false,-1);
        tracep->declBit(c+313,"ysyx_22051013_rvcpu idu2 decode inst_ld", false,-1);
        tracep->declBit(c+314,"ysyx_22051013_rvcpu idu2 decode inst_lbu", false,-1);
        tracep->declBit(c+315,"ysyx_22051013_rvcpu idu2 decode inst_lhu", false,-1);
        tracep->declBit(c+316,"ysyx_22051013_rvcpu idu2 decode inst_lwu", false,-1);
        tracep->declBit(c+317,"ysyx_22051013_rvcpu idu2 decode inst_beq", false,-1);
        tracep->declBit(c+318,"ysyx_22051013_rvcpu idu2 decode inst_bne", false,-1);
        tracep->declBit(c+319,"ysyx_22051013_rvcpu idu2 decode inst_blt", false,-1);
        tracep->declBit(c+320,"ysyx_22051013_rvcpu idu2 decode inst_bge", false,-1);
        tracep->declBit(c+321,"ysyx_22051013_rvcpu idu2 decode inst_bltu", false,-1);
        tracep->declBit(c+322,"ysyx_22051013_rvcpu idu2 decode inst_bgeu", false,-1);
        tracep->declBit(c+323,"ysyx_22051013_rvcpu idu2 decode inst_add", false,-1);
        tracep->declBit(c+324,"ysyx_22051013_rvcpu idu2 decode inst_sub", false,-1);
        tracep->declBit(c+325,"ysyx_22051013_rvcpu idu2 decode inst_sll", false,-1);
        tracep->declBit(c+326,"ysyx_22051013_rvcpu idu2 decode inst_slt", false,-1);
        tracep->declBit(c+327,"ysyx_22051013_rvcpu idu2 decode inst_sltu", false,-1);
        tracep->declBit(c+328,"ysyx_22051013_rvcpu idu2 decode inst_xor", false,-1);
        tracep->declBit(c+329,"ysyx_22051013_rvcpu idu2 decode inst_srl", false,-1);
        tracep->declBit(c+330,"ysyx_22051013_rvcpu idu2 decode inst_sra", false,-1);
        tracep->declBit(c+331,"ysyx_22051013_rvcpu idu2 decode inst_or", false,-1);
        tracep->declBit(c+332,"ysyx_22051013_rvcpu idu2 decode inst_and", false,-1);
        tracep->declBit(c+333,"ysyx_22051013_rvcpu idu2 decode inst_div", false,-1);
        tracep->declBit(c+334,"ysyx_22051013_rvcpu idu2 decode inst_divu", false,-1);
        tracep->declBit(c+335,"ysyx_22051013_rvcpu idu2 decode inst_mul", false,-1);
        tracep->declBit(c+336,"ysyx_22051013_rvcpu idu2 decode inst_mulh", false,-1);
        tracep->declBit(c+337,"ysyx_22051013_rvcpu idu2 decode inst_mulhsu", false,-1);
        tracep->declBit(c+338,"ysyx_22051013_rvcpu idu2 decode inst_mulhu", false,-1);
        tracep->declBit(c+339,"ysyx_22051013_rvcpu idu2 decode inst_rem", false,-1);
        tracep->declBit(c+340,"ysyx_22051013_rvcpu idu2 decode inst_remu", false,-1);
        tracep->declBit(c+245,"ysyx_22051013_rvcpu idu2 decode inst_addi", false,-1);
        tracep->declBit(c+246,"ysyx_22051013_rvcpu idu2 decode inst_slti", false,-1);
        tracep->declBit(c+247,"ysyx_22051013_rvcpu idu2 decode inst_sltiu", false,-1);
        tracep->declBit(c+248,"ysyx_22051013_rvcpu idu2 decode inst_xori", false,-1);
        tracep->declBit(c+249,"ysyx_22051013_rvcpu idu2 decode inst_ori", false,-1);
        tracep->declBit(c+250,"ysyx_22051013_rvcpu idu2 decode inst_andi", false,-1);
        tracep->declBit(c+251,"ysyx_22051013_rvcpu idu2 decode inst_slli", false,-1);
        tracep->declBit(c+252,"ysyx_22051013_rvcpu idu2 decode inst_srli", false,-1);
        tracep->declBit(c+341,"ysyx_22051013_rvcpu idu2 decode inst_srai", false,-1);
        tracep->declBit(c+342,"ysyx_22051013_rvcpu idu2 decode inst_addiw", false,-1);
        tracep->declBit(c+343,"ysyx_22051013_rvcpu idu2 decode inst_slliw", false,-1);
        tracep->declBit(c+344,"ysyx_22051013_rvcpu idu2 decode inst_srliw", false,-1);
        tracep->declBit(c+345,"ysyx_22051013_rvcpu idu2 decode inst_sraiw", false,-1);
        tracep->declBit(c+346,"ysyx_22051013_rvcpu idu2 decode inst_addw", false,-1);
        tracep->declBit(c+347,"ysyx_22051013_rvcpu idu2 decode inst_subw", false,-1);
        tracep->declBit(c+348,"ysyx_22051013_rvcpu idu2 decode inst_sllw", false,-1);
        tracep->declBit(c+349,"ysyx_22051013_rvcpu idu2 decode inst_srlw", false,-1);
        tracep->declBit(c+350,"ysyx_22051013_rvcpu idu2 decode inst_sraw", false,-1);
        tracep->declBit(c+351,"ysyx_22051013_rvcpu idu2 decode inst_divuw", false,-1);
        tracep->declBit(c+352,"ysyx_22051013_rvcpu idu2 decode inst_divw", false,-1);
        tracep->declBit(c+353,"ysyx_22051013_rvcpu idu2 decode inst_mulw", false,-1);
        tracep->declBit(c+354,"ysyx_22051013_rvcpu idu2 decode inst_remuw", false,-1);
        tracep->declBit(c+355,"ysyx_22051013_rvcpu idu2 decode inst_remw", false,-1);
        tracep->declBit(c+356,"ysyx_22051013_rvcpu idu2 decode inst_ecall", false,-1);
        tracep->declBit(c+357,"ysyx_22051013_rvcpu idu2 decode inst_mret", false,-1);
        tracep->declBit(c+358,"ysyx_22051013_rvcpu idu2 decode inst_csrrw", false,-1);
        tracep->declBit(c+359,"ysyx_22051013_rvcpu idu2 decode inst_csrrs", false,-1);
        tracep->declBit(c+360,"ysyx_22051013_rvcpu idu2 decode inst_csrrc", false,-1);
        tracep->declBit(c+361,"ysyx_22051013_rvcpu idu2 decode inst_csrrwi", false,-1);
        tracep->declBit(c+362,"ysyx_22051013_rvcpu idu2 decode inst_csrrsi", false,-1);
        tracep->declBit(c+363,"ysyx_22051013_rvcpu idu2 decode inst_csrrci", false,-1);
        tracep->declBit(c+364,"ysyx_22051013_rvcpu idu2 decode inst_ebreak", false,-1);
        tracep->declBit(c+365,"ysyx_22051013_rvcpu idu2 decode inst_csr", false,-1);
        tracep->declBit(c+366,"ysyx_22051013_rvcpu idu2 decode jump", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu reg_idex3 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu reg_idex3 rst", false,-1);
        tracep->declBus(c+379,"ysyx_22051013_rvcpu reg_idex3 id_inst", false,-1, 31,0);
        tracep->declQuad(c+380,"ysyx_22051013_rvcpu reg_idex3 id_pc", false,-1, 63,0);
        tracep->declQuad(c+267,"ysyx_22051013_rvcpu reg_idex3 id_op1", false,-1, 63,0);
        tracep->declQuad(c+269,"ysyx_22051013_rvcpu reg_idex3 id_op2", false,-1, 63,0);
        tracep->declQuad(c+271,"ysyx_22051013_rvcpu reg_idex3 id_imm", false,-1, 63,0);
        tracep->declBit(c+273,"ysyx_22051013_rvcpu reg_idex3 id_rd_ena", false,-1);
        tracep->declBus(c+236,"ysyx_22051013_rvcpu reg_idex3 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+277,"ysyx_22051013_rvcpu reg_idex3 id_alusrc", false,-1, 7,0);
        tracep->declBus(c+274,"ysyx_22051013_rvcpu reg_idex3 id_lsctl", false,-1, 3,0);
        tracep->declBus(c+275,"ysyx_22051013_rvcpu reg_idex3 id_wbctl", false,-1, 1,0);
        tracep->declBus(c+276,"ysyx_22051013_rvcpu reg_idex3 id_csrctl", false,-1, 3,0);
        tracep->declBit(c+266,"ysyx_22051013_rvcpu reg_idex3 id_load_flag", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu reg_idex3 id_valid", false,-1);
        tracep->declBit(c+288,"ysyx_22051013_rvcpu reg_idex3 id_flush", false,-1);
        tracep->declBit(c+280,"ysyx_22051013_rvcpu reg_idex3 ex_flush", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu reg_idex3 ex_ready", false,-1);
        tracep->declBus(c+22,"ysyx_22051013_rvcpu reg_idex3 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+23,"ysyx_22051013_rvcpu reg_idex3 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22051013_rvcpu reg_idex3 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu reg_idex3 ex_op2", false,-1, 63,0);
        tracep->declQuad(c+29,"ysyx_22051013_rvcpu reg_idex3 ex_imm", false,-1, 63,0);
        tracep->declBit(c+31,"ysyx_22051013_rvcpu reg_idex3 ex_rd_ena", false,-1);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu reg_idex3 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu reg_idex3 ex_alusrc", false,-1, 7,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu reg_idex3 ex_lsctl", false,-1, 3,0);
        tracep->declBit(c+37,"ysyx_22051013_rvcpu reg_idex3 ex_load_flag", false,-1);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu reg_idex3 ex_csrctl", false,-1, 3,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu reg_idex3 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu exu4 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu exu4 rst", false,-1);
        tracep->declQuad(c+25,"ysyx_22051013_rvcpu exu4 op1", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu exu4 op2", false,-1, 63,0);
        tracep->declQuad(c+29,"ysyx_22051013_rvcpu exu4 imm", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_22051013_rvcpu exu4 pc_i", false,-1, 63,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu exu4 alu_sel", false,-1, 7,0);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu exu4 csr_ctl", false,-1, 3,0);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu exu4 ls_ready", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu exu4 id_valid", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu exu4 ex_valid", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu exu4 ex_ready", false,-1);
        tracep->declBit(c+280,"ysyx_22051013_rvcpu exu4 ex_flush", false,-1);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu exu4 store_data", false,-1, 63,0);
        tracep->declBit(c+280,"ysyx_22051013_rvcpu exu4 ex_jump_ena", false,-1);
        tracep->declQuad(c+382,"ysyx_22051013_rvcpu exu4 ex_jump_pc", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22051013_rvcpu exu4 exu_res", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22051013_rvcpu exu4 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22051013_rvcpu exu4 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22051013_rvcpu exu4 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22051013_rvcpu exu4 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+92,"ysyx_22051013_rvcpu exu4 op1_lt_op2", false,-1);
        tracep->declQuad(c+93,"ysyx_22051013_rvcpu exu4 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22051013_rvcpu exu4 sllw", false,-1, 31,0);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu exu4 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+98,"ysyx_22051013_rvcpu exu4 srlw", false,-1, 31,0);
        tracep->declQuad(c+99,"ysyx_22051013_rvcpu exu4 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+101,"ysyx_22051013_rvcpu exu4 sraw", false,-1, 31,0);
        tracep->declQuad(c+102,"ysyx_22051013_rvcpu exu4 op1_sraw_op2", false,-1, 63,0);
        tracep->declArray(c+104,"ysyx_22051013_rvcpu exu4 mul", false,-1, 127,0);
        tracep->declQuad(c+108,"ysyx_22051013_rvcpu exu4 op1_mul_op2", false,-1, 63,0);
        tracep->declQuad(c+110,"ysyx_22051013_rvcpu exu4 op1_mulh_op2", false,-1, 63,0);
        tracep->declQuad(c+112,"ysyx_22051013_rvcpu exu4 op1_mulw_op2", false,-1, 63,0);
        tracep->declQuad(c+114,"ysyx_22051013_rvcpu exu4 div", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22051013_rvcpu exu4 divw", false,-1, 31,0);
        tracep->declQuad(c+117,"ysyx_22051013_rvcpu exu4 op1_divw_op2", false,-1, 63,0);
        tracep->declQuad(c+119,"ysyx_22051013_rvcpu exu4 op1_divuw_op2", false,-1, 63,0);
        tracep->declQuad(c+121,"ysyx_22051013_rvcpu exu4 rem", false,-1, 63,0);
        tracep->declBus(c+123,"ysyx_22051013_rvcpu exu4 remw", false,-1, 31,0);
        tracep->declQuad(c+124,"ysyx_22051013_rvcpu exu4 op1_remw_op2", false,-1, 63,0);
        tracep->declQuad(c+126,"ysyx_22051013_rvcpu exu4 op1_remuw_op2", false,-1, 63,0);
        tracep->declQuad(c+367,"ysyx_22051013_rvcpu exu4 alu_res", false,-1, 63,0);
        tracep->declBus(c+128,"ysyx_22051013_rvcpu exu4 csr_addr", false,-1, 11,0);
        tracep->declQuad(c+129,"ysyx_22051013_rvcpu exu4 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22051013_rvcpu exu4 write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22051013_rvcpu exu4 mcause_value", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22051013_rvcpu exu4 set_data", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22051013_rvcpu exu4 clear_data", false,-1, 63,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu exu4 csr_operate clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu exu4 csr_operate rst", false,-1);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu exu4 csr_operate csr_ctl", false,-1, 3,0);
        tracep->declBus(c+128,"ysyx_22051013_rvcpu exu4 csr_operate csr_addr", false,-1, 11,0);
        tracep->declQuad(c+133,"ysyx_22051013_rvcpu exu4 csr_operate mcause_value", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22051013_rvcpu exu4 csr_operate write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22051013_rvcpu exu4 csr_operate read_csr_data", false,-1, 63,0);
        tracep->declBit(c+139,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_rd", false,-1);
        tracep->declBit(c+140,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_wr", false,-1);
        tracep->declBit(c+141,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mie", false,-1);
        tracep->declBit(c+142,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mpie", false,-1);
        tracep->declBus(c+143,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mpp", false,-1, 1,0);
        tracep->declQuad(c+144,"ysyx_22051013_rvcpu exu4 csr_operate mstatus", false,-1, 63,0);
        tracep->declBit(c+146,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_ie_ena", false,-1);
        tracep->declBit(c+147,"ysyx_22051013_rvcpu exu4 csr_operate mie_set", false,-1);
        tracep->declBit(c+148,"ysyx_22051013_rvcpu exu4 csr_operate mpie_set", false,-1);
        tracep->declBus(c+149,"ysyx_22051013_rvcpu exu4 csr_operate mpp_set", false,-1, 1,0);
        tracep->declBit(c+150,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_rd", false,-1);
        tracep->declBit(c+151,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_wr", false,-1);
        tracep->declQuad(c+152,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_base", false,-1, 63,2);
        tracep->declBus(c+402,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+154,"ysyx_22051013_rvcpu exu4 csr_operate mtvec", false,-1, 63,0);
        tracep->declBit(c+156,"ysyx_22051013_rvcpu exu4 csr_operate mepc_rd", false,-1);
        tracep->declBit(c+157,"ysyx_22051013_rvcpu exu4 csr_operate mepc_wr", false,-1);
        tracep->declQuad(c+158,"ysyx_22051013_rvcpu exu4 csr_operate mepc", false,-1, 63,0);
        tracep->declBit(c+160,"ysyx_22051013_rvcpu exu4 csr_operate mcause_rd", false,-1);
        tracep->declBit(c+161,"ysyx_22051013_rvcpu exu4 csr_operate mcause_wr", false,-1);
        tracep->declQuad(c+162,"ysyx_22051013_rvcpu exu4 csr_operate mcause", false,-1, 63,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu reg_exls5 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu reg_exls5 rst", false,-1);
        tracep->declBus(c+22,"ysyx_22051013_rvcpu reg_exls5 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+23,"ysyx_22051013_rvcpu reg_exls5 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu reg_exls5 ex_store_data", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22051013_rvcpu reg_exls5 ex_exu_res", false,-1, 63,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu reg_exls5 ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu reg_exls5 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+31,"ysyx_22051013_rvcpu reg_exls5 ex_rd_ena", false,-1);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu reg_exls5 ex_valid", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu reg_exls5 ls_ready", false,-1);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu reg_exls5 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+39,"ysyx_22051013_rvcpu reg_exls5 ls_pc", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu reg_exls5 ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22051013_rvcpu reg_exls5 ls_exu_res", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22051013_rvcpu reg_exls5 ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+48,"ysyx_22051013_rvcpu reg_exls5 ls_wbctl", false,-1, 1,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu reg_exls5 ls_rd_ena", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_exls5 ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+278,"ysyx_22051013_rvcpu reg_exls5 ex_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu lsu6 rst", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu lsu6 clk", false,-1);
        tracep->declQuad(c+41,"ysyx_22051013_rvcpu lsu6 alu_res", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu lsu6 store_data", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22051013_rvcpu lsu6 ls_ctl", false,-1, 3,0);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu lsu6 wb_ready", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu lsu6 ex_valid", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu lsu6 ls_ready", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu lsu6 ls_valid", false,-1);
        tracep->declBit(c+254,"ysyx_22051013_rvcpu lsu6 we", false,-1);
        tracep->declBit(c+255,"ysyx_22051013_rvcpu lsu6 re", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu lsu6 data_pc", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22051013_rvcpu lsu6 data_i", false,-1, 63,0);
        tracep->declQuad(c+259,"ysyx_22051013_rvcpu lsu6 data_o", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22051013_rvcpu lsu6 wlen", false,-1, 7,0);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu lsu6 data_not_ready", false,-1);
        tracep->declQuad(c+281,"ysyx_22051013_rvcpu lsu6 ls_data_forward", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22051013_rvcpu lsu6 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+395,"ysyx_22051013_rvcpu lsu6 raddr", false,-1, 63,0);
        tracep->declQuad(c+397,"ysyx_22051013_rvcpu lsu6 waddr", false,-1, 63,0);
        tracep->declQuad(c+369,"ysyx_22051013_rvcpu lsu6 load_data", false,-1, 63,0);
        tracep->declBus(c+164,"ysyx_22051013_rvcpu lsu6 byte_sel", false,-1, 2,0);
        tracep->declBus(c+165,"ysyx_22051013_rvcpu lsu6 half_sel", false,-1, 1,0);
        tracep->declBit(c+166,"ysyx_22051013_rvcpu lsu6 word_sel", false,-1);
        tracep->declBus(c+371,"ysyx_22051013_rvcpu lsu6 data_byte", false,-1, 7,0);
        tracep->declBus(c+372,"ysyx_22051013_rvcpu lsu6 data_half", false,-1, 15,0);
        tracep->declBus(c+167,"ysyx_22051013_rvcpu lsu6 data_word", false,-1, 31,0);
        tracep->declBus(c+373,"ysyx_22051013_rvcpu lsu6 sb_mask", false,-1, 7,0);
        tracep->declBus(c+399,"ysyx_22051013_rvcpu lsu6 sh_mask", false,-1, 7,0);
        tracep->declBus(c+400,"ysyx_22051013_rvcpu lsu6 sw_mask", false,-1, 7,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu reg_lswb7 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu reg_lswb7 rst", false,-1);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu reg_lswb7 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+39,"ysyx_22051013_rvcpu reg_lswb7 ls_pc", false,-1, 63,0);
        tracep->declBus(c+48,"ysyx_22051013_rvcpu reg_lswb7 ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+41,"ysyx_22051013_rvcpu reg_lswb7 ls_exu_res", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22051013_rvcpu reg_lswb7 ls_wbdata", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_ena", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+281,"ysyx_22051013_rvcpu reg_lswb7 ls_data_forward", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu reg_lswb7 ls_valid", false,-1);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu reg_lswb7 wb_ready", false,-1);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu reg_lswb7 wb_inst", false,-1, 31,0);
        tracep->declQuad(c+50,"ysyx_22051013_rvcpu reg_lswb7 wb_pc", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_lswb7 wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+55,"ysyx_22051013_rvcpu reg_lswb7 wb_exu_res", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22051013_rvcpu reg_lswb7 wb_wbdata", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_ena", false,-1);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_addr", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+281,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu wbu8 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu wbu8 rst", false,-1);
        tracep->declQuad(c+53,"ysyx_22051013_rvcpu wbu8 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu wbu8 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+55,"ysyx_22051013_rvcpu wbu8 exu_res", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu wbu8 inst_i", false,-1, 31,0);
        tracep->declQuad(c+50,"ysyx_22051013_rvcpu wbu8 pc_i", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22051013_rvcpu wbu8 rd_ena", false,-1);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu wbu8 rd_addr", false,-1, 4,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu wbu8 ls_valid", false,-1);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu wbu8 wb_ready", false,-1);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu wbu8 wb_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+285,"ysyx_22051013_rvcpu wbu8 wb_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22051013_rvcpu wbu8 wb_rd_ena", false,-1);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu wbu8 wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"ysyx_22051013_rvcpu wbu8 wb_data", false,-1, 63,0);
        tracep->declBit(c+168,"ysyx_22051013_rvcpu wbu8 ebreak_ena", false,-1);
        tracep->declQuad(c+409,"ysyx_22051013_rvcpu wbu8 pc_zero", false,-1, 63,0);
        tracep->declBus(c+411,"ysyx_22051013_rvcpu wbu8 inst_zero", false,-1, 31,0);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu reg9 clk", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu reg9 rst", false,-1);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu reg9 waddr", false,-1, 4,0);
        tracep->declQuad(c+285,"ysyx_22051013_rvcpu reg9 wdata", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22051013_rvcpu reg9 wen", false,-1);
        tracep->declBus(c+261,"ysyx_22051013_rvcpu reg9 raddr1", false,-1, 4,0);
        tracep->declQuad(c+384,"ysyx_22051013_rvcpu reg9 rdata1", false,-1, 63,0);
        tracep->declBit(c+263,"ysyx_22051013_rvcpu reg9 ren1", false,-1);
        tracep->declBus(c+262,"ysyx_22051013_rvcpu reg9 raddr2", false,-1, 4,0);
        tracep->declQuad(c+386,"ysyx_22051013_rvcpu reg9 rdata2", false,-1, 63,0);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu reg9 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+169+i*2,"ysyx_22051013_rvcpu reg9 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+233,"ysyx_22051013_rvcpu reg9 i", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc),64);
        tracep->fullBit(oldp+6,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))));
        tracep->fullQData(oldp+7,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__dpic_inst_i
                                    : 0ULL)),64);
        tracep->fullBit(oldp+9,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))));
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_read_data),64);
        tracep->fullBit(oldp+12,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_write_state))));
        tracep->fullBit(oldp+13,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state))));
        tracep->fullQData(oldp+14,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__dpic_read_data
                                     : 0ULL)),64);
        tracep->fullBit(oldp+16,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state))));
        tracep->fullIData(oldp+17,((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst)),32);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
        tracep->fullIData(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
        tracep->fullBit(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl),4);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
        tracep->fullIData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
        tracep->fullCData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
        tracep->fullIData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state),2);
        tracep->fullCData(oldp+60,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                     ? ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                         ? 2U : 1U)
                                     : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__s_read_state))
                                             ? 1U : 2U)
                                         : 1U))),2);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ifu_slave1__DOT__dpic_inst_i),64);
        tracep->fullBit(oldp+63,((3U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_write_state))));
        tracep->fullBit(oldp+64,((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state))));
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_write_state),2);
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state),2);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__dpic_read_data),64);
        tracep->fullIData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
        tracep->fullSData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
        tracep->fullCData(oldp+71,((0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst))),7);
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__ifu0__DOT__jump_sign));
        tracep->fullCData(oldp+73,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+74,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+75,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+76,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
        tracep->fullCData(oldp+77,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+78,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                    >> 0x19U)),7);
        tracep->fullSData(oldp+79,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                    >> 0x14U)),12);
        tracep->fullIData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
        tracep->fullIData(oldp+81,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                    >> 0xcU)),20);
        tracep->fullSData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
        tracep->fullSData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+90,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+95,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+98,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
        tracep->fullWData(oldp+104,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul),128);
        tracep->fullQData(oldp+108,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+110,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[2U])))),64);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U] 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div),64);
        tracep->fullIData(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw),32);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw)))),64);
        tracep->fullQData(oldp+119,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)))),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem),64);
        tracep->fullIData(oldp+123,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw),32);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw)))),64);
        tracep->fullQData(oldp+126,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem)))),64);
        tracep->fullSData(oldp+128,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr),12);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value),64);
        tracep->fullQData(oldp+135,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+137,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+139,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr));
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie));
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie));
        tracep->fullCData(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp),2);
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus),64);
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena));
        tracep->fullBit(oldp+147,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 1U)) 
                                         & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))))));
        tracep->fullBit(oldp+148,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))))));
        tracep->fullCData(oldp+149,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                      ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                                 >> 0xdU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        tracep->fullBit(oldp+150,((1U & (((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 2U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullBit(oldp+151,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base),62);
        tracep->fullQData(oldp+154,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+156,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))));
        tracep->fullBit(oldp+157,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 3U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc),64);
        tracep->fullBit(oldp+160,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+161,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause),64);
        tracep->fullCData(oldp+164,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
        tracep->fullCData(oldp+165,((3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+166,((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                 >> 2U)))));
        tracep->fullIData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
        tracep->fullBit(oldp+168,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
        tracep->fullIData(oldp+233,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        tracep->fullQData(oldp+234,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                      ? ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                          ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                             + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                              ? (4ULL 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)
                                              : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+236,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                      ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullCData(oldp+237,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_write_state))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_we)
                                          ? 3U : 1U)
                                      : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_write_state))
                                          ? ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_write_state))
                                              ? 1U : 3U)
                                          : 1U))),2);
        tracep->fullCData(oldp+238,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__arc_shakehand)
                                          ? 2U : 1U)
                                      : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state))
                                          ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__s_read_state))
                                              ? 1U : 2U)
                                          : 1U))),2);
        tracep->fullBit(oldp+239,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                        | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+240,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+241,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+242,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                        | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+243,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+244,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+245,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+246,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+247,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+248,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+249,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+250,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+251,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+252,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__data_not_ready));
        tracep->fullBit(oldp+254,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_we));
        tracep->fullBit(oldp+255,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re));
        tracep->fullCData(oldp+256,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_wmask),8);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_datapc),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_write_data),64);
        tracep->fullCData(oldp+261,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
        tracep->fullCData(oldp+262,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
        tracep->fullBit(oldp+263,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+264,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+265,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
        tracep->fullBit(oldp+266,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
        tracep->fullBit(oldp+273,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
        tracep->fullCData(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
        tracep->fullCData(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
        tracep->fullCData(oldp+276,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                      << 3U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena))))),4);
        tracep->fullCData(oldp+277,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
        tracep->fullBit(oldp+280,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel));
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
        tracep->fullQData(oldp+283,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__data_not_ready)))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                      : 0ULL)),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
        tracep->fullBit(oldp+287,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready));
        tracep->fullBit(oldp+288,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
        tracep->fullBit(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_lsu_slave3__DOT__arc_shakehand));
        tracep->fullBit(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
        tracep->fullBit(oldp+291,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb3U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
        tracep->fullBit(oldp+292,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 2U))));
        tracep->fullBit(oldp+293,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                    >> 2U) & ((0xeU 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                               ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                  == vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                               : ((0x1cU 
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
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
        tracep->fullBit(oldp+296,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
        tracep->fullBit(oldp+297,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena));
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena));
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena));
        tracep->fullCData(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+302,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+303,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+305,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+306,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+307,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+308,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+309,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+310,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+311,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+312,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+313,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+314,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+315,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+316,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+317,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+318,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+319,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+320,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+321,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+322,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+323,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+324,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+325,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+326,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+327,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+328,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+329,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+330,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+331,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+332,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+333,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+334,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+335,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+336,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+337,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+338,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+339,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+340,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+341,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+342,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+343,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+344,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+345,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+346,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+347,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+348,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+349,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+350,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+351,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+352,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+353,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+354,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+355,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+356,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
        tracep->fullBit(oldp+357,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
        tracep->fullBit(oldp+358,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+359,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+360,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+361,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+362,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+363,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+364,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+365,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+366,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))));
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
        tracep->fullCData(oldp+371,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
        tracep->fullSData(oldp+372,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
        tracep->fullCData(oldp+373,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__sb_mask),8);
        tracep->fullBit(oldp+374,(vlSelf->clk));
        tracep->fullBit(oldp+375,(vlSelf->rst));
        tracep->fullBit(oldp+376,(((~ (IData)(vlSelf->rst)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                         >> 0xbU)))));
        tracep->fullQData(oldp+377,(((IData)(vlSelf->rst)
                                      ? 0ULL : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                + (
                                                   ((IData)(vlSelf->rst)
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
        tracep->fullIData(oldp+379,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->fullQData(oldp+380,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+382,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)),64);
        tracep->fullQData(oldp+384,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+386,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                      : 0ULL)),64);
        tracep->fullBit(oldp+388,(((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (0x6fULL 
                                                    == 
                                                    (0x7fULL 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__axi_if_inst))))));
        tracep->fullQData(oldp+389,((((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+391,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
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
        tracep->fullBit(oldp+393,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+394,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullQData(oldp+395,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->fullQData(oldp+397,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->fullCData(oldp+399,(((IData)(vlSelf->rst)
                                      ? 0U : ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
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
                                                    : 0xc0U))))),8);
        tracep->fullCData(oldp+400,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullBit(oldp+401,(1U));
        tracep->fullCData(oldp+402,(0U),2);
        tracep->fullBit(oldp+403,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ifid_jumpflush));
        tracep->fullQData(oldp+404,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_bpu_data),64);
        tracep->fullBit(oldp+406,(0U));
        tracep->fullBit(oldp+407,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_flush));
        tracep->fullCData(oldp+408,(8U),8);
        tracep->fullQData(oldp+409,(0ULL),64);
        tracep->fullIData(oldp+411,(0U),32);
    }
}
