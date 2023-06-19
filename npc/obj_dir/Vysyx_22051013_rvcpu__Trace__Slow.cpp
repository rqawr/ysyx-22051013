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
        tracep->declBit(c+796,"clk", false,-1);
        tracep->declBit(c+797,"rst", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declBus(c+498,"ysyx_22051013_rvcpu axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+499,"ysyx_22051013_rvcpu axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+501,"ysyx_22051013_rvcpu axi_aw_valid", false,-1);
        tracep->declBit(c+502,"ysyx_22051013_rvcpu axi_aw_ready", false,-1);
        tracep->declBus(c+828,"ysyx_22051013_rvcpu axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22051013_rvcpu axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu axi_w_data", false,-1, 63,0);
        tracep->declBus(c+506,"ysyx_22051013_rvcpu axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu axi_w_last", false,-1);
        tracep->declBit(c+508,"ysyx_22051013_rvcpu axi_w_valid", false,-1);
        tracep->declBit(c+509,"ysyx_22051013_rvcpu axi_w_ready", false,-1);
        tracep->declBus(c+510,"ysyx_22051013_rvcpu axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+511,"ysyx_22051013_rvcpu axi_b_valid", false,-1);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu axi_b_ready", false,-1);
        tracep->declBus(c+512,"ysyx_22051013_rvcpu axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+513,"ysyx_22051013_rvcpu axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_ar_valid", false,-1);
        tracep->declBit(c+393,"ysyx_22051013_rvcpu axi_ar_ready", false,-1);
        tracep->declBus(c+828,"ysyx_22051013_rvcpu axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+515,"ysyx_22051013_rvcpu axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22051013_rvcpu axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+394,"ysyx_22051013_rvcpu axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+516,"ysyx_22051013_rvcpu axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+395,"ysyx_22051013_rvcpu axi_r_last", false,-1);
        tracep->declBit(c+395,"ysyx_22051013_rvcpu axi_r_valid", false,-1);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu axi_r_ready", false,-1);
        tracep->declBus(c+518,"ysyx_22051013_rvcpu soc_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+519,"ysyx_22051013_rvcpu soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+521,"ysyx_22051013_rvcpu soc_axi_aw_valid", false,-1);
        tracep->declBit(c+522,"ysyx_22051013_rvcpu soc_axi_aw_ready", false,-1);
        tracep->declBus(c+523,"ysyx_22051013_rvcpu soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+524,"ysyx_22051013_rvcpu soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+525,"ysyx_22051013_rvcpu soc_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+526,"ysyx_22051013_rvcpu soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+528,"ysyx_22051013_rvcpu soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+529,"ysyx_22051013_rvcpu soc_axi_w_last", false,-1);
        tracep->declBit(c+530,"ysyx_22051013_rvcpu soc_axi_w_valid", false,-1);
        tracep->declBit(c+531,"ysyx_22051013_rvcpu soc_axi_w_ready", false,-1);
        tracep->declBus(c+518,"ysyx_22051013_rvcpu soc_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu soc_axi_b_valid", false,-1);
        tracep->declBit(c+532,"ysyx_22051013_rvcpu soc_axi_b_ready", false,-1);
        tracep->declBus(c+533,"ysyx_22051013_rvcpu soc_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+396,"ysyx_22051013_rvcpu soc_axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu soc_axi_ar_ready", false,-1);
        tracep->declBus(c+536,"ysyx_22051013_rvcpu soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+537,"ysyx_22051013_rvcpu soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+538,"ysyx_22051013_rvcpu soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+397,"ysyx_22051013_rvcpu soc_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu soc_axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu soc_axi_r_valid", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu soc_axi_r_ready", false,-1);
        tracep->declBus(c+540,"ysyx_22051013_rvcpu t_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+541,"ysyx_22051013_rvcpu t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu t_axi_aw_valid", false,-1);
        tracep->declBit(c+544,"ysyx_22051013_rvcpu t_axi_aw_ready", false,-1);
        tracep->declBus(c+545,"ysyx_22051013_rvcpu t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+547,"ysyx_22051013_rvcpu t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+548,"ysyx_22051013_rvcpu t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+550,"ysyx_22051013_rvcpu t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+551,"ysyx_22051013_rvcpu t_axi_w_last", false,-1);
        tracep->declBit(c+552,"ysyx_22051013_rvcpu t_axi_w_valid", false,-1);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu t_axi_w_ready", false,-1);
        tracep->declBus(c+540,"ysyx_22051013_rvcpu t_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu t_axi_b_valid", false,-1);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu t_axi_b_ready", false,-1);
        tracep->declBus(c+555,"ysyx_22051013_rvcpu t_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+556,"ysyx_22051013_rvcpu t_axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+398,"ysyx_22051013_rvcpu t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu t_axi_ar_ready", false,-1);
        tracep->declBus(c+558,"ysyx_22051013_rvcpu t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+559,"ysyx_22051013_rvcpu t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+560,"ysyx_22051013_rvcpu t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+399,"ysyx_22051013_rvcpu t_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+400,"ysyx_22051013_rvcpu t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu t_axi_r_valid", false,-1);
        tracep->declBit(c+561,"ysyx_22051013_rvcpu t_axi_r_ready", false,-1);
        tracep->declBit(c+562,"ysyx_22051013_rvcpu axi_icache_valid", false,-1);
        tracep->declQuad(c+402,"ysyx_22051013_rvcpu axi_icache_inst", false,-1, 63,0);
        tracep->declQuad(c+563,"ysyx_22051013_rvcpu icache_axi_pc", false,-1, 63,0);
        tracep->declBit(c+565,"ysyx_22051013_rvcpu icache_axi_ena", false,-1);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu icache_if_valid", false,-1);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu icache_if_inst", false,-1, 31,0);
        tracep->declQuad(c+566,"ysyx_22051013_rvcpu if_icache_pc", false,-1, 63,0);
        tracep->declBit(c+568,"ysyx_22051013_rvcpu lsu_ddsel_we", false,-1);
        tracep->declBit(c+569,"ysyx_22051013_rvcpu lsu_ddsel_re", false,-1);
        tracep->declBus(c+570,"ysyx_22051013_rvcpu lsu_ddsel_wmask", false,-1, 7,0);
        tracep->declQuad(c+571,"ysyx_22051013_rvcpu lsu_ddsel_data_pc", false,-1, 63,0);
        tracep->declQuad(c+573,"ysyx_22051013_rvcpu lsu_ddsel_read_data", false,-1, 63,0);
        tracep->declQuad(c+575,"ysyx_22051013_rvcpu lsu_ddsel_write_data", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu lsu_ddsel_ready", false,-1);
        tracep->declBit(c+577,"ysyx_22051013_rvcpu lsu_ddsel_valid", false,-1);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu lsu_ddsel_device_data", false,-1, 63,0);
        tracep->declBit(c+578,"ysyx_22051013_rvcpu ddsel_axi_clint", false,-1);
        tracep->declBit(c+404,"ysyx_22051013_rvcpu ddsel_axi_re", false,-1);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu ddsel_axi_we", false,-1);
        tracep->declBus(c+506,"ysyx_22051013_rvcpu ddsel_axi_mask", false,-1, 7,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu ddsel_axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+579,"ysyx_22051013_rvcpu axi_ddsel_data_i", false,-1, 63,0);
        tracep->declQuad(c+499,"ysyx_22051013_rvcpu ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+581,"ysyx_22051013_rvcpu axi_ddsel_valid", false,-1);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu ddsel_axi_data_size", false,-1, 2,0);
        tracep->declBit(c+582,"ysyx_22051013_rvcpu ddsel_dcache_re", false,-1);
        tracep->declBit(c+583,"ysyx_22051013_rvcpu ddsel_dcache_we", false,-1);
        tracep->declBus(c+584,"ysyx_22051013_rvcpu ddsel_dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+585,"ysyx_22051013_rvcpu ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+587,"ysyx_22051013_rvcpu dcache_ddsel_data", false,-1, 63,0);
        tracep->declQuad(c+589,"ysyx_22051013_rvcpu ddsel_dcache_pc", false,-1, 63,0);
        tracep->declBit(c+405,"ysyx_22051013_rvcpu dcache_ddsel_valid", false,-1);
        tracep->declBit(c+591,"ysyx_22051013_rvcpu ddsel_dcache_ready", false,-1);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu dcache_ddsel_axi_re", false,-1);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu dcache_ddsel_axi_we", false,-1);
        tracep->declQuad(c+592,"ysyx_22051013_rvcpu axi_ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+407,"ysyx_22051013_rvcpu dcache_ddsel_axi_data", false,-1, 63,0);
        tracep->declQuad(c+409,"ysyx_22051013_rvcpu dcache_ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+594,"ysyx_22051013_rvcpu axi_ddsel_dcache_valid", false,-1);
        tracep->declBit(c+798,"ysyx_22051013_rvcpu bpu_ifid_jump", false,-1);
        tracep->declQuad(c+799,"ysyx_22051013_rvcpu bpu_if_pc", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu bpu_icache_hold", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu if_icache_ready", false,-1);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu ifid_if_inst", false,-1, 31,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu ifid_if_pc", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_22051013_rvcpu ifid_id_inst", false,-1, 31,0);
        tracep->declQuad(c+20,"ysyx_22051013_rvcpu ifid_id_pc", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22051013_rvcpu ifid_id_jump", false,-1);
        tracep->declBus(c+596,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+597,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+598,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+599,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declQuad(c+411,"ysyx_22051013_rvcpu id_if_pc", false,-1, 63,0);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu id_if_pc_sel", false,-1);
        tracep->declBit(c+832,"ysyx_22051013_rvcpu id_ifid_jumpflush", false,-1);
        tracep->declBit(c+601,"ysyx_22051013_rvcpu id_load_flag", false,-1);
        tracep->declBus(c+801,"ysyx_22051013_rvcpu idex_id_inst", false,-1, 31,0);
        tracep->declQuad(c+802,"ysyx_22051013_rvcpu idex_id_pc", false,-1, 63,0);
        tracep->declQuad(c+602,"ysyx_22051013_rvcpu idex_id_op1", false,-1, 63,0);
        tracep->declQuad(c+604,"ysyx_22051013_rvcpu idex_id_op2", false,-1, 63,0);
        tracep->declQuad(c+606,"ysyx_22051013_rvcpu idex_id_imm", false,-1, 63,0);
        tracep->declBit(c+608,"ysyx_22051013_rvcpu idex_id_rd_ena", false,-1);
        tracep->declBus(c+413,"ysyx_22051013_rvcpu idex_id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+609,"ysyx_22051013_rvcpu idex_id_lsctl", false,-1, 3,0);
        tracep->declBus(c+610,"ysyx_22051013_rvcpu idex_id_wbctl", false,-1, 1,0);
        tracep->declBus(c+611,"ysyx_22051013_rvcpu idex_id_alu_sel", false,-1, 7,0);
        tracep->declBus(c+612,"ysyx_22051013_rvcpu idex_id_op1sel", false,-1, 1,0);
        tracep->declBus(c+613,"ysyx_22051013_rvcpu idex_id_op2sel", false,-1, 2,0);
        tracep->declBus(c+23,"ysyx_22051013_rvcpu idex_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu idex_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu idex_ex_op2", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22051013_rvcpu idex_ex_imm", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22051013_rvcpu idex_ex_rd_ena", false,-1);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu idex_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu idex_ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu idex_ex_wbctl", false,-1, 1,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu idex_ex_alu_sel", false,-1, 7,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu idex_ex_op1sel", false,-1, 1,0);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu idex_ex_op2sel", false,-1, 2,0);
        tracep->declBus(c+39,"ysyx_22051013_rvcpu idex_ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu ex_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+614,"ysyx_22051013_rvcpu ex_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+40,"ysyx_22051013_rvcpu ex_load_ena", false,-1);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu exls_ex_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+42,"ysyx_22051013_rvcpu exls_ex_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+614,"ysyx_22051013_rvcpu exls_ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu exls_ex_store_data", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu exls_ls_inst", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22051013_rvcpu exls_ls_pc", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu exls_ls_aludata", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu exls_ls_store_data", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22051013_rvcpu exls_ls_rd_ena", false,-1);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu exls_ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+50,"ysyx_22051013_rvcpu exls_ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu exls_ls_wbctl", false,-1, 1,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu exls_ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu exls_ls_csr_addr", false,-1, 11,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu ls_dcache_datasize", false,-1, 2,0);
        tracep->declQuad(c+616,"ysyx_22051013_rvcpu ls_lswb_data_forward", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu ls_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+616,"ysyx_22051013_rvcpu ls_id_data_forward", false,-1, 63,0);
        tracep->declQuad(c+618,"ysyx_22051013_rvcpu lswb_ls_wbdata", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu lswb_wb_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+56,"ysyx_22051013_rvcpu lswb_wb_csr_addr", false,-1, 11,0);
        tracep->declBus(c+57,"ysyx_22051013_rvcpu lswb_wb_inst", false,-1, 31,0);
        tracep->declQuad(c+58,"ysyx_22051013_rvcpu lswb_wb_pc", false,-1, 63,0);
        tracep->declBus(c+60,"ysyx_22051013_rvcpu lswb_wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu lswb_wb_wbdata", false,-1, 63,0);
        tracep->declQuad(c+63,"ysyx_22051013_rvcpu lswb_wb_aludata", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu lswb_wb_rd_ena", false,-1);
        tracep->declBus(c+66,"ysyx_22051013_rvcpu lswb_wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+833,"ysyx_22051013_rvcpu wb_ex_csr_update", false,-1);
        tracep->declQuad(c+67,"ysyx_22051013_rvcpu wb_reg_rd_data", false,-1, 63,0);
        tracep->declBit(c+69,"ysyx_22051013_rvcpu wb_reg_rd_ena", false,-1);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu wb_reg_rd_addr", false,-1, 4,0);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu wb_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22051013_rvcpu wb_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu ie_if_pc_sel", false,-1);
        tracep->declQuad(c+72,"ysyx_22051013_rvcpu ie_if_pc", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu ie_flush", false,-1);
        tracep->declQuad(c+804,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+806,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+834,"ysyx_22051013_rvcpu reg_bpu_data", false,-1, 63,0);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu if_valid", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu id_valid", false,-1);
        tracep->declBit(c+75,"ysyx_22051013_rvcpu ex_valid", false,-1);
        tracep->declBit(c+620,"ysyx_22051013_rvcpu ls_valid", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu wb_ready", false,-1);
        tracep->declBit(c+621,"ysyx_22051013_rvcpu ls_ready", false,-1);
        tracep->declBit(c+622,"ysyx_22051013_rvcpu ex_ready", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu id_ready", false,-1);
        tracep->declBit(c+837,"ysyx_22051013_rvcpu ex_flush", false,-1);
        tracep->declBit(c+623,"ysyx_22051013_rvcpu id_idex_flush", false,-1);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu id_ifid_flush", false,-1);
        tracep->declBit(c+838,"ysyx_22051013_rvcpu ls_lswb_flush", false,-1);
        tracep->declBit(c+76,"ysyx_22051013_rvcpu time_interrupt", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu axi_master_arbitrator0 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu axi_master_arbitrator0 rst", false,-1);
        tracep->declQuad(c+563,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_pc", false,-1, 63,0);
        tracep->declBit(c+565,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_ena", false,-1);
        tracep->declQuad(c+402,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst", false,-1, 63,0);
        tracep->declBit(c+562,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst_valid", false,-1);
        tracep->declQuad(c+499,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_pc", false,-1, 63,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_i", false,-1, 63,0);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu axi_master_arbitrator0 we", false,-1);
        tracep->declBit(c+404,"ysyx_22051013_rvcpu axi_master_arbitrator0 re", false,-1);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_size", false,-1, 2,0);
        tracep->declBus(c+506,"ysyx_22051013_rvcpu axi_master_arbitrator0 wmask", false,-1, 7,0);
        tracep->declBit(c+578,"ysyx_22051013_rvcpu axi_master_arbitrator0 clint_ena", false,-1);
        tracep->declQuad(c+579,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_o", false,-1, 63,0);
        tracep->declBit(c+581,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_data_valid", false,-1);
        tracep->declBus(c+498,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+499,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+501,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_valid", false,-1);
        tracep->declBit(c+502,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_ready", false,-1);
        tracep->declBus(c+828,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+506,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_last", false,-1);
        tracep->declBit(c+508,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_valid", false,-1);
        tracep->declBit(c+509,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_ready", false,-1);
        tracep->declBus(c+510,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+511,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_valid", false,-1);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_ready", false,-1);
        tracep->declBus(c+512,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+513,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+828,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+515,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_valid", false,-1);
        tracep->declBit(c+393,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_ready", false,-1);
        tracep->declBus(c+394,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+516,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+395,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_last", false,-1);
        tracep->declBit(c+395,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_valid", false,-1);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_ready", false,-1);
        tracep->declBit(c+624,"ysyx_22051013_rvcpu axi_master_arbitrator0 if_read", false,-1);
        tracep->declBit(c+625,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_read", false,-1);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_write", false,-1);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu axi_master_arbitrator0 w_valid", false,-1);
        tracep->declBit(c+626,"ysyx_22051013_rvcpu axi_master_arbitrator0 r_valid", false,-1);
        tracep->declBit(c+627,"ysyx_22051013_rvcpu axi_master_arbitrator0 aw_sh", false,-1);
        tracep->declBit(c+628,"ysyx_22051013_rvcpu axi_master_arbitrator0 w_sh", false,-1);
        tracep->declBit(c+511,"ysyx_22051013_rvcpu axi_master_arbitrator0 b_sh", false,-1);
        tracep->declBit(c+414,"ysyx_22051013_rvcpu axi_master_arbitrator0 ar_sh", false,-1);
        tracep->declBit(c+629,"ysyx_22051013_rvcpu axi_master_arbitrator0 r_sh", false,-1);
        tracep->declBus(c+77,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_w_state", false,-1, 2,0);
        tracep->declBus(c+78,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_r_state", false,-1, 2,0);
        tracep->declBus(c+79,"ysyx_22051013_rvcpu axi_master_arbitrator0 read_state", false,-1, 1,0);
        tracep->declBus(c+630,"ysyx_22051013_rvcpu axi_master_arbitrator0 read_state_next", false,-1, 1,0);
        tracep->declBit(c+511,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_w_not_ready", false,-1);
        tracep->declBit(c+629,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_r_not_ready", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu axi_slave1 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu axi_slave1 rst", false,-1);
        tracep->declBus(c+518,"ysyx_22051013_rvcpu axi_slave1 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+519,"ysyx_22051013_rvcpu axi_slave1 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+521,"ysyx_22051013_rvcpu axi_slave1 axi_aw_valid", false,-1);
        tracep->declBit(c+522,"ysyx_22051013_rvcpu axi_slave1 axi_aw_ready", false,-1);
        tracep->declBus(c+523,"ysyx_22051013_rvcpu axi_slave1 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+524,"ysyx_22051013_rvcpu axi_slave1 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+525,"ysyx_22051013_rvcpu axi_slave1 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+526,"ysyx_22051013_rvcpu axi_slave1 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+528,"ysyx_22051013_rvcpu axi_slave1 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+529,"ysyx_22051013_rvcpu axi_slave1 axi_w_last", false,-1);
        tracep->declBit(c+530,"ysyx_22051013_rvcpu axi_slave1 axi_w_valid", false,-1);
        tracep->declBit(c+531,"ysyx_22051013_rvcpu axi_slave1 axi_w_ready", false,-1);
        tracep->declBus(c+518,"ysyx_22051013_rvcpu axi_slave1 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu axi_slave1 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_slave1 axi_b_valid", false,-1);
        tracep->declBit(c+532,"ysyx_22051013_rvcpu axi_slave1 axi_b_ready", false,-1);
        tracep->declBus(c+533,"ysyx_22051013_rvcpu axi_slave1 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu axi_slave1 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+536,"ysyx_22051013_rvcpu axi_slave1 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+537,"ysyx_22051013_rvcpu axi_slave1 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+538,"ysyx_22051013_rvcpu axi_slave1 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+396,"ysyx_22051013_rvcpu axi_slave1 axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_slave1 axi_ar_ready", false,-1);
        tracep->declBus(c+397,"ysyx_22051013_rvcpu axi_slave1 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu axi_slave1 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu axi_slave1 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu axi_slave1 axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu axi_slave1 axi_r_valid", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu axi_slave1 axi_r_ready", false,-1);
        tracep->declBit(c+631,"ysyx_22051013_rvcpu axi_slave1 awc_shakehand", false,-1);
        tracep->declBit(c+632,"ysyx_22051013_rvcpu axi_slave1 wc_shakehand", false,-1);
        tracep->declBit(c+633,"ysyx_22051013_rvcpu axi_slave1 bc_shakehand", false,-1);
        tracep->declBus(c+80,"ysyx_22051013_rvcpu axi_slave1 s_write_state", false,-1, 1,0);
        tracep->declBus(c+415,"ysyx_22051013_rvcpu axi_slave1 s_write_state_next", false,-1, 1,0);
        tracep->declBit(c+634,"ysyx_22051013_rvcpu axi_slave1 arc_shakehand", false,-1);
        tracep->declBit(c+416,"ysyx_22051013_rvcpu axi_slave1 rc_shakehand", false,-1);
        tracep->declBus(c+81,"ysyx_22051013_rvcpu axi_slave1 s_read_state", false,-1, 1,0);
        tracep->declBus(c+417,"ysyx_22051013_rvcpu axi_slave1 s_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+82,"ysyx_22051013_rvcpu axi_slave1 dpic_read_data", false,-1, 63,0);
        tracep->declBus(c+635,"ysyx_22051013_rvcpu axi_slave1 rlen", false,-1, 7,0);
        tracep->declBit(c+636,"ysyx_22051013_rvcpu axi_slave1 unused_ok", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu i_cache2 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu i_cache2 rst", false,-1);
        tracep->declQuad(c+566,"ysyx_22051013_rvcpu i_cache2 inst_pc", false,-1, 63,0);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu i_cache2 pc_ready", false,-1);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu i_cache2 inst_valid", false,-1);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu i_cache2 hold", false,-1);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu i_cache2 inst", false,-1, 31,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu i_cache2 pc", false,-1, 63,0);
        tracep->declQuad(c+563,"ysyx_22051013_rvcpu i_cache2 axi_pc", false,-1, 63,0);
        tracep->declBit(c+565,"ysyx_22051013_rvcpu i_cache2 axi_ena", false,-1);
        tracep->declQuad(c+402,"ysyx_22051013_rvcpu i_cache2 axi_inst", false,-1, 63,0);
        tracep->declBit(c+562,"ysyx_22051013_rvcpu i_cache2 axi_valid", false,-1);
        tracep->declBus(c+637,"ysyx_22051013_rvcpu i_cache2 icache_tag", false,-1, 22,0);
        tracep->declBus(c+638,"ysyx_22051013_rvcpu i_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+84,"ysyx_22051013_rvcpu i_cache2 icache_state", false,-1, 3,0);
        tracep->declBus(c+639,"ysyx_22051013_rvcpu i_cache2 icache_state_next", false,-1, 3,0);
        tracep->declBit(c+418,"ysyx_22051013_rvcpu i_cache2 way1_hit", false,-1);
        tracep->declBit(c+419,"ysyx_22051013_rvcpu i_cache2 way2_hit", false,-1);
        tracep->declBit(c+85,"ysyx_22051013_rvcpu i_cache2 hit1", false,-1);
        tracep->declBit(c+86,"ysyx_22051013_rvcpu i_cache2 hit2", false,-1);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu i_cache2 hit_pc", false,-1, 63,0);
        tracep->declBus(c+87,"ysyx_22051013_rvcpu i_cache2 hit_index", false,-1, 5,0);
        tracep->declBus(c+88,"ysyx_22051013_rvcpu i_cache2 hit_tag", false,-1, 22,0);
        tracep->declArray(c+420,"ysyx_22051013_rvcpu i_cache2 miss_data", false,-1, 127,0);
        tracep->declArray(c+640,"ysyx_22051013_rvcpu i_cache2 cache_strb", false,-1, 127,0);
        tracep->declBit(c+644,"ysyx_22051013_rvcpu i_cache2 cache_ena", false,-1);
        tracep->declBit(c+645,"ysyx_22051013_rvcpu i_cache2 write_in_valid", false,-1);
        tracep->declBit(c+89,"ysyx_22051013_rvcpu i_cache2 delay1", false,-1);
        tracep->declBit(c+90,"ysyx_22051013_rvcpu i_cache2 delay2", false,-1);
        tracep->declBus(c+646,"ysyx_22051013_rvcpu i_cache2 tag_with_valid", false,-1, 23,0);
        tracep->declBus(c+647,"ysyx_22051013_rvcpu i_cache2 tag", false,-1, 22,0);
        tracep->declBus(c+91,"ysyx_22051013_rvcpu i_cache2 i_tag_way1", false,-1, 22,0);
        tracep->declBit(c+92,"ysyx_22051013_rvcpu i_cache2 i_tag_valid1", false,-1);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu i_cache2 way1_tag_ena", false,-1);
        tracep->declBus(c+648,"ysyx_22051013_rvcpu i_cache2 index", false,-1, 5,0);
        tracep->declBus(c+93,"ysyx_22051013_rvcpu i_cache2 i_tag_way2", false,-1, 22,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu i_cache2 i_tag_valid2", false,-1);
        tracep->declBit(c+425,"ysyx_22051013_rvcpu i_cache2 way2_tag_ena", false,-1);
        tracep->declArray(c+95,"ysyx_22051013_rvcpu i_cache2 cache_data", false,-1, 127,0);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu i_cache2 ce", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu i_cache2 tag_ram0 clk", false,-1);
        tracep->declBus(c+648,"ysyx_22051013_rvcpu i_cache2 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+646,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu i_cache2 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+91,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+92,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+91,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+92,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_vaild", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu i_cache2 tag_ram1 clk", false,-1);
        tracep->declBus(c+648,"ysyx_22051013_rvcpu i_cache2 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+646,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+425,"ysyx_22051013_rvcpu i_cache2 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+93,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+93,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+839,"ysyx_22051013_rvcpu i_cache2 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+840,"ysyx_22051013_rvcpu i_cache2 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"ysyx_22051013_rvcpu i_cache2 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+839,"ysyx_22051013_rvcpu i_cache2 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+95,"ysyx_22051013_rvcpu i_cache2 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu i_cache2 data_ram0 CLK", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu i_cache2 data_ram0 CEN", false,-1);
        tracep->declBit(c+649,"ysyx_22051013_rvcpu i_cache2 data_ram0 WEN", false,-1);
        tracep->declArray(c+650,"ysyx_22051013_rvcpu i_cache2 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+87,"ysyx_22051013_rvcpu i_cache2 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+420,"ysyx_22051013_rvcpu i_cache2 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu i_cache2 data_ram0 cen", false,-1);
        tracep->declBit(c+644,"ysyx_22051013_rvcpu i_cache2 data_ram0 wen", false,-1);
        tracep->declArray(c+640,"ysyx_22051013_rvcpu i_cache2 data_ram0 bwen", false,-1, 127,0);
        tracep->declBit(c+569,"ysyx_22051013_rvcpu dcache_device_sel3 core_re", false,-1);
        tracep->declBit(c+568,"ysyx_22051013_rvcpu dcache_device_sel3 core_we", false,-1);
        tracep->declBus(c+570,"ysyx_22051013_rvcpu dcache_device_sel3 core_mask", false,-1, 7,0);
        tracep->declQuad(c+575,"ysyx_22051013_rvcpu dcache_device_sel3 core_data_i", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu dcache_device_sel3 device_data_i", false,-1, 63,0);
        tracep->declQuad(c+571,"ysyx_22051013_rvcpu dcache_device_sel3 core_addr", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu dcache_device_sel3 core_ready", false,-1);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu dcache_device_sel3 core_size", false,-1, 2,0);
        tracep->declBit(c+577,"ysyx_22051013_rvcpu dcache_device_sel3 data_valid", false,-1);
        tracep->declQuad(c+573,"ysyx_22051013_rvcpu dcache_device_sel3 data_to_core", false,-1, 63,0);
        tracep->declBit(c+578,"ysyx_22051013_rvcpu dcache_device_sel3 clint_ena", false,-1);
        tracep->declBit(c+404,"ysyx_22051013_rvcpu dcache_device_sel3 axi_re", false,-1);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu dcache_device_sel3 axi_we", false,-1);
        tracep->declBus(c+506,"ysyx_22051013_rvcpu dcache_device_sel3 axi_mask", false,-1, 7,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+499,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_pc", false,-1, 63,0);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu dcache_device_sel3 axi_size", false,-1, 2,0);
        tracep->declBit(c+581,"ysyx_22051013_rvcpu dcache_device_sel3 axi_valid", false,-1);
        tracep->declQuad(c+579,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+582,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_re", false,-1);
        tracep->declBit(c+583,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_we", false,-1);
        tracep->declBus(c+584,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+585,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_o", false,-1, 63,0);
        tracep->declQuad(c+589,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_pc", false,-1, 63,0);
        tracep->declBit(c+591,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_ready", false,-1);
        tracep->declBit(c+405,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_valid", false,-1);
        tracep->declQuad(c+587,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_i", false,-1, 63,0);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_re", false,-1);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_we", false,-1);
        tracep->declQuad(c+409,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_pc", false,-1, 63,0);
        tracep->declQuad(c+407,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_data", false,-1, 63,0);
        tracep->declQuad(c+592,"ysyx_22051013_rvcpu dcache_device_sel3 axi_dcache_data", false,-1, 63,0);
        tracep->declBit(c+594,"ysyx_22051013_rvcpu dcache_device_sel3 axi_dcache_valid", false,-1);
        tracep->declBit(c+654,"ysyx_22051013_rvcpu dcache_device_sel3 device_ena", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu d_cache4 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu d_cache4 rst", false,-1);
        tracep->declQuad(c+589,"ysyx_22051013_rvcpu d_cache4 data_pc", false,-1, 63,0);
        tracep->declQuad(c+585,"ysyx_22051013_rvcpu d_cache4 data_i", false,-1, 63,0);
        tracep->declBit(c+591,"ysyx_22051013_rvcpu d_cache4 core_ready", false,-1);
        tracep->declBit(c+582,"ysyx_22051013_rvcpu d_cache4 re", false,-1);
        tracep->declBit(c+583,"ysyx_22051013_rvcpu d_cache4 we", false,-1);
        tracep->declBus(c+584,"ysyx_22051013_rvcpu d_cache4 wmask", false,-1, 7,0);
        tracep->declBit(c+405,"ysyx_22051013_rvcpu d_cache4 data_valid", false,-1);
        tracep->declQuad(c+587,"ysyx_22051013_rvcpu d_cache4 data_o", false,-1, 63,0);
        tracep->declQuad(c+409,"ysyx_22051013_rvcpu d_cache4 axi_pc", false,-1, 63,0);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu d_cache4 axi_r_ena", false,-1);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu d_cache4 axi_w_ena", false,-1);
        tracep->declQuad(c+407,"ysyx_22051013_rvcpu d_cache4 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+592,"ysyx_22051013_rvcpu d_cache4 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+594,"ysyx_22051013_rvcpu d_cache4 axi_valid", false,-1);
        tracep->declBus(c+655,"ysyx_22051013_rvcpu d_cache4 dcache_tag", false,-1, 22,0);
        tracep->declBus(c+656,"ysyx_22051013_rvcpu d_cache4 dcache_index", false,-1, 5,0);
        tracep->declBus(c+99,"ysyx_22051013_rvcpu d_cache4 dread_state", false,-1, 5,0);
        tracep->declBus(c+657,"ysyx_22051013_rvcpu d_cache4 dread_state_next", false,-1, 5,0);
        tracep->declBit(c+658,"ysyx_22051013_rvcpu d_cache4 way1_r_hit", false,-1);
        tracep->declBit(c+659,"ysyx_22051013_rvcpu d_cache4 way2_r_hit", false,-1);
        tracep->declBit(c+660,"ysyx_22051013_rvcpu d_cache4 way1_r_dirty", false,-1);
        tracep->declBit(c+426,"ysyx_22051013_rvcpu d_cache4 way2_r_dirty", false,-1);
        tracep->declBit(c+661,"ysyx_22051013_rvcpu d_cache4 core_re_ready", false,-1);
        tracep->declBit(c+100,"ysyx_22051013_rvcpu d_cache4 tag_update", false,-1);
        tracep->declBit(c+427,"ysyx_22051013_rvcpu d_cache4 tag_update_temp", false,-1);
        tracep->declBit(c+662,"ysyx_22051013_rvcpu d_cache4 data_r_valid", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu d_cache4 write_r_valid", false,-1);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu d_cache4 way1_r_ena", false,-1);
        tracep->declBit(c+429,"ysyx_22051013_rvcpu d_cache4 way2_r_ena", false,-1);
        tracep->declQuad(c+664,"ysyx_22051013_rvcpu d_cache4 missr_pc", false,-1, 63,0);
        tracep->declBit(c+666,"ysyx_22051013_rvcpu d_cache4 missr_ena", false,-1);
        tracep->declArray(c+667,"ysyx_22051013_rvcpu d_cache4 missr_data", false,-1, 127,0);
        tracep->declArray(c+430,"ysyx_22051013_rvcpu d_cache4 cache_r_strb", false,-1, 127,0);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu d_cache4 dirtyr_way1_clean", false,-1);
        tracep->declBit(c+429,"ysyx_22051013_rvcpu d_cache4 dirtyr_way2_clean", false,-1);
        tracep->declBit(c+101,"ysyx_22051013_rvcpu d_cache4 dirtyr_valid", false,-1);
        tracep->declBit(c+102,"ysyx_22051013_rvcpu d_cache4 dirtyr_ena", false,-1);
        tracep->declQuad(c+434,"ysyx_22051013_rvcpu d_cache4 dirtyr_pc", false,-1, 63,0);
        tracep->declQuad(c+671,"ysyx_22051013_rvcpu d_cache4 dirtyr_data", false,-1, 63,0);
        tracep->declBit(c+103,"ysyx_22051013_rvcpu d_cache4 delayr", false,-1);
        tracep->declBus(c+104,"ysyx_22051013_rvcpu d_cache4 dwrite_state", false,-1, 5,0);
        tracep->declBus(c+673,"ysyx_22051013_rvcpu d_cache4 dwrite_state_next", false,-1, 5,0);
        tracep->declBit(c+674,"ysyx_22051013_rvcpu d_cache4 way1_w_hit", false,-1);
        tracep->declBit(c+675,"ysyx_22051013_rvcpu d_cache4 way2_w_hit", false,-1);
        tracep->declBit(c+676,"ysyx_22051013_rvcpu d_cache4 way1_w_dirty", false,-1);
        tracep->declBit(c+426,"ysyx_22051013_rvcpu d_cache4 way2_w_dirty", false,-1);
        tracep->declBit(c+677,"ysyx_22051013_rvcpu d_cache4 core_wr_ready", false,-1);
        tracep->declBit(c+105,"ysyx_22051013_rvcpu d_cache4 tag_w_update", false,-1);
        tracep->declBit(c+436,"ysyx_22051013_rvcpu d_cache4 tag_w_update_temp", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu d_cache4 data_w_valid", false,-1);
        tracep->declBit(c+842,"ysyx_22051013_rvcpu d_cache4 dirtyw_way1_clean", false,-1);
        tracep->declBit(c+843,"ysyx_22051013_rvcpu d_cache4 dirtyw_way2_clean", false,-1);
        tracep->declArray(c+437,"ysyx_22051013_rvcpu d_cache4 data_write_o", false,-1, 127,0);
        tracep->declArray(c+679,"ysyx_22051013_rvcpu d_cache4 hit_w_strb", false,-1, 127,0);
        tracep->declQuad(c+683,"ysyx_22051013_rvcpu d_cache4 strb_w_64", false,-1, 63,0);
        tracep->declBit(c+685,"ysyx_22051013_rvcpu d_cache4 write_w_valid", false,-1);
        tracep->declBit(c+441,"ysyx_22051013_rvcpu d_cache4 way1_w_ena", false,-1);
        tracep->declBit(c+442,"ysyx_22051013_rvcpu d_cache4 way2_w_ena", false,-1);
        tracep->declQuad(c+686,"ysyx_22051013_rvcpu d_cache4 missw_pc", false,-1, 63,0);
        tracep->declBit(c+688,"ysyx_22051013_rvcpu d_cache4 missw_ena", false,-1);
        tracep->declArray(c+689,"ysyx_22051013_rvcpu d_cache4 missw_data", false,-1, 127,0);
        tracep->declArray(c+443,"ysyx_22051013_rvcpu d_cache4 cache_w_strb", false,-1, 127,0);
        tracep->declBit(c+106,"ysyx_22051013_rvcpu d_cache4 dirtyw_valid", false,-1);
        tracep->declBit(c+107,"ysyx_22051013_rvcpu d_cache4 dirtyw_ena", false,-1);
        tracep->declQuad(c+447,"ysyx_22051013_rvcpu d_cache4 dirtyw_pc", false,-1, 63,0);
        tracep->declQuad(c+693,"ysyx_22051013_rvcpu d_cache4 dirtyw_data", false,-1, 63,0);
        tracep->declBit(c+108,"ysyx_22051013_rvcpu d_cache4 delayw", false,-1);
        tracep->declBit(c+449,"ysyx_22051013_rvcpu d_cache4 way1_ena", false,-1);
        tracep->declBus(c+695,"ysyx_22051013_rvcpu d_cache4 tag_with_valid", false,-1, 23,0);
        tracep->declBus(c+109,"ysyx_22051013_rvcpu d_cache4 d_tag_way1", false,-1, 22,0);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu d_cache4 d_tag_valid1", false,-1);
        tracep->declBit(c+450,"ysyx_22051013_rvcpu d_cache4 way2_ena", false,-1);
        tracep->declBus(c+111,"ysyx_22051013_rvcpu d_cache4 d_tag_way2", false,-1, 22,0);
        tracep->declBit(c+112,"ysyx_22051013_rvcpu d_cache4 d_tag_valid2", false,-1);
        tracep->declArray(c+113,"ysyx_22051013_rvcpu d_cache4 cache_data", false,-1, 127,0);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu d_cache4 ce", false,-1);
        tracep->declArray(c+451,"ysyx_22051013_rvcpu d_cache4 cache_strb", false,-1, 127,0);
        tracep->declBit(c+455,"ysyx_22051013_rvcpu d_cache4 cache_ena", false,-1);
        tracep->declArray(c+456,"ysyx_22051013_rvcpu d_cache4 ram_i_data", false,-1, 127,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu d_cache4 tag_ram0 clk", false,-1);
        tracep->declBus(c+656,"ysyx_22051013_rvcpu d_cache4 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+695,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+449,"ysyx_22051013_rvcpu d_cache4 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+109,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+109,"ysyx_22051013_rvcpu d_cache4 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+110,"ysyx_22051013_rvcpu d_cache4 tag_ram0 out_vaild", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu d_cache4 tag_ram1 clk", false,-1);
        tracep->declBus(c+656,"ysyx_22051013_rvcpu d_cache4 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+695,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+450,"ysyx_22051013_rvcpu d_cache4 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+111,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+112,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+111,"ysyx_22051013_rvcpu d_cache4 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+112,"ysyx_22051013_rvcpu d_cache4 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+839,"ysyx_22051013_rvcpu d_cache4 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+840,"ysyx_22051013_rvcpu d_cache4 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+841,"ysyx_22051013_rvcpu d_cache4 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+839,"ysyx_22051013_rvcpu d_cache4 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+113,"ysyx_22051013_rvcpu d_cache4 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu d_cache4 data_ram0 CLK", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu d_cache4 data_ram0 CEN", false,-1);
        tracep->declBit(c+460,"ysyx_22051013_rvcpu d_cache4 data_ram0 WEN", false,-1);
        tracep->declArray(c+461,"ysyx_22051013_rvcpu d_cache4 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+656,"ysyx_22051013_rvcpu d_cache4 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+456,"ysyx_22051013_rvcpu d_cache4 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu d_cache4 data_ram0 cen", false,-1);
        tracep->declBit(c+455,"ysyx_22051013_rvcpu d_cache4 data_ram0 wen", false,-1);
        tracep->declArray(c+451,"ysyx_22051013_rvcpu d_cache4 data_ram0 bwen", false,-1, 127,0);
        tracep->declBus(c+498,"ysyx_22051013_rvcpu xbar5 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+499,"ysyx_22051013_rvcpu xbar5 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+501,"ysyx_22051013_rvcpu xbar5 axi_aw_valid", false,-1);
        tracep->declBit(c+502,"ysyx_22051013_rvcpu xbar5 axi_aw_ready", false,-1);
        tracep->declBus(c+828,"ysyx_22051013_rvcpu xbar5 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu xbar5 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22051013_rvcpu xbar5 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu xbar5 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+506,"ysyx_22051013_rvcpu xbar5 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+507,"ysyx_22051013_rvcpu xbar5 axi_w_last", false,-1);
        tracep->declBit(c+508,"ysyx_22051013_rvcpu xbar5 axi_w_valid", false,-1);
        tracep->declBit(c+509,"ysyx_22051013_rvcpu xbar5 axi_w_ready", false,-1);
        tracep->declBus(c+510,"ysyx_22051013_rvcpu xbar5 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu xbar5 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+511,"ysyx_22051013_rvcpu xbar5 axi_b_valid", false,-1);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu xbar5 axi_b_ready", false,-1);
        tracep->declBus(c+512,"ysyx_22051013_rvcpu xbar5 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+513,"ysyx_22051013_rvcpu xbar5 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+828,"ysyx_22051013_rvcpu xbar5 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+515,"ysyx_22051013_rvcpu xbar5 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22051013_rvcpu xbar5 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu xbar5 axi_ar_valid", false,-1);
        tracep->declBit(c+393,"ysyx_22051013_rvcpu xbar5 axi_ar_ready", false,-1);
        tracep->declBus(c+394,"ysyx_22051013_rvcpu xbar5 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+516,"ysyx_22051013_rvcpu xbar5 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu xbar5 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+395,"ysyx_22051013_rvcpu xbar5 axi_r_last", false,-1);
        tracep->declBit(c+395,"ysyx_22051013_rvcpu xbar5 axi_r_valid", false,-1);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu xbar5 axi_r_ready", false,-1);
        tracep->declBus(c+518,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+519,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+521,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_valid", false,-1);
        tracep->declBit(c+522,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_ready", false,-1);
        tracep->declBus(c+523,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+524,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+525,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+526,"ysyx_22051013_rvcpu xbar5 soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+528,"ysyx_22051013_rvcpu xbar5 soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+529,"ysyx_22051013_rvcpu xbar5 soc_axi_w_last", false,-1);
        tracep->declBit(c+530,"ysyx_22051013_rvcpu xbar5 soc_axi_w_valid", false,-1);
        tracep->declBit(c+531,"ysyx_22051013_rvcpu xbar5 soc_axi_w_ready", false,-1);
        tracep->declBus(c+518,"ysyx_22051013_rvcpu xbar5 soc_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu xbar5 soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu xbar5 soc_axi_b_valid", false,-1);
        tracep->declBit(c+532,"ysyx_22051013_rvcpu xbar5 soc_axi_b_ready", false,-1);
        tracep->declBus(c+533,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+536,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+537,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+538,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+396,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_ready", false,-1);
        tracep->declBus(c+397,"ysyx_22051013_rvcpu xbar5 soc_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu xbar5 soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu xbar5 soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu xbar5 soc_axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu xbar5 soc_axi_r_valid", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu xbar5 soc_axi_r_ready", false,-1);
        tracep->declBus(c+540,"ysyx_22051013_rvcpu xbar5 t_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+541,"ysyx_22051013_rvcpu xbar5 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu xbar5 t_axi_aw_valid", false,-1);
        tracep->declBit(c+544,"ysyx_22051013_rvcpu xbar5 t_axi_aw_ready", false,-1);
        tracep->declBus(c+545,"ysyx_22051013_rvcpu xbar5 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu xbar5 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+547,"ysyx_22051013_rvcpu xbar5 t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+548,"ysyx_22051013_rvcpu xbar5 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+550,"ysyx_22051013_rvcpu xbar5 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+551,"ysyx_22051013_rvcpu xbar5 t_axi_w_last", false,-1);
        tracep->declBit(c+552,"ysyx_22051013_rvcpu xbar5 t_axi_w_valid", false,-1);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu xbar5 t_axi_w_ready", false,-1);
        tracep->declBus(c+540,"ysyx_22051013_rvcpu xbar5 t_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu xbar5 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu xbar5 t_axi_b_valid", false,-1);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu xbar5 t_axi_b_ready", false,-1);
        tracep->declBus(c+555,"ysyx_22051013_rvcpu xbar5 t_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+556,"ysyx_22051013_rvcpu xbar5 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+558,"ysyx_22051013_rvcpu xbar5 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+559,"ysyx_22051013_rvcpu xbar5 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+560,"ysyx_22051013_rvcpu xbar5 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+398,"ysyx_22051013_rvcpu xbar5 t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu xbar5 t_axi_ar_ready", false,-1);
        tracep->declBus(c+399,"ysyx_22051013_rvcpu xbar5 t_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+400,"ysyx_22051013_rvcpu xbar5 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu xbar5 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu xbar5 t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu xbar5 t_axi_r_valid", false,-1);
        tracep->declBit(c+561,"ysyx_22051013_rvcpu xbar5 t_axi_r_ready", false,-1);
        tracep->declBit(c+561,"ysyx_22051013_rvcpu xbar5 clint_read", false,-1);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu xbar5 clint_write", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu bpu_static rst", false,-1);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu bpu_static inst", false,-1, 31,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu bpu_static pc_i", false,-1, 63,0);
        tracep->declQuad(c+799,"ysyx_22051013_rvcpu bpu_static pc_o", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu bpu_static bpu_pc_hold", false,-1);
        tracep->declBit(c+798,"ysyx_22051013_rvcpu bpu_static bpu_jump", false,-1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu bpu_static j_imm", false,-1, 20,1);
        tracep->declBus(c+118,"ysyx_22051013_rvcpu bpu_static b_imm", false,-1, 12,1);
        tracep->declBus(c+119,"ysyx_22051013_rvcpu bpu_static opcode", false,-1, 6,0);
        tracep->declBit(c+808,"ysyx_22051013_rvcpu bpu_static inst_jal", false,-1);
        tracep->declBit(c+696,"ysyx_22051013_rvcpu bpu_static inst_bxx", false,-1);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu bpu_static op1", false,-1, 63,0);
        tracep->declQuad(c+809,"ysyx_22051013_rvcpu bpu_static op2", false,-1, 63,0);
        tracep->declQuad(c+811,"ysyx_22051013_rvcpu bpu_static pr_pc", false,-1, 63,0);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu ifu0 id_pc_jump", false,-1);
        tracep->declQuad(c+411,"ysyx_22051013_rvcpu ifu0 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu ifu0 ie_pc_jump", false,-1);
        tracep->declQuad(c+72,"ysyx_22051013_rvcpu ifu0 ie_pc_i", false,-1, 63,0);
        tracep->declQuad(c+799,"ysyx_22051013_rvcpu ifu0 bpu_pc_i", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu ifu0 inst_valid", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu ifu0 id_ready", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu ifu0 if_valid", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu ifu0 core_ready", false,-1);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu ifu0 inst_i", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+566,"ysyx_22051013_rvcpu ifu0 pc_next", false,-1, 63,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu reg_ifid1 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu reg_ifid1 rst", false,-1);
        tracep->declBus(c+11,"ysyx_22051013_rvcpu reg_ifid1 if_inst", false,-1, 31,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu reg_ifid1 if_pc", false,-1, 63,0);
        tracep->declBit(c+798,"ysyx_22051013_rvcpu reg_ifid1 bpu_jump", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu reg_ifid1 if_valid", false,-1);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu reg_ifid1 id_flush", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu reg_ifid1 ie_flush", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu reg_ifid1 id_ready", false,-1);
        tracep->declBit(c+22,"ysyx_22051013_rvcpu reg_ifid1 id_jump", false,-1);
        tracep->declBus(c+19,"ysyx_22051013_rvcpu reg_ifid1 id_inst", false,-1, 31,0);
        tracep->declQuad(c+20,"ysyx_22051013_rvcpu reg_ifid1 id_pc", false,-1, 63,0);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu idu2 rst", false,-1);
        tracep->declBus(c+19,"ysyx_22051013_rvcpu idu2 inst_i", false,-1, 31,0);
        tracep->declQuad(c+20,"ysyx_22051013_rvcpu idu2 pc_i", false,-1, 63,0);
        tracep->declBus(c+801,"ysyx_22051013_rvcpu idu2 inst_o", false,-1, 31,0);
        tracep->declQuad(c+802,"ysyx_22051013_rvcpu idu2 pc_o", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22051013_rvcpu idu2 bpu_jump", false,-1);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu idu2 ex_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+614,"ysyx_22051013_rvcpu idu2 ex_data_forward", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu idu2 ls_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+616,"ysyx_22051013_rvcpu idu2 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu idu2 wb_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22051013_rvcpu idu2 wb_data_forward", false,-1, 63,0);
        tracep->declBit(c+40,"ysyx_22051013_rvcpu idu2 ex_load_ena", false,-1);
        tracep->declBus(c+596,"ysyx_22051013_rvcpu idu2 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+598,"ysyx_22051013_rvcpu idu2 rs1_ena", false,-1);
        tracep->declQuad(c+804,"ysyx_22051013_rvcpu idu2 rs1_data", false,-1, 63,0);
        tracep->declBus(c+597,"ysyx_22051013_rvcpu idu2 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+599,"ysyx_22051013_rvcpu idu2 rs2_ena", false,-1);
        tracep->declQuad(c+806,"ysyx_22051013_rvcpu idu2 rs2_data", false,-1, 63,0);
        tracep->declBit(c+608,"ysyx_22051013_rvcpu idu2 rd_ena", false,-1);
        tracep->declBus(c+413,"ysyx_22051013_rvcpu idu2 rd_addr", false,-1, 4,0);
        tracep->declBus(c+611,"ysyx_22051013_rvcpu idu2 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+609,"ysyx_22051013_rvcpu idu2 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+610,"ysyx_22051013_rvcpu idu2 wbctl_o", false,-1, 1,0);
        tracep->declBus(c+612,"ysyx_22051013_rvcpu idu2 op1_sel", false,-1, 1,0);
        tracep->declBus(c+613,"ysyx_22051013_rvcpu idu2 op2_sel", false,-1, 2,0);
        tracep->declBit(c+601,"ysyx_22051013_rvcpu idu2 load_flag", false,-1);
        tracep->declQuad(c+602,"ysyx_22051013_rvcpu idu2 op1", false,-1, 63,0);
        tracep->declQuad(c+604,"ysyx_22051013_rvcpu idu2 op2", false,-1, 63,0);
        tracep->declQuad(c+606,"ysyx_22051013_rvcpu idu2 imm", false,-1, 63,0);
        tracep->declBit(c+622,"ysyx_22051013_rvcpu idu2 ex_ready", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu idu2 if_valid", false,-1);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu idu2 id_flush", false,-1);
        tracep->declBit(c+623,"ysyx_22051013_rvcpu idu2 id_ex_flush", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu idu2 id_ready", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu idu2 id_valid", false,-1);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu idu2 jump_ena", false,-1);
        tracep->declQuad(c+411,"ysyx_22051013_rvcpu idu2 jump_pc", false,-1, 63,0);
        tracep->declBus(c+120,"ysyx_22051013_rvcpu idu2 rd", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22051013_rvcpu idu2 rs1", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22051013_rvcpu idu2 rs2", false,-1, 4,0);
        tracep->declBit(c+697,"ysyx_22051013_rvcpu idu2 branch", false,-1);
        tracep->declBit(c+813,"ysyx_22051013_rvcpu idu2 op1_relate", false,-1);
        tracep->declBit(c+814,"ysyx_22051013_rvcpu idu2 op2_relate", false,-1);
        tracep->declBit(c+623,"ysyx_22051013_rvcpu idu2 id_stall_ena", false,-1);
        tracep->declBit(c+698,"ysyx_22051013_rvcpu idu2 ex_op1_forward", false,-1);
        tracep->declBit(c+699,"ysyx_22051013_rvcpu idu2 ls_op1_forward", false,-1);
        tracep->declBit(c+700,"ysyx_22051013_rvcpu idu2 wb_op1_forward", false,-1);
        tracep->declBit(c+701,"ysyx_22051013_rvcpu idu2 ex_op2_forward", false,-1);
        tracep->declBit(c+702,"ysyx_22051013_rvcpu idu2 ls_op2_forward", false,-1);
        tracep->declBit(c+703,"ysyx_22051013_rvcpu idu2 wb_op2_forward", false,-1);
        tracep->declBit(c+704,"ysyx_22051013_rvcpu idu2 op1_forward_ena", false,-1);
        tracep->declBit(c+705,"ysyx_22051013_rvcpu idu2 op2_forward_ena", false,-1);
        tracep->declQuad(c+465,"ysyx_22051013_rvcpu idu2 op1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+467,"ysyx_22051013_rvcpu idu2 op2_forward_data", false,-1, 63,0);
        tracep->declBit(c+706,"ysyx_22051013_rvcpu idu2 ex_branch", false,-1);
        tracep->declQuad(c+707,"ysyx_22051013_rvcpu idu2 op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+709,"ysyx_22051013_rvcpu idu2 op1_lt_op2", false,-1);
        tracep->declQuad(c+469,"ysyx_22051013_rvcpu idu2 p1", false,-1, 63,0);
        tracep->declQuad(c+471,"ysyx_22051013_rvcpu idu2 p2", false,-1, 63,0);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu idu2 decode rst", false,-1);
        tracep->declBus(c+19,"ysyx_22051013_rvcpu idu2 decode inst", false,-1, 31,0);
        tracep->declBit(c+598,"ysyx_22051013_rvcpu idu2 decode rs1_ena", false,-1);
        tracep->declBit(c+599,"ysyx_22051013_rvcpu idu2 decode rs2_ena", false,-1);
        tracep->declBus(c+610,"ysyx_22051013_rvcpu idu2 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+609,"ysyx_22051013_rvcpu idu2 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+697,"ysyx_22051013_rvcpu idu2 decode branch", false,-1);
        tracep->declQuad(c+606,"ysyx_22051013_rvcpu idu2 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+601,"ysyx_22051013_rvcpu idu2 decode load", false,-1);
        tracep->declBus(c+612,"ysyx_22051013_rvcpu idu2 decode op1_sel", false,-1, 1,0);
        tracep->declBus(c+613,"ysyx_22051013_rvcpu idu2 decode op2_sel", false,-1, 2,0);
        tracep->declBus(c+611,"ysyx_22051013_rvcpu idu2 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+123,"ysyx_22051013_rvcpu idu2 decode opcode", false,-1, 6,0);
        tracep->declBus(c+124,"ysyx_22051013_rvcpu idu2 decode funct3", false,-1, 2,0);
        tracep->declBus(c+125,"ysyx_22051013_rvcpu idu2 decode funct7", false,-1, 6,0);
        tracep->declBus(c+126,"ysyx_22051013_rvcpu idu2 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+127,"ysyx_22051013_rvcpu idu2 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+128,"ysyx_22051013_rvcpu idu2 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+129,"ysyx_22051013_rvcpu idu2 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+130,"ysyx_22051013_rvcpu idu2 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+710,"ysyx_22051013_rvcpu idu2 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+711,"ysyx_22051013_rvcpu idu2 decode inst_lui", false,-1);
        tracep->declBit(c+712,"ysyx_22051013_rvcpu idu2 decode inst_auipc", false,-1);
        tracep->declBit(c+713,"ysyx_22051013_rvcpu idu2 decode inst_jal", false,-1);
        tracep->declBit(c+714,"ysyx_22051013_rvcpu idu2 decode inst_jalr", false,-1);
        tracep->declBit(c+715,"ysyx_22051013_rvcpu idu2 decode inst_sb", false,-1);
        tracep->declBit(c+716,"ysyx_22051013_rvcpu idu2 decode inst_sh", false,-1);
        tracep->declBit(c+717,"ysyx_22051013_rvcpu idu2 decode inst_sw", false,-1);
        tracep->declBit(c+718,"ysyx_22051013_rvcpu idu2 decode inst_sd", false,-1);
        tracep->declBit(c+719,"ysyx_22051013_rvcpu idu2 decode inst_lb", false,-1);
        tracep->declBit(c+720,"ysyx_22051013_rvcpu idu2 decode inst_lh", false,-1);
        tracep->declBit(c+721,"ysyx_22051013_rvcpu idu2 decode inst_lw", false,-1);
        tracep->declBit(c+722,"ysyx_22051013_rvcpu idu2 decode inst_ld", false,-1);
        tracep->declBit(c+723,"ysyx_22051013_rvcpu idu2 decode inst_lbu", false,-1);
        tracep->declBit(c+724,"ysyx_22051013_rvcpu idu2 decode inst_lhu", false,-1);
        tracep->declBit(c+725,"ysyx_22051013_rvcpu idu2 decode inst_lwu", false,-1);
        tracep->declBit(c+726,"ysyx_22051013_rvcpu idu2 decode inst_beq", false,-1);
        tracep->declBit(c+727,"ysyx_22051013_rvcpu idu2 decode inst_bne", false,-1);
        tracep->declBit(c+728,"ysyx_22051013_rvcpu idu2 decode inst_blt", false,-1);
        tracep->declBit(c+729,"ysyx_22051013_rvcpu idu2 decode inst_bge", false,-1);
        tracep->declBit(c+730,"ysyx_22051013_rvcpu idu2 decode inst_bltu", false,-1);
        tracep->declBit(c+731,"ysyx_22051013_rvcpu idu2 decode inst_bgeu", false,-1);
        tracep->declBit(c+732,"ysyx_22051013_rvcpu idu2 decode inst_add", false,-1);
        tracep->declBit(c+733,"ysyx_22051013_rvcpu idu2 decode inst_sub", false,-1);
        tracep->declBit(c+734,"ysyx_22051013_rvcpu idu2 decode inst_sll", false,-1);
        tracep->declBit(c+735,"ysyx_22051013_rvcpu idu2 decode inst_slt", false,-1);
        tracep->declBit(c+736,"ysyx_22051013_rvcpu idu2 decode inst_sltu", false,-1);
        tracep->declBit(c+737,"ysyx_22051013_rvcpu idu2 decode inst_xor", false,-1);
        tracep->declBit(c+738,"ysyx_22051013_rvcpu idu2 decode inst_srl", false,-1);
        tracep->declBit(c+739,"ysyx_22051013_rvcpu idu2 decode inst_sra", false,-1);
        tracep->declBit(c+740,"ysyx_22051013_rvcpu idu2 decode inst_or", false,-1);
        tracep->declBit(c+741,"ysyx_22051013_rvcpu idu2 decode inst_and", false,-1);
        tracep->declBit(c+742,"ysyx_22051013_rvcpu idu2 decode inst_div", false,-1);
        tracep->declBit(c+743,"ysyx_22051013_rvcpu idu2 decode inst_divu", false,-1);
        tracep->declBit(c+744,"ysyx_22051013_rvcpu idu2 decode inst_mul", false,-1);
        tracep->declBit(c+745,"ysyx_22051013_rvcpu idu2 decode inst_mulh", false,-1);
        tracep->declBit(c+746,"ysyx_22051013_rvcpu idu2 decode inst_mulhsu", false,-1);
        tracep->declBit(c+747,"ysyx_22051013_rvcpu idu2 decode inst_mulhu", false,-1);
        tracep->declBit(c+748,"ysyx_22051013_rvcpu idu2 decode inst_rem", false,-1);
        tracep->declBit(c+749,"ysyx_22051013_rvcpu idu2 decode inst_remu", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu idu2 decode inst_addi", false,-1);
        tracep->declBit(c+474,"ysyx_22051013_rvcpu idu2 decode inst_slti", false,-1);
        tracep->declBit(c+475,"ysyx_22051013_rvcpu idu2 decode inst_sltiu", false,-1);
        tracep->declBit(c+476,"ysyx_22051013_rvcpu idu2 decode inst_xori", false,-1);
        tracep->declBit(c+477,"ysyx_22051013_rvcpu idu2 decode inst_ori", false,-1);
        tracep->declBit(c+478,"ysyx_22051013_rvcpu idu2 decode inst_andi", false,-1);
        tracep->declBit(c+479,"ysyx_22051013_rvcpu idu2 decode inst_slli", false,-1);
        tracep->declBit(c+480,"ysyx_22051013_rvcpu idu2 decode inst_srli", false,-1);
        tracep->declBit(c+750,"ysyx_22051013_rvcpu idu2 decode inst_srai", false,-1);
        tracep->declBit(c+751,"ysyx_22051013_rvcpu idu2 decode inst_addiw", false,-1);
        tracep->declBit(c+752,"ysyx_22051013_rvcpu idu2 decode inst_slliw", false,-1);
        tracep->declBit(c+753,"ysyx_22051013_rvcpu idu2 decode inst_srliw", false,-1);
        tracep->declBit(c+754,"ysyx_22051013_rvcpu idu2 decode inst_sraiw", false,-1);
        tracep->declBit(c+755,"ysyx_22051013_rvcpu idu2 decode inst_addw", false,-1);
        tracep->declBit(c+756,"ysyx_22051013_rvcpu idu2 decode inst_subw", false,-1);
        tracep->declBit(c+757,"ysyx_22051013_rvcpu idu2 decode inst_sllw", false,-1);
        tracep->declBit(c+758,"ysyx_22051013_rvcpu idu2 decode inst_srlw", false,-1);
        tracep->declBit(c+759,"ysyx_22051013_rvcpu idu2 decode inst_sraw", false,-1);
        tracep->declBit(c+760,"ysyx_22051013_rvcpu idu2 decode inst_divuw", false,-1);
        tracep->declBit(c+761,"ysyx_22051013_rvcpu idu2 decode inst_divw", false,-1);
        tracep->declBit(c+762,"ysyx_22051013_rvcpu idu2 decode inst_mulw", false,-1);
        tracep->declBit(c+763,"ysyx_22051013_rvcpu idu2 decode inst_remuw", false,-1);
        tracep->declBit(c+764,"ysyx_22051013_rvcpu idu2 decode inst_remw", false,-1);
        tracep->declBit(c+765,"ysyx_22051013_rvcpu idu2 decode inst_ecall", false,-1);
        tracep->declBit(c+766,"ysyx_22051013_rvcpu idu2 decode inst_mret", false,-1);
        tracep->declBit(c+767,"ysyx_22051013_rvcpu idu2 decode inst_csrrw", false,-1);
        tracep->declBit(c+768,"ysyx_22051013_rvcpu idu2 decode inst_csrrs", false,-1);
        tracep->declBit(c+769,"ysyx_22051013_rvcpu idu2 decode inst_csrrc", false,-1);
        tracep->declBit(c+770,"ysyx_22051013_rvcpu idu2 decode inst_csrrwi", false,-1);
        tracep->declBit(c+771,"ysyx_22051013_rvcpu idu2 decode inst_csrrsi", false,-1);
        tracep->declBit(c+772,"ysyx_22051013_rvcpu idu2 decode inst_csrrci", false,-1);
        tracep->declBit(c+773,"ysyx_22051013_rvcpu idu2 decode inst_ebreak", false,-1);
        tracep->declBit(c+774,"ysyx_22051013_rvcpu idu2 decode inst_csr", false,-1);
        tracep->declBit(c+775,"ysyx_22051013_rvcpu idu2 decode jump", false,-1);
        tracep->declBit(c+776,"ysyx_22051013_rvcpu idu2 decode imm_ena", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu reg_idex3 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu reg_idex3 rst", false,-1);
        tracep->declBus(c+801,"ysyx_22051013_rvcpu reg_idex3 id_inst", false,-1, 31,0);
        tracep->declQuad(c+802,"ysyx_22051013_rvcpu reg_idex3 id_pc", false,-1, 63,0);
        tracep->declQuad(c+602,"ysyx_22051013_rvcpu reg_idex3 id_op1", false,-1, 63,0);
        tracep->declQuad(c+604,"ysyx_22051013_rvcpu reg_idex3 id_op2", false,-1, 63,0);
        tracep->declBus(c+612,"ysyx_22051013_rvcpu reg_idex3 id_op1_sel", false,-1, 1,0);
        tracep->declBus(c+613,"ysyx_22051013_rvcpu reg_idex3 id_op2_sel", false,-1, 2,0);
        tracep->declQuad(c+606,"ysyx_22051013_rvcpu reg_idex3 id_imm", false,-1, 63,0);
        tracep->declBit(c+608,"ysyx_22051013_rvcpu reg_idex3 id_rd_ena", false,-1);
        tracep->declBus(c+413,"ysyx_22051013_rvcpu reg_idex3 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+596,"ysyx_22051013_rvcpu reg_idex3 id_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+611,"ysyx_22051013_rvcpu reg_idex3 id_alusrc", false,-1, 7,0);
        tracep->declBus(c+609,"ysyx_22051013_rvcpu reg_idex3 id_lsctl", false,-1, 3,0);
        tracep->declBus(c+610,"ysyx_22051013_rvcpu reg_idex3 id_wbctl", false,-1, 1,0);
        tracep->declBit(c+601,"ysyx_22051013_rvcpu reg_idex3 id_load_flag", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu reg_idex3 id_valid", false,-1);
        tracep->declBit(c+623,"ysyx_22051013_rvcpu reg_idex3 id_flush", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu reg_idex3 ie_flush", false,-1);
        tracep->declBit(c+622,"ysyx_22051013_rvcpu reg_idex3 ex_ready", false,-1);
        tracep->declBus(c+23,"ysyx_22051013_rvcpu reg_idex3 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu reg_idex3 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu reg_idex3 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu reg_idex3 ex_op2", false,-1, 63,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu reg_idex3 ex_op1_sel", false,-1, 1,0);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu reg_idex3 ex_op2_sel", false,-1, 2,0);
        tracep->declQuad(c+30,"ysyx_22051013_rvcpu reg_idex3 ex_imm", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22051013_rvcpu reg_idex3 ex_rd_ena", false,-1);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu reg_idex3 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_22051013_rvcpu reg_idex3 ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu reg_idex3 ex_alusrc", false,-1, 7,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu reg_idex3 ex_lsctl", false,-1, 3,0);
        tracep->declBit(c+40,"ysyx_22051013_rvcpu reg_idex3 ex_load_flag", false,-1);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu reg_idex3 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu exu4 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu exu4 rst", false,-1);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu exu4 reg_op1", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu exu4 reg_op2", false,-1, 63,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu exu4 op1_sel", false,-1, 1,0);
        tracep->declBus(c+38,"ysyx_22051013_rvcpu exu4 op2_sel", false,-1, 2,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu exu4 rd_addr", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_22051013_rvcpu exu4 rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+30,"ysyx_22051013_rvcpu exu4 imm", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu exu4 pc_i", false,-1, 63,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu exu4 alu_sel", false,-1, 7,0);
        tracep->declBit(c+621,"ysyx_22051013_rvcpu exu4 ls_ready", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu exu4 id_valid", false,-1);
        tracep->declBit(c+75,"ysyx_22051013_rvcpu exu4 ex_valid", false,-1);
        tracep->declBit(c+622,"ysyx_22051013_rvcpu exu4 ex_ready", false,-1);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu exu4 store_data", false,-1, 63,0);
        tracep->declBus(c+42,"ysyx_22051013_rvcpu exu4 csr_addr", false,-1, 11,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu exu4 csr_ctl", false,-1, 6,0);
        tracep->declQuad(c+614,"ysyx_22051013_rvcpu exu4 exu_res", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22051013_rvcpu exu4 op1", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22051013_rvcpu exu4 op2", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22051013_rvcpu exu4 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22051013_rvcpu exu4 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22051013_rvcpu exu4 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+141,"ysyx_22051013_rvcpu exu4 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+143,"ysyx_22051013_rvcpu exu4 op1_lt_op2", false,-1);
        tracep->declQuad(c+144,"ysyx_22051013_rvcpu exu4 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+146,"ysyx_22051013_rvcpu exu4 sllw", false,-1, 31,0);
        tracep->declQuad(c+147,"ysyx_22051013_rvcpu exu4 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+149,"ysyx_22051013_rvcpu exu4 srlw", false,-1, 31,0);
        tracep->declQuad(c+150,"ysyx_22051013_rvcpu exu4 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+152,"ysyx_22051013_rvcpu exu4 sraw", false,-1, 31,0);
        tracep->declQuad(c+153,"ysyx_22051013_rvcpu exu4 op1_sraw_op2", false,-1, 63,0);
        tracep->declQuad(c+777,"ysyx_22051013_rvcpu exu4 alu_res", false,-1, 63,0);
        tracep->declBit(c+155,"ysyx_22051013_rvcpu exu4 mul", false,-1);
        tracep->declBus(c+156,"ysyx_22051013_rvcpu exu4 mul_signed", false,-1, 1,0);
        tracep->declBit(c+157,"ysyx_22051013_rvcpu exu4 mulw", false,-1);
        tracep->declBit(c+158,"ysyx_22051013_rvcpu exu4 delay1", false,-1);
        tracep->declBit(c+159,"ysyx_22051013_rvcpu exu4 mul_valid", false,-1);
        tracep->declBit(c+160,"ysyx_22051013_rvcpu exu4 mul_out_valid", false,-1);
        tracep->declBit(c+161,"ysyx_22051013_rvcpu exu4 mul_ready", false,-1);
        tracep->declQuad(c+162,"ysyx_22051013_rvcpu exu4 result_hi", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22051013_rvcpu exu4 result_lo", false,-1, 63,0);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu exu4 flush", false,-1);
        tracep->declQuad(c+166,"ysyx_22051013_rvcpu exu4 mul_res", false,-1, 63,0);
        tracep->declQuad(c+168,"ysyx_22051013_rvcpu exu4 mul_res_temp", false,-1, 63,0);
        tracep->declBit(c+170,"ysyx_22051013_rvcpu exu4 div", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu exu4 div_signed", false,-1);
        tracep->declBit(c+172,"ysyx_22051013_rvcpu exu4 divw", false,-1);
        tracep->declBit(c+173,"ysyx_22051013_rvcpu exu4 delay2", false,-1);
        tracep->declBit(c+174,"ysyx_22051013_rvcpu exu4 div_valid", false,-1);
        tracep->declBit(c+175,"ysyx_22051013_rvcpu exu4 div_out_valid", false,-1);
        tracep->declBit(c+176,"ysyx_22051013_rvcpu exu4 div_ready", false,-1);
        tracep->declQuad(c+481,"ysyx_22051013_rvcpu exu4 quotient", false,-1, 63,0);
        tracep->declQuad(c+483,"ysyx_22051013_rvcpu exu4 remainder", false,-1, 63,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu exu4 div_res", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22051013_rvcpu exu4 div_res_temp", false,-1, 63,0);
        tracep->declBit(c+179,"ysyx_22051013_rvcpu exu4 mul_reg", false,-1);
        tracep->declBit(c+180,"ysyx_22051013_rvcpu exu4 mul_stall", false,-1);
        tracep->declBit(c+181,"ysyx_22051013_rvcpu exu4 div_reg", false,-1);
        tracep->declBit(c+182,"ysyx_22051013_rvcpu exu4 div_stall", false,-1);
        tracep->declBit(c+183,"ysyx_22051013_rvcpu exu4 csr_wr_ena", false,-1);
        tracep->declBit(c+184,"ysyx_22051013_rvcpu exu4 csr_rd_ena", false,-1);
        tracep->declBit(c+185,"ysyx_22051013_rvcpu exu4 mret_ena", false,-1);
        tracep->declBit(c+186,"ysyx_22051013_rvcpu exu4 ecall_ena", false,-1);
        tracep->declBit(c+187,"ysyx_22051013_rvcpu exu4 csrrw_ena", false,-1);
        tracep->declBit(c+188,"ysyx_22051013_rvcpu exu4 csrrs_ena", false,-1);
        tracep->declBit(c+189,"ysyx_22051013_rvcpu exu4 csrrc_ena", false,-1);
        tracep->declQuad(c+190,"ysyx_22051013_rvcpu exu4 csr_op", false,-1, 63,0);
        tracep->declBit(c+192,"ysyx_22051013_rvcpu exu4 csrrxi_ena", false,-1);
        tracep->declBit(c+193,"ysyx_22051013_rvcpu exu4 muldiv_ena", false,-1);
        tracep->declQuad(c+194,"ysyx_22051013_rvcpu exu4 muldiv_res", false,-1, 63,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu exu4 booth_mul0 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu exu4 booth_mul0 rst", false,-1);
        tracep->declBit(c+159,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_valid", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu exu4 booth_mul0 flush", false,-1);
        tracep->declBus(c+156,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_signed", false,-1, 1,0);
        tracep->declBit(c+157,"ysyx_22051013_rvcpu exu4 booth_mul0 mulw", false,-1);
        tracep->declQuad(c+131,"ysyx_22051013_rvcpu exu4 booth_mul0 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22051013_rvcpu exu4 booth_mul0 mult_op2", false,-1, 63,0);
        tracep->declBit(c+161,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_ready", false,-1);
        tracep->declBit(c+160,"ysyx_22051013_rvcpu exu4 booth_mul0 out_valid", false,-1);
        tracep->declQuad(c+162,"ysyx_22051013_rvcpu exu4 booth_mul0 result_hi", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22051013_rvcpu exu4 booth_mul0 result_lo", false,-1, 63,0);
        tracep->declBit(c+196,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_doing", false,-1);
        tracep->declQuad(c+197,"ysyx_22051013_rvcpu exu4 booth_mul0 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+199,"ysyx_22051013_rvcpu exu4 booth_mul0 op2_temp", false,-1, 63,0);
        tracep->declArray(c+201,"ysyx_22051013_rvcpu exu4 booth_mul0 op1_ext", false,-1, 65,0);
        tracep->declArray(c+204,"ysyx_22051013_rvcpu exu4 booth_mul0 op2_ext", false,-1, 65,0);
        tracep->declArray(c+207,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplicand", false,-1, 131,0);
        tracep->declArray(c+212,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplier", false,-1, 66,0);
        tracep->declBus(c+215,"ysyx_22051013_rvcpu exu4 booth_mul0 sel", false,-1, 2,0);
        tracep->declBit(c+216,"ysyx_22051013_rvcpu exu4 booth_mul0 carry", false,-1);
        tracep->declArray(c+217,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplicand_mod", false,-1, 131,0);
        tracep->declArray(c+222,"ysyx_22051013_rvcpu exu4 booth_mul0 result_temp", false,-1, 131,0);
        tracep->declBit(c+227,"ysyx_22051013_rvcpu exu4 booth_mul0 unused_ok", false,-1);
        tracep->declArray(c+207,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 mult", false,-1, 131,0);
        tracep->declBus(c+215,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel", false,-1, 2,0);
        tracep->declArray(c+217,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 part_mul", false,-1, 131,0);
        tracep->declBit(c+216,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 carry", false,-1);
        tracep->declBit(c+228,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y_add", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y", false,-1);
        tracep->declBit(c+230,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y_sub", false,-1);
        tracep->declBit(c+231,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_negative", false,-1);
        tracep->declBit(c+232,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_double_negative", false,-1);
        tracep->declBit(c+233,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_positive", false,-1);
        tracep->declBit(c+234,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_double_positive", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu exu4 divide1 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu exu4 divide1 rst", false,-1);
        tracep->declBit(c+174,"ysyx_22051013_rvcpu exu4 divide1 div_valid", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu exu4 divide1 flush", false,-1);
        tracep->declBit(c+172,"ysyx_22051013_rvcpu exu4 divide1 divw", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu exu4 divide1 div_signed", false,-1);
        tracep->declQuad(c+131,"ysyx_22051013_rvcpu exu4 divide1 div_op1", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22051013_rvcpu exu4 divide1 div_op2", false,-1, 63,0);
        tracep->declBit(c+176,"ysyx_22051013_rvcpu exu4 divide1 div_ready", false,-1);
        tracep->declBit(c+175,"ysyx_22051013_rvcpu exu4 divide1 out_valid", false,-1);
        tracep->declQuad(c+481,"ysyx_22051013_rvcpu exu4 divide1 quotient", false,-1, 63,0);
        tracep->declQuad(c+483,"ysyx_22051013_rvcpu exu4 divide1 remainder", false,-1, 63,0);
        tracep->declBit(c+235,"ysyx_22051013_rvcpu exu4 divide1 div_doing", false,-1);
        tracep->declQuad(c+236,"ysyx_22051013_rvcpu exu4 divide1 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22051013_rvcpu exu4 divide1 op2_temp", false,-1, 63,0);
        tracep->declBit(c+240,"ysyx_22051013_rvcpu exu4 divide1 op1_sign", false,-1);
        tracep->declBit(c+241,"ysyx_22051013_rvcpu exu4 divide1 op2_sign", false,-1);
        tracep->declQuad(c+242,"ysyx_22051013_rvcpu exu4 divide1 op1_abs", false,-1, 63,0);
        tracep->declQuad(c+244,"ysyx_22051013_rvcpu exu4 divide1 op2_abs", false,-1, 63,0);
        tracep->declArray(c+246,"ysyx_22051013_rvcpu exu4 divide1 dividend", false,-1, 127,0);
        tracep->declArray(c+250,"ysyx_22051013_rvcpu exu4 divide1 divisor", false,-1, 64,0);
        tracep->declBus(c+253,"ysyx_22051013_rvcpu exu4 divide1 cnt", false,-1, 6,0);
        tracep->declQuad(c+254,"ysyx_22051013_rvcpu exu4 divide1 temp_q", false,-1, 63,0);
        tracep->declBit(c+256,"ysyx_22051013_rvcpu exu4 divide1 sub_sign", false,-1);
        tracep->declQuad(c+257,"ysyx_22051013_rvcpu exu4 divide1 mod_dividend", false,-1, 63,0);
        tracep->declQuad(c+779,"ysyx_22051013_rvcpu exu4 divide1 mod_quo", false,-1, 63,0);
        tracep->declQuad(c+781,"ysyx_22051013_rvcpu exu4 divide1 mod_rem", false,-1, 63,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu reg_exls5 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu reg_exls5 rst", false,-1);
        tracep->declBus(c+23,"ysyx_22051013_rvcpu reg_exls5 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu reg_exls5 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu reg_exls5 ex_store_data", false,-1, 63,0);
        tracep->declQuad(c+614,"ysyx_22051013_rvcpu reg_exls5 ex_exu_res", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu reg_exls5 ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu reg_exls5 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+32,"ysyx_22051013_rvcpu reg_exls5 ex_rd_ena", false,-1);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu reg_exls5 ex_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+42,"ysyx_22051013_rvcpu reg_exls5 ex_csr_addr", false,-1, 11,0);
        tracep->declBit(c+75,"ysyx_22051013_rvcpu reg_exls5 ex_valid", false,-1);
        tracep->declBit(c+621,"ysyx_22051013_rvcpu reg_exls5 ls_ready", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu reg_exls5 ie_flush", false,-1);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_exls5 ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu reg_exls5 ls_csr_addr", false,-1, 11,0);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu reg_exls5 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22051013_rvcpu reg_exls5 ls_pc", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu reg_exls5 ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu reg_exls5 ls_exu_res", false,-1, 63,0);
        tracep->declBus(c+50,"ysyx_22051013_rvcpu reg_exls5 ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu reg_exls5 ls_wbctl", false,-1, 1,0);
        tracep->declBit(c+48,"ysyx_22051013_rvcpu reg_exls5 ls_rd_ena", false,-1);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu reg_exls5 ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+614,"ysyx_22051013_rvcpu reg_exls5 ex_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu lsu6 rst", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu lsu6 clk", false,-1);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu lsu6 alu_res", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu lsu6 store_data", false,-1, 63,0);
        tracep->declBus(c+50,"ysyx_22051013_rvcpu lsu6 ls_ctl", false,-1, 3,0);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu lsu6 wb_ready", false,-1);
        tracep->declBit(c+75,"ysyx_22051013_rvcpu lsu6 ex_valid", false,-1);
        tracep->declBit(c+621,"ysyx_22051013_rvcpu lsu6 ls_ready", false,-1);
        tracep->declBit(c+620,"ysyx_22051013_rvcpu lsu6 ls_valid", false,-1);
        tracep->declBit(c+568,"ysyx_22051013_rvcpu lsu6 we", false,-1);
        tracep->declBit(c+569,"ysyx_22051013_rvcpu lsu6 re", false,-1);
        tracep->declBit(c+12,"ysyx_22051013_rvcpu lsu6 core_ready", false,-1);
        tracep->declQuad(c+571,"ysyx_22051013_rvcpu lsu6 data_pc", false,-1, 63,0);
        tracep->declQuad(c+573,"ysyx_22051013_rvcpu lsu6 data_temp", false,-1, 63,0);
        tracep->declQuad(c+575,"ysyx_22051013_rvcpu lsu6 data_o", false,-1, 63,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu lsu6 data_size", false,-1, 2,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu lsu6 device_data_o", false,-1, 63,0);
        tracep->declBus(c+570,"ysyx_22051013_rvcpu lsu6 wlen", false,-1, 7,0);
        tracep->declBit(c+577,"ysyx_22051013_rvcpu lsu6 data_valid", false,-1);
        tracep->declQuad(c+616,"ysyx_22051013_rvcpu lsu6 ls_data_forward", false,-1, 63,0);
        tracep->declQuad(c+618,"ysyx_22051013_rvcpu lsu6 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+815,"ysyx_22051013_rvcpu lsu6 raddr", false,-1, 63,0);
        tracep->declQuad(c+817,"ysyx_22051013_rvcpu lsu6 waddr", false,-1, 63,0);
        tracep->declQuad(c+783,"ysyx_22051013_rvcpu lsu6 load_data", false,-1, 63,0);
        tracep->declBit(c+259,"ysyx_22051013_rvcpu lsu6 data_ok", false,-1);
        tracep->declQuad(c+260,"ysyx_22051013_rvcpu lsu6 data_i", false,-1, 63,0);
        tracep->declBus(c+262,"ysyx_22051013_rvcpu lsu6 byte_sel", false,-1, 2,0);
        tracep->declBus(c+263,"ysyx_22051013_rvcpu lsu6 half_sel", false,-1, 1,0);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu lsu6 word_sel", false,-1);
        tracep->declBus(c+785,"ysyx_22051013_rvcpu lsu6 data_byte", false,-1, 7,0);
        tracep->declBus(c+786,"ysyx_22051013_rvcpu lsu6 data_half", false,-1, 15,0);
        tracep->declBus(c+265,"ysyx_22051013_rvcpu lsu6 data_word", false,-1, 31,0);
        tracep->declBus(c+819,"ysyx_22051013_rvcpu lsu6 sb_mask", false,-1, 7,0);
        tracep->declBus(c+820,"ysyx_22051013_rvcpu lsu6 sh_mask", false,-1, 7,0);
        tracep->declBus(c+821,"ysyx_22051013_rvcpu lsu6 sw_mask", false,-1, 7,0);
        tracep->declQuad(c+822,"ysyx_22051013_rvcpu lsu6 sb_data", false,-1, 63,0);
        tracep->declQuad(c+824,"ysyx_22051013_rvcpu lsu6 sw_data", false,-1, 63,0);
        tracep->declQuad(c+826,"ysyx_22051013_rvcpu lsu6 sh_data", false,-1, 63,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu reg_lswb7 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu reg_lswb7 rst", false,-1);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu reg_lswb7 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22051013_rvcpu reg_lswb7 ls_pc", false,-1, 63,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu reg_lswb7 ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+46,"ysyx_22051013_rvcpu reg_lswb7 ls_exu_res", false,-1, 63,0);
        tracep->declQuad(c+618,"ysyx_22051013_rvcpu reg_lswb7 ls_wbdata", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_ena", false,-1);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+616,"ysyx_22051013_rvcpu reg_lswb7 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_lswb7 ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu reg_lswb7 ls_csr_addr", false,-1, 11,0);
        tracep->declBit(c+620,"ysyx_22051013_rvcpu reg_lswb7 ls_valid", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu reg_lswb7 wb_ready", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu reg_lswb7 ie_flush", false,-1);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu reg_lswb7 wb_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+56,"ysyx_22051013_rvcpu reg_lswb7 wb_csr_addr", false,-1, 11,0);
        tracep->declBus(c+57,"ysyx_22051013_rvcpu reg_lswb7 wb_inst", false,-1, 31,0);
        tracep->declQuad(c+58,"ysyx_22051013_rvcpu reg_lswb7 wb_pc", false,-1, 63,0);
        tracep->declBus(c+60,"ysyx_22051013_rvcpu reg_lswb7 wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+63,"ysyx_22051013_rvcpu reg_lswb7 wb_exu_res", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu reg_lswb7 wb_wbdata", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_ena", false,-1);
        tracep->declBus(c+66,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_addr", false,-1, 4,0);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+616,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu wbu8 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu wbu8 rst", false,-1);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu wbu8 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+60,"ysyx_22051013_rvcpu wbu8 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+63,"ysyx_22051013_rvcpu wbu8 exu_res", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_22051013_rvcpu wbu8 inst_i", false,-1, 31,0);
        tracep->declQuad(c+58,"ysyx_22051013_rvcpu wbu8 pc_i", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22051013_rvcpu wbu8 rd_ena", false,-1);
        tracep->declBus(c+66,"ysyx_22051013_rvcpu wbu8 rd_addr", false,-1, 4,0);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu wbu8 csr_ctl", false,-1, 6,0);
        tracep->declBus(c+56,"ysyx_22051013_rvcpu wbu8 csr_addr", false,-1, 11,0);
        tracep->declBit(c+620,"ysyx_22051013_rvcpu wbu8 ls_valid", false,-1);
        tracep->declBit(c+623,"ysyx_22051013_rvcpu wbu8 id_stall", false,-1);
        tracep->declBit(c+76,"ysyx_22051013_rvcpu wbu8 time_interrupt", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu wbu8 wb_ready", false,-1);
        tracep->declQuad(c+72,"ysyx_22051013_rvcpu wbu8 ie_jump_pc", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu wbu8 ie_flush", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu wbu8 ie_jump", false,-1);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu wbu8 wb_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22051013_rvcpu wbu8 wb_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+69,"ysyx_22051013_rvcpu wbu8 wb_rd_ena", false,-1);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu wbu8 wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22051013_rvcpu wbu8 wb_data", false,-1, 63,0);
        tracep->declQuad(c+266,"ysyx_22051013_rvcpu wbu8 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+268,"ysyx_22051013_rvcpu wbu8 write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+270,"ysyx_22051013_rvcpu wbu8 w_csr_data", false,-1, 63,0);
        tracep->declQuad(c+272,"ysyx_22051013_rvcpu wbu8 mcause_value", false,-1, 63,0);
        tracep->declQuad(c+274,"ysyx_22051013_rvcpu wbu8 set_data", false,-1, 63,0);
        tracep->declQuad(c+276,"ysyx_22051013_rvcpu wbu8 clear_data", false,-1, 63,0);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu wbu8 time_jump", false,-1);
        tracep->declBit(c+279,"ysyx_22051013_rvcpu wbu8 delay", false,-1);
        tracep->declQuad(c+280,"ysyx_22051013_rvcpu wbu8 pc_delay", false,-1, 63,0);
        tracep->declBit(c+282,"ysyx_22051013_rvcpu wbu8 ebreak_ena", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu wbu8 csr_operate clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu wbu8 csr_operate rst", false,-1);
        tracep->declQuad(c+58,"ysyx_22051013_rvcpu wbu8 csr_operate pc_i", false,-1, 63,0);
        tracep->declBus(c+283,"ysyx_22051013_rvcpu wbu8 csr_operate csr_ctl", false,-1, 3,0);
        tracep->declBus(c+56,"ysyx_22051013_rvcpu wbu8 csr_operate csr_addr", false,-1, 11,0);
        tracep->declBit(c+787,"ysyx_22051013_rvcpu wbu8 csr_operate core_valid", false,-1);
        tracep->declQuad(c+272,"ysyx_22051013_rvcpu wbu8 csr_operate mcause_value", false,-1, 63,0);
        tracep->declQuad(c+270,"ysyx_22051013_rvcpu wbu8 csr_operate write_csr_data", false,-1, 63,0);
        tracep->declBit(c+76,"ysyx_22051013_rvcpu wbu8 csr_operate time_interrupt", false,-1);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu wbu8 csr_operate time_interrupt_confirm", false,-1);
        tracep->declQuad(c+266,"ysyx_22051013_rvcpu wbu8 csr_operate read_csr_data", false,-1, 63,0);
        tracep->declBit(c+284,"ysyx_22051013_rvcpu wbu8 csr_operate mcycle_rd", false,-1);
        tracep->declBit(c+285,"ysyx_22051013_rvcpu wbu8 csr_operate mcycle_wr", false,-1);
        tracep->declQuad(c+286,"ysyx_22051013_rvcpu wbu8 csr_operate mcycle", false,-1, 63,0);
        tracep->declBit(c+288,"ysyx_22051013_rvcpu wbu8 csr_operate mie_rd", false,-1);
        tracep->declBit(c+289,"ysyx_22051013_rvcpu wbu8 csr_operate mie_wr", false,-1);
        tracep->declBit(c+290,"ysyx_22051013_rvcpu wbu8 csr_operate mtie", false,-1);
        tracep->declQuad(c+291,"ysyx_22051013_rvcpu wbu8 csr_operate mie", false,-1, 63,0);
        tracep->declBit(c+293,"ysyx_22051013_rvcpu wbu8 csr_operate mip_rd", false,-1);
        tracep->declBit(c+294,"ysyx_22051013_rvcpu wbu8 csr_operate mtip", false,-1);
        tracep->declQuad(c+295,"ysyx_22051013_rvcpu wbu8 csr_operate mip", false,-1, 63,0);
        tracep->declBit(c+297,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_rd", false,-1);
        tracep->declBit(c+298,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_wr", false,-1);
        tracep->declBit(c+299,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_mie", false,-1);
        tracep->declBit(c+300,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_mpie", false,-1);
        tracep->declBus(c+301,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_mpp", false,-1, 1,0);
        tracep->declQuad(c+302,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus", false,-1, 63,0);
        tracep->declBit(c+304,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_ie_ena", false,-1);
        tracep->declBit(c+305,"ysyx_22051013_rvcpu wbu8 csr_operate mie_set", false,-1);
        tracep->declBit(c+306,"ysyx_22051013_rvcpu wbu8 csr_operate mpie_set", false,-1);
        tracep->declBus(c+307,"ysyx_22051013_rvcpu wbu8 csr_operate mpp_set", false,-1, 1,0);
        tracep->declBit(c+308,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_rd", false,-1);
        tracep->declBit(c+309,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_wr", false,-1);
        tracep->declQuad(c+310,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_base", false,-1, 63,2);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+312,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec", false,-1, 63,0);
        tracep->declBit(c+314,"ysyx_22051013_rvcpu wbu8 csr_operate mepc_rd", false,-1);
        tracep->declBit(c+315,"ysyx_22051013_rvcpu wbu8 csr_operate mepc_wr", false,-1);
        tracep->declQuad(c+316,"ysyx_22051013_rvcpu wbu8 csr_operate mepc", false,-1, 63,0);
        tracep->declBit(c+318,"ysyx_22051013_rvcpu wbu8 csr_operate mcause_rd", false,-1);
        tracep->declBit(c+319,"ysyx_22051013_rvcpu wbu8 csr_operate mcause_wr", false,-1);
        tracep->declQuad(c+320,"ysyx_22051013_rvcpu wbu8 csr_operate mcause", false,-1, 63,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu reg9 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu reg9 rst", false,-1);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu reg9 waddr", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22051013_rvcpu reg9 wdata", false,-1, 63,0);
        tracep->declBit(c+69,"ysyx_22051013_rvcpu reg9 wen", false,-1);
        tracep->declBus(c+596,"ysyx_22051013_rvcpu reg9 raddr1", false,-1, 4,0);
        tracep->declQuad(c+804,"ysyx_22051013_rvcpu reg9 rdata1", false,-1, 63,0);
        tracep->declBit(c+598,"ysyx_22051013_rvcpu reg9 ren1", false,-1);
        tracep->declBus(c+597,"ysyx_22051013_rvcpu reg9 raddr2", false,-1, 4,0);
        tracep->declQuad(c+806,"ysyx_22051013_rvcpu reg9 rdata2", false,-1, 63,0);
        tracep->declBit(c+599,"ysyx_22051013_rvcpu reg9 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+322+i*2,"ysyx_22051013_rvcpu reg9 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+386,"ysyx_22051013_rvcpu reg9 i", false,-1, 31,0);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu clint10 clk", false,-1);
        tracep->declBit(c+797,"ysyx_22051013_rvcpu clint10 rst", false,-1);
        tracep->declBit(c+76,"ysyx_22051013_rvcpu clint10 time_interrupt", false,-1);
        tracep->declBus(c+540,"ysyx_22051013_rvcpu clint10 t_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+541,"ysyx_22051013_rvcpu clint10 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu clint10 t_axi_aw_valid", false,-1);
        tracep->declBit(c+544,"ysyx_22051013_rvcpu clint10 t_axi_aw_ready", false,-1);
        tracep->declBus(c+545,"ysyx_22051013_rvcpu clint10 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu clint10 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+547,"ysyx_22051013_rvcpu clint10 t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+548,"ysyx_22051013_rvcpu clint10 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+550,"ysyx_22051013_rvcpu clint10 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+551,"ysyx_22051013_rvcpu clint10 t_axi_w_last", false,-1);
        tracep->declBit(c+552,"ysyx_22051013_rvcpu clint10 t_axi_w_valid", false,-1);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu clint10 t_axi_w_ready", false,-1);
        tracep->declBus(c+540,"ysyx_22051013_rvcpu clint10 t_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu clint10 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu clint10 t_axi_b_valid", false,-1);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu clint10 t_axi_b_ready", false,-1);
        tracep->declBus(c+555,"ysyx_22051013_rvcpu clint10 t_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+556,"ysyx_22051013_rvcpu clint10 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+558,"ysyx_22051013_rvcpu clint10 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+559,"ysyx_22051013_rvcpu clint10 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+560,"ysyx_22051013_rvcpu clint10 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+398,"ysyx_22051013_rvcpu clint10 t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu clint10 t_axi_ar_ready", false,-1);
        tracep->declBus(c+399,"ysyx_22051013_rvcpu clint10 t_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+400,"ysyx_22051013_rvcpu clint10 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+830,"ysyx_22051013_rvcpu clint10 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu clint10 t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu clint10 t_axi_r_valid", false,-1);
        tracep->declBit(c+561,"ysyx_22051013_rvcpu clint10 t_axi_r_ready", false,-1);
        tracep->declBus(c+387,"ysyx_22051013_rvcpu clint10 clint_write_state", false,-1, 1,0);
        tracep->declBus(c+487,"ysyx_22051013_rvcpu clint10 clint_write_state_next", false,-1, 1,0);
        tracep->declBit(c+788,"ysyx_22051013_rvcpu clint10 awc_shakehand", false,-1);
        tracep->declBit(c+789,"ysyx_22051013_rvcpu clint10 wc_shakehand", false,-1);
        tracep->declBit(c+488,"ysyx_22051013_rvcpu clint10 bc_shakehand", false,-1);
        tracep->declBit(c+489,"ysyx_22051013_rvcpu clint10 arc_shakehand", false,-1);
        tracep->declBit(c+490,"ysyx_22051013_rvcpu clint10 rc_shakehand", false,-1);
        tracep->declBus(c+388,"ysyx_22051013_rvcpu clint10 clint_read_state", false,-1, 1,0);
        tracep->declBus(c+491,"ysyx_22051013_rvcpu clint10 clint_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+492,"ysyx_22051013_rvcpu clint10 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+389,"ysyx_22051013_rvcpu clint10 csr_mtime", false,-1, 63,0);
        tracep->declQuad(c+391,"ysyx_22051013_rvcpu clint10 csr_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+790,"ysyx_22051013_rvcpu clint10 mtime_read", false,-1);
        tracep->declBit(c+791,"ysyx_22051013_rvcpu clint10 mtime_write", false,-1);
        tracep->declBit(c+792,"ysyx_22051013_rvcpu clint10 mtimecmp_read", false,-1);
        tracep->declBit(c+793,"ysyx_22051013_rvcpu clint10 mtimecmp_write", false,-1);
        tracep->declQuad(c+794,"ysyx_22051013_rvcpu clint10 wmask", false,-1, 63,0);
        tracep->declQuad(c+494,"ysyx_22051013_rvcpu clint10 mtime_temp", false,-1, 63,0);
        tracep->declQuad(c+496,"ysyx_22051013_rvcpu clint10 mtimecmp_temp", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp317;
    VlWide<3>/*95:0*/ __Vtemp319;
    VlWide<3>/*95:0*/ __Vtemp321;
    VlWide<3>/*95:0*/ __Vtemp323;
    VlWide<5>/*159:0*/ __Vtemp341;
    VlWide<5>/*159:0*/ __Vtemp342;
    VlWide<3>/*95:0*/ __Vtemp343;
    VlWide<4>/*127:0*/ __Vtemp350;
    VlWide<4>/*127:0*/ __Vtemp365;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<4>/*127:0*/ __Vtemp386;
    VlWide<4>/*127:0*/ __Vtemp423;
    VlWide<4>/*127:0*/ __Vtemp434;
    VlWide<4>/*127:0*/ __Vtemp471;
    VlWide<4>/*127:0*/ __Vtemp472;
    VlWide<4>/*127:0*/ __Vtemp473;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))));
        tracep->fullBit(oldp+2,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
        tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
        tracep->fullQData(oldp+4,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data
                                    : 0ULL)),64);
        tracep->fullBit(oldp+6,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
        tracep->fullBit(oldp+7,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))));
        tracep->fullBit(oldp+8,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))));
        tracep->fullBit(oldp+9,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))));
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid));
        tracep->fullIData(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst),32);
        tracep->fullBit(oldp+12,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
        tracep->fullBit(oldp+15,(((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                   ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                                   : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena)))));
        tracep->fullBit(oldp+16,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc),64);
        tracep->fullIData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
        tracep->fullIData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
        tracep->fullBit(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel),2);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel),3);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr),5);
        tracep->fullBit(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl),7);
        tracep->fullSData(oldp+42,(((0U != (0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)))
                                     ? (0xfffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                     : 0U)),12);
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
        tracep->fullCData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
        tracep->fullCData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
        tracep->fullCData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl),7);
        tracep->fullSData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr),12);
        tracep->fullCData(oldp+54,(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                      | (9U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                     | (0xdU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                     ? 3U : ((((2U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                               | (0xaU 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                              | (0xeU 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                              ? 4U : 
                                             ((((4U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                                | (0xbU 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                               | (0xfU 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                               ? 5U
                                               : ((
                                                   (8U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                                   | (0xcU 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                                   ? 6U
                                                   : 0U))))),3);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl),7);
        tracep->fullSData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr),12);
        tracep->fullIData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
        tracep->fullBit(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
        tracep->fullBit(oldp+69,(((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)) 
                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena))));
        tracep->fullCData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr),5);
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel));
        tracep->fullQData(oldp+72,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
                                     : 0ULL)),64);
        tracep->fullBit(oldp+74,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)))));
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid));
        tracep->fullBit(oldp+76,((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime 
                                  > vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)));
        tracep->fullCData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state),3);
        tracep->fullCData(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state),3);
        tracep->fullCData(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state),2);
        tracep->fullCData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state),2);
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state),2);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data),64);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state),4);
        tracep->fullBit(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1));
        tracep->fullBit(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2));
        tracep->fullCData(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index),6);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag),23);
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1));
        tracep->fullBit(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2));
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullWData(oldp+95,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data),128);
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state),6);
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update));
        tracep->fullBit(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid));
        tracep->fullBit(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena));
        tracep->fullBit(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr));
        tracep->fullCData(oldp+104,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state),6);
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update));
        tracep->fullBit(oldp+106,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid));
        tracep->fullBit(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena));
        tracep->fullBit(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw));
        tracep->fullIData(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+111,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+112,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullWData(oldp+113,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data),128);
        tracep->fullIData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
        tracep->fullSData(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
        tracep->fullCData(oldp+119,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)),7);
        tracep->fullCData(oldp+120,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+121,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+122,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+123,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
        tracep->fullCData(oldp+124,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+125,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+126,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+127,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
        tracep->fullIData(oldp+128,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+129,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
        tracep->fullSData(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2),64);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul));
        tracep->fullCData(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed),2);
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid));
        tracep->fullBit(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid));
        tracep->fullBit(oldp+161,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                      | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                     | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))))));
        tracep->fullQData(oldp+162,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo),64);
        tracep->fullQData(oldp+166,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                      ? ((0x58U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo
                                          : ((((0xb0U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                               | (0x26U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                              | (0x13U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                              ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                                  : 0ULL)
                                              : ((0x4cU 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo)))
                                                  : 0ULL)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp),64);
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw));
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2));
        tracep->fullBit(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid));
        tracep->fullBit(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid));
        tracep->fullBit(oldp+176,((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp),64);
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg));
        tracep->fullBit(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall));
        tracep->fullBit(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg));
        tracep->fullBit(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
        tracep->fullBit(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena));
        tracep->fullBit(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena));
        tracep->fullBit(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena));
        tracep->fullBit(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena));
        tracep->fullBit(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena));
        tracep->fullBit(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena));
        tracep->fullBit(oldp+189,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena));
        tracep->fullQData(oldp+190,((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr))),64);
        tracep->fullBit(oldp+192,((((0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                    | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                   | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))));
        tracep->fullBit(oldp+193,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div))));
        tracep->fullQData(oldp+194,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                                          : 0ULL))),64);
        tracep->fullBit(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing));
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp),64);
        VL_EXTEND_WQ(66,64, __Vtemp317, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
        if ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
            __Vtemp319[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
            __Vtemp319[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                      >> 0x20U));
            __Vtemp319[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp319[0U] = __Vtemp317[0U];
            __Vtemp319[1U] = __Vtemp317[1U];
            __Vtemp319[2U] = __Vtemp317[2U];
        }
        tracep->fullWData(oldp+201,(__Vtemp319),66);
        VL_EXTEND_WQ(66,64, __Vtemp321, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
        if ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
            __Vtemp323[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
            __Vtemp323[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                      >> 0x20U));
            __Vtemp323[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp323[0U] = __Vtemp321[0U];
            __Vtemp323[1U] = __Vtemp321[1U];
            __Vtemp323[2U] = __Vtemp321[2U];
        }
        tracep->fullWData(oldp+204,(__Vtemp323),66);
        tracep->fullWData(oldp+207,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand),132);
        tracep->fullWData(oldp+212,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier),67);
        tracep->fullCData(oldp+215,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])),3);
        tracep->fullBit(oldp+216,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative))));
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
            __Vtemp341[1U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                               << 1U)));
            __Vtemp341[2U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                               << 1U)));
            __Vtemp341[3U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                               << 1U)));
            __Vtemp341[4U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                  >> 0x1fU) | (0xeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                  << 1U))));
            __Vtemp342[0U] = (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                 << 1U));
        } else {
            __Vtemp341[1U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                   >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                                << 1U))
                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U]
                                       : 0U)));
            __Vtemp341[2U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                   >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                                << 1U))
                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U]
                                       : 0U)));
            __Vtemp341[3U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                   >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                                << 1U))
                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U]
                                       : 0U)));
            __Vtemp341[4U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                   >> 0x1fU) | (0xeU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                   << 1U)))
                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U]
                                       : 0U)));
            __Vtemp342[0U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                  << 1U) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                             ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U])
                                             : ((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                      >> 2U)) 
                                                    & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                         >> 1U) 
                                                        & (~ 
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                       | ((~ 
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                            >> 1U)) 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                                 ? 
                                                vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U]
                                                 : 0U)));
        }
        __Vtemp342[1U] = __Vtemp341[1U];
        __Vtemp342[2U] = __Vtemp341[2U];
        __Vtemp342[3U] = __Vtemp341[3U];
        __Vtemp342[4U] = (0xfU & __Vtemp341[4U]);
        tracep->fullWData(oldp+217,(__Vtemp342),132);
        tracep->fullWData(oldp+222,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp),132);
        tracep->fullBit(oldp+227,((0xfU == (0xfU & 
                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U]))));
        tracep->fullBit(oldp+228,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+229,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+230,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
        tracep->fullBit(oldp+231,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative));
        tracep->fullBit(oldp+232,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative));
        tracep->fullBit(oldp+233,((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))));
        tracep->fullBit(oldp+234,((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
        tracep->fullBit(oldp+235,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing));
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
        tracep->fullBit(oldp+240,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign));
        tracep->fullBit(oldp+241,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign));
        tracep->fullQData(oldp+242,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                      ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
        tracep->fullWData(oldp+246,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend),128);
        VL_EXTEND_WQ(65,64, __Vtemp343, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
        tracep->fullWData(oldp+250,(__Vtemp343),65);
        tracep->fullCData(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt),7);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q),64);
        tracep->fullBit(oldp+256,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign));
        tracep->fullQData(oldp+257,(((((QData)((IData)(
                                                       vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                        << 1U) | ((QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                                  >> 0x1fU))) 
                                     - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
        tracep->fullBit(oldp+259,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok));
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
        tracep->fullCData(oldp+262,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
        tracep->fullCData(oldp+263,((3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+264,((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                 >> 2U)))));
        tracep->fullIData(oldp+265,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data),64);
        tracep->fullQData(oldp+268,((((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                               >> 6U))))) 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                                 >> 5U))))) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                                >> 4U))))) 
                                         & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                            & (~ vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata)))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                               >> 1U))))) 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc))),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data),64);
        tracep->fullQData(oldp+272,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                      ? 0xbULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+274,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata)),64);
        tracep->fullQData(oldp+276,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata))),64);
        tracep->fullBit(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump));
        tracep->fullBit(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__delay));
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_delay),64);
        tracep->fullBit(oldp+282,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
        tracep->fullCData(oldp+283,((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))),4);
        tracep->fullBit(oldp+284,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+285,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle),64);
        tracep->fullBit(oldp+288,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+289,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullBit(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie));
        tracep->fullQData(oldp+291,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+293,(((0x344U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip));
        tracep->fullQData(oldp+295,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+297,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr));
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie));
        tracep->fullCData(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp),2);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus),64);
        tracep->fullBit(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena));
        tracep->fullBit(oldp+305,((1U & ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 1U) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump))) 
                                         & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)))))));
        tracep->fullBit(oldp+306,((1U & ((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)))))));
        tracep->fullCData(oldp+307,(((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                                      ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        tracep->fullBit(oldp+308,((1U & ((((0x305U 
                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 2U)) 
                                          | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
        tracep->fullBit(oldp+309,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base),62);
        tracep->fullQData(oldp+312,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+314,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))));
        tracep->fullBit(oldp+315,((1U & ((((0x341U 
                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 3U)) 
                                          | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc),64);
        tracep->fullBit(oldp+318,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+319,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
        tracep->fullQData(oldp+356,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
        tracep->fullQData(oldp+360,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
        tracep->fullQData(oldp+362,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
        tracep->fullQData(oldp+364,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
        tracep->fullQData(oldp+366,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
        tracep->fullQData(oldp+368,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
        tracep->fullQData(oldp+374,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
        tracep->fullQData(oldp+376,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
        tracep->fullQData(oldp+382,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
        tracep->fullQData(oldp+384,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
        tracep->fullIData(oldp+386,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        tracep->fullCData(oldp+387,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state),2);
        tracep->fullCData(oldp+388,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state),2);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp),64);
        tracep->fullBit(oldp+393,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                    ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                    : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
        tracep->fullCData(oldp+394,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                          ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                              ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                              : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                     ? 0U
                                                     : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                    : 0U))),5);
        tracep->fullBit(oldp+395,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                    ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                    : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
        tracep->fullBit(oldp+396,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
        tracep->fullCData(oldp+397,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                      ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                          ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      : 0U)),5);
        tracep->fullBit(oldp+398,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
        tracep->fullCData(oldp+399,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                      ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                          : 0U) : 0U)),5);
        tracep->fullQData(oldp+400,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                      ? ((0x200bff8ULL 
                                          == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                          : ((0x2004000ULL 
                                              == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+402,((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+404,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                    : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena))))));
        tracep->fullBit(oldp+405,((1U & ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                                          : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                              ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                                              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we)))))));
        tracep->fullBit(oldp+406,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
        tracep->fullQData(oldp+407,(((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                      : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                          : 0ULL))),64);
        tracep->fullQData(oldp+409,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc
                                      : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? (((0x10U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                                              ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                                                  ? 
                                                 (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    (0x1f8U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                        << 3U)))))
                                                  : 
                                                 (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    (0x1f8U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                        << 3U))))))
                                              : 0ULL)
                                          : ((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc
                                              : ((0x21U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? 
                                                 (((0x21U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                                                    ? 
                                                   (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1f8U 
                                                                       & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                          << 3U)))))
                                                    : 
                                                   (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1f8U 
                                                                       & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                          << 3U))))))
                                                   : 0ULL)
                                                  : 0ULL))))),64);
        tracep->fullQData(oldp+411,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                      ? (((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc) 
                                         + ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                             ? 4ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+413,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                      ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullBit(oldp+414,((((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                     ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                     : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
        tracep->fullCData(oldp+415,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                      ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)))
                                          ? 3U : 1U)
                                      : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand)
                                              ? 1U : 3U)
                                          : 1U))),2);
        tracep->fullBit(oldp+416,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
        tracep->fullCData(oldp+417,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                                          ? 2U : 1U)
                                      : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                          ? (((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))
                                              ? 1U : 2U)
                                          : 1U))),2);
        tracep->fullBit(oldp+418,((((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                          >> 9U))) 
                                    == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild))));
        tracep->fullBit(oldp+419,((((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                          >> 9U))) 
                                    == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild))));
        if ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) {
            __Vtemp350[0U] = 0U;
            __Vtemp350[1U] = 0U;
            __Vtemp350[2U] = 0U;
            __Vtemp350[3U] = 0U;
        } else {
            __Vtemp350[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                               ? (IData)((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                           : 0ULL))
                               : 0U);
            __Vtemp350[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                               ? (IData)(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                            : 0ULL) 
                                          >> 0x20U))
                               : 0U);
            __Vtemp350[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                               ? (IData)((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                           : 0ULL))
                               : 0U);
            __Vtemp350[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                               ? (IData)(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                            : 0ULL) 
                                          >> 0x20U))
                               : 0U);
        }
        tracep->fullWData(oldp+420,(__Vtemp350),128);
        tracep->fullBit(oldp+424,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
                                    & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
                                   & (0U == ((((~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
                                               | (~ 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])) 
                                              | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])))));
        tracep->fullBit(oldp+425,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
                                    & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
                                   & (0U == (((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
                                               | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
                                              | (~ 
                                                 vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])) 
                                             | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]))))));
        tracep->fullBit(oldp+426,(((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                       >> 3U)))] 
                                    & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                       >> 3U)))]) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))));
        tracep->fullBit(oldp+427,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready))));
        tracep->fullBit(oldp+428,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                   & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                      & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))])))));
        tracep->fullBit(oldp+429,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                   & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                      & ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))])) 
                                         & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                            | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                         >> 3U)))]))))));
        if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
            __Vtemp365[0U] = 0U;
            __Vtemp365[1U] = 0U;
            __Vtemp365[2U] = 0U;
            __Vtemp365[3U] = 0U;
        } else {
            __Vtemp365[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]))
                                   ? 0xffffffffU : 0U)
                               : 0U);
            __Vtemp365[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]))
                                   ? 0xffffffffU : 0U)
                               : 0U);
            __Vtemp365[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]))
                                   ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U)) : 0U);
            __Vtemp365[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]))
                                   ? 0U : ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U)) : 0U);
        }
        tracep->fullWData(oldp+430,(__Vtemp365),128);
        tracep->fullQData(oldp+434,((((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                                          ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                            >> 3U)) 
                                                                   << 3U)))))
                                          : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                            >> 3U)) 
                                                                   << 3U))))))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+436,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready))));
        if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
            __Vtemp369[0U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                       ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
            __Vtemp369[1U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                        ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                      >> 0x20U));
            __Vtemp369[2U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                       ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
            __Vtemp369[3U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                        ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                      >> 0x20U));
        } else {
            __Vtemp369[0U] = 0U;
            __Vtemp369[1U] = 0U;
            __Vtemp369[2U] = 0U;
            __Vtemp369[3U] = 0U;
        }
        tracep->fullWData(oldp+437,(__Vtemp369),128);
        tracep->fullBit(oldp+441,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                   & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                      & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild) 
                                            & ((~ vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))])))))));
        tracep->fullBit(oldp+442,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                   & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild) 
                                         & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                            | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                         >> 3U)))]))))));
        if (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
            __Vtemp386[0U] = 0U;
            __Vtemp386[1U] = 0U;
            __Vtemp386[2U] = 0U;
            __Vtemp386[3U] = 0U;
        } else {
            __Vtemp386[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                       ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                          [(0x3fU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]
                                           ? 0U : (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                       : 0U) : 0xffffffffU)
                               : 0U);
            __Vtemp386[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                       ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                          [(0x3fU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]
                                           ? 0U : (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                       : 0U) : 0xffffffffU)
                               : 0U);
            __Vtemp386[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                       ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                          [(0x3fU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]
                                           ? 0xffffffffU
                                           : 0U) : 0xffffffffU)
                                   : 0U) : 0U);
            __Vtemp386[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                       ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                          [(0x3fU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]
                                           ? 0xffffffffU
                                           : 0U) : 0xffffffffU)
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+443,(__Vtemp386),128);
        tracep->fullQData(oldp+447,((((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                                          ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                            >> 3U)) 
                                                                   << 3U)))))
                                          : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                            >> 3U)) 
                                                                   << 3U))))))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+449,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                       & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                          & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))])))
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & ((~ ((0x20U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                          & (((0x20U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                             & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild) 
                                                   & ((~ 
                                                       vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]) 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))])))))))));
        tracep->fullBit(oldp+450,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                       & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                          & ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))])) 
                                             & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 3U)))]))))
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & ((~ ((0x20U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                          & (((0x20U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild) 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))))))));
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp423[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp423[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp423[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
            __Vtemp423[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
        } else {
            __Vtemp423[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]
                                                      ? 0xffffffffU
                                                      : 0U))
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                : 0U));
            __Vtemp423[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]
                                                      ? 0xffffffffU
                                                      : 0U))
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                : 0U));
            __Vtemp423[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U)
                                                    : 0xffffffffU)
                                                : 0U)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                : 0U));
            __Vtemp423[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U)
                                                    : 0xffffffffU)
                                                : 0U)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                : 0U));
        }
        tracep->fullWData(oldp+451,(__Vtemp423),128);
        tracep->fullBit(oldp+455,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                        : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))));
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp434[0U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U];
            __Vtemp434[1U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U];
            __Vtemp434[2U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U];
            __Vtemp434[3U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U];
        } else {
            __Vtemp434[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                       : 0U) : 0U));
            __Vtemp434[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                  >> 0x20U))
                                       : 0U) : 0U));
            __Vtemp434[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                       : 0U) : 0U));
            __Vtemp434[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                  >> 0x20U))
                                       : 0U) : 0U));
        }
        tracep->fullWData(oldp+456,(__Vtemp434),128);
        tracep->fullBit(oldp+460,((1U & (~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                             : ((0x20U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))))));
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp471[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp471[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp471[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
            __Vtemp471[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
        } else {
            __Vtemp471[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]
                                                      ? 0xffffffffU
                                                      : 0U))
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                : 0U));
            __Vtemp471[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]
                                                      ? 0xffffffffU
                                                      : 0U))
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                : 0U));
            __Vtemp471[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U)
                                                    : 0xffffffffU)
                                                : 0U)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                : 0U));
            __Vtemp471[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                    ? 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U)
                                                    : 0xffffffffU)
                                                : 0U)
                                            : 0U)) : 
                              ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                : 0U));
        }
        __Vtemp472[0U] = (~ __Vtemp471[0U]);
        __Vtemp472[1U] = (~ __Vtemp471[1U]);
        __Vtemp472[2U] = (~ __Vtemp471[2U]);
        __Vtemp472[3U] = (~ __Vtemp471[3U]);
        tracep->fullWData(oldp+461,(__Vtemp472),128);
        tracep->fullQData(oldp+465,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+467,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+469,(((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+471,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                      ? 4ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)),64);
        tracep->fullBit(oldp+473,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+474,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+475,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+476,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+477,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+478,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+479,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+480,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullQData(oldp+481,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                      : 0ULL)),64);
        tracep->fullQData(oldp+483,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                      : 0ULL)),64);
        tracep->fullQData(oldp+485,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                      ? (((((0x98U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                            | (0x23U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                           | (0x8cU 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                          | (0x46U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                              : 0ULL)
                                          : (((((0x43U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                | (0x86U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                               | (0x15U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                              | (0x83U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                              ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                                  : 0ULL)
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+487,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                                      ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)))
                                          ? 3U : 1U)
                                      : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                                          ? (((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                              & (2U 
                                                 == 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                   ? 2U
                                                   : 1U)))
                                              ? 1U : 3U)
                                          : 1U))),2);
        tracep->fullBit(oldp+488,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                   & (2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U)))));
        tracep->fullBit(oldp+489,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                                   & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))));
        tracep->fullBit(oldp+490,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))));
        tracep->fullCData(oldp+491,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                      ? (((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                                          & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                             & (4U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))
                                          ? 2U : 1U)
                                      : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                          ? (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))
                                              ? 1U : 2U)
                                          : 1U))),2);
        tracep->fullQData(oldp+492,(((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                      : ((0x2004000ULL 
                                          == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                          : 0ULL))),64);
        tracep->fullQData(oldp+494,(((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                      ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                         | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))
                                      : (1ULL + vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))),64);
        tracep->fullQData(oldp+496,(((0x2004000ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                      ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                         | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp))
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)),64);
        tracep->fullCData(oldp+498,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                      ? 2U : 1U)),5);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc),64);
        tracep->fullBit(oldp+501,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
        tracep->fullBit(oldp+502,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
        tracep->fullCData(oldp+503,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size),3);
        tracep->fullQData(oldp+504,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o),64);
        tracep->fullCData(oldp+506,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask),8);
        tracep->fullBit(oldp+507,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
        tracep->fullBit(oldp+508,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
        tracep->fullBit(oldp+509,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+510,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                  ? 2U
                                                  : 1U))
                                          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U)
                                          : 0U) : (
                                                   (2U 
                                                    == 
                                                    ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                      ? 2U
                                                      : 1U))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                     ? 2U
                                                     : 1U)))),5);
        tracep->fullBit(oldp+511,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid));
        tracep->fullCData(oldp+512,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id),5);
        tracep->fullQData(oldp+513,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+515,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size),3);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data),64);
        tracep->fullCData(oldp+518,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U))),5);
        tracep->fullQData(oldp+519,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc)),64);
        tracep->fullBit(oldp+521,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid));
        tracep->fullBit(oldp+522,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready));
        tracep->fullCData(oldp+523,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : 1U)),8);
        tracep->fullCData(oldp+524,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size))),3);
        tracep->fullCData(oldp+525,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : 1U)),2);
        tracep->fullQData(oldp+526,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o)),64);
        tracep->fullCData(oldp+528,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask))),8);
        tracep->fullBit(oldp+529,(((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+530,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
        tracep->fullBit(oldp+531,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+532,((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                           ? 2U : 1U))));
        tracep->fullCData(oldp+533,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))),5);
        tracep->fullQData(oldp+534,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+536,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : 1U)),8);
        tracep->fullCData(oldp+537,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size))),3);
        tracep->fullCData(oldp+538,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : 1U)),2);
        tracep->fullBit(oldp+539,((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
        tracep->fullCData(oldp+540,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                          ? 2U : 1U)
                                      : 0U)),5);
        tracep->fullQData(oldp+541,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+543,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid));
        tracep->fullBit(oldp+544,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready));
        tracep->fullCData(oldp+545,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 1U : 0U)),8);
        tracep->fullCData(oldp+546,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size)
                                      : 0U)),3);
        tracep->fullCData(oldp+547,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 1U : 0U)),2);
        tracep->fullQData(oldp+548,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data),64);
        tracep->fullCData(oldp+550,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb),8);
        tracep->fullBit(oldp+551,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+552,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
        tracep->fullBit(oldp+553,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready));
        tracep->fullBit(oldp+554,((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                           ? 2U : 1U))));
        tracep->fullCData(oldp+555,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                      : 0U)),5);
        tracep->fullQData(oldp+556,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr),64);
        tracep->fullCData(oldp+558,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 1U : 0U)),8);
        tracep->fullCData(oldp+559,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)
                                      : 0U)),3);
        tracep->fullCData(oldp+560,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 1U : 0U)),2);
        tracep->fullBit(oldp+561,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
        tracep->fullBit(oldp+562,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid));
        tracep->fullQData(oldp+563,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc),64);
        tracep->fullBit(oldp+565,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena));
        tracep->fullQData(oldp+566,(vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc),64);
        tracep->fullBit(oldp+568,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
        tracep->fullBit(oldp+569,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
        tracep->fullCData(oldp+570,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask),8);
        tracep->fullQData(oldp+571,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc),64);
        tracep->fullQData(oldp+573,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data)),64);
        tracep->fullQData(oldp+575,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data),64);
        tracep->fullBit(oldp+577,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid));
        tracep->fullBit(oldp+578,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint));
        tracep->fullQData(oldp+579,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i),64);
        tracep->fullBit(oldp+581,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
        tracep->fullBit(oldp+582,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
        tracep->fullCData(oldp+584,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask),8);
        tracep->fullQData(oldp+585,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data)),64);
        tracep->fullQData(oldp+587,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data),64);
        tracep->fullQData(oldp+589,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc),64);
        tracep->fullBit(oldp+591,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready));
        tracep->fullQData(oldp+592,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data),64);
        tracep->fullBit(oldp+594,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid));
        tracep->fullBit(oldp+595,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready));
        tracep->fullCData(oldp+596,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
        tracep->fullCData(oldp+597,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
        tracep->fullBit(oldp+598,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+599,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+600,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
        tracep->fullBit(oldp+601,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+602,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
        tracep->fullQData(oldp+604,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
        tracep->fullQData(oldp+606,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
        tracep->fullBit(oldp+608,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
        tracep->fullCData(oldp+609,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
        tracep->fullCData(oldp+610,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
        tracep->fullCData(oldp+611,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
        tracep->fullCData(oldp+612,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc))
                                      ? 2U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                               ? 1U
                                               : 0U))),2);
        tracep->fullCData(oldp+613,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump)
                                      ? 2U : ((1U & 
                                               (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xb3U 
                                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))
                                               ? 4U
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                                   ? 1U
                                                   : 0U)))),3);
        tracep->fullQData(oldp+614,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
        tracep->fullQData(oldp+616,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
        tracep->fullQData(oldp+618,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+620,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
        tracep->fullBit(oldp+621,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready));
        tracep->fullBit(oldp+622,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready));
        tracep->fullBit(oldp+623,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
        tracep->fullBit(oldp+624,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read));
        tracep->fullBit(oldp+625,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read));
        tracep->fullBit(oldp+626,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read))));
        tracep->fullBit(oldp+627,((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                             ? 2U : 1U))
                                     ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                     : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid))));
        tracep->fullBit(oldp+628,(((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+629,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh));
        tracep->fullCData(oldp+630,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next),2);
        tracep->fullBit(oldp+631,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+632,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
        tracep->fullBit(oldp+633,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand));
        tracep->fullBit(oldp+634,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
        tracep->fullCData(oldp+635,(((6U == ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                              ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                      ? 8U : ((5U == 
                                               ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                               ? 4U
                                               : ((4U 
                                                   == 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                     ? 0U
                                                     : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                      ? 0U
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                                    ? 1U
                                                    : 8U))))),8);
        tracep->fullBit(oldp+636,(((7U == ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                    ? 2U
                                                    : 1U))
                                            ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size))) 
                                   & (((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                ? 2U
                                                : 1U)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we)) 
                                      & ((0xffU == 
                                          ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                    ? 2U
                                                    : 1U))
                                            ? 0U : 1U)) 
                                         & ((3U == 
                                             ((2U == 
                                               ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                               ? 0U
                                               : 1U)) 
                                            & ((3U 
                                                == 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                  ? 0U
                                                  : 1U)) 
                                               & (0xffU 
                                                  == 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                    ? 0U
                                                    : 1U)))))))));
        tracep->fullIData(oldp+637,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+638,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+639,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
        tracep->fullWData(oldp+640,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb),128);
        tracep->fullBit(oldp+644,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena));
        tracep->fullBit(oldp+645,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid));
        tracep->fullIData(oldp+646,((0x800000U | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag)),24);
        tracep->fullIData(oldp+647,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag),23);
        tracep->fullCData(oldp+648,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index),6);
        tracep->fullBit(oldp+649,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena)))));
        __Vtemp473[0U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]);
        __Vtemp473[1U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]);
        __Vtemp473[2U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]);
        __Vtemp473[3U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]);
        tracep->fullWData(oldp+650,(__Vtemp473),128);
        tracep->fullBit(oldp+654,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena));
        tracep->fullIData(oldp+655,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+656,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+657,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next),6);
        tracep->fullBit(oldp+658,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit));
        tracep->fullBit(oldp+659,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit));
        tracep->fullBit(oldp+660,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty));
        tracep->fullBit(oldp+661,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready));
        tracep->fullBit(oldp+662,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid));
        tracep->fullBit(oldp+663,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid));
        tracep->fullQData(oldp+664,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc),64);
        tracep->fullBit(oldp+666,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena));
        tracep->fullWData(oldp+667,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data),128);
        tracep->fullQData(oldp+671,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data),64);
        tracep->fullCData(oldp+673,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next),6);
        tracep->fullBit(oldp+674,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit));
        tracep->fullBit(oldp+675,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit));
        tracep->fullBit(oldp+676,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty));
        tracep->fullBit(oldp+677,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready));
        tracep->fullBit(oldp+678,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid));
        tracep->fullWData(oldp+679,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb),128);
        tracep->fullQData(oldp+683,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64),64);
        tracep->fullBit(oldp+685,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid));
        tracep->fullQData(oldp+686,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc),64);
        tracep->fullBit(oldp+688,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena));
        tracep->fullWData(oldp+689,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data),128);
        tracep->fullQData(oldp+693,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data),64);
        tracep->fullIData(oldp+695,((0x800000U | (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 9U))))),24);
        tracep->fullBit(oldp+696,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
        tracep->fullBit(oldp+697,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 2U))));
        tracep->fullBit(oldp+698,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward));
        tracep->fullBit(oldp+699,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward));
        tracep->fullBit(oldp+700,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward));
        tracep->fullBit(oldp+701,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward));
        tracep->fullBit(oldp+702,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward));
        tracep->fullBit(oldp+703,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward));
        tracep->fullBit(oldp+704,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward))));
        tracep->fullBit(oldp+705,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward))));
        tracep->fullBit(oldp+706,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
        tracep->fullQData(oldp+707,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
        tracep->fullBit(oldp+709,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
        tracep->fullCData(oldp+710,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+711,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+712,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+713,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+714,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+715,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+716,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+717,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+718,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+719,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+720,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+721,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+722,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+723,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+724,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+725,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+726,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+727,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+728,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+729,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+730,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+731,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+732,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+733,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+734,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+735,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+736,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+737,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+738,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+739,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+740,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+741,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+742,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+743,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+744,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+745,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+746,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+747,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+748,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+749,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+750,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+751,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+752,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+753,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+754,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+755,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+756,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+757,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+758,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+759,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+760,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+761,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+762,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+763,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+764,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+765,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
        tracep->fullBit(oldp+766,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
        tracep->fullBit(oldp+767,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+768,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+769,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+770,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+771,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+772,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+773,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+774,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+775,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump));
        tracep->fullBit(oldp+776,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb3U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
        tracep->fullQData(oldp+777,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
        tracep->fullQData(oldp+779,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
        tracep->fullQData(oldp+781,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
        tracep->fullQData(oldp+783,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
        tracep->fullCData(oldp+785,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
        tracep->fullSData(oldp+786,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
        tracep->fullBit(oldp+787,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid));
        tracep->fullBit(oldp+788,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready))));
        tracep->fullBit(oldp+789,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready))));
        tracep->fullBit(oldp+790,((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
        tracep->fullBit(oldp+791,((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
        tracep->fullBit(oldp+792,((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
        tracep->fullBit(oldp+793,((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
        tracep->fullQData(oldp+794,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask),64);
        tracep->fullBit(oldp+796,(vlSelf->clk));
        tracep->fullBit(oldp+797,(vlSelf->rst));
        tracep->fullBit(oldp+798,(((~ (IData)(vlSelf->rst)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                         >> 0xbU)))));
        tracep->fullQData(oldp+799,((((IData)(vlSelf->rst) 
                                      | (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)))
                                      ? 0x80000000ULL
                                      : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                         + (((IData)(vlSelf->rst)
                                              ? 0U : (IData)(
                                                             (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))
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
        tracep->fullIData(oldp+801,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->fullQData(oldp+802,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+804,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+806,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                      : 0ULL)),64);
        tracep->fullBit(oldp+808,(((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))));
        tracep->fullQData(oldp+809,((((IData)(vlSelf->rst)
                                       ? 0U : (IData)(
                                                      (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))
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
        tracep->fullQData(oldp+811,((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                     + (((IData)(vlSelf->rst)
                                          ? 0U : (IData)(
                                                         (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))
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
        tracep->fullBit(oldp+813,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+814,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullQData(oldp+815,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->fullQData(oldp+817,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->fullCData(oldp+819,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? 0x20U
                                                    : 0x10U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                    ? 2U
                                                    : 1U))))),8);
        tracep->fullCData(oldp+820,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+821,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullQData(oldp+822,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x20U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))))),64);
        tracep->fullQData(oldp+824,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))),64);
        tracep->fullQData(oldp+826,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)))) 
                                                   << 0x30U)))))),64);
        tracep->fullCData(oldp+828,(1U),8);
        tracep->fullCData(oldp+829,(1U),2);
        tracep->fullCData(oldp+830,(0U),2);
        tracep->fullBit(oldp+831,(1U));
        tracep->fullBit(oldp+832,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ifid_jumpflush));
        tracep->fullBit(oldp+833,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_ex_csr_update));
        tracep->fullQData(oldp+834,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_bpu_data),64);
        tracep->fullBit(oldp+836,(0U));
        tracep->fullBit(oldp+837,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_flush));
        tracep->fullBit(oldp+838,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_flush));
        tracep->fullIData(oldp+839,(0x80U),32);
        tracep->fullIData(oldp+840,(0x40U),32);
        tracep->fullIData(oldp+841,(6U),32);
        tracep->fullBit(oldp+842,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way1_clean));
        tracep->fullBit(oldp+843,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way2_clean));
    }
}
