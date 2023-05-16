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
        tracep->declBit(c+663,"clk", false,-1);
        tracep->declBit(c+664,"rst", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_cache_valid", false,-1);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu axi_cache_inst", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu data_not_ready", false,-1);
        tracep->declBit(c+544,"ysyx_22051013_rvcpu lsu_axi_we", false,-1);
        tracep->declBit(c+545,"ysyx_22051013_rvcpu lsu_axi_re", false,-1);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu lsu_axi_wmask", false,-1, 7,0);
        tracep->declQuad(c+547,"ysyx_22051013_rvcpu lsu_axi_datapc", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22051013_rvcpu lsu_axi_read_data", false,-1, 63,0);
        tracep->declQuad(c+549,"ysyx_22051013_rvcpu lsu_axi_write_data", false,-1, 63,0);
        tracep->declBus(c+690,"ysyx_22051013_rvcpu axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+547,"ysyx_22051013_rvcpu axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu axi_aw_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu axi_aw_ready", false,-1);
        tracep->declQuad(c+549,"ysyx_22051013_rvcpu axi_w_data", false,-1, 63,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu axi_w_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu axi_w_ready", false,-1);
        tracep->declBus(c+690,"ysyx_22051013_rvcpu axi_b_id", false,-1, 4,0);
        tracep->declBus(c+691,"ysyx_22051013_rvcpu axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_b_valid", false,-1);
        tracep->declBit(c+692,"ysyx_22051013_rvcpu axi_b_ready", false,-1);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+519,"ysyx_22051013_rvcpu axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+521,"ysyx_22051013_rvcpu axi_ar_valid", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu axi_ar_ready", false,-1);
        tracep->declBus(c+12,"ysyx_22051013_rvcpu axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu axi_r_data", false,-1, 63,0);
        tracep->declBus(c+691,"ysyx_22051013_rvcpu axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu axi_r_valid", false,-1);
        tracep->declBit(c+692,"ysyx_22051013_rvcpu axi_r_ready", false,-1);
        tracep->declQuad(c+16,"ysyx_22051013_rvcpu cache_axi_pc", false,-1, 63,0);
        tracep->declBit(c+18,"ysyx_22051013_rvcpu cache_axi_ena", false,-1);
        tracep->declBit(c+19,"ysyx_22051013_rvcpu cache_if_valid", false,-1);
        tracep->declBus(c+20,"ysyx_22051013_rvcpu cache_if_inst", false,-1, 31,0);
        tracep->declBit(c+665,"ysyx_22051013_rvcpu bpu_ifid_jump", false,-1);
        tracep->declQuad(c+666,"ysyx_22051013_rvcpu bpu_if_pc", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu if_cache_ready", false,-1);
        tracep->declBus(c+20,"ysyx_22051013_rvcpu ifid_if_inst", false,-1, 31,0);
        tracep->declQuad(c+21,"ysyx_22051013_rvcpu ifid_if_pc", false,-1, 63,0);
        tracep->declBus(c+23,"ysyx_22051013_rvcpu ifid_id_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu ifid_id_pc", false,-1, 63,0);
        tracep->declBit(c+26,"ysyx_22051013_rvcpu ifid_id_jump", false,-1);
        tracep->declBus(c+551,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+552,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declQuad(c+522,"ysyx_22051013_rvcpu id_if_pc", false,-1, 63,0);
        tracep->declBit(c+555,"ysyx_22051013_rvcpu id_if_pc_sel", false,-1);
        tracep->declBit(c+693,"ysyx_22051013_rvcpu id_ifid_jumpflush", false,-1);
        tracep->declBit(c+556,"ysyx_22051013_rvcpu id_load_flag", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu id_if_stall_ena", false,-1);
        tracep->declBus(c+668,"ysyx_22051013_rvcpu idex_id_inst", false,-1, 31,0);
        tracep->declQuad(c+669,"ysyx_22051013_rvcpu idex_id_pc", false,-1, 63,0);
        tracep->declQuad(c+558,"ysyx_22051013_rvcpu idex_id_op1", false,-1, 63,0);
        tracep->declQuad(c+560,"ysyx_22051013_rvcpu idex_id_op2", false,-1, 63,0);
        tracep->declQuad(c+562,"ysyx_22051013_rvcpu idex_id_imm", false,-1, 63,0);
        tracep->declBit(c+564,"ysyx_22051013_rvcpu idex_id_rd_ena", false,-1);
        tracep->declBus(c+524,"ysyx_22051013_rvcpu idex_id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+565,"ysyx_22051013_rvcpu idex_id_lsctl", false,-1, 3,0);
        tracep->declBus(c+566,"ysyx_22051013_rvcpu idex_id_wbctl", false,-1, 1,0);
        tracep->declBus(c+567,"ysyx_22051013_rvcpu idex_id_csrctl", false,-1, 3,0);
        tracep->declBus(c+568,"ysyx_22051013_rvcpu idex_id_alu_sel", false,-1, 7,0);
        tracep->declBus(c+27,"ysyx_22051013_rvcpu idex_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu idex_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22051013_rvcpu idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22051013_rvcpu idex_ex_op2", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22051013_rvcpu idex_ex_imm", false,-1, 63,0);
        tracep->declBit(c+36,"ysyx_22051013_rvcpu idex_ex_rd_ena", false,-1);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu idex_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu idex_ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+39,"ysyx_22051013_rvcpu idex_ex_wbctl", false,-1, 1,0);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu idex_ex_csrctl", false,-1, 3,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu idex_ex_alu_sel", false,-1, 7,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu ex_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+569,"ysyx_22051013_rvcpu ex_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051013_rvcpu ex_load_ena", false,-1);
        tracep->declQuad(c+671,"ysyx_22051013_rvcpu ex_if_pc", false,-1, 63,0);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu ex_if_pc_sel", false,-1);
        tracep->declQuad(c+569,"ysyx_22051013_rvcpu exls_ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22051013_rvcpu exls_ex_store_data", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu exls_ls_inst", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22051013_rvcpu exls_ls_pc", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu exls_ls_aludata", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22051013_rvcpu exls_ls_store_data", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22051013_rvcpu exls_ls_rd_ena", false,-1);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu exls_ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu exls_ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu exls_ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+572,"ysyx_22051013_rvcpu ls_lswb_data_forward", false,-1, 63,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu ls_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+572,"ysyx_22051013_rvcpu ls_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+54,"ysyx_22051013_rvcpu data_ok", false,-1);
        tracep->declQuad(c+525,"ysyx_22051013_rvcpu lswb_ls_wbdata", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu lswb_wb_inst", false,-1, 31,0);
        tracep->declQuad(c+56,"ysyx_22051013_rvcpu lswb_wb_pc", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu lswb_wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+59,"ysyx_22051013_rvcpu lswb_wb_wbdata", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu lswb_wb_aludata", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu lswb_wb_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu lswb_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+574,"ysyx_22051013_rvcpu wb_reg_rd_data", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu wb_reg_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wb_reg_rd_addr", false,-1, 4,0);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wb_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+574,"ysyx_22051013_rvcpu wb_id_data_forward", false,-1, 63,0);
        tracep->declQuad(c+673,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+675,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+694,"ysyx_22051013_rvcpu reg_bpu_data", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu if_valid", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu id_valid", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu ex_valid", false,-1);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu ls_valid", false,-1);
        tracep->declBit(c+696,"ysyx_22051013_rvcpu wb_ready", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu ls_ready", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu ex_ready", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu id_ready", false,-1);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu ex_flush", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu id_idex_flush", false,-1);
        tracep->declBit(c+555,"ysyx_22051013_rvcpu id_ifid_flush", false,-1);
        tracep->declBit(c+697,"ysyx_22051013_rvcpu ls_lswb_flush", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu axi_master_arbitrator0 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu axi_master_arbitrator0 rst", false,-1);
        tracep->declQuad(c+16,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_pc", false,-1, 63,0);
        tracep->declBit(c+18,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_ena", false,-1);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst_valid", false,-1);
        tracep->declQuad(c+547,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_pc", false,-1, 63,0);
        tracep->declQuad(c+549,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_i", false,-1, 63,0);
        tracep->declBit(c+544,"ysyx_22051013_rvcpu axi_master_arbitrator0 we", false,-1);
        tracep->declBit(c+545,"ysyx_22051013_rvcpu axi_master_arbitrator0 re", false,-1);
        tracep->declBit(c+54,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_ok", false,-1);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu axi_master_arbitrator0 wmask", false,-1, 7,0);
        tracep->declQuad(c+5,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_o", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_not_ready", false,-1);
        tracep->declBus(c+690,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+547,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_ready", false,-1);
        tracep->declQuad(c+549,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_ready", false,-1);
        tracep->declBus(c+690,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+691,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_valid", false,-1);
        tracep->declBit(c+692,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_ready", false,-1);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+519,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+521,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_valid", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_ready", false,-1);
        tracep->declBus(c+12,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+691,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_valid", false,-1);
        tracep->declBit(c+692,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_ready", false,-1);
        tracep->declBit(c+18,"ysyx_22051013_rvcpu axi_master_arbitrator0 if_chosen", false,-1);
        tracep->declBit(c+527,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_chosen_read", false,-1);
        tracep->declBit(c+528,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_chosen_write", false,-1);
        tracep->declBus(c+67,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_state", false,-1, 2,0);
        tracep->declBus(c+576,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_state_next", false,-1, 2,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_master_arbitrator0 dwrite_shakehand", false,-1);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_w_not_ready", false,-1);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_master_arbitrator0 iread_shakehand", false,-1);
        tracep->declBit(c+69,"ysyx_22051013_rvcpu axi_master_arbitrator0 dread_shakehand", false,-1);
        tracep->declQuad(c+70,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_temp", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_r_not_ready", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu axi_slave1 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu axi_slave1 rst", false,-1);
        tracep->declBus(c+690,"ysyx_22051013_rvcpu axi_slave1 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+547,"ysyx_22051013_rvcpu axi_slave1 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu axi_slave1 axi_aw_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu axi_slave1 axi_aw_ready", false,-1);
        tracep->declQuad(c+549,"ysyx_22051013_rvcpu axi_slave1 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu axi_slave1 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu axi_slave1 axi_w_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu axi_slave1 axi_w_ready", false,-1);
        tracep->declBus(c+690,"ysyx_22051013_rvcpu axi_slave1 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+691,"ysyx_22051013_rvcpu axi_slave1 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_slave1 axi_b_valid", false,-1);
        tracep->declBit(c+692,"ysyx_22051013_rvcpu axi_slave1 axi_b_ready", false,-1);
        tracep->declBus(c+10,"ysyx_22051013_rvcpu axi_slave1 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+519,"ysyx_22051013_rvcpu axi_slave1 axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+521,"ysyx_22051013_rvcpu axi_slave1 axi_ar_valid", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu axi_slave1 axi_ar_ready", false,-1);
        tracep->declBus(c+12,"ysyx_22051013_rvcpu axi_slave1 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu axi_slave1 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+691,"ysyx_22051013_rvcpu axi_slave1 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu axi_slave1 axi_r_valid", false,-1);
        tracep->declBit(c+692,"ysyx_22051013_rvcpu axi_slave1 axi_r_ready", false,-1);
        tracep->declBit(c+73,"ysyx_22051013_rvcpu axi_slave1 awc_shakehand", false,-1);
        tracep->declBit(c+73,"ysyx_22051013_rvcpu axi_slave1 wc_shakehand", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_slave1 bc_shakehand", false,-1);
        tracep->declBus(c+74,"ysyx_22051013_rvcpu axi_slave1 s_write_state", false,-1, 1,0);
        tracep->declBus(c+75,"ysyx_22051013_rvcpu axi_slave1 s_write_state_next", false,-1, 1,0);
        tracep->declBit(c+577,"ysyx_22051013_rvcpu axi_slave1 arc_shakehand", false,-1);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu axi_slave1 rc_shakehand", false,-1);
        tracep->declBus(c+76,"ysyx_22051013_rvcpu axi_slave1 s_read_state", false,-1, 1,0);
        tracep->declBus(c+529,"ysyx_22051013_rvcpu axi_slave1 s_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+77,"ysyx_22051013_rvcpu axi_slave1 dpic_read_data", false,-1, 63,0);
        tracep->declBus(c+698,"ysyx_22051013_rvcpu axi_slave1 rlen", false,-1, 7,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu i_cache2 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu i_cache2 rst", false,-1);
        tracep->declQuad(c+21,"ysyx_22051013_rvcpu i_cache2 inst_pc", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu i_cache2 pc_ready", false,-1);
        tracep->declBit(c+19,"ysyx_22051013_rvcpu i_cache2 inst_valid", false,-1);
        tracep->declBus(c+20,"ysyx_22051013_rvcpu i_cache2 inst", false,-1, 31,0);
        tracep->declQuad(c+16,"ysyx_22051013_rvcpu i_cache2 axi_pc", false,-1, 63,0);
        tracep->declBit(c+18,"ysyx_22051013_rvcpu i_cache2 axi_ena", false,-1);
        tracep->declQuad(c+2,"ysyx_22051013_rvcpu i_cache2 axi_inst", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu i_cache2 axi_valid", false,-1);
        tracep->declBus(c+79,"ysyx_22051013_rvcpu i_cache2 icache_tag", false,-1, 23,0);
        tracep->declBus(c+80,"ysyx_22051013_rvcpu i_cache2 icache_index", false,-1, 4,0);
        tracep->declBus(c+81,"ysyx_22051013_rvcpu i_cache2 icache_state", false,-1, 3,0);
        tracep->declBus(c+578,"ysyx_22051013_rvcpu i_cache2 icache_state_next", false,-1, 3,0);
        tracep->declBit(c+82,"ysyx_22051013_rvcpu i_cache2 tag_update", false,-1);
        tracep->declBit(c+83,"ysyx_22051013_rvcpu i_cache2 tag_update_temp", false,-1);
        tracep->declQuad(c+84,"ysyx_22051013_rvcpu i_cache2 miss_data", false,-1, 63,0);
        tracep->declBit(c+86,"ysyx_22051013_rvcpu i_cache2 way1_ena", false,-1);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu i_cache2 way2_ena", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu i_cache2 write_in_valid", false,-1);
        tracep->declBus(c+89,"ysyx_22051013_rvcpu i_cache2 tag_with_valid", false,-1, 24,0);
        tracep->declBus(c+90,"ysyx_22051013_rvcpu i_cache2 i_tag_way1", false,-1, 23,0);
        tracep->declBit(c+91,"ysyx_22051013_rvcpu i_cache2 i_tag_valid1", false,-1);
        tracep->declBus(c+92,"ysyx_22051013_rvcpu i_cache2 i_tag_way2", false,-1, 23,0);
        tracep->declBit(c+93,"ysyx_22051013_rvcpu i_cache2 i_tag_valid2", false,-1);
        tracep->declQuad(c+94,"ysyx_22051013_rvcpu i_cache2 cache_way1_data", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu i_cache2 cache_way2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+98+i*1,"ysyx_22051013_rvcpu i_cache2 way1_recent_use", true,(i+0));}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+130+i*1,"ysyx_22051013_rvcpu i_cache2 way2_recent_use", true,(i+0));}}
        tracep->declBit(c+663,"ysyx_22051013_rvcpu i_cache2 tag_ram0 clk", false,-1);
        tracep->declBus(c+80,"ysyx_22051013_rvcpu i_cache2 tag_ram0 addr", false,-1, 4,0);
        tracep->declBus(c+89,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_i", false,-1, 24,0);
        tracep->declBit(c+86,"ysyx_22051013_rvcpu i_cache2 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+90,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_o", false,-1, 23,0);
        tracep->declBit(c+91,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_valid", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+162+i*1,"ysyx_22051013_rvcpu i_cache2 tag_ram0 ram", true,(i+0), 24,0);}}
        tracep->declBus(c+90,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_data", false,-1, 23,0);
        tracep->declBit(c+91,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_vaild", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu i_cache2 tag_ram1 clk", false,-1);
        tracep->declBus(c+80,"ysyx_22051013_rvcpu i_cache2 tag_ram1 addr", false,-1, 4,0);
        tracep->declBus(c+89,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_i", false,-1, 24,0);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu i_cache2 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+92,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_o", false,-1, 23,0);
        tracep->declBit(c+93,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_valid", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+194+i*1,"ysyx_22051013_rvcpu i_cache2 tag_ram1 ram", true,(i+0), 24,0);}}
        tracep->declBus(c+92,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_data", false,-1, 23,0);
        tracep->declBit(c+93,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_vaild", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu i_cache2 data_ram0 clk", false,-1);
        tracep->declBus(c+80,"ysyx_22051013_rvcpu i_cache2 data_ram0 addr", false,-1, 4,0);
        tracep->declQuad(c+84,"ysyx_22051013_rvcpu i_cache2 data_ram0 data_i", false,-1, 63,0);
        tracep->declBit(c+86,"ysyx_22051013_rvcpu i_cache2 data_ram0 write_ena", false,-1);
        tracep->declQuad(c+94,"ysyx_22051013_rvcpu i_cache2 data_ram0 data_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+226+i*2,"ysyx_22051013_rvcpu i_cache2 data_ram0 ram", true,(i+0), 63,0);}}
        tracep->declQuad(c+94,"ysyx_22051013_rvcpu i_cache2 data_ram0 out_data", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu i_cache2 data_ram1 clk", false,-1);
        tracep->declBus(c+80,"ysyx_22051013_rvcpu i_cache2 data_ram1 addr", false,-1, 4,0);
        tracep->declQuad(c+84,"ysyx_22051013_rvcpu i_cache2 data_ram1 data_i", false,-1, 63,0);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu i_cache2 data_ram1 write_ena", false,-1);
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu i_cache2 data_ram1 data_o", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+290+i*2,"ysyx_22051013_rvcpu i_cache2 data_ram1 ram", true,(i+0), 63,0);}}
        tracep->declQuad(c+96,"ysyx_22051013_rvcpu i_cache2 data_ram1 out_data", false,-1, 63,0);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu bpu_static rst", false,-1);
        tracep->declBus(c+20,"ysyx_22051013_rvcpu bpu_static inst", false,-1, 31,0);
        tracep->declQuad(c+21,"ysyx_22051013_rvcpu bpu_static pc_i", false,-1, 63,0);
        tracep->declQuad(c+666,"ysyx_22051013_rvcpu bpu_static pc_o", false,-1, 63,0);
        tracep->declBit(c+665,"ysyx_22051013_rvcpu bpu_static bpu_jump", false,-1);
        tracep->declBus(c+354,"ysyx_22051013_rvcpu bpu_static j_imm", false,-1, 20,1);
        tracep->declBus(c+355,"ysyx_22051013_rvcpu bpu_static b_imm", false,-1, 12,1);
        tracep->declBus(c+356,"ysyx_22051013_rvcpu bpu_static opcode", false,-1, 6,0);
        tracep->declBit(c+677,"ysyx_22051013_rvcpu bpu_static inst_jal", false,-1);
        tracep->declBit(c+579,"ysyx_22051013_rvcpu bpu_static inst_bxx", false,-1);
        tracep->declQuad(c+21,"ysyx_22051013_rvcpu bpu_static op1", false,-1, 63,0);
        tracep->declQuad(c+678,"ysyx_22051013_rvcpu bpu_static op2", false,-1, 63,0);
        tracep->declQuad(c+680,"ysyx_22051013_rvcpu bpu_static pr_pc", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu ifu0 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu ifu0 rst", false,-1);
        tracep->declBit(c+555,"ysyx_22051013_rvcpu ifu0 id_pc_jump", false,-1);
        tracep->declQuad(c+522,"ysyx_22051013_rvcpu ifu0 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu ifu0 ex_pc_jump", false,-1);
        tracep->declQuad(c+671,"ysyx_22051013_rvcpu ifu0 ex_pc_i", false,-1, 63,0);
        tracep->declQuad(c+666,"ysyx_22051013_rvcpu ifu0 bpu_pc_i", false,-1, 63,0);
        tracep->declBit(c+19,"ysyx_22051013_rvcpu ifu0 inst_valid", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu ifu0 id_ready", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu ifu0 id_stall", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu ifu0 if_valid", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu ifu0 core_ready", false,-1);
        tracep->declBus(c+20,"ysyx_22051013_rvcpu ifu0 inst_i", false,-1, 31,0);
        tracep->declBus(c+20,"ysyx_22051013_rvcpu ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+21,"ysyx_22051013_rvcpu ifu0 pc_o", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu reg_ifid1 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu reg_ifid1 rst", false,-1);
        tracep->declBus(c+20,"ysyx_22051013_rvcpu reg_ifid1 if_inst", false,-1, 31,0);
        tracep->declQuad(c+21,"ysyx_22051013_rvcpu reg_ifid1 if_pc", false,-1, 63,0);
        tracep->declBit(c+665,"ysyx_22051013_rvcpu reg_ifid1 bpu_jump", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu reg_ifid1 if_valid", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu reg_ifid1 id_stall", false,-1);
        tracep->declBit(c+555,"ysyx_22051013_rvcpu reg_ifid1 id_flush", false,-1);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu reg_ifid1 ex_flush", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu reg_ifid1 id_ready", false,-1);
        tracep->declBit(c+26,"ysyx_22051013_rvcpu reg_ifid1 id_jump", false,-1);
        tracep->declBus(c+23,"ysyx_22051013_rvcpu reg_ifid1 id_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu reg_ifid1 id_pc", false,-1, 63,0);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu idu2 rst", false,-1);
        tracep->declBus(c+23,"ysyx_22051013_rvcpu idu2 inst_i", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu idu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+26,"ysyx_22051013_rvcpu idu2 bpu_jump", false,-1);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu idu2 ex_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+569,"ysyx_22051013_rvcpu idu2 ex_data_forward", false,-1, 63,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu idu2 ls_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+572,"ysyx_22051013_rvcpu idu2 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu idu2 wb_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+574,"ysyx_22051013_rvcpu idu2 wb_data_forward", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22051013_rvcpu idu2 ex_load_ena", false,-1);
        tracep->declBus(c+551,"ysyx_22051013_rvcpu idu2 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu idu2 rs1_ena", false,-1);
        tracep->declQuad(c+673,"ysyx_22051013_rvcpu idu2 rs1_data", false,-1, 63,0);
        tracep->declBus(c+552,"ysyx_22051013_rvcpu idu2 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu idu2 rs2_ena", false,-1);
        tracep->declQuad(c+675,"ysyx_22051013_rvcpu idu2 rs2_data", false,-1, 63,0);
        tracep->declBit(c+564,"ysyx_22051013_rvcpu idu2 rd_ena", false,-1);
        tracep->declBus(c+524,"ysyx_22051013_rvcpu idu2 rd_addr", false,-1, 4,0);
        tracep->declBus(c+568,"ysyx_22051013_rvcpu idu2 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+565,"ysyx_22051013_rvcpu idu2 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+566,"ysyx_22051013_rvcpu idu2 wbctl_o", false,-1, 1,0);
        tracep->declBus(c+567,"ysyx_22051013_rvcpu idu2 csr_ctl", false,-1, 3,0);
        tracep->declBit(c+556,"ysyx_22051013_rvcpu idu2 load_flag", false,-1);
        tracep->declQuad(c+558,"ysyx_22051013_rvcpu idu2 op1", false,-1, 63,0);
        tracep->declQuad(c+560,"ysyx_22051013_rvcpu idu2 op2", false,-1, 63,0);
        tracep->declQuad(c+562,"ysyx_22051013_rvcpu idu2 imm", false,-1, 63,0);
        tracep->declBus(c+668,"ysyx_22051013_rvcpu idu2 inst_o", false,-1, 31,0);
        tracep->declQuad(c+669,"ysyx_22051013_rvcpu idu2 pc_o", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu idu2 ex_ready", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu idu2 if_valid", false,-1);
        tracep->declBit(c+555,"ysyx_22051013_rvcpu idu2 id_flush", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu idu2 id_ex_flush", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu idu2 id_ready", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu idu2 id_valid", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu idu2 id_stall", false,-1);
        tracep->declBit(c+555,"ysyx_22051013_rvcpu idu2 jump_ena", false,-1);
        tracep->declQuad(c+522,"ysyx_22051013_rvcpu idu2 jump_pc", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22051013_rvcpu idu2 rd", false,-1, 4,0);
        tracep->declBus(c+358,"ysyx_22051013_rvcpu idu2 rs1", false,-1, 4,0);
        tracep->declBus(c+359,"ysyx_22051013_rvcpu idu2 rs2", false,-1, 4,0);
        tracep->declBit(c+580,"ysyx_22051013_rvcpu idu2 imm_ena", false,-1);
        tracep->declBit(c+581,"ysyx_22051013_rvcpu idu2 branch", false,-1);
        tracep->declBit(c+682,"ysyx_22051013_rvcpu idu2 op1_relate", false,-1);
        tracep->declBit(c+683,"ysyx_22051013_rvcpu idu2 op2_relate", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu idu2 id_stall_ena", false,-1);
        tracep->declBit(c+530,"ysyx_22051013_rvcpu idu2 ex_op1_forward", false,-1);
        tracep->declBit(c+531,"ysyx_22051013_rvcpu idu2 ls_op1_forward", false,-1);
        tracep->declBit(c+532,"ysyx_22051013_rvcpu idu2 wb_op1_forward", false,-1);
        tracep->declBit(c+533,"ysyx_22051013_rvcpu idu2 ex_op2_forward", false,-1);
        tracep->declBit(c+534,"ysyx_22051013_rvcpu idu2 ls_op2_forward", false,-1);
        tracep->declBit(c+535,"ysyx_22051013_rvcpu idu2 wb_op2_forward", false,-1);
        tracep->declBit(c+582,"ysyx_22051013_rvcpu idu2 ex_branch", false,-1);
        tracep->declQuad(c+583,"ysyx_22051013_rvcpu idu2 op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+585,"ysyx_22051013_rvcpu idu2 op1_lt_op2", false,-1);
        tracep->declBit(c+586,"ysyx_22051013_rvcpu idu2 csr_wr_ena", false,-1);
        tracep->declBit(c+587,"ysyx_22051013_rvcpu idu2 csr_rd_ena", false,-1);
        tracep->declBit(c+588,"ysyx_22051013_rvcpu idu2 mret_ena", false,-1);
        tracep->declBit(c+589,"ysyx_22051013_rvcpu idu2 ecall_ena", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu idu2 decode rst", false,-1);
        tracep->declBus(c+23,"ysyx_22051013_rvcpu idu2 decode inst", false,-1, 31,0);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu idu2 decode rs1_ena", false,-1);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu idu2 decode rs2_ena", false,-1);
        tracep->declBus(c+566,"ysyx_22051013_rvcpu idu2 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+565,"ysyx_22051013_rvcpu idu2 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+581,"ysyx_22051013_rvcpu idu2 decode branch", false,-1);
        tracep->declQuad(c+562,"ysyx_22051013_rvcpu idu2 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+580,"ysyx_22051013_rvcpu idu2 decode imm_ena", false,-1);
        tracep->declBit(c+556,"ysyx_22051013_rvcpu idu2 decode load", false,-1);
        tracep->declBus(c+568,"ysyx_22051013_rvcpu idu2 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+360,"ysyx_22051013_rvcpu idu2 decode opcode", false,-1, 6,0);
        tracep->declBus(c+361,"ysyx_22051013_rvcpu idu2 decode funct3", false,-1, 2,0);
        tracep->declBus(c+362,"ysyx_22051013_rvcpu idu2 decode funct7", false,-1, 6,0);
        tracep->declBus(c+363,"ysyx_22051013_rvcpu idu2 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+364,"ysyx_22051013_rvcpu idu2 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+365,"ysyx_22051013_rvcpu idu2 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+366,"ysyx_22051013_rvcpu idu2 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+367,"ysyx_22051013_rvcpu idu2 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+590,"ysyx_22051013_rvcpu idu2 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+591,"ysyx_22051013_rvcpu idu2 decode inst_lui", false,-1);
        tracep->declBit(c+592,"ysyx_22051013_rvcpu idu2 decode inst_auipc", false,-1);
        tracep->declBit(c+593,"ysyx_22051013_rvcpu idu2 decode inst_jal", false,-1);
        tracep->declBit(c+594,"ysyx_22051013_rvcpu idu2 decode inst_jalr", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu idu2 decode inst_sb", false,-1);
        tracep->declBit(c+596,"ysyx_22051013_rvcpu idu2 decode inst_sh", false,-1);
        tracep->declBit(c+597,"ysyx_22051013_rvcpu idu2 decode inst_sw", false,-1);
        tracep->declBit(c+598,"ysyx_22051013_rvcpu idu2 decode inst_sd", false,-1);
        tracep->declBit(c+599,"ysyx_22051013_rvcpu idu2 decode inst_lb", false,-1);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu idu2 decode inst_lh", false,-1);
        tracep->declBit(c+601,"ysyx_22051013_rvcpu idu2 decode inst_lw", false,-1);
        tracep->declBit(c+602,"ysyx_22051013_rvcpu idu2 decode inst_ld", false,-1);
        tracep->declBit(c+603,"ysyx_22051013_rvcpu idu2 decode inst_lbu", false,-1);
        tracep->declBit(c+604,"ysyx_22051013_rvcpu idu2 decode inst_lhu", false,-1);
        tracep->declBit(c+605,"ysyx_22051013_rvcpu idu2 decode inst_lwu", false,-1);
        tracep->declBit(c+606,"ysyx_22051013_rvcpu idu2 decode inst_beq", false,-1);
        tracep->declBit(c+607,"ysyx_22051013_rvcpu idu2 decode inst_bne", false,-1);
        tracep->declBit(c+608,"ysyx_22051013_rvcpu idu2 decode inst_blt", false,-1);
        tracep->declBit(c+609,"ysyx_22051013_rvcpu idu2 decode inst_bge", false,-1);
        tracep->declBit(c+610,"ysyx_22051013_rvcpu idu2 decode inst_bltu", false,-1);
        tracep->declBit(c+611,"ysyx_22051013_rvcpu idu2 decode inst_bgeu", false,-1);
        tracep->declBit(c+612,"ysyx_22051013_rvcpu idu2 decode inst_add", false,-1);
        tracep->declBit(c+613,"ysyx_22051013_rvcpu idu2 decode inst_sub", false,-1);
        tracep->declBit(c+614,"ysyx_22051013_rvcpu idu2 decode inst_sll", false,-1);
        tracep->declBit(c+615,"ysyx_22051013_rvcpu idu2 decode inst_slt", false,-1);
        tracep->declBit(c+616,"ysyx_22051013_rvcpu idu2 decode inst_sltu", false,-1);
        tracep->declBit(c+617,"ysyx_22051013_rvcpu idu2 decode inst_xor", false,-1);
        tracep->declBit(c+618,"ysyx_22051013_rvcpu idu2 decode inst_srl", false,-1);
        tracep->declBit(c+619,"ysyx_22051013_rvcpu idu2 decode inst_sra", false,-1);
        tracep->declBit(c+620,"ysyx_22051013_rvcpu idu2 decode inst_or", false,-1);
        tracep->declBit(c+621,"ysyx_22051013_rvcpu idu2 decode inst_and", false,-1);
        tracep->declBit(c+622,"ysyx_22051013_rvcpu idu2 decode inst_div", false,-1);
        tracep->declBit(c+623,"ysyx_22051013_rvcpu idu2 decode inst_divu", false,-1);
        tracep->declBit(c+624,"ysyx_22051013_rvcpu idu2 decode inst_mul", false,-1);
        tracep->declBit(c+625,"ysyx_22051013_rvcpu idu2 decode inst_mulh", false,-1);
        tracep->declBit(c+626,"ysyx_22051013_rvcpu idu2 decode inst_mulhsu", false,-1);
        tracep->declBit(c+627,"ysyx_22051013_rvcpu idu2 decode inst_mulhu", false,-1);
        tracep->declBit(c+628,"ysyx_22051013_rvcpu idu2 decode inst_rem", false,-1);
        tracep->declBit(c+629,"ysyx_22051013_rvcpu idu2 decode inst_remu", false,-1);
        tracep->declBit(c+536,"ysyx_22051013_rvcpu idu2 decode inst_addi", false,-1);
        tracep->declBit(c+537,"ysyx_22051013_rvcpu idu2 decode inst_slti", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu idu2 decode inst_sltiu", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu idu2 decode inst_xori", false,-1);
        tracep->declBit(c+540,"ysyx_22051013_rvcpu idu2 decode inst_ori", false,-1);
        tracep->declBit(c+541,"ysyx_22051013_rvcpu idu2 decode inst_andi", false,-1);
        tracep->declBit(c+542,"ysyx_22051013_rvcpu idu2 decode inst_slli", false,-1);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu idu2 decode inst_srli", false,-1);
        tracep->declBit(c+630,"ysyx_22051013_rvcpu idu2 decode inst_srai", false,-1);
        tracep->declBit(c+631,"ysyx_22051013_rvcpu idu2 decode inst_addiw", false,-1);
        tracep->declBit(c+632,"ysyx_22051013_rvcpu idu2 decode inst_slliw", false,-1);
        tracep->declBit(c+633,"ysyx_22051013_rvcpu idu2 decode inst_srliw", false,-1);
        tracep->declBit(c+634,"ysyx_22051013_rvcpu idu2 decode inst_sraiw", false,-1);
        tracep->declBit(c+635,"ysyx_22051013_rvcpu idu2 decode inst_addw", false,-1);
        tracep->declBit(c+636,"ysyx_22051013_rvcpu idu2 decode inst_subw", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu idu2 decode inst_sllw", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu idu2 decode inst_srlw", false,-1);
        tracep->declBit(c+639,"ysyx_22051013_rvcpu idu2 decode inst_sraw", false,-1);
        tracep->declBit(c+640,"ysyx_22051013_rvcpu idu2 decode inst_divuw", false,-1);
        tracep->declBit(c+641,"ysyx_22051013_rvcpu idu2 decode inst_divw", false,-1);
        tracep->declBit(c+642,"ysyx_22051013_rvcpu idu2 decode inst_mulw", false,-1);
        tracep->declBit(c+643,"ysyx_22051013_rvcpu idu2 decode inst_remuw", false,-1);
        tracep->declBit(c+644,"ysyx_22051013_rvcpu idu2 decode inst_remw", false,-1);
        tracep->declBit(c+645,"ysyx_22051013_rvcpu idu2 decode inst_ecall", false,-1);
        tracep->declBit(c+646,"ysyx_22051013_rvcpu idu2 decode inst_mret", false,-1);
        tracep->declBit(c+647,"ysyx_22051013_rvcpu idu2 decode inst_csrrw", false,-1);
        tracep->declBit(c+648,"ysyx_22051013_rvcpu idu2 decode inst_csrrs", false,-1);
        tracep->declBit(c+649,"ysyx_22051013_rvcpu idu2 decode inst_csrrc", false,-1);
        tracep->declBit(c+650,"ysyx_22051013_rvcpu idu2 decode inst_csrrwi", false,-1);
        tracep->declBit(c+651,"ysyx_22051013_rvcpu idu2 decode inst_csrrsi", false,-1);
        tracep->declBit(c+652,"ysyx_22051013_rvcpu idu2 decode inst_csrrci", false,-1);
        tracep->declBit(c+653,"ysyx_22051013_rvcpu idu2 decode inst_ebreak", false,-1);
        tracep->declBit(c+654,"ysyx_22051013_rvcpu idu2 decode inst_csr", false,-1);
        tracep->declBit(c+655,"ysyx_22051013_rvcpu idu2 decode jump", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu reg_idex3 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu reg_idex3 rst", false,-1);
        tracep->declBus(c+668,"ysyx_22051013_rvcpu reg_idex3 id_inst", false,-1, 31,0);
        tracep->declQuad(c+669,"ysyx_22051013_rvcpu reg_idex3 id_pc", false,-1, 63,0);
        tracep->declQuad(c+558,"ysyx_22051013_rvcpu reg_idex3 id_op1", false,-1, 63,0);
        tracep->declQuad(c+560,"ysyx_22051013_rvcpu reg_idex3 id_op2", false,-1, 63,0);
        tracep->declQuad(c+562,"ysyx_22051013_rvcpu reg_idex3 id_imm", false,-1, 63,0);
        tracep->declBit(c+564,"ysyx_22051013_rvcpu reg_idex3 id_rd_ena", false,-1);
        tracep->declBus(c+524,"ysyx_22051013_rvcpu reg_idex3 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+568,"ysyx_22051013_rvcpu reg_idex3 id_alusrc", false,-1, 7,0);
        tracep->declBus(c+565,"ysyx_22051013_rvcpu reg_idex3 id_lsctl", false,-1, 3,0);
        tracep->declBus(c+566,"ysyx_22051013_rvcpu reg_idex3 id_wbctl", false,-1, 1,0);
        tracep->declBus(c+567,"ysyx_22051013_rvcpu reg_idex3 id_csrctl", false,-1, 3,0);
        tracep->declBit(c+556,"ysyx_22051013_rvcpu reg_idex3 id_load_flag", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu reg_idex3 id_valid", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu reg_idex3 id_flush", false,-1);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu reg_idex3 ex_flush", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu reg_idex3 ex_ready", false,-1);
        tracep->declBus(c+27,"ysyx_22051013_rvcpu reg_idex3 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu reg_idex3 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22051013_rvcpu reg_idex3 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22051013_rvcpu reg_idex3 ex_op2", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22051013_rvcpu reg_idex3 ex_imm", false,-1, 63,0);
        tracep->declBit(c+36,"ysyx_22051013_rvcpu reg_idex3 ex_rd_ena", false,-1);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu reg_idex3 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu reg_idex3 ex_alusrc", false,-1, 7,0);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu reg_idex3 ex_lsctl", false,-1, 3,0);
        tracep->declBit(c+42,"ysyx_22051013_rvcpu reg_idex3 ex_load_flag", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu reg_idex3 ex_csrctl", false,-1, 3,0);
        tracep->declBus(c+39,"ysyx_22051013_rvcpu reg_idex3 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu exu4 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu exu4 rst", false,-1);
        tracep->declQuad(c+30,"ysyx_22051013_rvcpu exu4 op1", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22051013_rvcpu exu4 op2", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22051013_rvcpu exu4 imm", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu exu4 pc_i", false,-1, 63,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu exu4 alu_sel", false,-1, 7,0);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu exu4 csr_ctl", false,-1, 3,0);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu exu4 ls_ready", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu exu4 id_valid", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu exu4 ex_valid", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu exu4 ex_ready", false,-1);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu exu4 ex_flush", false,-1);
        tracep->declQuad(c+32,"ysyx_22051013_rvcpu exu4 store_data", false,-1, 63,0);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu exu4 ex_jump_ena", false,-1);
        tracep->declQuad(c+671,"ysyx_22051013_rvcpu exu4 ex_jump_pc", false,-1, 63,0);
        tracep->declQuad(c+569,"ysyx_22051013_rvcpu exu4 exu_res", false,-1, 63,0);
        tracep->declQuad(c+368,"ysyx_22051013_rvcpu exu4 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+370,"ysyx_22051013_rvcpu exu4 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+372,"ysyx_22051013_rvcpu exu4 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+374,"ysyx_22051013_rvcpu exu4 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+376,"ysyx_22051013_rvcpu exu4 op1_lt_op2", false,-1);
        tracep->declQuad(c+377,"ysyx_22051013_rvcpu exu4 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+379,"ysyx_22051013_rvcpu exu4 sllw", false,-1, 31,0);
        tracep->declQuad(c+380,"ysyx_22051013_rvcpu exu4 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+382,"ysyx_22051013_rvcpu exu4 srlw", false,-1, 31,0);
        tracep->declQuad(c+383,"ysyx_22051013_rvcpu exu4 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+385,"ysyx_22051013_rvcpu exu4 sraw", false,-1, 31,0);
        tracep->declQuad(c+386,"ysyx_22051013_rvcpu exu4 op1_sraw_op2", false,-1, 63,0);
        tracep->declArray(c+388,"ysyx_22051013_rvcpu exu4 mul", false,-1, 127,0);
        tracep->declQuad(c+392,"ysyx_22051013_rvcpu exu4 op1_mul_op2", false,-1, 63,0);
        tracep->declQuad(c+394,"ysyx_22051013_rvcpu exu4 op1_mulh_op2", false,-1, 63,0);
        tracep->declQuad(c+396,"ysyx_22051013_rvcpu exu4 op1_mulw_op2", false,-1, 63,0);
        tracep->declQuad(c+398,"ysyx_22051013_rvcpu exu4 div", false,-1, 63,0);
        tracep->declBus(c+400,"ysyx_22051013_rvcpu exu4 divw", false,-1, 31,0);
        tracep->declQuad(c+401,"ysyx_22051013_rvcpu exu4 op1_divw_op2", false,-1, 63,0);
        tracep->declQuad(c+403,"ysyx_22051013_rvcpu exu4 op1_divuw_op2", false,-1, 63,0);
        tracep->declQuad(c+405,"ysyx_22051013_rvcpu exu4 rem", false,-1, 63,0);
        tracep->declBus(c+407,"ysyx_22051013_rvcpu exu4 remw", false,-1, 31,0);
        tracep->declQuad(c+408,"ysyx_22051013_rvcpu exu4 op1_remw_op2", false,-1, 63,0);
        tracep->declQuad(c+410,"ysyx_22051013_rvcpu exu4 op1_remuw_op2", false,-1, 63,0);
        tracep->declQuad(c+656,"ysyx_22051013_rvcpu exu4 alu_res", false,-1, 63,0);
        tracep->declBus(c+412,"ysyx_22051013_rvcpu exu4 csr_addr", false,-1, 11,0);
        tracep->declQuad(c+413,"ysyx_22051013_rvcpu exu4 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+415,"ysyx_22051013_rvcpu exu4 write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+417,"ysyx_22051013_rvcpu exu4 mcause_value", false,-1, 63,0);
        tracep->declQuad(c+419,"ysyx_22051013_rvcpu exu4 set_data", false,-1, 63,0);
        tracep->declQuad(c+421,"ysyx_22051013_rvcpu exu4 clear_data", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu exu4 csr_operate clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu exu4 csr_operate rst", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu exu4 csr_operate csr_ctl", false,-1, 3,0);
        tracep->declBus(c+412,"ysyx_22051013_rvcpu exu4 csr_operate csr_addr", false,-1, 11,0);
        tracep->declQuad(c+417,"ysyx_22051013_rvcpu exu4 csr_operate mcause_value", false,-1, 63,0);
        tracep->declQuad(c+415,"ysyx_22051013_rvcpu exu4 csr_operate write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+413,"ysyx_22051013_rvcpu exu4 csr_operate read_csr_data", false,-1, 63,0);
        tracep->declBit(c+423,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_rd", false,-1);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_wr", false,-1);
        tracep->declBit(c+425,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mie", false,-1);
        tracep->declBit(c+426,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mpie", false,-1);
        tracep->declBus(c+427,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mpp", false,-1, 1,0);
        tracep->declQuad(c+428,"ysyx_22051013_rvcpu exu4 csr_operate mstatus", false,-1, 63,0);
        tracep->declBit(c+430,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_ie_ena", false,-1);
        tracep->declBit(c+431,"ysyx_22051013_rvcpu exu4 csr_operate mie_set", false,-1);
        tracep->declBit(c+432,"ysyx_22051013_rvcpu exu4 csr_operate mpie_set", false,-1);
        tracep->declBus(c+433,"ysyx_22051013_rvcpu exu4 csr_operate mpp_set", false,-1, 1,0);
        tracep->declBit(c+434,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_rd", false,-1);
        tracep->declBit(c+435,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_wr", false,-1);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_base", false,-1, 63,2);
        tracep->declBus(c+691,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+438,"ysyx_22051013_rvcpu exu4 csr_operate mtvec", false,-1, 63,0);
        tracep->declBit(c+440,"ysyx_22051013_rvcpu exu4 csr_operate mepc_rd", false,-1);
        tracep->declBit(c+441,"ysyx_22051013_rvcpu exu4 csr_operate mepc_wr", false,-1);
        tracep->declQuad(c+442,"ysyx_22051013_rvcpu exu4 csr_operate mepc", false,-1, 63,0);
        tracep->declBit(c+444,"ysyx_22051013_rvcpu exu4 csr_operate mcause_rd", false,-1);
        tracep->declBit(c+445,"ysyx_22051013_rvcpu exu4 csr_operate mcause_wr", false,-1);
        tracep->declQuad(c+446,"ysyx_22051013_rvcpu exu4 csr_operate mcause", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu reg_exls5 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu reg_exls5 rst", false,-1);
        tracep->declBus(c+27,"ysyx_22051013_rvcpu reg_exls5 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu reg_exls5 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22051013_rvcpu reg_exls5 ex_store_data", false,-1, 63,0);
        tracep->declQuad(c+569,"ysyx_22051013_rvcpu reg_exls5 ex_exu_res", false,-1, 63,0);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu reg_exls5 ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+39,"ysyx_22051013_rvcpu reg_exls5 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+36,"ysyx_22051013_rvcpu reg_exls5 ex_rd_ena", false,-1);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu reg_exls5 ex_valid", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu reg_exls5 ls_ready", false,-1);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu reg_exls5 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22051013_rvcpu reg_exls5 ls_pc", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22051013_rvcpu reg_exls5 ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu reg_exls5 ls_exu_res", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_exls5 ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu reg_exls5 ls_wbctl", false,-1, 1,0);
        tracep->declBit(c+50,"ysyx_22051013_rvcpu reg_exls5 ls_rd_ena", false,-1);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu reg_exls5 ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+569,"ysyx_22051013_rvcpu reg_exls5 ex_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu lsu6 rst", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu lsu6 clk", false,-1);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu lsu6 alu_res", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22051013_rvcpu lsu6 store_data", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu lsu6 ls_ctl", false,-1, 3,0);
        tracep->declBit(c+696,"ysyx_22051013_rvcpu lsu6 wb_ready", false,-1);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu lsu6 ex_valid", false,-1);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu lsu6 ls_ready", false,-1);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu lsu6 ls_valid", false,-1);
        tracep->declBit(c+544,"ysyx_22051013_rvcpu lsu6 we", false,-1);
        tracep->declBit(c+545,"ysyx_22051013_rvcpu lsu6 re", false,-1);
        tracep->declBit(c+54,"ysyx_22051013_rvcpu lsu6 data_ok", false,-1);
        tracep->declQuad(c+547,"ysyx_22051013_rvcpu lsu6 data_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22051013_rvcpu lsu6 data_i", false,-1, 63,0);
        tracep->declQuad(c+549,"ysyx_22051013_rvcpu lsu6 data_o", false,-1, 63,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu lsu6 wlen", false,-1, 7,0);
        tracep->declBit(c+4,"ysyx_22051013_rvcpu lsu6 data_not_ready", false,-1);
        tracep->declQuad(c+572,"ysyx_22051013_rvcpu lsu6 ls_data_forward", false,-1, 63,0);
        tracep->declQuad(c+525,"ysyx_22051013_rvcpu lsu6 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+684,"ysyx_22051013_rvcpu lsu6 raddr", false,-1, 63,0);
        tracep->declQuad(c+686,"ysyx_22051013_rvcpu lsu6 waddr", false,-1, 63,0);
        tracep->declQuad(c+658,"ysyx_22051013_rvcpu lsu6 load_data", false,-1, 63,0);
        tracep->declBus(c+448,"ysyx_22051013_rvcpu lsu6 byte_sel", false,-1, 2,0);
        tracep->declBus(c+449,"ysyx_22051013_rvcpu lsu6 half_sel", false,-1, 1,0);
        tracep->declBit(c+450,"ysyx_22051013_rvcpu lsu6 word_sel", false,-1);
        tracep->declBus(c+660,"ysyx_22051013_rvcpu lsu6 data_byte", false,-1, 7,0);
        tracep->declBus(c+661,"ysyx_22051013_rvcpu lsu6 data_half", false,-1, 15,0);
        tracep->declBus(c+451,"ysyx_22051013_rvcpu lsu6 data_word", false,-1, 31,0);
        tracep->declBus(c+662,"ysyx_22051013_rvcpu lsu6 sb_mask", false,-1, 7,0);
        tracep->declBus(c+688,"ysyx_22051013_rvcpu lsu6 sh_mask", false,-1, 7,0);
        tracep->declBus(c+689,"ysyx_22051013_rvcpu lsu6 sw_mask", false,-1, 7,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu reg_lswb7 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu reg_lswb7 rst", false,-1);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu reg_lswb7 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22051013_rvcpu reg_lswb7 ls_pc", false,-1, 63,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu reg_lswb7 ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu reg_lswb7 ls_exu_res", false,-1, 63,0);
        tracep->declQuad(c+525,"ysyx_22051013_rvcpu reg_lswb7 ls_wbdata", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_ena", false,-1);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+572,"ysyx_22051013_rvcpu reg_lswb7 ls_data_forward", false,-1, 63,0);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu reg_lswb7 ls_valid", false,-1);
        tracep->declBit(c+696,"ysyx_22051013_rvcpu reg_lswb7 wb_ready", false,-1);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu reg_lswb7 wb_inst", false,-1, 31,0);
        tracep->declQuad(c+56,"ysyx_22051013_rvcpu reg_lswb7 wb_pc", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu reg_lswb7 wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu reg_lswb7 wb_exu_res", false,-1, 63,0);
        tracep->declQuad(c+59,"ysyx_22051013_rvcpu reg_lswb7 wb_wbdata", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_addr", false,-1, 4,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+572,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu wbu8 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu wbu8 rst", false,-1);
        tracep->declQuad(c+59,"ysyx_22051013_rvcpu wbu8 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu wbu8 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu wbu8 exu_res", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu wbu8 inst_i", false,-1, 31,0);
        tracep->declQuad(c+56,"ysyx_22051013_rvcpu wbu8 pc_i", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu wbu8 rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wbu8 rd_addr", false,-1, 4,0);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu wbu8 ls_valid", false,-1);
        tracep->declBit(c+696,"ysyx_22051013_rvcpu wbu8 wb_ready", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wbu8 wb_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+574,"ysyx_22051013_rvcpu wbu8 wb_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu wbu8 wb_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wbu8 wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+574,"ysyx_22051013_rvcpu wbu8 wb_data", false,-1, 63,0);
        tracep->declBit(c+452,"ysyx_22051013_rvcpu wbu8 ebreak_ena", false,-1);
        tracep->declQuad(c+699,"ysyx_22051013_rvcpu wbu8 pc_zero", false,-1, 63,0);
        tracep->declBus(c+701,"ysyx_22051013_rvcpu wbu8 inst_zero", false,-1, 31,0);
        tracep->declBit(c+453,"ysyx_22051013_rvcpu wbu8 flag", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu reg9 clk", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu reg9 rst", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu reg9 waddr", false,-1, 4,0);
        tracep->declQuad(c+574,"ysyx_22051013_rvcpu reg9 wdata", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu reg9 wen", false,-1);
        tracep->declBus(c+551,"ysyx_22051013_rvcpu reg9 raddr1", false,-1, 4,0);
        tracep->declQuad(c+673,"ysyx_22051013_rvcpu reg9 rdata1", false,-1, 63,0);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu reg9 ren1", false,-1);
        tracep->declBus(c+552,"ysyx_22051013_rvcpu reg9 raddr2", false,-1, 4,0);
        tracep->declQuad(c+675,"ysyx_22051013_rvcpu reg9 rdata2", false,-1, 63,0);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu reg9 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+454+i*2,"ysyx_22051013_rvcpu reg9 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+518,"ysyx_22051013_rvcpu reg9 i", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_cache_inst),64);
        tracep->fullBit(oldp+4,(vlSelf->ysyx_22051013_rvcpu__DOT__data_not_ready));
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_read_data),64);
        tracep->fullBit(oldp+7,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))));
        tracep->fullBit(oldp+8,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                 & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))));
        tracep->fullBit(oldp+9,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
        tracep->fullCData(oldp+10,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                     ? 1U : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                              ? 2U : 0U))),5);
        tracep->fullBit(oldp+11,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
        tracep->fullCData(oldp+12,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_id),5);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data),64);
        tracep->fullBit(oldp+15,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
        tracep->fullQData(oldp+16,((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                     & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                                     ? (0xfffffffffffffff8ULL 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)
                                     : 0ULL)),64);
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__cache_axi_ena));
        tracep->fullBit(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_valid));
        tracep->fullIData(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst),32);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc),64);
        tracep->fullIData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
        tracep->fullIData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
        tracep->fullBit(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl),4);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
        tracep->fullBit(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
        tracep->fullBit(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
        tracep->fullCData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
        tracep->fullBit(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__data_ok));
        tracep->fullIData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
        tracep->fullBit(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
        tracep->fullBit(oldp+65,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_valid)))));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state),3);
        tracep->fullBit(oldp+68,((3U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand));
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__data_temp),64);
        tracep->fullBit(oldp+72,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand)))));
        tracep->fullBit(oldp+73,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                  & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                     & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))))));
        tracep->fullCData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state),2);
        tracep->fullCData(oldp+75,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                     ? ((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                          & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))) 
                                         & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                            & ((1U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                               & (1U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))))
                                         ? 3U : 1U)
                                     : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                         ? ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                             ? 1U : 3U)
                                         : 1U))),2);
        tracep->fullCData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state),2);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data),64);
        tracep->fullIData(oldp+79,((0xffffffU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                         >> 8U)))),24);
        tracep->fullCData(oldp+80,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                     >> 3U)))),5);
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state),4);
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update));
        tracep->fullBit(oldp+83,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__miss_data),64);
        tracep->fullBit(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_ena));
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_ena));
        tracep->fullBit(oldp+88,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
                                  & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))));
        tracep->fullIData(oldp+89,((0x1000000U | (0xffffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                             >> 8U))))),25);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data),24);
        tracep->fullBit(oldp+91,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data),24);
        tracep->fullBit(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__out_data),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__out_data),64);
        tracep->fullBit(oldp+98,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[0]));
        tracep->fullBit(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[1]));
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[2]));
        tracep->fullBit(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[3]));
        tracep->fullBit(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[4]));
        tracep->fullBit(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[5]));
        tracep->fullBit(oldp+104,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[6]));
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[7]));
        tracep->fullBit(oldp+106,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[8]));
        tracep->fullBit(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[9]));
        tracep->fullBit(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[10]));
        tracep->fullBit(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[11]));
        tracep->fullBit(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[12]));
        tracep->fullBit(oldp+111,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[13]));
        tracep->fullBit(oldp+112,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[14]));
        tracep->fullBit(oldp+113,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[15]));
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[16]));
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[17]));
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[18]));
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[19]));
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[20]));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[21]));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[22]));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[23]));
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[24]));
        tracep->fullBit(oldp+123,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[25]));
        tracep->fullBit(oldp+124,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[26]));
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[27]));
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[28]));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[29]));
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[30]));
        tracep->fullBit(oldp+129,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[31]));
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[0]));
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[1]));
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[2]));
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[3]));
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[4]));
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[5]));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[6]));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[7]));
        tracep->fullBit(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[8]));
        tracep->fullBit(oldp+139,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[9]));
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[10]));
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[11]));
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[12]));
        tracep->fullBit(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[13]));
        tracep->fullBit(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[14]));
        tracep->fullBit(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[15]));
        tracep->fullBit(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[16]));
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[17]));
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[18]));
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[19]));
        tracep->fullBit(oldp+150,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[20]));
        tracep->fullBit(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[21]));
        tracep->fullBit(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[22]));
        tracep->fullBit(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[23]));
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[24]));
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[25]));
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[26]));
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[27]));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[28]));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[29]));
        tracep->fullBit(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[30]));
        tracep->fullBit(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[31]));
        tracep->fullIData(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[0]),25);
        tracep->fullIData(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[1]),25);
        tracep->fullIData(oldp+164,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[2]),25);
        tracep->fullIData(oldp+165,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[3]),25);
        tracep->fullIData(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[4]),25);
        tracep->fullIData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[5]),25);
        tracep->fullIData(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[6]),25);
        tracep->fullIData(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[7]),25);
        tracep->fullIData(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[8]),25);
        tracep->fullIData(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[9]),25);
        tracep->fullIData(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[10]),25);
        tracep->fullIData(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[11]),25);
        tracep->fullIData(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[12]),25);
        tracep->fullIData(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[13]),25);
        tracep->fullIData(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[14]),25);
        tracep->fullIData(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[15]),25);
        tracep->fullIData(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[16]),25);
        tracep->fullIData(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[17]),25);
        tracep->fullIData(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[18]),25);
        tracep->fullIData(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[19]),25);
        tracep->fullIData(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[20]),25);
        tracep->fullIData(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[21]),25);
        tracep->fullIData(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[22]),25);
        tracep->fullIData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[23]),25);
        tracep->fullIData(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[24]),25);
        tracep->fullIData(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[25]),25);
        tracep->fullIData(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[26]),25);
        tracep->fullIData(oldp+189,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[27]),25);
        tracep->fullIData(oldp+190,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[28]),25);
        tracep->fullIData(oldp+191,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[29]),25);
        tracep->fullIData(oldp+192,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[30]),25);
        tracep->fullIData(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[31]),25);
        tracep->fullIData(oldp+194,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[0]),25);
        tracep->fullIData(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[1]),25);
        tracep->fullIData(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[2]),25);
        tracep->fullIData(oldp+197,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[3]),25);
        tracep->fullIData(oldp+198,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[4]),25);
        tracep->fullIData(oldp+199,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[5]),25);
        tracep->fullIData(oldp+200,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[6]),25);
        tracep->fullIData(oldp+201,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[7]),25);
        tracep->fullIData(oldp+202,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[8]),25);
        tracep->fullIData(oldp+203,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[9]),25);
        tracep->fullIData(oldp+204,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[10]),25);
        tracep->fullIData(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[11]),25);
        tracep->fullIData(oldp+206,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[12]),25);
        tracep->fullIData(oldp+207,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[13]),25);
        tracep->fullIData(oldp+208,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[14]),25);
        tracep->fullIData(oldp+209,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[15]),25);
        tracep->fullIData(oldp+210,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[16]),25);
        tracep->fullIData(oldp+211,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[17]),25);
        tracep->fullIData(oldp+212,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[18]),25);
        tracep->fullIData(oldp+213,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[19]),25);
        tracep->fullIData(oldp+214,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[20]),25);
        tracep->fullIData(oldp+215,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[21]),25);
        tracep->fullIData(oldp+216,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[22]),25);
        tracep->fullIData(oldp+217,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[23]),25);
        tracep->fullIData(oldp+218,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[24]),25);
        tracep->fullIData(oldp+219,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[25]),25);
        tracep->fullIData(oldp+220,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[26]),25);
        tracep->fullIData(oldp+221,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[27]),25);
        tracep->fullIData(oldp+222,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[28]),25);
        tracep->fullIData(oldp+223,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[29]),25);
        tracep->fullIData(oldp+224,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[30]),25);
        tracep->fullIData(oldp+225,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[31]),25);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[0]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[1]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[2]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[3]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[4]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[5]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[6]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[7]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[8]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[9]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[10]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[11]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[12]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[13]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[14]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[15]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[16]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[17]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[18]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[19]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[20]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[21]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[22]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[23]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[24]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[25]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[26]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[27]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[28]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[29]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[30]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[31]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[0]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[1]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[2]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[3]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[4]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[5]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[6]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[7]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[8]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[9]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[10]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[11]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[12]),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[13]),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[14]),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[15]),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[16]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[17]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[18]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[19]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[20]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[21]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[22]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[23]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[24]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[25]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[26]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[27]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[28]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[29]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[30]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[31]),64);
        tracep->fullIData(oldp+354,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
        tracep->fullSData(oldp+355,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
        tracep->fullCData(oldp+356,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst)),7);
        tracep->fullCData(oldp+357,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+358,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+359,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+360,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
        tracep->fullCData(oldp+361,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+362,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+363,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+364,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
        tracep->fullIData(oldp+365,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+366,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
        tracep->fullSData(oldp+367,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
        tracep->fullQData(oldp+368,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+374,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+376,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+379,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+382,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+385,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
        tracep->fullWData(oldp+388,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul),128);
        tracep->fullQData(oldp+392,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[2U])))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U] 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
        tracep->fullQData(oldp+398,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div),64);
        tracep->fullIData(oldp+400,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw),32);
        tracep->fullQData(oldp+401,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw)))),64);
        tracep->fullQData(oldp+403,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)))),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem),64);
        tracep->fullIData(oldp+407,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw),32);
        tracep->fullQData(oldp+408,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw)))),64);
        tracep->fullQData(oldp+410,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem)))),64);
        tracep->fullSData(oldp+412,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr),12);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data),64);
        tracep->fullQData(oldp+417,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value),64);
        tracep->fullQData(oldp+419,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+421,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+423,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+424,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr));
        tracep->fullBit(oldp+425,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie));
        tracep->fullBit(oldp+426,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie));
        tracep->fullCData(oldp+427,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp),2);
        tracep->fullQData(oldp+428,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus),64);
        tracep->fullBit(oldp+430,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena));
        tracep->fullBit(oldp+431,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 1U)) 
                                         & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))))));
        tracep->fullBit(oldp+432,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))))));
        tracep->fullCData(oldp+433,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                      ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                                 >> 0xdU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        tracep->fullBit(oldp+434,((1U & (((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 2U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullBit(oldp+435,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+436,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base),62);
        tracep->fullQData(oldp+438,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+440,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))));
        tracep->fullBit(oldp+441,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 3U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullQData(oldp+442,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc),64);
        tracep->fullBit(oldp+444,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+445,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+446,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause),64);
        tracep->fullCData(oldp+448,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
        tracep->fullCData(oldp+449,((3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+450,((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                 >> 2U)))));
        tracep->fullIData(oldp+451,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
        tracep->fullBit(oldp+452,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
        tracep->fullBit(oldp+453,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag));
        tracep->fullQData(oldp+454,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
        tracep->fullQData(oldp+456,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
        tracep->fullQData(oldp+458,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
        tracep->fullQData(oldp+460,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
        tracep->fullQData(oldp+462,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
        tracep->fullQData(oldp+464,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
        tracep->fullQData(oldp+466,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
        tracep->fullQData(oldp+468,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
        tracep->fullQData(oldp+470,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
        tracep->fullQData(oldp+472,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
        tracep->fullQData(oldp+474,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
        tracep->fullQData(oldp+476,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
        tracep->fullQData(oldp+478,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
        tracep->fullQData(oldp+480,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
        tracep->fullQData(oldp+482,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
        tracep->fullQData(oldp+484,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
        tracep->fullQData(oldp+486,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
        tracep->fullQData(oldp+488,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
        tracep->fullQData(oldp+490,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
        tracep->fullQData(oldp+492,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
        tracep->fullQData(oldp+494,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
        tracep->fullQData(oldp+496,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
        tracep->fullQData(oldp+498,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
        tracep->fullQData(oldp+500,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
        tracep->fullQData(oldp+502,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
        tracep->fullQData(oldp+504,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
        tracep->fullQData(oldp+506,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
        tracep->fullQData(oldp+508,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
        tracep->fullQData(oldp+510,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
        tracep->fullQData(oldp+512,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
        tracep->fullQData(oldp+514,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
        tracep->fullIData(oldp+518,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        tracep->fullQData(oldp+519,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                      ? (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                                          ? (0xfffffffffffffff8ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)
                                          : 0ULL) : 
                                     ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_datapc
                                       : 0ULL))),64);
        tracep->fullBit(oldp+521,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                   | ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re)))));
        tracep->fullQData(oldp+522,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                      ? ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                          ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                             + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                              ? (4ULL 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)
                                              : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+524,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                      ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullQData(oldp+525,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__data_not_ready)))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+527,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__cache_axi_ena)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__data_ok))));
        tracep->fullBit(oldp+528,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__cache_axi_ena)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_we)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__data_ok))));
        tracep->fullCData(oldp+529,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                                          ? 2U : 1U)
                                      : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                          ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                              ? 1U : 2U)
                                          : 1U))),2);
        tracep->fullBit(oldp+530,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                        | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+531,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+532,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+533,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                        | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+534,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+535,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+536,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+537,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+538,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+539,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+540,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+541,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+542,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+543,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+544,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_we));
        tracep->fullBit(oldp+545,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re));
        tracep->fullCData(oldp+546,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_wmask),8);
        tracep->fullQData(oldp+547,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_datapc),64);
        tracep->fullQData(oldp+549,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_write_data),64);
        tracep->fullCData(oldp+551,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
        tracep->fullCData(oldp+552,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
        tracep->fullBit(oldp+553,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+554,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+555,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
        tracep->fullBit(oldp+556,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 1U))));
        tracep->fullBit(oldp+557,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
        tracep->fullQData(oldp+558,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
        tracep->fullQData(oldp+560,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
        tracep->fullQData(oldp+562,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
        tracep->fullBit(oldp+564,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
        tracep->fullCData(oldp+565,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
        tracep->fullCData(oldp+566,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
        tracep->fullCData(oldp+567,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                      << 3U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena))))),4);
        tracep->fullCData(oldp+568,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
        tracep->fullQData(oldp+569,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
        tracep->fullBit(oldp+571,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel));
        tracep->fullQData(oldp+572,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
        tracep->fullQData(oldp+574,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
        tracep->fullCData(oldp+576,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next),3);
        tracep->fullBit(oldp+577,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
        tracep->fullCData(oldp+578,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
        tracep->fullBit(oldp+579,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
        tracep->fullBit(oldp+580,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb3U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
        tracep->fullBit(oldp+581,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 2U))));
        tracep->fullBit(oldp+582,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
        tracep->fullQData(oldp+583,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
        tracep->fullBit(oldp+585,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
        tracep->fullBit(oldp+586,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena));
        tracep->fullBit(oldp+587,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena));
        tracep->fullBit(oldp+588,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena));
        tracep->fullBit(oldp+589,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena));
        tracep->fullCData(oldp+590,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+591,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+592,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+593,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+594,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+595,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+596,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+597,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+598,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+599,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+600,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+601,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+602,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+603,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+604,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+605,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+606,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+607,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+608,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+609,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+610,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+611,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+612,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+613,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+614,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+615,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+616,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+617,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+618,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+619,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+620,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+621,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+622,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+623,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+624,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+625,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+626,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+627,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+628,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+629,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+630,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+631,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+632,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+633,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+634,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+635,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+636,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+637,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+638,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+640,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+641,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+642,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+643,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+644,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+645,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
        tracep->fullBit(oldp+646,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
        tracep->fullBit(oldp+647,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+648,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+649,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+650,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+651,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+652,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+653,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+654,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+655,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))));
        tracep->fullQData(oldp+656,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
        tracep->fullQData(oldp+658,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
        tracep->fullCData(oldp+660,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
        tracep->fullSData(oldp+661,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
        tracep->fullCData(oldp+662,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__sb_mask),8);
        tracep->fullBit(oldp+663,(vlSelf->clk));
        tracep->fullBit(oldp+664,(vlSelf->rst));
        tracep->fullBit(oldp+665,(((~ (IData)(vlSelf->rst)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                         >> 0xbU)))));
        tracep->fullQData(oldp+666,(((IData)(vlSelf->rst)
                                      ? 0ULL : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                + (
                                                   ((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))
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
        tracep->fullIData(oldp+668,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->fullQData(oldp+669,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+671,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)),64);
        tracep->fullQData(oldp+673,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+675,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                      : 0ULL)),64);
        tracep->fullBit(oldp+677,(((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))));
        tracep->fullQData(oldp+678,((((IData)(vlSelf->rst)
                                       ? 0U : (IData)(
                                                      (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))
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
        tracep->fullQData(oldp+680,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                     + (((IData)(vlSelf->rst)
                                          ? 0U : (IData)(
                                                         (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))
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
        tracep->fullBit(oldp+682,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+683,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullQData(oldp+684,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->fullQData(oldp+686,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->fullCData(oldp+688,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+689,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullCData(oldp+690,(2U),5);
        tracep->fullCData(oldp+691,(0U),2);
        tracep->fullBit(oldp+692,(1U));
        tracep->fullBit(oldp+693,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ifid_jumpflush));
        tracep->fullQData(oldp+694,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_bpu_data),64);
        tracep->fullBit(oldp+696,(0U));
        tracep->fullBit(oldp+697,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_flush));
        tracep->fullCData(oldp+698,(8U),8);
        tracep->fullQData(oldp+699,(0ULL),64);
        tracep->fullIData(oldp+701,(0U),32);
    }
}
