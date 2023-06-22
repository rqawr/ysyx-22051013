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
        tracep->declBit(c+778,"clk", false,-1);
        tracep->declBit(c+779,"rst", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declBus(c+415,"ysyx_22051013_rvcpu axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+416,"ysyx_22051013_rvcpu axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+418,"ysyx_22051013_rvcpu axi_aw_valid", false,-1);
        tracep->declBit(c+419,"ysyx_22051013_rvcpu axi_aw_ready", false,-1);
        tracep->declBus(c+856,"ysyx_22051013_rvcpu axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+420,"ysyx_22051013_rvcpu axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+857,"ysyx_22051013_rvcpu axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+421,"ysyx_22051013_rvcpu axi_w_data", false,-1, 63,0);
        tracep->declBus(c+423,"ysyx_22051013_rvcpu axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu axi_w_last", false,-1);
        tracep->declBit(c+425,"ysyx_22051013_rvcpu axi_w_valid", false,-1);
        tracep->declBit(c+426,"ysyx_22051013_rvcpu axi_w_ready", false,-1);
        tracep->declBus(c+427,"ysyx_22051013_rvcpu axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu axi_b_valid", false,-1);
        tracep->declBit(c+859,"ysyx_22051013_rvcpu axi_b_ready", false,-1);
        tracep->declBus(c+429,"ysyx_22051013_rvcpu axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+430,"ysyx_22051013_rvcpu axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_ar_valid", false,-1);
        tracep->declBit(c+351,"ysyx_22051013_rvcpu axi_ar_ready", false,-1);
        tracep->declBus(c+856,"ysyx_22051013_rvcpu axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+432,"ysyx_22051013_rvcpu axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+857,"ysyx_22051013_rvcpu axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+352,"ysyx_22051013_rvcpu axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+433,"ysyx_22051013_rvcpu axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+353,"ysyx_22051013_rvcpu axi_r_last", false,-1);
        tracep->declBit(c+353,"ysyx_22051013_rvcpu axi_r_valid", false,-1);
        tracep->declBit(c+859,"ysyx_22051013_rvcpu axi_r_ready", false,-1);
        tracep->declBus(c+435,"ysyx_22051013_rvcpu soc_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+438,"ysyx_22051013_rvcpu soc_axi_aw_valid", false,-1);
        tracep->declBit(c+439,"ysyx_22051013_rvcpu soc_axi_aw_ready", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+441,"ysyx_22051013_rvcpu soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+442,"ysyx_22051013_rvcpu soc_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+443,"ysyx_22051013_rvcpu soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+445,"ysyx_22051013_rvcpu soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+446,"ysyx_22051013_rvcpu soc_axi_w_last", false,-1);
        tracep->declBit(c+447,"ysyx_22051013_rvcpu soc_axi_w_valid", false,-1);
        tracep->declBit(c+448,"ysyx_22051013_rvcpu soc_axi_w_ready", false,-1);
        tracep->declBus(c+435,"ysyx_22051013_rvcpu soc_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu soc_axi_b_valid", false,-1);
        tracep->declBit(c+449,"ysyx_22051013_rvcpu soc_axi_b_ready", false,-1);
        tracep->declBus(c+450,"ysyx_22051013_rvcpu soc_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+451,"ysyx_22051013_rvcpu soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+354,"ysyx_22051013_rvcpu soc_axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu soc_axi_ar_ready", false,-1);
        tracep->declBus(c+453,"ysyx_22051013_rvcpu soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+454,"ysyx_22051013_rvcpu soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+455,"ysyx_22051013_rvcpu soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+355,"ysyx_22051013_rvcpu soc_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu soc_axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu soc_axi_r_valid", false,-1);
        tracep->declBit(c+456,"ysyx_22051013_rvcpu soc_axi_r_ready", false,-1);
        tracep->declBus(c+457,"ysyx_22051013_rvcpu t_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+458,"ysyx_22051013_rvcpu t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+460,"ysyx_22051013_rvcpu t_axi_aw_valid", false,-1);
        tracep->declBit(c+461,"ysyx_22051013_rvcpu t_axi_aw_ready", false,-1);
        tracep->declBus(c+462,"ysyx_22051013_rvcpu t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+463,"ysyx_22051013_rvcpu t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+464,"ysyx_22051013_rvcpu t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+465,"ysyx_22051013_rvcpu t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+467,"ysyx_22051013_rvcpu t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+468,"ysyx_22051013_rvcpu t_axi_w_last", false,-1);
        tracep->declBit(c+469,"ysyx_22051013_rvcpu t_axi_w_valid", false,-1);
        tracep->declBit(c+470,"ysyx_22051013_rvcpu t_axi_w_ready", false,-1);
        tracep->declBus(c+457,"ysyx_22051013_rvcpu t_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu t_axi_b_valid", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu t_axi_b_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013_rvcpu t_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+473,"ysyx_22051013_rvcpu t_axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+356,"ysyx_22051013_rvcpu t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu t_axi_ar_ready", false,-1);
        tracep->declBus(c+475,"ysyx_22051013_rvcpu t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+476,"ysyx_22051013_rvcpu t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+477,"ysyx_22051013_rvcpu t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+357,"ysyx_22051013_rvcpu t_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+358,"ysyx_22051013_rvcpu t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu t_axi_r_valid", false,-1);
        tracep->declBit(c+478,"ysyx_22051013_rvcpu t_axi_r_ready", false,-1);
        tracep->declBit(c+479,"ysyx_22051013_rvcpu axi_icache_valid", false,-1);
        tracep->declQuad(c+360,"ysyx_22051013_rvcpu axi_icache_inst", false,-1, 63,0);
        tracep->declQuad(c+480,"ysyx_22051013_rvcpu icache_axi_pc", false,-1, 63,0);
        tracep->declBit(c+482,"ysyx_22051013_rvcpu icache_axi_ena", false,-1);
        tracep->declBit(c+483,"ysyx_22051013_rvcpu icache_if_valid", false,-1);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu icache_if_inst", false,-1, 31,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu if_icache_pc", false,-1, 63,0);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu lsu_ddsel_we", false,-1);
        tracep->declBit(c+488,"ysyx_22051013_rvcpu lsu_ddsel_re", false,-1);
        tracep->declBus(c+489,"ysyx_22051013_rvcpu lsu_ddsel_wmask", false,-1, 7,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu lsu_ddsel_data_pc", false,-1, 63,0);
        tracep->declQuad(c+492,"ysyx_22051013_rvcpu lsu_ddsel_read_data", false,-1, 63,0);
        tracep->declQuad(c+494,"ysyx_22051013_rvcpu lsu_ddsel_write_data", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu lsu_ddsel_ready", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu lsu_ddsel_valid", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu lsu_ddsel_fencei", false,-1);
        tracep->declQuad(c+12,"ysyx_22051013_rvcpu lsu_ddsel_device_data", false,-1, 63,0);
        tracep->declBit(c+497,"ysyx_22051013_rvcpu ddsel_axi_clint", false,-1);
        tracep->declBit(c+362,"ysyx_22051013_rvcpu ddsel_axi_re", false,-1);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu ddsel_axi_we", false,-1);
        tracep->declBus(c+423,"ysyx_22051013_rvcpu ddsel_axi_mask", false,-1, 7,0);
        tracep->declQuad(c+421,"ysyx_22051013_rvcpu ddsel_axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+498,"ysyx_22051013_rvcpu axi_ddsel_data_i", false,-1, 63,0);
        tracep->declQuad(c+416,"ysyx_22051013_rvcpu ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+500,"ysyx_22051013_rvcpu axi_ddsel_valid", false,-1);
        tracep->declBus(c+420,"ysyx_22051013_rvcpu ddsel_axi_data_size", false,-1, 2,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu ddsel_dcache_fencei", false,-1);
        tracep->declBit(c+501,"ysyx_22051013_rvcpu ddsel_dcache_re", false,-1);
        tracep->declBit(c+502,"ysyx_22051013_rvcpu ddsel_dcache_we", false,-1);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu ddsel_dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+506,"ysyx_22051013_rvcpu dcache_ddsel_data", false,-1, 63,0);
        tracep->declQuad(c+508,"ysyx_22051013_rvcpu ddsel_dcache_pc", false,-1, 63,0);
        tracep->declBit(c+363,"ysyx_22051013_rvcpu dcache_ddsel_valid", false,-1);
        tracep->declBit(c+510,"ysyx_22051013_rvcpu ddsel_dcache_ready", false,-1);
        tracep->declBit(c+364,"ysyx_22051013_rvcpu dcache_ddsel_axi_re", false,-1);
        tracep->declBit(c+365,"ysyx_22051013_rvcpu dcache_ddsel_axi_we", false,-1);
        tracep->declQuad(c+511,"ysyx_22051013_rvcpu axi_ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_22051013_rvcpu dcache_ddsel_axi_data", false,-1, 63,0);
        tracep->declQuad(c+780,"ysyx_22051013_rvcpu dcache_ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+513,"ysyx_22051013_rvcpu axi_ddsel_dcache_valid", false,-1);
        tracep->declBit(c+782,"ysyx_22051013_rvcpu bpu_ifid_jump", false,-1);
        tracep->declQuad(c+783,"ysyx_22051013_rvcpu bpu_if_pc", false,-1, 63,0);
        tracep->declBit(c+14,"ysyx_22051013_rvcpu bpu_icache_hold", false,-1);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu if_icache_ready", false,-1);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu ifid_if_inst", false,-1, 31,0);
        tracep->declQuad(c+15,"ysyx_22051013_rvcpu ifid_if_pc", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu ifid_id_inst", false,-1, 31,0);
        tracep->declQuad(c+18,"ysyx_22051013_rvcpu ifid_id_pc", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22051013_rvcpu ifid_id_jump", false,-1);
        tracep->declBus(c+515,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+516,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+517,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+518,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declQuad(c+368,"ysyx_22051013_rvcpu id_if_pc", false,-1, 63,0);
        tracep->declBit(c+519,"ysyx_22051013_rvcpu id_if_pc_sel", false,-1);
        tracep->declBit(c+860,"ysyx_22051013_rvcpu id_ifid_jumpflush", false,-1);
        tracep->declBit(c+520,"ysyx_22051013_rvcpu id_load_flag", false,-1);
        tracep->declBus(c+785,"ysyx_22051013_rvcpu idex_id_inst", false,-1, 31,0);
        tracep->declQuad(c+786,"ysyx_22051013_rvcpu idex_id_pc", false,-1, 63,0);
        tracep->declQuad(c+521,"ysyx_22051013_rvcpu idex_id_op1", false,-1, 63,0);
        tracep->declQuad(c+523,"ysyx_22051013_rvcpu idex_id_op2", false,-1, 63,0);
        tracep->declQuad(c+525,"ysyx_22051013_rvcpu idex_id_imm", false,-1, 63,0);
        tracep->declBit(c+527,"ysyx_22051013_rvcpu idex_id_rd_ena", false,-1);
        tracep->declBus(c+370,"ysyx_22051013_rvcpu idex_id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+528,"ysyx_22051013_rvcpu idex_id_lsctl", false,-1, 3,0);
        tracep->declBus(c+529,"ysyx_22051013_rvcpu idex_id_wbctl", false,-1, 1,0);
        tracep->declBus(c+530,"ysyx_22051013_rvcpu idex_id_alu_sel", false,-1, 7,0);
        tracep->declBus(c+371,"ysyx_22051013_rvcpu idex_id_op1sel", false,-1, 1,0);
        tracep->declBus(c+372,"ysyx_22051013_rvcpu idex_id_op2sel", false,-1, 2,0);
        tracep->declBus(c+21,"ysyx_22051013_rvcpu idex_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+22,"ysyx_22051013_rvcpu idex_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu idex_ex_op2", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu idex_ex_imm", false,-1, 63,0);
        tracep->declBit(c+30,"ysyx_22051013_rvcpu idex_ex_rd_ena", false,-1);
        tracep->declBus(c+31,"ysyx_22051013_rvcpu idex_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu idex_ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu idex_ex_wbctl", false,-1, 1,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu idex_ex_alu_sel", false,-1, 7,0);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu idex_ex_op1sel", false,-1, 1,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu idex_ex_op2sel", false,-1, 2,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu idex_ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+31,"ysyx_22051013_rvcpu ex_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+531,"ysyx_22051013_rvcpu ex_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+38,"ysyx_22051013_rvcpu ex_load_ena", false,-1);
        tracep->declBus(c+533,"ysyx_22051013_rvcpu exls_ex_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+373,"ysyx_22051013_rvcpu exls_ex_csr_addr", false,-1, 11,0);
        tracep->declBit(c+39,"ysyx_22051013_rvcpu exls_ex_fencei", false,-1);
        tracep->declQuad(c+531,"ysyx_22051013_rvcpu exls_ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu exls_ex_store_data", false,-1, 63,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu exls_ls_fencei", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu exls_ls_inst", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22051013_rvcpu exls_ls_pc", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu exls_ls_aludata", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22051013_rvcpu exls_ls_store_data", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu exls_ls_rd_ena", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu exls_ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_22051013_rvcpu exls_ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+48,"ysyx_22051013_rvcpu exls_ls_wbctl", false,-1, 1,0);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu exls_ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+50,"ysyx_22051013_rvcpu exls_ls_csr_addr", false,-1, 11,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu ls_dcache_datasize", false,-1, 2,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu ls_lswb_data_forward", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu ls_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu ls_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu ls_if_pc_sel", false,-1);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu ls_if_pc", false,-1, 63,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu ls_flush", false,-1);
        tracep->declQuad(c+536,"ysyx_22051013_rvcpu lswb_ls_wbdata", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu lswb_wb_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu lswb_wb_csr_addr", false,-1, 11,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu lswb_wb_inst", false,-1, 31,0);
        tracep->declQuad(c+55,"ysyx_22051013_rvcpu lswb_wb_pc", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_22051013_rvcpu lswb_wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+58,"ysyx_22051013_rvcpu lswb_wb_wbdata", false,-1, 63,0);
        tracep->declQuad(c+60,"ysyx_22051013_rvcpu lswb_wb_aludata", false,-1, 63,0);
        tracep->declBit(c+62,"ysyx_22051013_rvcpu lswb_wb_rd_ena", false,-1);
        tracep->declBus(c+63,"ysyx_22051013_rvcpu lswb_wb_rd_addr", false,-1, 4,0);
        tracep->declBit(c+861,"ysyx_22051013_rvcpu wb_ex_csr_update", false,-1);
        tracep->declQuad(c+64,"ysyx_22051013_rvcpu wb_reg_rd_data", false,-1, 63,0);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu wb_reg_rd_ena", false,-1);
        tracep->declBus(c+67,"ysyx_22051013_rvcpu wb_reg_rd_addr", false,-1, 4,0);
        tracep->declBus(c+67,"ysyx_22051013_rvcpu wb_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+64,"ysyx_22051013_rvcpu wb_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu ie_if_pc_sel", false,-1);
        tracep->declQuad(c+69,"ysyx_22051013_rvcpu ie_if_pc", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu ie_flush", false,-1);
        tracep->declQuad(c+788,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+790,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+862,"ysyx_22051013_rvcpu reg_bpu_data", false,-1, 63,0);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu if_valid", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu id_valid", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu ex_valid", false,-1);
        tracep->declBit(c+540,"ysyx_22051013_rvcpu ls_valid", false,-1);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu wb_ready", false,-1);
        tracep->declBit(c+541,"ysyx_22051013_rvcpu ls_ready", false,-1);
        tracep->declBit(c+542,"ysyx_22051013_rvcpu ex_ready", false,-1);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu id_ready", false,-1);
        tracep->declBit(c+865,"ysyx_22051013_rvcpu ex_flush", false,-1);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu id_idex_flush", false,-1);
        tracep->declBit(c+519,"ysyx_22051013_rvcpu id_ifid_flush", false,-1);
        tracep->declBit(c+866,"ysyx_22051013_rvcpu ls_lswb_flush", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu time_interrupt", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu axi_master_arbitrator0 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu axi_master_arbitrator0 rst", false,-1);
        tracep->declQuad(c+480,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_pc", false,-1, 63,0);
        tracep->declBit(c+482,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_ena", false,-1);
        tracep->declQuad(c+360,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst", false,-1, 63,0);
        tracep->declBit(c+479,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst_valid", false,-1);
        tracep->declQuad(c+416,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_pc", false,-1, 63,0);
        tracep->declQuad(c+421,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_i", false,-1, 63,0);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu axi_master_arbitrator0 we", false,-1);
        tracep->declBit(c+362,"ysyx_22051013_rvcpu axi_master_arbitrator0 re", false,-1);
        tracep->declBus(c+420,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_size", false,-1, 2,0);
        tracep->declBus(c+423,"ysyx_22051013_rvcpu axi_master_arbitrator0 wmask", false,-1, 7,0);
        tracep->declBit(c+497,"ysyx_22051013_rvcpu axi_master_arbitrator0 clint_ena", false,-1);
        tracep->declQuad(c+498,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_o", false,-1, 63,0);
        tracep->declBit(c+500,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_data_valid", false,-1);
        tracep->declBus(c+415,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+416,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+418,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_valid", false,-1);
        tracep->declBit(c+419,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_ready", false,-1);
        tracep->declBus(c+856,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+420,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+857,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+421,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+423,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_last", false,-1);
        tracep->declBit(c+425,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_valid", false,-1);
        tracep->declBit(c+426,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_ready", false,-1);
        tracep->declBus(c+427,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_valid", false,-1);
        tracep->declBit(c+859,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_ready", false,-1);
        tracep->declBus(c+429,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+430,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+856,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+432,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+857,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_valid", false,-1);
        tracep->declBit(c+351,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_ready", false,-1);
        tracep->declBus(c+352,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+433,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+353,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_last", false,-1);
        tracep->declBit(c+353,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_valid", false,-1);
        tracep->declBit(c+859,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_ready", false,-1);
        tracep->declBit(c+544,"ysyx_22051013_rvcpu axi_master_arbitrator0 if_read", false,-1);
        tracep->declBit(c+545,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_read", false,-1);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_write", false,-1);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu axi_master_arbitrator0 w_valid", false,-1);
        tracep->declBit(c+546,"ysyx_22051013_rvcpu axi_master_arbitrator0 r_valid", false,-1);
        tracep->declBit(c+547,"ysyx_22051013_rvcpu axi_master_arbitrator0 aw_sh", false,-1);
        tracep->declBit(c+548,"ysyx_22051013_rvcpu axi_master_arbitrator0 w_sh", false,-1);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu axi_master_arbitrator0 b_sh", false,-1);
        tracep->declBit(c+374,"ysyx_22051013_rvcpu axi_master_arbitrator0 ar_sh", false,-1);
        tracep->declBit(c+549,"ysyx_22051013_rvcpu axi_master_arbitrator0 r_sh", false,-1);
        tracep->declBus(c+72,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_w_state", false,-1, 2,0);
        tracep->declBus(c+73,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_r_state", false,-1, 2,0);
        tracep->declBus(c+74,"ysyx_22051013_rvcpu axi_master_arbitrator0 read_state", false,-1, 1,0);
        tracep->declBus(c+550,"ysyx_22051013_rvcpu axi_master_arbitrator0 read_state_next", false,-1, 1,0);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_w_not_ready", false,-1);
        tracep->declBit(c+549,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_r_not_ready", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu axi_slave1 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu axi_slave1 rst", false,-1);
        tracep->declBus(c+435,"ysyx_22051013_rvcpu axi_slave1 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu axi_slave1 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+438,"ysyx_22051013_rvcpu axi_slave1 axi_aw_valid", false,-1);
        tracep->declBit(c+439,"ysyx_22051013_rvcpu axi_slave1 axi_aw_ready", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu axi_slave1 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+441,"ysyx_22051013_rvcpu axi_slave1 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+442,"ysyx_22051013_rvcpu axi_slave1 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+443,"ysyx_22051013_rvcpu axi_slave1 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+445,"ysyx_22051013_rvcpu axi_slave1 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+446,"ysyx_22051013_rvcpu axi_slave1 axi_w_last", false,-1);
        tracep->declBit(c+447,"ysyx_22051013_rvcpu axi_slave1 axi_w_valid", false,-1);
        tracep->declBit(c+448,"ysyx_22051013_rvcpu axi_slave1 axi_w_ready", false,-1);
        tracep->declBus(c+435,"ysyx_22051013_rvcpu axi_slave1 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu axi_slave1 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_slave1 axi_b_valid", false,-1);
        tracep->declBit(c+449,"ysyx_22051013_rvcpu axi_slave1 axi_b_ready", false,-1);
        tracep->declBus(c+450,"ysyx_22051013_rvcpu axi_slave1 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+451,"ysyx_22051013_rvcpu axi_slave1 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+453,"ysyx_22051013_rvcpu axi_slave1 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+454,"ysyx_22051013_rvcpu axi_slave1 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+455,"ysyx_22051013_rvcpu axi_slave1 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+354,"ysyx_22051013_rvcpu axi_slave1 axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_slave1 axi_ar_ready", false,-1);
        tracep->declBus(c+355,"ysyx_22051013_rvcpu axi_slave1 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu axi_slave1 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu axi_slave1 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu axi_slave1 axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu axi_slave1 axi_r_valid", false,-1);
        tracep->declBit(c+456,"ysyx_22051013_rvcpu axi_slave1 axi_r_ready", false,-1);
        tracep->declBit(c+551,"ysyx_22051013_rvcpu axi_slave1 awc_shakehand", false,-1);
        tracep->declBit(c+552,"ysyx_22051013_rvcpu axi_slave1 wc_shakehand", false,-1);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu axi_slave1 bc_shakehand", false,-1);
        tracep->declBus(c+75,"ysyx_22051013_rvcpu axi_slave1 s_write_state", false,-1, 1,0);
        tracep->declBus(c+792,"ysyx_22051013_rvcpu axi_slave1 s_write_state_next", false,-1, 1,0);
        tracep->declBit(c+554,"ysyx_22051013_rvcpu axi_slave1 arc_shakehand", false,-1);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu axi_slave1 rc_shakehand", false,-1);
        tracep->declBus(c+76,"ysyx_22051013_rvcpu axi_slave1 s_read_state", false,-1, 1,0);
        tracep->declBus(c+793,"ysyx_22051013_rvcpu axi_slave1 s_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+77,"ysyx_22051013_rvcpu axi_slave1 dpic_read_data", false,-1, 63,0);
        tracep->declBus(c+555,"ysyx_22051013_rvcpu axi_slave1 rlen", false,-1, 7,0);
        tracep->declBit(c+556,"ysyx_22051013_rvcpu axi_slave1 unused_ok", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu i_cache2 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu i_cache2 rst", false,-1);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu i_cache2 inst_pc", false,-1, 63,0);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu i_cache2 pc_ready", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu i_cache2 fencei", false,-1);
        tracep->declBit(c+483,"ysyx_22051013_rvcpu i_cache2 i_valid", false,-1);
        tracep->declBit(c+14,"ysyx_22051013_rvcpu i_cache2 hold", false,-1);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu i_cache2 inst", false,-1, 31,0);
        tracep->declQuad(c+15,"ysyx_22051013_rvcpu i_cache2 pc", false,-1, 63,0);
        tracep->declQuad(c+480,"ysyx_22051013_rvcpu i_cache2 axi_pc", false,-1, 63,0);
        tracep->declBit(c+482,"ysyx_22051013_rvcpu i_cache2 axi_ena", false,-1);
        tracep->declQuad(c+360,"ysyx_22051013_rvcpu i_cache2 axi_inst", false,-1, 63,0);
        tracep->declBit(c+479,"ysyx_22051013_rvcpu i_cache2 axi_valid", false,-1);
        tracep->declBus(c+557,"ysyx_22051013_rvcpu i_cache2 icache_tag", false,-1, 22,0);
        tracep->declBus(c+558,"ysyx_22051013_rvcpu i_cache2 icache_index", false,-1, 5,0);
        tracep->declBit(c+79,"ysyx_22051013_rvcpu i_cache2 hit1", false,-1);
        tracep->declBit(c+80,"ysyx_22051013_rvcpu i_cache2 hit2", false,-1);
        tracep->declQuad(c+15,"ysyx_22051013_rvcpu i_cache2 hit_pc", false,-1, 63,0);
        tracep->declBus(c+81,"ysyx_22051013_rvcpu i_cache2 hit_index", false,-1, 5,0);
        tracep->declBus(c+82,"ysyx_22051013_rvcpu i_cache2 hit_tag", false,-1, 22,0);
        tracep->declBus(c+83,"ysyx_22051013_rvcpu i_cache2 fencei_index", false,-1, 6,0);
        tracep->declBus(c+84,"ysyx_22051013_rvcpu i_cache2 icache_state", false,-1, 3,0);
        tracep->declBus(c+559,"ysyx_22051013_rvcpu i_cache2 icache_state_next", false,-1, 3,0);
        tracep->declBit(c+560,"ysyx_22051013_rvcpu i_cache2 inst_valid", false,-1);
        tracep->declArray(c+561,"ysyx_22051013_rvcpu i_cache2 miss_data", false,-1, 127,0);
        tracep->declArray(c+565,"ysyx_22051013_rvcpu i_cache2 cache_strb", false,-1, 127,0);
        tracep->declBit(c+569,"ysyx_22051013_rvcpu i_cache2 cache_ena", false,-1);
        tracep->declBit(c+570,"ysyx_22051013_rvcpu i_cache2 write_in_valid", false,-1);
        tracep->declBit(c+85,"ysyx_22051013_rvcpu i_cache2 delay1", false,-1);
        tracep->declBus(c+376,"ysyx_22051013_rvcpu i_cache2 tag", false,-1, 22,0);
        tracep->declBus(c+571,"ysyx_22051013_rvcpu i_cache2 tag_with_valid", false,-1, 23,0);
        tracep->declBit(c+377,"ysyx_22051013_rvcpu i_cache2 way1_tag_ena", false,-1);
        tracep->declBit(c+378,"ysyx_22051013_rvcpu i_cache2 way2_tag_ena", false,-1);
        tracep->declBus(c+572,"ysyx_22051013_rvcpu i_cache2 index", false,-1, 5,0);
        tracep->declBus(c+86,"ysyx_22051013_rvcpu i_cache2 i_tag_way1", false,-1, 22,0);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu i_cache2 i_tag_valid1", false,-1);
        tracep->declBus(c+88,"ysyx_22051013_rvcpu i_cache2 i_tag_way2", false,-1, 22,0);
        tracep->declBit(c+89,"ysyx_22051013_rvcpu i_cache2 i_tag_valid2", false,-1);
        tracep->declArray(c+90,"ysyx_22051013_rvcpu i_cache2 cache_data", false,-1, 127,0);
        tracep->declBit(c+14,"ysyx_22051013_rvcpu i_cache2 ce", false,-1);
        tracep->declBus(c+94,"ysyx_22051013_rvcpu i_cache2 i", false,-1, 31,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu i_cache2 tag_ram0 clk", false,-1);
        tracep->declBus(c+572,"ysyx_22051013_rvcpu i_cache2 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+571,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+377,"ysyx_22051013_rvcpu i_cache2 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+86,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+86,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_vaild", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu i_cache2 tag_ram1 clk", false,-1);
        tracep->declBus(c+572,"ysyx_22051013_rvcpu i_cache2 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+571,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+378,"ysyx_22051013_rvcpu i_cache2 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+88,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+89,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+88,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+89,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+867,"ysyx_22051013_rvcpu i_cache2 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+868,"ysyx_22051013_rvcpu i_cache2 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"ysyx_22051013_rvcpu i_cache2 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+867,"ysyx_22051013_rvcpu i_cache2 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+90,"ysyx_22051013_rvcpu i_cache2 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu i_cache2 data_ram0 CLK", false,-1);
        tracep->declBit(c+14,"ysyx_22051013_rvcpu i_cache2 data_ram0 CEN", false,-1);
        tracep->declBit(c+573,"ysyx_22051013_rvcpu i_cache2 data_ram0 WEN", false,-1);
        tracep->declArray(c+574,"ysyx_22051013_rvcpu i_cache2 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+81,"ysyx_22051013_rvcpu i_cache2 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+561,"ysyx_22051013_rvcpu i_cache2 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu i_cache2 data_ram0 cen", false,-1);
        tracep->declBit(c+569,"ysyx_22051013_rvcpu i_cache2 data_ram0 wen", false,-1);
        tracep->declArray(c+565,"ysyx_22051013_rvcpu i_cache2 data_ram0 bwen", false,-1, 127,0);
        tracep->declBit(c+488,"ysyx_22051013_rvcpu dcache_device_sel3 core_re", false,-1);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu dcache_device_sel3 core_we", false,-1);
        tracep->declBus(c+489,"ysyx_22051013_rvcpu dcache_device_sel3 core_mask", false,-1, 7,0);
        tracep->declQuad(c+494,"ysyx_22051013_rvcpu dcache_device_sel3 core_data_i", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22051013_rvcpu dcache_device_sel3 device_data_i", false,-1, 63,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu dcache_device_sel3 core_addr", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu dcache_device_sel3 core_ready", false,-1);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu dcache_device_sel3 core_size", false,-1, 2,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu dcache_device_sel3 fencei", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu dcache_device_sel3 data_valid", false,-1);
        tracep->declQuad(c+492,"ysyx_22051013_rvcpu dcache_device_sel3 data_to_core", false,-1, 63,0);
        tracep->declBit(c+497,"ysyx_22051013_rvcpu dcache_device_sel3 clint_ena", false,-1);
        tracep->declBit(c+362,"ysyx_22051013_rvcpu dcache_device_sel3 axi_re", false,-1);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu dcache_device_sel3 axi_we", false,-1);
        tracep->declBus(c+423,"ysyx_22051013_rvcpu dcache_device_sel3 axi_mask", false,-1, 7,0);
        tracep->declQuad(c+421,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+416,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_pc", false,-1, 63,0);
        tracep->declBus(c+420,"ysyx_22051013_rvcpu dcache_device_sel3 axi_size", false,-1, 2,0);
        tracep->declBit(c+500,"ysyx_22051013_rvcpu dcache_device_sel3 axi_valid", false,-1);
        tracep->declQuad(c+498,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+364,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_re", false,-1);
        tracep->declBit(c+365,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_we", false,-1);
        tracep->declQuad(c+780,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_pc", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_data", false,-1, 63,0);
        tracep->declQuad(c+511,"ysyx_22051013_rvcpu dcache_device_sel3 axi_dcache_data", false,-1, 63,0);
        tracep->declBit(c+513,"ysyx_22051013_rvcpu dcache_device_sel3 axi_dcache_valid", false,-1);
        tracep->declBit(c+501,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_re", false,-1);
        tracep->declBit(c+502,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_we", false,-1);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_o", false,-1, 63,0);
        tracep->declQuad(c+508,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_pc", false,-1, 63,0);
        tracep->declBit(c+510,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_ready", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_fencei", false,-1);
        tracep->declBit(c+363,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_valid", false,-1);
        tracep->declQuad(c+506,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_i", false,-1, 63,0);
        tracep->declBit(c+578,"ysyx_22051013_rvcpu dcache_device_sel3 device_ena", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu d_cache4 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu d_cache4 rst", false,-1);
        tracep->declQuad(c+508,"ysyx_22051013_rvcpu d_cache4 data_pc", false,-1, 63,0);
        tracep->declQuad(c+504,"ysyx_22051013_rvcpu d_cache4 data_i", false,-1, 63,0);
        tracep->declBit(c+510,"ysyx_22051013_rvcpu d_cache4 core_ready", false,-1);
        tracep->declBit(c+501,"ysyx_22051013_rvcpu d_cache4 re", false,-1);
        tracep->declBit(c+502,"ysyx_22051013_rvcpu d_cache4 we", false,-1);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu d_cache4 wmask", false,-1, 7,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu d_cache4 fencei", false,-1);
        tracep->declBit(c+363,"ysyx_22051013_rvcpu d_cache4 data_valid", false,-1);
        tracep->declQuad(c+506,"ysyx_22051013_rvcpu d_cache4 data_o", false,-1, 63,0);
        tracep->declQuad(c+780,"ysyx_22051013_rvcpu d_cache4 axi_pc", false,-1, 63,0);
        tracep->declBit(c+364,"ysyx_22051013_rvcpu d_cache4 axi_r_ena", false,-1);
        tracep->declBit(c+365,"ysyx_22051013_rvcpu d_cache4 axi_w_ena", false,-1);
        tracep->declQuad(c+366,"ysyx_22051013_rvcpu d_cache4 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+511,"ysyx_22051013_rvcpu d_cache4 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+513,"ysyx_22051013_rvcpu d_cache4 axi_valid", false,-1);
        tracep->declBus(c+579,"ysyx_22051013_rvcpu d_cache4 dcache_tag", false,-1, 22,0);
        tracep->declBus(c+580,"ysyx_22051013_rvcpu d_cache4 dcache_index", false,-1, 5,0);
        tracep->declBus(c+96,"ysyx_22051013_rvcpu d_cache4 dread_state", false,-1, 5,0);
        tracep->declBus(c+581,"ysyx_22051013_rvcpu d_cache4 dread_state_next", false,-1, 5,0);
        tracep->declBit(c+582,"ysyx_22051013_rvcpu d_cache4 way1_r_hit", false,-1);
        tracep->declBit(c+583,"ysyx_22051013_rvcpu d_cache4 way2_r_hit", false,-1);
        tracep->declBit(c+584,"ysyx_22051013_rvcpu d_cache4 way1_r_dirty", false,-1);
        tracep->declBit(c+379,"ysyx_22051013_rvcpu d_cache4 way2_r_dirty", false,-1);
        tracep->declBit(c+585,"ysyx_22051013_rvcpu d_cache4 core_re_ready", false,-1);
        tracep->declBit(c+97,"ysyx_22051013_rvcpu d_cache4 tag_update", false,-1);
        tracep->declBit(c+794,"ysyx_22051013_rvcpu d_cache4 tag_update_temp", false,-1);
        tracep->declBit(c+586,"ysyx_22051013_rvcpu d_cache4 data_r_valid", false,-1);
        tracep->declBit(c+587,"ysyx_22051013_rvcpu d_cache4 write_r_valid", false,-1);
        tracep->declBit(c+795,"ysyx_22051013_rvcpu d_cache4 way1_r_ena", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu d_cache4 way2_r_ena", false,-1);
        tracep->declQuad(c+588,"ysyx_22051013_rvcpu d_cache4 missr_pc", false,-1, 63,0);
        tracep->declBit(c+590,"ysyx_22051013_rvcpu d_cache4 missr_ena", false,-1);
        tracep->declArray(c+591,"ysyx_22051013_rvcpu d_cache4 missr_data", false,-1, 127,0);
        tracep->declArray(c+797,"ysyx_22051013_rvcpu d_cache4 cache_r_strb", false,-1, 127,0);
        tracep->declBit(c+795,"ysyx_22051013_rvcpu d_cache4 dirtyr_way1_clean", false,-1);
        tracep->declBit(c+796,"ysyx_22051013_rvcpu d_cache4 dirtyr_way2_clean", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu d_cache4 dirtyr_valid", false,-1);
        tracep->declBit(c+596,"ysyx_22051013_rvcpu d_cache4 dirtyr_ena", false,-1);
        tracep->declQuad(c+801,"ysyx_22051013_rvcpu d_cache4 dirtyr_pc", false,-1, 63,0);
        tracep->declQuad(c+597,"ysyx_22051013_rvcpu d_cache4 dirtyr_data", false,-1, 63,0);
        tracep->declBit(c+98,"ysyx_22051013_rvcpu d_cache4 delayr", false,-1);
        tracep->declBus(c+99,"ysyx_22051013_rvcpu d_cache4 dwrite_state", false,-1, 5,0);
        tracep->declBus(c+599,"ysyx_22051013_rvcpu d_cache4 dwrite_state_next", false,-1, 5,0);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu d_cache4 way1_w_hit", false,-1);
        tracep->declBit(c+601,"ysyx_22051013_rvcpu d_cache4 way2_w_hit", false,-1);
        tracep->declBit(c+602,"ysyx_22051013_rvcpu d_cache4 way1_w_dirty", false,-1);
        tracep->declBit(c+379,"ysyx_22051013_rvcpu d_cache4 way2_w_dirty", false,-1);
        tracep->declBit(c+603,"ysyx_22051013_rvcpu d_cache4 core_wr_ready", false,-1);
        tracep->declBit(c+100,"ysyx_22051013_rvcpu d_cache4 tag_w_update", false,-1);
        tracep->declBit(c+803,"ysyx_22051013_rvcpu d_cache4 tag_w_update_temp", false,-1);
        tracep->declBit(c+604,"ysyx_22051013_rvcpu d_cache4 data_w_valid", false,-1);
        tracep->declBit(c+870,"ysyx_22051013_rvcpu d_cache4 dirtyw_way1_clean", false,-1);
        tracep->declBit(c+871,"ysyx_22051013_rvcpu d_cache4 dirtyw_way2_clean", false,-1);
        tracep->declArray(c+804,"ysyx_22051013_rvcpu d_cache4 data_write_o", false,-1, 127,0);
        tracep->declArray(c+605,"ysyx_22051013_rvcpu d_cache4 hit_w_strb", false,-1, 127,0);
        tracep->declQuad(c+609,"ysyx_22051013_rvcpu d_cache4 strb_w_64", false,-1, 63,0);
        tracep->declBit(c+611,"ysyx_22051013_rvcpu d_cache4 write_w_valid", false,-1);
        tracep->declBit(c+808,"ysyx_22051013_rvcpu d_cache4 way1_w_ena", false,-1);
        tracep->declBit(c+809,"ysyx_22051013_rvcpu d_cache4 way2_w_ena", false,-1);
        tracep->declQuad(c+612,"ysyx_22051013_rvcpu d_cache4 missw_pc", false,-1, 63,0);
        tracep->declBit(c+614,"ysyx_22051013_rvcpu d_cache4 missw_ena", false,-1);
        tracep->declArray(c+615,"ysyx_22051013_rvcpu d_cache4 missw_data", false,-1, 127,0);
        tracep->declArray(c+810,"ysyx_22051013_rvcpu d_cache4 cache_w_strb", false,-1, 127,0);
        tracep->declBit(c+619,"ysyx_22051013_rvcpu d_cache4 dirtyw_valid", false,-1);
        tracep->declBit(c+620,"ysyx_22051013_rvcpu d_cache4 dirtyw_ena", false,-1);
        tracep->declQuad(c+814,"ysyx_22051013_rvcpu d_cache4 dirtyw_pc", false,-1, 63,0);
        tracep->declQuad(c+621,"ysyx_22051013_rvcpu d_cache4 dirtyw_data", false,-1, 63,0);
        tracep->declBit(c+101,"ysyx_22051013_rvcpu d_cache4 delayw", false,-1);
        tracep->declBus(c+102,"ysyx_22051013_rvcpu d_cache4 fencei_state", false,-1, 5,0);
        tracep->declBus(c+623,"ysyx_22051013_rvcpu d_cache4 fencei_state_next", false,-1, 5,0);
        tracep->declBus(c+103,"ysyx_22051013_rvcpu d_cache4 fencei_index", false,-1, 7,0);
        tracep->declBit(c+104,"ysyx_22051013_rvcpu d_cache4 dirty_hit", false,-1);
        tracep->declBit(c+105,"ysyx_22051013_rvcpu d_cache4 fencei_way1", false,-1);
        tracep->declBit(c+106,"ysyx_22051013_rvcpu d_cache4 fencei_way2", false,-1);
        tracep->declQuad(c+107,"ysyx_22051013_rvcpu d_cache4 fencei_pc", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22051013_rvcpu d_cache4 fencei_data", false,-1, 63,0);
        tracep->declBit(c+111,"ysyx_22051013_rvcpu d_cache4 fencei_way1_ena", false,-1);
        tracep->declBit(c+112,"ysyx_22051013_rvcpu d_cache4 fencei_way2_ena", false,-1);
        tracep->declBit(c+113,"ysyx_22051013_rvcpu d_cache4 fencei_axi_ena", false,-1);
        tracep->declBit(c+816,"ysyx_22051013_rvcpu d_cache4 w_finish", false,-1);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu d_cache4 delayf", false,-1);
        tracep->declBus(c+115,"ysyx_22051013_rvcpu d_cache4 i", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22051013_rvcpu d_cache4 j", false,-1, 31,0);
        tracep->declBit(c+817,"ysyx_22051013_rvcpu d_cache4 way1_ena", false,-1);
        tracep->declBus(c+624,"ysyx_22051013_rvcpu d_cache4 tag_with_valid", false,-1, 23,0);
        tracep->declBus(c+625,"ysyx_22051013_rvcpu d_cache4 tag_index", false,-1, 5,0);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu d_cache4 d_tag_way1", false,-1, 22,0);
        tracep->declBit(c+118,"ysyx_22051013_rvcpu d_cache4 d_tag_valid1", false,-1);
        tracep->declBit(c+818,"ysyx_22051013_rvcpu d_cache4 way2_ena", false,-1);
        tracep->declBus(c+119,"ysyx_22051013_rvcpu d_cache4 d_tag_way2", false,-1, 22,0);
        tracep->declBit(c+120,"ysyx_22051013_rvcpu d_cache4 d_tag_valid2", false,-1);
        tracep->declArray(c+121,"ysyx_22051013_rvcpu d_cache4 cache_data", false,-1, 127,0);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu d_cache4 ce", false,-1);
        tracep->declArray(c+819,"ysyx_22051013_rvcpu d_cache4 ram_strb", false,-1, 127,0);
        tracep->declBit(c+380,"ysyx_22051013_rvcpu d_cache4 ram_ena", false,-1);
        tracep->declArray(c+823,"ysyx_22051013_rvcpu d_cache4 ram_i_data", false,-1, 127,0);
        tracep->declBus(c+626,"ysyx_22051013_rvcpu d_cache4 ram_index", false,-1, 5,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu d_cache4 tag_ram0 clk", false,-1);
        tracep->declBus(c+625,"ysyx_22051013_rvcpu d_cache4 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+624,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+817,"ysyx_22051013_rvcpu d_cache4 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+118,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu d_cache4 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+118,"ysyx_22051013_rvcpu d_cache4 tag_ram0 out_vaild", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu d_cache4 tag_ram1 clk", false,-1);
        tracep->declBus(c+625,"ysyx_22051013_rvcpu d_cache4 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+624,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+818,"ysyx_22051013_rvcpu d_cache4 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+119,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+120,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+119,"ysyx_22051013_rvcpu d_cache4 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+120,"ysyx_22051013_rvcpu d_cache4 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+867,"ysyx_22051013_rvcpu d_cache4 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+868,"ysyx_22051013_rvcpu d_cache4 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"ysyx_22051013_rvcpu d_cache4 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+867,"ysyx_22051013_rvcpu d_cache4 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+121,"ysyx_22051013_rvcpu d_cache4 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu d_cache4 data_ram0 CLK", false,-1);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu d_cache4 data_ram0 CEN", false,-1);
        tracep->declBit(c+381,"ysyx_22051013_rvcpu d_cache4 data_ram0 WEN", false,-1);
        tracep->declArray(c+827,"ysyx_22051013_rvcpu d_cache4 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+626,"ysyx_22051013_rvcpu d_cache4 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+823,"ysyx_22051013_rvcpu d_cache4 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+859,"ysyx_22051013_rvcpu d_cache4 data_ram0 cen", false,-1);
        tracep->declBit(c+380,"ysyx_22051013_rvcpu d_cache4 data_ram0 wen", false,-1);
        tracep->declArray(c+819,"ysyx_22051013_rvcpu d_cache4 data_ram0 bwen", false,-1, 127,0);
        tracep->declBus(c+415,"ysyx_22051013_rvcpu xbar5 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+416,"ysyx_22051013_rvcpu xbar5 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+418,"ysyx_22051013_rvcpu xbar5 axi_aw_valid", false,-1);
        tracep->declBit(c+419,"ysyx_22051013_rvcpu xbar5 axi_aw_ready", false,-1);
        tracep->declBus(c+856,"ysyx_22051013_rvcpu xbar5 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+420,"ysyx_22051013_rvcpu xbar5 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+857,"ysyx_22051013_rvcpu xbar5 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+421,"ysyx_22051013_rvcpu xbar5 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+423,"ysyx_22051013_rvcpu xbar5 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu xbar5 axi_w_last", false,-1);
        tracep->declBit(c+425,"ysyx_22051013_rvcpu xbar5 axi_w_valid", false,-1);
        tracep->declBit(c+426,"ysyx_22051013_rvcpu xbar5 axi_w_ready", false,-1);
        tracep->declBus(c+427,"ysyx_22051013_rvcpu xbar5 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu xbar5 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu xbar5 axi_b_valid", false,-1);
        tracep->declBit(c+859,"ysyx_22051013_rvcpu xbar5 axi_b_ready", false,-1);
        tracep->declBus(c+429,"ysyx_22051013_rvcpu xbar5 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+430,"ysyx_22051013_rvcpu xbar5 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+856,"ysyx_22051013_rvcpu xbar5 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+432,"ysyx_22051013_rvcpu xbar5 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+857,"ysyx_22051013_rvcpu xbar5 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu xbar5 axi_ar_valid", false,-1);
        tracep->declBit(c+351,"ysyx_22051013_rvcpu xbar5 axi_ar_ready", false,-1);
        tracep->declBus(c+352,"ysyx_22051013_rvcpu xbar5 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+433,"ysyx_22051013_rvcpu xbar5 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu xbar5 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+353,"ysyx_22051013_rvcpu xbar5 axi_r_last", false,-1);
        tracep->declBit(c+353,"ysyx_22051013_rvcpu xbar5 axi_r_valid", false,-1);
        tracep->declBit(c+859,"ysyx_22051013_rvcpu xbar5 axi_r_ready", false,-1);
        tracep->declBus(c+435,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+438,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_valid", false,-1);
        tracep->declBit(c+439,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_ready", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+441,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+442,"ysyx_22051013_rvcpu xbar5 soc_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+443,"ysyx_22051013_rvcpu xbar5 soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+445,"ysyx_22051013_rvcpu xbar5 soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+446,"ysyx_22051013_rvcpu xbar5 soc_axi_w_last", false,-1);
        tracep->declBit(c+447,"ysyx_22051013_rvcpu xbar5 soc_axi_w_valid", false,-1);
        tracep->declBit(c+448,"ysyx_22051013_rvcpu xbar5 soc_axi_w_ready", false,-1);
        tracep->declBus(c+435,"ysyx_22051013_rvcpu xbar5 soc_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu xbar5 soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu xbar5 soc_axi_b_valid", false,-1);
        tracep->declBit(c+449,"ysyx_22051013_rvcpu xbar5 soc_axi_b_ready", false,-1);
        tracep->declBus(c+450,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+451,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+453,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+454,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+455,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+354,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu xbar5 soc_axi_ar_ready", false,-1);
        tracep->declBus(c+355,"ysyx_22051013_rvcpu xbar5 soc_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+4,"ysyx_22051013_rvcpu xbar5 soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu xbar5 soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu xbar5 soc_axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013_rvcpu xbar5 soc_axi_r_valid", false,-1);
        tracep->declBit(c+456,"ysyx_22051013_rvcpu xbar5 soc_axi_r_ready", false,-1);
        tracep->declBus(c+457,"ysyx_22051013_rvcpu xbar5 t_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+458,"ysyx_22051013_rvcpu xbar5 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+460,"ysyx_22051013_rvcpu xbar5 t_axi_aw_valid", false,-1);
        tracep->declBit(c+461,"ysyx_22051013_rvcpu xbar5 t_axi_aw_ready", false,-1);
        tracep->declBus(c+462,"ysyx_22051013_rvcpu xbar5 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+463,"ysyx_22051013_rvcpu xbar5 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+464,"ysyx_22051013_rvcpu xbar5 t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+465,"ysyx_22051013_rvcpu xbar5 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+467,"ysyx_22051013_rvcpu xbar5 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+468,"ysyx_22051013_rvcpu xbar5 t_axi_w_last", false,-1);
        tracep->declBit(c+469,"ysyx_22051013_rvcpu xbar5 t_axi_w_valid", false,-1);
        tracep->declBit(c+470,"ysyx_22051013_rvcpu xbar5 t_axi_w_ready", false,-1);
        tracep->declBus(c+457,"ysyx_22051013_rvcpu xbar5 t_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu xbar5 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu xbar5 t_axi_b_valid", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu xbar5 t_axi_b_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013_rvcpu xbar5 t_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+473,"ysyx_22051013_rvcpu xbar5 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+475,"ysyx_22051013_rvcpu xbar5 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+476,"ysyx_22051013_rvcpu xbar5 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+477,"ysyx_22051013_rvcpu xbar5 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+356,"ysyx_22051013_rvcpu xbar5 t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu xbar5 t_axi_ar_ready", false,-1);
        tracep->declBus(c+357,"ysyx_22051013_rvcpu xbar5 t_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+358,"ysyx_22051013_rvcpu xbar5 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu xbar5 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu xbar5 t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu xbar5 t_axi_r_valid", false,-1);
        tracep->declBit(c+478,"ysyx_22051013_rvcpu xbar5 t_axi_r_ready", false,-1);
        tracep->declBit(c+478,"ysyx_22051013_rvcpu xbar5 clint_read", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu xbar5 clint_write", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu bpu_static rst", false,-1);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu bpu_static inst", false,-1, 31,0);
        tracep->declQuad(c+15,"ysyx_22051013_rvcpu bpu_static pc_i", false,-1, 63,0);
        tracep->declQuad(c+783,"ysyx_22051013_rvcpu bpu_static pc_o", false,-1, 63,0);
        tracep->declBit(c+14,"ysyx_22051013_rvcpu bpu_static bpu_pc_hold", false,-1);
        tracep->declBit(c+782,"ysyx_22051013_rvcpu bpu_static bpu_jump", false,-1);
        tracep->declBus(c+627,"ysyx_22051013_rvcpu bpu_static j_imm", false,-1, 20,1);
        tracep->declBus(c+628,"ysyx_22051013_rvcpu bpu_static b_imm", false,-1, 12,1);
        tracep->declBus(c+629,"ysyx_22051013_rvcpu bpu_static opcode", false,-1, 6,0);
        tracep->declBit(c+831,"ysyx_22051013_rvcpu bpu_static inst_jal", false,-1);
        tracep->declBit(c+630,"ysyx_22051013_rvcpu bpu_static inst_bxx", false,-1);
        tracep->declQuad(c+15,"ysyx_22051013_rvcpu bpu_static op1", false,-1, 63,0);
        tracep->declQuad(c+832,"ysyx_22051013_rvcpu bpu_static op2", false,-1, 63,0);
        tracep->declQuad(c+834,"ysyx_22051013_rvcpu bpu_static pr_pc", false,-1, 63,0);
        tracep->declBit(c+519,"ysyx_22051013_rvcpu ifu0 id_pc_jump", false,-1);
        tracep->declQuad(c+368,"ysyx_22051013_rvcpu ifu0 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu ifu0 ie_pc_jump", false,-1);
        tracep->declQuad(c+69,"ysyx_22051013_rvcpu ifu0 ie_pc_i", false,-1, 63,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu ifu0 ls_pc_jump", false,-1);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu ifu0 ls_pc_i", false,-1, 63,0);
        tracep->declQuad(c+783,"ysyx_22051013_rvcpu ifu0 bpu_pc_i", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22051013_rvcpu ifu0 inst_valid", false,-1);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu ifu0 id_ready", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu ifu0 if_valid", false,-1);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu ifu0 core_ready", false,-1);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu ifu0 inst_i", false,-1, 31,0);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu ifu0 pc_next", false,-1, 63,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu reg_ifid1 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu reg_ifid1 rst", false,-1);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu reg_ifid1 if_inst", false,-1, 31,0);
        tracep->declQuad(c+15,"ysyx_22051013_rvcpu reg_ifid1 if_pc", false,-1, 63,0);
        tracep->declBit(c+782,"ysyx_22051013_rvcpu reg_ifid1 bpu_jump", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu reg_ifid1 if_valid", false,-1);
        tracep->declBit(c+519,"ysyx_22051013_rvcpu reg_ifid1 id_flush", false,-1);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu reg_ifid1 ie_flush", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu reg_ifid1 ls_flush", false,-1);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu reg_ifid1 id_ready", false,-1);
        tracep->declBit(c+20,"ysyx_22051013_rvcpu reg_ifid1 id_jump", false,-1);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu reg_ifid1 id_inst", false,-1, 31,0);
        tracep->declQuad(c+18,"ysyx_22051013_rvcpu reg_ifid1 id_pc", false,-1, 63,0);
        tracep->declBit(c+631,"ysyx_22051013_rvcpu reg_ifid1 flush", false,-1);
        tracep->declBit(c+632,"ysyx_22051013_rvcpu reg_ifid1 stall", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu idu2 rst", false,-1);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu idu2 inst_i", false,-1, 31,0);
        tracep->declQuad(c+18,"ysyx_22051013_rvcpu idu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22051013_rvcpu idu2 bpu_jump", false,-1);
        tracep->declBus(c+31,"ysyx_22051013_rvcpu idu2 ex_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+531,"ysyx_22051013_rvcpu idu2 ex_data_forward", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu idu2 ls_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu idu2 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+67,"ysyx_22051013_rvcpu idu2 wb_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+64,"ysyx_22051013_rvcpu idu2 wb_data_forward", false,-1, 63,0);
        tracep->declBit(c+38,"ysyx_22051013_rvcpu idu2 ex_load_ena", false,-1);
        tracep->declBus(c+515,"ysyx_22051013_rvcpu idu2 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+517,"ysyx_22051013_rvcpu idu2 rs1_ena", false,-1);
        tracep->declQuad(c+788,"ysyx_22051013_rvcpu idu2 rs1_data", false,-1, 63,0);
        tracep->declBus(c+516,"ysyx_22051013_rvcpu idu2 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+518,"ysyx_22051013_rvcpu idu2 rs2_ena", false,-1);
        tracep->declQuad(c+790,"ysyx_22051013_rvcpu idu2 rs2_data", false,-1, 63,0);
        tracep->declBit(c+527,"ysyx_22051013_rvcpu idu2 rd_ena", false,-1);
        tracep->declBus(c+370,"ysyx_22051013_rvcpu idu2 rd_addr", false,-1, 4,0);
        tracep->declBus(c+530,"ysyx_22051013_rvcpu idu2 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+528,"ysyx_22051013_rvcpu idu2 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+529,"ysyx_22051013_rvcpu idu2 wbctl_o", false,-1, 1,0);
        tracep->declBus(c+371,"ysyx_22051013_rvcpu idu2 op1_sel", false,-1, 1,0);
        tracep->declBus(c+372,"ysyx_22051013_rvcpu idu2 op2_sel", false,-1, 2,0);
        tracep->declBit(c+520,"ysyx_22051013_rvcpu idu2 load_flag", false,-1);
        tracep->declQuad(c+521,"ysyx_22051013_rvcpu idu2 op1", false,-1, 63,0);
        tracep->declQuad(c+523,"ysyx_22051013_rvcpu idu2 op2", false,-1, 63,0);
        tracep->declQuad(c+525,"ysyx_22051013_rvcpu idu2 imm", false,-1, 63,0);
        tracep->declBus(c+785,"ysyx_22051013_rvcpu idu2 inst_o", false,-1, 31,0);
        tracep->declQuad(c+786,"ysyx_22051013_rvcpu idu2 pc_o", false,-1, 63,0);
        tracep->declBit(c+542,"ysyx_22051013_rvcpu idu2 ex_ready", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu idu2 if_valid", false,-1);
        tracep->declBit(c+519,"ysyx_22051013_rvcpu idu2 id_flush", false,-1);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu idu2 id_ex_flush", false,-1);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu idu2 id_ready", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu idu2 id_valid", false,-1);
        tracep->declBit(c+519,"ysyx_22051013_rvcpu idu2 jump_ena", false,-1);
        tracep->declQuad(c+368,"ysyx_22051013_rvcpu idu2 jump_pc", false,-1, 63,0);
        tracep->declBus(c+125,"ysyx_22051013_rvcpu idu2 rd", false,-1, 4,0);
        tracep->declBus(c+126,"ysyx_22051013_rvcpu idu2 rs1", false,-1, 4,0);
        tracep->declBus(c+127,"ysyx_22051013_rvcpu idu2 rs2", false,-1, 4,0);
        tracep->declBit(c+633,"ysyx_22051013_rvcpu idu2 branch", false,-1);
        tracep->declBit(c+836,"ysyx_22051013_rvcpu idu2 op1_relate", false,-1);
        tracep->declBit(c+837,"ysyx_22051013_rvcpu idu2 op2_relate", false,-1);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu idu2 id_stall_ena", false,-1);
        tracep->declBit(c+634,"ysyx_22051013_rvcpu idu2 ex_op1_forward", false,-1);
        tracep->declBit(c+635,"ysyx_22051013_rvcpu idu2 ls_op1_forward", false,-1);
        tracep->declBit(c+636,"ysyx_22051013_rvcpu idu2 wb_op1_forward", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu idu2 ex_op2_forward", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu idu2 ls_op2_forward", false,-1);
        tracep->declBit(c+639,"ysyx_22051013_rvcpu idu2 wb_op2_forward", false,-1);
        tracep->declBit(c+640,"ysyx_22051013_rvcpu idu2 op1_forward_ena", false,-1);
        tracep->declBit(c+641,"ysyx_22051013_rvcpu idu2 op2_forward_ena", false,-1);
        tracep->declQuad(c+382,"ysyx_22051013_rvcpu idu2 op1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+384,"ysyx_22051013_rvcpu idu2 op2_forward_data", false,-1, 63,0);
        tracep->declBit(c+838,"ysyx_22051013_rvcpu idu2 ex_branch", false,-1);
        tracep->declQuad(c+642,"ysyx_22051013_rvcpu idu2 op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+644,"ysyx_22051013_rvcpu idu2 op1_lt_op2", false,-1);
        tracep->declQuad(c+386,"ysyx_22051013_rvcpu idu2 p1", false,-1, 63,0);
        tracep->declQuad(c+388,"ysyx_22051013_rvcpu idu2 p2", false,-1, 63,0);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu idu2 decode rst", false,-1);
        tracep->declBus(c+17,"ysyx_22051013_rvcpu idu2 decode inst", false,-1, 31,0);
        tracep->declBit(c+517,"ysyx_22051013_rvcpu idu2 decode rs1_ena", false,-1);
        tracep->declBit(c+518,"ysyx_22051013_rvcpu idu2 decode rs2_ena", false,-1);
        tracep->declBus(c+529,"ysyx_22051013_rvcpu idu2 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+528,"ysyx_22051013_rvcpu idu2 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+633,"ysyx_22051013_rvcpu idu2 decode branch", false,-1);
        tracep->declQuad(c+525,"ysyx_22051013_rvcpu idu2 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+520,"ysyx_22051013_rvcpu idu2 decode load", false,-1);
        tracep->declBus(c+371,"ysyx_22051013_rvcpu idu2 decode op1_sel", false,-1, 1,0);
        tracep->declBus(c+372,"ysyx_22051013_rvcpu idu2 decode op2_sel", false,-1, 2,0);
        tracep->declBus(c+530,"ysyx_22051013_rvcpu idu2 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+128,"ysyx_22051013_rvcpu idu2 decode opcode", false,-1, 6,0);
        tracep->declBus(c+129,"ysyx_22051013_rvcpu idu2 decode funct3", false,-1, 2,0);
        tracep->declBus(c+130,"ysyx_22051013_rvcpu idu2 decode funct7", false,-1, 6,0);
        tracep->declBus(c+131,"ysyx_22051013_rvcpu idu2 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+132,"ysyx_22051013_rvcpu idu2 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+133,"ysyx_22051013_rvcpu idu2 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+134,"ysyx_22051013_rvcpu idu2 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+135,"ysyx_22051013_rvcpu idu2 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+645,"ysyx_22051013_rvcpu idu2 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+646,"ysyx_22051013_rvcpu idu2 decode inst_lui", false,-1);
        tracep->declBit(c+647,"ysyx_22051013_rvcpu idu2 decode inst_auipc", false,-1);
        tracep->declBit(c+648,"ysyx_22051013_rvcpu idu2 decode inst_jal", false,-1);
        tracep->declBit(c+649,"ysyx_22051013_rvcpu idu2 decode inst_jalr", false,-1);
        tracep->declBit(c+650,"ysyx_22051013_rvcpu idu2 decode inst_sb", false,-1);
        tracep->declBit(c+651,"ysyx_22051013_rvcpu idu2 decode inst_sh", false,-1);
        tracep->declBit(c+652,"ysyx_22051013_rvcpu idu2 decode inst_sw", false,-1);
        tracep->declBit(c+653,"ysyx_22051013_rvcpu idu2 decode inst_sd", false,-1);
        tracep->declBit(c+654,"ysyx_22051013_rvcpu idu2 decode inst_lb", false,-1);
        tracep->declBit(c+655,"ysyx_22051013_rvcpu idu2 decode inst_lh", false,-1);
        tracep->declBit(c+656,"ysyx_22051013_rvcpu idu2 decode inst_lw", false,-1);
        tracep->declBit(c+657,"ysyx_22051013_rvcpu idu2 decode inst_ld", false,-1);
        tracep->declBit(c+658,"ysyx_22051013_rvcpu idu2 decode inst_lbu", false,-1);
        tracep->declBit(c+659,"ysyx_22051013_rvcpu idu2 decode inst_lhu", false,-1);
        tracep->declBit(c+660,"ysyx_22051013_rvcpu idu2 decode inst_lwu", false,-1);
        tracep->declBit(c+661,"ysyx_22051013_rvcpu idu2 decode inst_beq", false,-1);
        tracep->declBit(c+662,"ysyx_22051013_rvcpu idu2 decode inst_bne", false,-1);
        tracep->declBit(c+663,"ysyx_22051013_rvcpu idu2 decode inst_blt", false,-1);
        tracep->declBit(c+664,"ysyx_22051013_rvcpu idu2 decode inst_bge", false,-1);
        tracep->declBit(c+665,"ysyx_22051013_rvcpu idu2 decode inst_bltu", false,-1);
        tracep->declBit(c+666,"ysyx_22051013_rvcpu idu2 decode inst_bgeu", false,-1);
        tracep->declBit(c+667,"ysyx_22051013_rvcpu idu2 decode inst_add", false,-1);
        tracep->declBit(c+668,"ysyx_22051013_rvcpu idu2 decode inst_sub", false,-1);
        tracep->declBit(c+669,"ysyx_22051013_rvcpu idu2 decode inst_sll", false,-1);
        tracep->declBit(c+670,"ysyx_22051013_rvcpu idu2 decode inst_slt", false,-1);
        tracep->declBit(c+671,"ysyx_22051013_rvcpu idu2 decode inst_sltu", false,-1);
        tracep->declBit(c+672,"ysyx_22051013_rvcpu idu2 decode inst_xor", false,-1);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu idu2 decode inst_srl", false,-1);
        tracep->declBit(c+674,"ysyx_22051013_rvcpu idu2 decode inst_sra", false,-1);
        tracep->declBit(c+675,"ysyx_22051013_rvcpu idu2 decode inst_or", false,-1);
        tracep->declBit(c+676,"ysyx_22051013_rvcpu idu2 decode inst_and", false,-1);
        tracep->declBit(c+677,"ysyx_22051013_rvcpu idu2 decode inst_div", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu idu2 decode inst_divu", false,-1);
        tracep->declBit(c+679,"ysyx_22051013_rvcpu idu2 decode inst_mul", false,-1);
        tracep->declBit(c+680,"ysyx_22051013_rvcpu idu2 decode inst_mulh", false,-1);
        tracep->declBit(c+681,"ysyx_22051013_rvcpu idu2 decode inst_mulhsu", false,-1);
        tracep->declBit(c+682,"ysyx_22051013_rvcpu idu2 decode inst_mulhu", false,-1);
        tracep->declBit(c+683,"ysyx_22051013_rvcpu idu2 decode inst_rem", false,-1);
        tracep->declBit(c+684,"ysyx_22051013_rvcpu idu2 decode inst_remu", false,-1);
        tracep->declBit(c+390,"ysyx_22051013_rvcpu idu2 decode inst_addi", false,-1);
        tracep->declBit(c+391,"ysyx_22051013_rvcpu idu2 decode inst_slti", false,-1);
        tracep->declBit(c+392,"ysyx_22051013_rvcpu idu2 decode inst_sltiu", false,-1);
        tracep->declBit(c+393,"ysyx_22051013_rvcpu idu2 decode inst_xori", false,-1);
        tracep->declBit(c+394,"ysyx_22051013_rvcpu idu2 decode inst_ori", false,-1);
        tracep->declBit(c+395,"ysyx_22051013_rvcpu idu2 decode inst_andi", false,-1);
        tracep->declBit(c+396,"ysyx_22051013_rvcpu idu2 decode inst_slli", false,-1);
        tracep->declBit(c+397,"ysyx_22051013_rvcpu idu2 decode inst_srli", false,-1);
        tracep->declBit(c+685,"ysyx_22051013_rvcpu idu2 decode inst_srai", false,-1);
        tracep->declBit(c+686,"ysyx_22051013_rvcpu idu2 decode inst_addiw", false,-1);
        tracep->declBit(c+687,"ysyx_22051013_rvcpu idu2 decode inst_slliw", false,-1);
        tracep->declBit(c+688,"ysyx_22051013_rvcpu idu2 decode inst_srliw", false,-1);
        tracep->declBit(c+689,"ysyx_22051013_rvcpu idu2 decode inst_sraiw", false,-1);
        tracep->declBit(c+690,"ysyx_22051013_rvcpu idu2 decode inst_addw", false,-1);
        tracep->declBit(c+691,"ysyx_22051013_rvcpu idu2 decode inst_subw", false,-1);
        tracep->declBit(c+692,"ysyx_22051013_rvcpu idu2 decode inst_sllw", false,-1);
        tracep->declBit(c+693,"ysyx_22051013_rvcpu idu2 decode inst_srlw", false,-1);
        tracep->declBit(c+694,"ysyx_22051013_rvcpu idu2 decode inst_sraw", false,-1);
        tracep->declBit(c+695,"ysyx_22051013_rvcpu idu2 decode inst_divuw", false,-1);
        tracep->declBit(c+696,"ysyx_22051013_rvcpu idu2 decode inst_divw", false,-1);
        tracep->declBit(c+697,"ysyx_22051013_rvcpu idu2 decode inst_mulw", false,-1);
        tracep->declBit(c+698,"ysyx_22051013_rvcpu idu2 decode inst_remuw", false,-1);
        tracep->declBit(c+699,"ysyx_22051013_rvcpu idu2 decode inst_remw", false,-1);
        tracep->declBit(c+700,"ysyx_22051013_rvcpu idu2 decode inst_ecall", false,-1);
        tracep->declBit(c+701,"ysyx_22051013_rvcpu idu2 decode inst_mret", false,-1);
        tracep->declBit(c+702,"ysyx_22051013_rvcpu idu2 decode inst_csrrw", false,-1);
        tracep->declBit(c+703,"ysyx_22051013_rvcpu idu2 decode inst_csrrs", false,-1);
        tracep->declBit(c+704,"ysyx_22051013_rvcpu idu2 decode inst_csrrc", false,-1);
        tracep->declBit(c+705,"ysyx_22051013_rvcpu idu2 decode inst_csrrwi", false,-1);
        tracep->declBit(c+706,"ysyx_22051013_rvcpu idu2 decode inst_csrrsi", false,-1);
        tracep->declBit(c+707,"ysyx_22051013_rvcpu idu2 decode inst_csrrci", false,-1);
        tracep->declBit(c+708,"ysyx_22051013_rvcpu idu2 decode inst_ebreak", false,-1);
        tracep->declBit(c+136,"ysyx_22051013_rvcpu idu2 decode inst_fencei", false,-1);
        tracep->declBit(c+709,"ysyx_22051013_rvcpu idu2 decode inst_csr", false,-1);
        tracep->declBit(c+710,"ysyx_22051013_rvcpu idu2 decode jump", false,-1);
        tracep->declBit(c+711,"ysyx_22051013_rvcpu idu2 decode imm_ena", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu reg_idex3 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu reg_idex3 rst", false,-1);
        tracep->declBus(c+785,"ysyx_22051013_rvcpu reg_idex3 id_inst", false,-1, 31,0);
        tracep->declQuad(c+786,"ysyx_22051013_rvcpu reg_idex3 id_pc", false,-1, 63,0);
        tracep->declQuad(c+521,"ysyx_22051013_rvcpu reg_idex3 id_op1", false,-1, 63,0);
        tracep->declQuad(c+523,"ysyx_22051013_rvcpu reg_idex3 id_op2", false,-1, 63,0);
        tracep->declBus(c+371,"ysyx_22051013_rvcpu reg_idex3 id_op1_sel", false,-1, 1,0);
        tracep->declBus(c+372,"ysyx_22051013_rvcpu reg_idex3 id_op2_sel", false,-1, 2,0);
        tracep->declQuad(c+525,"ysyx_22051013_rvcpu reg_idex3 id_imm", false,-1, 63,0);
        tracep->declBit(c+527,"ysyx_22051013_rvcpu reg_idex3 id_rd_ena", false,-1);
        tracep->declBus(c+370,"ysyx_22051013_rvcpu reg_idex3 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+515,"ysyx_22051013_rvcpu reg_idex3 id_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+530,"ysyx_22051013_rvcpu reg_idex3 id_alusrc", false,-1, 7,0);
        tracep->declBus(c+528,"ysyx_22051013_rvcpu reg_idex3 id_lsctl", false,-1, 3,0);
        tracep->declBus(c+529,"ysyx_22051013_rvcpu reg_idex3 id_wbctl", false,-1, 1,0);
        tracep->declBit(c+520,"ysyx_22051013_rvcpu reg_idex3 id_load_flag", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu reg_idex3 id_valid", false,-1);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu reg_idex3 id_flush", false,-1);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu reg_idex3 ie_flush", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu reg_idex3 ls_flush", false,-1);
        tracep->declBit(c+542,"ysyx_22051013_rvcpu reg_idex3 ex_ready", false,-1);
        tracep->declBus(c+21,"ysyx_22051013_rvcpu reg_idex3 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+22,"ysyx_22051013_rvcpu reg_idex3 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu reg_idex3 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu reg_idex3 ex_op2", false,-1, 63,0);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu reg_idex3 ex_op1_sel", false,-1, 1,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu reg_idex3 ex_op2_sel", false,-1, 2,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu reg_idex3 ex_imm", false,-1, 63,0);
        tracep->declBit(c+30,"ysyx_22051013_rvcpu reg_idex3 ex_rd_ena", false,-1);
        tracep->declBus(c+31,"ysyx_22051013_rvcpu reg_idex3 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu reg_idex3 ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu reg_idex3 ex_alusrc", false,-1, 7,0);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu reg_idex3 ex_lsctl", false,-1, 3,0);
        tracep->declBit(c+38,"ysyx_22051013_rvcpu reg_idex3 ex_load_flag", false,-1);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu reg_idex3 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+712,"ysyx_22051013_rvcpu reg_idex3 flush", false,-1);
        tracep->declBit(c+713,"ysyx_22051013_rvcpu reg_idex3 stall", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu exu4 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu exu4 rst", false,-1);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu exu4 reg_op1", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu exu4 reg_op2", false,-1, 63,0);
        tracep->declBus(c+35,"ysyx_22051013_rvcpu exu4 op1_sel", false,-1, 1,0);
        tracep->declBus(c+36,"ysyx_22051013_rvcpu exu4 op2_sel", false,-1, 2,0);
        tracep->declBus(c+31,"ysyx_22051013_rvcpu exu4 rd_addr", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22051013_rvcpu exu4 rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+28,"ysyx_22051013_rvcpu exu4 imm", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22051013_rvcpu exu4 pc_i", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22051013_rvcpu exu4 alu_sel", false,-1, 7,0);
        tracep->declBit(c+541,"ysyx_22051013_rvcpu exu4 ls_ready", false,-1);
        tracep->declBit(c+538,"ysyx_22051013_rvcpu exu4 id_valid", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu exu4 ex_valid", false,-1);
        tracep->declBit(c+542,"ysyx_22051013_rvcpu exu4 ex_ready", false,-1);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu exu4 store_data", false,-1, 63,0);
        tracep->declBus(c+373,"ysyx_22051013_rvcpu exu4 csr_addr", false,-1, 11,0);
        tracep->declBus(c+533,"ysyx_22051013_rvcpu exu4 csr_ctl", false,-1, 6,0);
        tracep->declBit(c+39,"ysyx_22051013_rvcpu exu4 fencei", false,-1);
        tracep->declQuad(c+531,"ysyx_22051013_rvcpu exu4 exu_res", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22051013_rvcpu exu4 op1", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22051013_rvcpu exu4 op2", false,-1, 63,0);
        tracep->declQuad(c+141,"ysyx_22051013_rvcpu exu4 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+143,"ysyx_22051013_rvcpu exu4 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+145,"ysyx_22051013_rvcpu exu4 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+147,"ysyx_22051013_rvcpu exu4 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+149,"ysyx_22051013_rvcpu exu4 op1_lt_op2", false,-1);
        tracep->declQuad(c+150,"ysyx_22051013_rvcpu exu4 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+152,"ysyx_22051013_rvcpu exu4 sllw", false,-1, 31,0);
        tracep->declQuad(c+153,"ysyx_22051013_rvcpu exu4 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+155,"ysyx_22051013_rvcpu exu4 srlw", false,-1, 31,0);
        tracep->declQuad(c+156,"ysyx_22051013_rvcpu exu4 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+158,"ysyx_22051013_rvcpu exu4 sraw", false,-1, 31,0);
        tracep->declQuad(c+159,"ysyx_22051013_rvcpu exu4 op1_sraw_op2", false,-1, 63,0);
        tracep->declQuad(c+714,"ysyx_22051013_rvcpu exu4 alu_res", false,-1, 63,0);
        tracep->declBit(c+716,"ysyx_22051013_rvcpu exu4 mul", false,-1);
        tracep->declBus(c+717,"ysyx_22051013_rvcpu exu4 mul_signed", false,-1, 1,0);
        tracep->declBit(c+718,"ysyx_22051013_rvcpu exu4 mulw", false,-1);
        tracep->declBit(c+161,"ysyx_22051013_rvcpu exu4 delay1", false,-1);
        tracep->declBit(c+719,"ysyx_22051013_rvcpu exu4 mul_valid", false,-1);
        tracep->declBit(c+162,"ysyx_22051013_rvcpu exu4 mul_out_valid", false,-1);
        tracep->declBit(c+163,"ysyx_22051013_rvcpu exu4 mul_ready", false,-1);
        tracep->declQuad(c+164,"ysyx_22051013_rvcpu exu4 result_hi", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_22051013_rvcpu exu4 result_lo", false,-1, 63,0);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu exu4 flush", false,-1);
        tracep->declQuad(c+839,"ysyx_22051013_rvcpu exu4 mul_res", false,-1, 63,0);
        tracep->declQuad(c+168,"ysyx_22051013_rvcpu exu4 mul_res_temp", false,-1, 63,0);
        tracep->declBit(c+720,"ysyx_22051013_rvcpu exu4 div", false,-1);
        tracep->declBit(c+721,"ysyx_22051013_rvcpu exu4 div_signed", false,-1);
        tracep->declBit(c+722,"ysyx_22051013_rvcpu exu4 divw", false,-1);
        tracep->declBit(c+170,"ysyx_22051013_rvcpu exu4 delay2", false,-1);
        tracep->declBit(c+723,"ysyx_22051013_rvcpu exu4 div_valid", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu exu4 div_out_valid", false,-1);
        tracep->declBit(c+172,"ysyx_22051013_rvcpu exu4 div_ready", false,-1);
        tracep->declQuad(c+398,"ysyx_22051013_rvcpu exu4 quotient", false,-1, 63,0);
        tracep->declQuad(c+400,"ysyx_22051013_rvcpu exu4 remainder", false,-1, 63,0);
        tracep->declQuad(c+724,"ysyx_22051013_rvcpu exu4 div_res", false,-1, 63,0);
        tracep->declQuad(c+173,"ysyx_22051013_rvcpu exu4 div_res_temp", false,-1, 63,0);
        tracep->declBit(c+726,"ysyx_22051013_rvcpu exu4 csr_wr_ena", false,-1);
        tracep->declBit(c+727,"ysyx_22051013_rvcpu exu4 csr_rd_ena", false,-1);
        tracep->declBit(c+728,"ysyx_22051013_rvcpu exu4 mret_ena", false,-1);
        tracep->declBit(c+729,"ysyx_22051013_rvcpu exu4 ecall_ena", false,-1);
        tracep->declBit(c+730,"ysyx_22051013_rvcpu exu4 csrrw_ena", false,-1);
        tracep->declBit(c+731,"ysyx_22051013_rvcpu exu4 csrrs_ena", false,-1);
        tracep->declBit(c+732,"ysyx_22051013_rvcpu exu4 csrrc_ena", false,-1);
        tracep->declQuad(c+175,"ysyx_22051013_rvcpu exu4 csr_op", false,-1, 63,0);
        tracep->declBit(c+177,"ysyx_22051013_rvcpu exu4 csrrxi_ena", false,-1);
        tracep->declBit(c+178,"ysyx_22051013_rvcpu exu4 mul_reg", false,-1);
        tracep->declBit(c+733,"ysyx_22051013_rvcpu exu4 mul_stall", false,-1);
        tracep->declBit(c+179,"ysyx_22051013_rvcpu exu4 div_reg", false,-1);
        tracep->declBit(c+734,"ysyx_22051013_rvcpu exu4 div_stall", false,-1);
        tracep->declBit(c+735,"ysyx_22051013_rvcpu exu4 muldiv_ena", false,-1);
        tracep->declQuad(c+402,"ysyx_22051013_rvcpu exu4 muldiv_res", false,-1, 63,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu exu4 booth_mul0 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu exu4 booth_mul0 rst", false,-1);
        tracep->declBit(c+719,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_valid", false,-1);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu exu4 booth_mul0 flush", false,-1);
        tracep->declBus(c+717,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_signed", false,-1, 1,0);
        tracep->declBit(c+718,"ysyx_22051013_rvcpu exu4 booth_mul0 mulw", false,-1);
        tracep->declQuad(c+137,"ysyx_22051013_rvcpu exu4 booth_mul0 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22051013_rvcpu exu4 booth_mul0 mult_op2", false,-1, 63,0);
        tracep->declBit(c+163,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_ready", false,-1);
        tracep->declBit(c+162,"ysyx_22051013_rvcpu exu4 booth_mul0 out_valid", false,-1);
        tracep->declQuad(c+164,"ysyx_22051013_rvcpu exu4 booth_mul0 result_hi", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_22051013_rvcpu exu4 booth_mul0 result_lo", false,-1, 63,0);
        tracep->declBit(c+180,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_doing", false,-1);
        tracep->declQuad(c+736,"ysyx_22051013_rvcpu exu4 booth_mul0 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+738,"ysyx_22051013_rvcpu exu4 booth_mul0 op2_temp", false,-1, 63,0);
        tracep->declArray(c+740,"ysyx_22051013_rvcpu exu4 booth_mul0 op1_ext", false,-1, 65,0);
        tracep->declArray(c+743,"ysyx_22051013_rvcpu exu4 booth_mul0 op2_ext", false,-1, 65,0);
        tracep->declArray(c+181,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplicand", false,-1, 131,0);
        tracep->declArray(c+186,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplier", false,-1, 66,0);
        tracep->declBus(c+189,"ysyx_22051013_rvcpu exu4 booth_mul0 sel", false,-1, 2,0);
        tracep->declBit(c+190,"ysyx_22051013_rvcpu exu4 booth_mul0 carry", false,-1);
        tracep->declArray(c+191,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplicand_mod", false,-1, 131,0);
        tracep->declArray(c+196,"ysyx_22051013_rvcpu exu4 booth_mul0 result_temp", false,-1, 131,0);
        tracep->declBit(c+201,"ysyx_22051013_rvcpu exu4 booth_mul0 unused_ok", false,-1);
        tracep->declArray(c+181,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 mult", false,-1, 131,0);
        tracep->declBus(c+189,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel", false,-1, 2,0);
        tracep->declArray(c+191,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 part_mul", false,-1, 131,0);
        tracep->declBit(c+190,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 carry", false,-1);
        tracep->declBit(c+202,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y_add", false,-1);
        tracep->declBit(c+203,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y", false,-1);
        tracep->declBit(c+204,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y_sub", false,-1);
        tracep->declBit(c+205,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_negative", false,-1);
        tracep->declBit(c+206,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_double_negative", false,-1);
        tracep->declBit(c+207,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_positive", false,-1);
        tracep->declBit(c+208,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_double_positive", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu exu4 divide1 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu exu4 divide1 rst", false,-1);
        tracep->declBit(c+723,"ysyx_22051013_rvcpu exu4 divide1 div_valid", false,-1);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu exu4 divide1 flush", false,-1);
        tracep->declBit(c+722,"ysyx_22051013_rvcpu exu4 divide1 divw", false,-1);
        tracep->declBit(c+721,"ysyx_22051013_rvcpu exu4 divide1 div_signed", false,-1);
        tracep->declQuad(c+137,"ysyx_22051013_rvcpu exu4 divide1 div_op1", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22051013_rvcpu exu4 divide1 div_op2", false,-1, 63,0);
        tracep->declBit(c+172,"ysyx_22051013_rvcpu exu4 divide1 div_ready", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu exu4 divide1 out_valid", false,-1);
        tracep->declQuad(c+398,"ysyx_22051013_rvcpu exu4 divide1 quotient", false,-1, 63,0);
        tracep->declQuad(c+400,"ysyx_22051013_rvcpu exu4 divide1 remainder", false,-1, 63,0);
        tracep->declBit(c+209,"ysyx_22051013_rvcpu exu4 divide1 div_doing", false,-1);
        tracep->declQuad(c+746,"ysyx_22051013_rvcpu exu4 divide1 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+748,"ysyx_22051013_rvcpu exu4 divide1 op2_temp", false,-1, 63,0);
        tracep->declBit(c+750,"ysyx_22051013_rvcpu exu4 divide1 op1_sign", false,-1);
        tracep->declBit(c+751,"ysyx_22051013_rvcpu exu4 divide1 op2_sign", false,-1);
        tracep->declQuad(c+752,"ysyx_22051013_rvcpu exu4 divide1 op1_abs", false,-1, 63,0);
        tracep->declQuad(c+754,"ysyx_22051013_rvcpu exu4 divide1 op2_abs", false,-1, 63,0);
        tracep->declArray(c+210,"ysyx_22051013_rvcpu exu4 divide1 dividend", false,-1, 127,0);
        tracep->declArray(c+756,"ysyx_22051013_rvcpu exu4 divide1 divisor", false,-1, 64,0);
        tracep->declBus(c+214,"ysyx_22051013_rvcpu exu4 divide1 cnt", false,-1, 6,0);
        tracep->declQuad(c+215,"ysyx_22051013_rvcpu exu4 divide1 temp_q", false,-1, 63,0);
        tracep->declBit(c+759,"ysyx_22051013_rvcpu exu4 divide1 sub_sign", false,-1);
        tracep->declQuad(c+404,"ysyx_22051013_rvcpu exu4 divide1 mod_dividend", false,-1, 63,0);
        tracep->declQuad(c+760,"ysyx_22051013_rvcpu exu4 divide1 mod_quo", false,-1, 63,0);
        tracep->declQuad(c+762,"ysyx_22051013_rvcpu exu4 divide1 mod_rem", false,-1, 63,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu reg_exls5 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu reg_exls5 rst", false,-1);
        tracep->declBus(c+21,"ysyx_22051013_rvcpu reg_exls5 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+22,"ysyx_22051013_rvcpu reg_exls5 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22051013_rvcpu reg_exls5 ex_store_data", false,-1, 63,0);
        tracep->declQuad(c+531,"ysyx_22051013_rvcpu reg_exls5 ex_exu_res", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22051013_rvcpu reg_exls5 ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+33,"ysyx_22051013_rvcpu reg_exls5 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+30,"ysyx_22051013_rvcpu reg_exls5 ex_rd_ena", false,-1);
        tracep->declBus(c+31,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+533,"ysyx_22051013_rvcpu reg_exls5 ex_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+373,"ysyx_22051013_rvcpu reg_exls5 ex_csr_addr", false,-1, 11,0);
        tracep->declBit(c+39,"ysyx_22051013_rvcpu reg_exls5 ex_fencei", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu reg_exls5 ex_valid", false,-1);
        tracep->declBit(c+541,"ysyx_22051013_rvcpu reg_exls5 ls_ready", false,-1);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu reg_exls5 ie_flush", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu reg_exls5 ls_flush", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu reg_exls5 ls_fencei", false,-1);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu reg_exls5 ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+50,"ysyx_22051013_rvcpu reg_exls5 ls_csr_addr", false,-1, 11,0);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu reg_exls5 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22051013_rvcpu reg_exls5 ls_pc", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22051013_rvcpu reg_exls5 ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu reg_exls5 ls_exu_res", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22051013_rvcpu reg_exls5 ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+48,"ysyx_22051013_rvcpu reg_exls5 ls_wbctl", false,-1, 1,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu reg_exls5 ls_rd_ena", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_exls5 ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+31,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+531,"ysyx_22051013_rvcpu reg_exls5 ex_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+217,"ysyx_22051013_rvcpu reg_exls5 flush", false,-1);
        tracep->declBit(c+764,"ysyx_22051013_rvcpu reg_exls5 stall", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu lsu6 rst", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu lsu6 clk", false,-1);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu lsu6 alu_res", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22051013_rvcpu lsu6 store_data", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22051013_rvcpu lsu6 ls_ctl", false,-1, 3,0);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu lsu6 fencei", false,-1);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu lsu6 wb_ready", false,-1);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu lsu6 ex_valid", false,-1);
        tracep->declBit(c+541,"ysyx_22051013_rvcpu lsu6 ls_ready", false,-1);
        tracep->declBit(c+540,"ysyx_22051013_rvcpu lsu6 ls_valid", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu lsu6 ls_flush", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu lsu6 ls_jump", false,-1);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu lsu6 ls_jump_pc", false,-1, 63,0);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu lsu6 we", false,-1);
        tracep->declBit(c+488,"ysyx_22051013_rvcpu lsu6 re", false,-1);
        tracep->declBit(c+11,"ysyx_22051013_rvcpu lsu6 fencei_o", false,-1);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu lsu6 core_ready", false,-1);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu lsu6 data_pc", false,-1, 63,0);
        tracep->declQuad(c+492,"ysyx_22051013_rvcpu lsu6 data_temp", false,-1, 63,0);
        tracep->declQuad(c+494,"ysyx_22051013_rvcpu lsu6 data_o", false,-1, 63,0);
        tracep->declBus(c+51,"ysyx_22051013_rvcpu lsu6 data_size", false,-1, 2,0);
        tracep->declQuad(c+12,"ysyx_22051013_rvcpu lsu6 device_data_o", false,-1, 63,0);
        tracep->declBus(c+489,"ysyx_22051013_rvcpu lsu6 wlen", false,-1, 7,0);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu lsu6 data_valid", false,-1);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu lsu6 ls_data_forward", false,-1, 63,0);
        tracep->declQuad(c+536,"ysyx_22051013_rvcpu lsu6 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+841,"ysyx_22051013_rvcpu lsu6 raddr", false,-1, 63,0);
        tracep->declQuad(c+843,"ysyx_22051013_rvcpu lsu6 waddr", false,-1, 63,0);
        tracep->declQuad(c+765,"ysyx_22051013_rvcpu lsu6 load_data", false,-1, 63,0);
        tracep->declBit(c+218,"ysyx_22051013_rvcpu lsu6 data_ok", false,-1);
        tracep->declQuad(c+219,"ysyx_22051013_rvcpu lsu6 data_i", false,-1, 63,0);
        tracep->declBus(c+221,"ysyx_22051013_rvcpu lsu6 byte_sel", false,-1, 2,0);
        tracep->declBus(c+222,"ysyx_22051013_rvcpu lsu6 half_sel", false,-1, 1,0);
        tracep->declBit(c+223,"ysyx_22051013_rvcpu lsu6 word_sel", false,-1);
        tracep->declBus(c+767,"ysyx_22051013_rvcpu lsu6 data_byte", false,-1, 7,0);
        tracep->declBus(c+768,"ysyx_22051013_rvcpu lsu6 data_half", false,-1, 15,0);
        tracep->declBus(c+224,"ysyx_22051013_rvcpu lsu6 data_word", false,-1, 31,0);
        tracep->declBus(c+845,"ysyx_22051013_rvcpu lsu6 sb_mask", false,-1, 7,0);
        tracep->declBus(c+846,"ysyx_22051013_rvcpu lsu6 sh_mask", false,-1, 7,0);
        tracep->declBus(c+847,"ysyx_22051013_rvcpu lsu6 sw_mask", false,-1, 7,0);
        tracep->declQuad(c+848,"ysyx_22051013_rvcpu lsu6 sb_data", false,-1, 63,0);
        tracep->declQuad(c+850,"ysyx_22051013_rvcpu lsu6 sw_data", false,-1, 63,0);
        tracep->declQuad(c+852,"ysyx_22051013_rvcpu lsu6 sh_data", false,-1, 63,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu reg_lswb7 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu reg_lswb7 rst", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu reg_lswb7 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22051013_rvcpu reg_lswb7 ls_pc", false,-1, 63,0);
        tracep->declBus(c+48,"ysyx_22051013_rvcpu reg_lswb7 ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+43,"ysyx_22051013_rvcpu reg_lswb7 ls_exu_res", false,-1, 63,0);
        tracep->declQuad(c+536,"ysyx_22051013_rvcpu reg_lswb7 ls_wbdata", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_ena", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu reg_lswb7 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22051013_rvcpu reg_lswb7 ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+50,"ysyx_22051013_rvcpu reg_lswb7 ls_csr_addr", false,-1, 11,0);
        tracep->declBit(c+540,"ysyx_22051013_rvcpu reg_lswb7 ls_valid", false,-1);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu reg_lswb7 wb_ready", false,-1);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu reg_lswb7 ie_flush", false,-1);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_lswb7 wb_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu reg_lswb7 wb_csr_addr", false,-1, 11,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu reg_lswb7 wb_inst", false,-1, 31,0);
        tracep->declQuad(c+55,"ysyx_22051013_rvcpu reg_lswb7 wb_pc", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_22051013_rvcpu reg_lswb7 wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+60,"ysyx_22051013_rvcpu reg_lswb7 wb_exu_res", false,-1, 63,0);
        tracep->declQuad(c+58,"ysyx_22051013_rvcpu reg_lswb7 wb_wbdata", false,-1, 63,0);
        tracep->declBit(c+62,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_ena", false,-1);
        tracep->declBus(c+63,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_addr", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu reg_lswb7 flush", false,-1);
        tracep->declBit(c+540,"ysyx_22051013_rvcpu reg_lswb7 stall", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu wbu8 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu wbu8 rst", false,-1);
        tracep->declQuad(c+58,"ysyx_22051013_rvcpu wbu8 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_22051013_rvcpu wbu8 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+60,"ysyx_22051013_rvcpu wbu8 exu_res", false,-1, 63,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu wbu8 inst_i", false,-1, 31,0);
        tracep->declQuad(c+55,"ysyx_22051013_rvcpu wbu8 pc_i", false,-1, 63,0);
        tracep->declBit(c+62,"ysyx_22051013_rvcpu wbu8 rd_ena", false,-1);
        tracep->declBus(c+63,"ysyx_22051013_rvcpu wbu8 rd_addr", false,-1, 4,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu wbu8 csr_ctl", false,-1, 6,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu wbu8 csr_addr", false,-1, 11,0);
        tracep->declBit(c+540,"ysyx_22051013_rvcpu wbu8 ls_valid", false,-1);
        tracep->declBit(c+543,"ysyx_22051013_rvcpu wbu8 id_stall", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu wbu8 time_interrupt", false,-1);
        tracep->declBit(c+864,"ysyx_22051013_rvcpu wbu8 wb_ready", false,-1);
        tracep->declQuad(c+69,"ysyx_22051013_rvcpu wbu8 ie_jump_pc", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu wbu8 ie_flush", false,-1);
        tracep->declBit(c+68,"ysyx_22051013_rvcpu wbu8 ie_jump", false,-1);
        tracep->declBus(c+67,"ysyx_22051013_rvcpu wbu8 wb_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+64,"ysyx_22051013_rvcpu wbu8 wb_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu wbu8 wb_rd_ena", false,-1);
        tracep->declBus(c+67,"ysyx_22051013_rvcpu wbu8 wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+64,"ysyx_22051013_rvcpu wbu8 wb_data", false,-1, 63,0);
        tracep->declQuad(c+225,"ysyx_22051013_rvcpu wbu8 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+227,"ysyx_22051013_rvcpu wbu8 write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+229,"ysyx_22051013_rvcpu wbu8 w_csr_data", false,-1, 63,0);
        tracep->declQuad(c+231,"ysyx_22051013_rvcpu wbu8 mcause_value", false,-1, 63,0);
        tracep->declQuad(c+233,"ysyx_22051013_rvcpu wbu8 set_data", false,-1, 63,0);
        tracep->declQuad(c+235,"ysyx_22051013_rvcpu wbu8 clear_data", false,-1, 63,0);
        tracep->declBit(c+237,"ysyx_22051013_rvcpu wbu8 time_jump", false,-1);
        tracep->declBit(c+238,"ysyx_22051013_rvcpu wbu8 delay", false,-1);
        tracep->declQuad(c+239,"ysyx_22051013_rvcpu wbu8 pc_delay", false,-1, 63,0);
        tracep->declBit(c+241,"ysyx_22051013_rvcpu wbu8 ebreak_ena", false,-1);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu wbu8 csr_operate clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu wbu8 csr_operate rst", false,-1);
        tracep->declQuad(c+55,"ysyx_22051013_rvcpu wbu8 csr_operate pc_i", false,-1, 63,0);
        tracep->declBus(c+242,"ysyx_22051013_rvcpu wbu8 csr_operate csr_ctl", false,-1, 3,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu wbu8 csr_operate csr_addr", false,-1, 11,0);
        tracep->declBit(c+769,"ysyx_22051013_rvcpu wbu8 csr_operate core_valid", false,-1);
        tracep->declQuad(c+231,"ysyx_22051013_rvcpu wbu8 csr_operate mcause_value", false,-1, 63,0);
        tracep->declQuad(c+229,"ysyx_22051013_rvcpu wbu8 csr_operate write_csr_data", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu wbu8 csr_operate time_interrupt", false,-1);
        tracep->declBit(c+237,"ysyx_22051013_rvcpu wbu8 csr_operate time_interrupt_confirm", false,-1);
        tracep->declQuad(c+225,"ysyx_22051013_rvcpu wbu8 csr_operate read_csr_data", false,-1, 63,0);
        tracep->declBit(c+243,"ysyx_22051013_rvcpu wbu8 csr_operate mcycle_rd", false,-1);
        tracep->declBit(c+244,"ysyx_22051013_rvcpu wbu8 csr_operate mcycle_wr", false,-1);
        tracep->declQuad(c+245,"ysyx_22051013_rvcpu wbu8 csr_operate mcycle", false,-1, 63,0);
        tracep->declBit(c+247,"ysyx_22051013_rvcpu wbu8 csr_operate mie_rd", false,-1);
        tracep->declBit(c+248,"ysyx_22051013_rvcpu wbu8 csr_operate mie_wr", false,-1);
        tracep->declBit(c+249,"ysyx_22051013_rvcpu wbu8 csr_operate mtie", false,-1);
        tracep->declQuad(c+250,"ysyx_22051013_rvcpu wbu8 csr_operate mie", false,-1, 63,0);
        tracep->declBit(c+252,"ysyx_22051013_rvcpu wbu8 csr_operate mip_rd", false,-1);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu wbu8 csr_operate mtip", false,-1);
        tracep->declQuad(c+254,"ysyx_22051013_rvcpu wbu8 csr_operate mip", false,-1, 63,0);
        tracep->declBit(c+256,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_rd", false,-1);
        tracep->declBit(c+257,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_wr", false,-1);
        tracep->declBit(c+258,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_mie", false,-1);
        tracep->declBit(c+259,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_mpie", false,-1);
        tracep->declBus(c+260,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_mpp", false,-1, 1,0);
        tracep->declQuad(c+261,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus", false,-1, 63,0);
        tracep->declBit(c+263,"ysyx_22051013_rvcpu wbu8 csr_operate mstatus_ie_ena", false,-1);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu wbu8 csr_operate mie_set", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu wbu8 csr_operate mpie_set", false,-1);
        tracep->declBus(c+266,"ysyx_22051013_rvcpu wbu8 csr_operate mpp_set", false,-1, 1,0);
        tracep->declBit(c+267,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_rd", false,-1);
        tracep->declBit(c+268,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_wr", false,-1);
        tracep->declQuad(c+269,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_base", false,-1, 63,2);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+271,"ysyx_22051013_rvcpu wbu8 csr_operate mtvec", false,-1, 63,0);
        tracep->declBit(c+273,"ysyx_22051013_rvcpu wbu8 csr_operate mepc_rd", false,-1);
        tracep->declBit(c+274,"ysyx_22051013_rvcpu wbu8 csr_operate mepc_wr", false,-1);
        tracep->declQuad(c+275,"ysyx_22051013_rvcpu wbu8 csr_operate mepc", false,-1, 63,0);
        tracep->declBit(c+277,"ysyx_22051013_rvcpu wbu8 csr_operate mcause_rd", false,-1);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu wbu8 csr_operate mcause_wr", false,-1);
        tracep->declQuad(c+279,"ysyx_22051013_rvcpu wbu8 csr_operate mcause", false,-1, 63,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu reg9 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu reg9 rst", false,-1);
        tracep->declBus(c+67,"ysyx_22051013_rvcpu reg9 waddr", false,-1, 4,0);
        tracep->declQuad(c+64,"ysyx_22051013_rvcpu reg9 wdata", false,-1, 63,0);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu reg9 wen", false,-1);
        tracep->declBus(c+515,"ysyx_22051013_rvcpu reg9 raddr1", false,-1, 4,0);
        tracep->declQuad(c+788,"ysyx_22051013_rvcpu reg9 rdata1", false,-1, 63,0);
        tracep->declBit(c+517,"ysyx_22051013_rvcpu reg9 ren1", false,-1);
        tracep->declBus(c+516,"ysyx_22051013_rvcpu reg9 raddr2", false,-1, 4,0);
        tracep->declQuad(c+790,"ysyx_22051013_rvcpu reg9 rdata2", false,-1, 63,0);
        tracep->declBit(c+518,"ysyx_22051013_rvcpu reg9 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+281+i*2,"ysyx_22051013_rvcpu reg9 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+872,"ysyx_22051013_rvcpu reg9 i", false,-1, 31,0);
        tracep->declBit(c+778,"ysyx_22051013_rvcpu clint10 clk", false,-1);
        tracep->declBit(c+779,"ysyx_22051013_rvcpu clint10 rst", false,-1);
        tracep->declBit(c+71,"ysyx_22051013_rvcpu clint10 time_interrupt", false,-1);
        tracep->declBus(c+457,"ysyx_22051013_rvcpu clint10 t_axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+458,"ysyx_22051013_rvcpu clint10 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+460,"ysyx_22051013_rvcpu clint10 t_axi_aw_valid", false,-1);
        tracep->declBit(c+461,"ysyx_22051013_rvcpu clint10 t_axi_aw_ready", false,-1);
        tracep->declBus(c+462,"ysyx_22051013_rvcpu clint10 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+463,"ysyx_22051013_rvcpu clint10 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+464,"ysyx_22051013_rvcpu clint10 t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+465,"ysyx_22051013_rvcpu clint10 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+467,"ysyx_22051013_rvcpu clint10 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+468,"ysyx_22051013_rvcpu clint10 t_axi_w_last", false,-1);
        tracep->declBit(c+469,"ysyx_22051013_rvcpu clint10 t_axi_w_valid", false,-1);
        tracep->declBit(c+470,"ysyx_22051013_rvcpu clint10 t_axi_w_ready", false,-1);
        tracep->declBus(c+457,"ysyx_22051013_rvcpu clint10 t_axi_b_id", false,-1, 4,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu clint10 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013_rvcpu clint10 t_axi_b_valid", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu clint10 t_axi_b_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013_rvcpu clint10 t_axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+473,"ysyx_22051013_rvcpu clint10 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+475,"ysyx_22051013_rvcpu clint10 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+476,"ysyx_22051013_rvcpu clint10 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+477,"ysyx_22051013_rvcpu clint10 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+356,"ysyx_22051013_rvcpu clint10 t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013_rvcpu clint10 t_axi_ar_ready", false,-1);
        tracep->declBus(c+357,"ysyx_22051013_rvcpu clint10 t_axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+358,"ysyx_22051013_rvcpu clint10 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+858,"ysyx_22051013_rvcpu clint10 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu clint10 t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu clint10 t_axi_r_valid", false,-1);
        tracep->declBit(c+478,"ysyx_22051013_rvcpu clint10 t_axi_r_ready", false,-1);
        tracep->declBus(c+345,"ysyx_22051013_rvcpu clint10 clint_write_state", false,-1, 1,0);
        tracep->declBus(c+854,"ysyx_22051013_rvcpu clint10 clint_write_state_next", false,-1, 1,0);
        tracep->declBit(c+770,"ysyx_22051013_rvcpu clint10 awc_shakehand", false,-1);
        tracep->declBit(c+771,"ysyx_22051013_rvcpu clint10 wc_shakehand", false,-1);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu clint10 bc_shakehand", false,-1);
        tracep->declBit(c+407,"ysyx_22051013_rvcpu clint10 arc_shakehand", false,-1);
        tracep->declBit(c+408,"ysyx_22051013_rvcpu clint10 rc_shakehand", false,-1);
        tracep->declBus(c+346,"ysyx_22051013_rvcpu clint10 clint_read_state", false,-1, 1,0);
        tracep->declBus(c+855,"ysyx_22051013_rvcpu clint10 clint_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+409,"ysyx_22051013_rvcpu clint10 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+347,"ysyx_22051013_rvcpu clint10 csr_mtime", false,-1, 63,0);
        tracep->declQuad(c+349,"ysyx_22051013_rvcpu clint10 csr_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+772,"ysyx_22051013_rvcpu clint10 mtime_read", false,-1);
        tracep->declBit(c+773,"ysyx_22051013_rvcpu clint10 mtime_write", false,-1);
        tracep->declBit(c+774,"ysyx_22051013_rvcpu clint10 mtimecmp_read", false,-1);
        tracep->declBit(c+775,"ysyx_22051013_rvcpu clint10 mtimecmp_write", false,-1);
        tracep->declQuad(c+776,"ysyx_22051013_rvcpu clint10 wmask", false,-1, 63,0);
        tracep->declQuad(c+411,"ysyx_22051013_rvcpu clint10 mtime_temp", false,-1, 63,0);
        tracep->declQuad(c+413,"ysyx_22051013_rvcpu clint10 mtimecmp_temp", false,-1, 63,0);
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
    VlWide<5>/*159:0*/ __Vtemp354;
    VlWide<5>/*159:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp358;
    VlWide<3>/*95:0*/ __Vtemp360;
    VlWide<3>/*95:0*/ __Vtemp362;
    VlWide<3>/*95:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp366;
    VlWide<3>/*95:0*/ __Vtemp367;
    VlWide<4>/*127:0*/ __Vtemp382;
    VlWide<4>/*127:0*/ __Vtemp388;
    VlWide<4>/*127:0*/ __Vtemp407;
    VlWide<4>/*127:0*/ __Vtemp448;
    VlWide<4>/*127:0*/ __Vtemp461;
    VlWide<4>/*127:0*/ __Vtemp502;
    VlWide<4>/*127:0*/ __Vtemp503;
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
        tracep->fullBit(oldp+10,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei));
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
        tracep->fullBit(oldp+14,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc),64);
        tracep->fullIData(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
        tracep->fullIData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel),2);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel),3);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr),5);
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
        tracep->fullBit(oldp+39,((0xc1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))));
        tracep->fullIData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
        tracep->fullCData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
        tracep->fullCData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl),7);
        tracep->fullSData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr),12);
        tracep->fullCData(oldp+51,(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
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
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl),7);
        tracep->fullSData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr),12);
        tracep->fullIData(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
        tracep->fullBit(oldp+62,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
        tracep->fullBit(oldp+66,(((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)) 
                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena))));
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr),5);
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel));
        tracep->fullQData(oldp+69,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
                                     : 0ULL)),64);
        tracep->fullBit(oldp+71,((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime 
                                  > vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)));
        tracep->fullCData(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state),3);
        tracep->fullCData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state),3);
        tracep->fullCData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state),2);
        tracep->fullCData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state),2);
        tracep->fullCData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state),2);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data),64);
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2));
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index),6);
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag),23);
        tracep->fullCData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__fencei_index),7);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state),4);
        tracep->fullBit(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1));
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullWData(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data),128);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__i),32);
        tracep->fullBit(oldp+95,((1U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
        tracep->fullCData(oldp+96,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state),6);
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update));
        tracep->fullBit(oldp+98,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr));
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state),6);
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update));
        tracep->fullBit(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw));
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state),6);
        tracep->fullCData(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index),8);
        tracep->fullBit(oldp+104,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirty_hit));
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1));
        tracep->fullBit(oldp+106,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way2));
        tracep->fullQData(oldp+107,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1)
                                      ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                          << 9U) | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                                                       << 3U)))))
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way2)
                                          ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                                                   << 3U)))))
                                          : 0ULL))),64);
        tracep->fullQData(oldp+109,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1)
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way2)
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U])))
                                          : 0ULL))),64);
        tracep->fullBit(oldp+111,((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)) 
                                   & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                         >> 6U)))));
        tracep->fullBit(oldp+112,((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                      >> 6U))));
        tracep->fullBit(oldp+113,(((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)))));
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf));
        tracep->fullIData(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__i),32);
        tracep->fullIData(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__j),32);
        tracep->fullIData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullWData(oldp+121,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data),128);
        tracep->fullCData(oldp+125,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+126,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+127,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+128,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
        tracep->fullCData(oldp+129,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+130,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+131,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+132,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
        tracep->fullIData(oldp+133,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
        tracep->fullSData(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_fencei));
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+147,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
        tracep->fullBit(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1));
        tracep->fullBit(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid));
        tracep->fullBit(oldp+163,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                      | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                     | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))))));
        tracep->fullQData(oldp+164,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp),64);
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid));
        tracep->fullBit(oldp+172,((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp),64);
        tracep->fullQData(oldp+175,((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr))),64);
        tracep->fullBit(oldp+177,((((0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                    | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                   | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))));
        tracep->fullBit(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg));
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg));
        tracep->fullBit(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing));
        tracep->fullWData(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand),132);
        tracep->fullWData(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier),67);
        tracep->fullCData(oldp+189,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])),3);
        tracep->fullBit(oldp+190,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative))));
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
            __Vtemp354[1U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                               << 1U)));
            __Vtemp354[2U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                               << 1U)));
            __Vtemp354[3U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                               << 1U)));
            __Vtemp354[4U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                  >> 0x1fU) | (0xeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                  << 1U))));
            __Vtemp355[0U] = (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                 << 1U));
        } else {
            __Vtemp354[1U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp354[2U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp354[3U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp354[4U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp355[0U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
        __Vtemp355[1U] = __Vtemp354[1U];
        __Vtemp355[2U] = __Vtemp354[2U];
        __Vtemp355[3U] = __Vtemp354[3U];
        __Vtemp355[4U] = (0xfU & __Vtemp354[4U]);
        tracep->fullWData(oldp+191,(__Vtemp355),132);
        tracep->fullWData(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp),132);
        tracep->fullBit(oldp+201,((0xfU == (0xfU & 
                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U]))));
        tracep->fullBit(oldp+202,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+203,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+204,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
        tracep->fullBit(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative));
        tracep->fullBit(oldp+206,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative));
        tracep->fullBit(oldp+207,((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))));
        tracep->fullBit(oldp+208,((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
        tracep->fullBit(oldp+209,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing));
        tracep->fullWData(oldp+210,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend),128);
        tracep->fullCData(oldp+214,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt),7);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q),64);
        tracep->fullBit(oldp+217,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_exls5__DOT__flush));
        tracep->fullBit(oldp+218,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok));
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
        tracep->fullCData(oldp+221,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
        tracep->fullCData(oldp+222,((3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+223,((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                 >> 2U)))));
        tracep->fullIData(oldp+224,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data),64);
        tracep->fullQData(oldp+227,((((((- (QData)((IData)(
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
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data),64);
        tracep->fullQData(oldp+231,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                      ? 0xbULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+233,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata)),64);
        tracep->fullQData(oldp+235,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata))),64);
        tracep->fullBit(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump));
        tracep->fullBit(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__delay));
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_delay),64);
        tracep->fullBit(oldp+241,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
        tracep->fullCData(oldp+242,((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))),4);
        tracep->fullBit(oldp+243,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+244,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle),64);
        tracep->fullBit(oldp+247,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+248,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullBit(oldp+249,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie));
        tracep->fullQData(oldp+250,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+252,(((0x344U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip));
        tracep->fullQData(oldp+254,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+256,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+257,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr));
        tracep->fullBit(oldp+258,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie));
        tracep->fullBit(oldp+259,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie));
        tracep->fullCData(oldp+260,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp),2);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus),64);
        tracep->fullBit(oldp+263,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena));
        tracep->fullBit(oldp+264,((1U & ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 1U) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump))) 
                                         & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)))))));
        tracep->fullBit(oldp+265,((1U & ((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)))))));
        tracep->fullCData(oldp+266,(((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
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
        tracep->fullBit(oldp+267,((1U & ((((0x305U 
                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 2U)) 
                                          | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
        tracep->fullBit(oldp+268,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base),62);
        tracep->fullQData(oldp+271,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+273,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))));
        tracep->fullBit(oldp+274,((1U & ((((0x341U 
                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 3U)) 
                                          | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc),64);
        tracep->fullBit(oldp+277,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+278,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
        tracep->fullQData(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
        tracep->fullQData(oldp+331,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
        tracep->fullQData(oldp+333,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
        tracep->fullQData(oldp+337,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
        tracep->fullCData(oldp+345,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state),2);
        tracep->fullCData(oldp+346,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state),2);
        tracep->fullQData(oldp+347,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime),64);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp),64);
        tracep->fullBit(oldp+351,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                    ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                    : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
        tracep->fullCData(oldp+352,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
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
        tracep->fullBit(oldp+353,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                    ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                    : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
        tracep->fullBit(oldp+354,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
        tracep->fullCData(oldp+355,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                      ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                          ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      : 0U)),5);
        tracep->fullBit(oldp+356,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
        tracep->fullCData(oldp+357,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                      ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                          : 0U) : 0U)),5);
        tracep->fullQData(oldp+358,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                      ? ((0x200bff8ULL 
                                          == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                          : ((0x2004000ULL 
                                              == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+360,((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+362,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                    : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena))))));
        tracep->fullBit(oldp+363,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                          ? (1U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state_next))
                                          : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                              ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                                              : ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we))))))));
        tracep->fullBit(oldp+364,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
        tracep->fullBit(oldp+365,(((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state))
                                    ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)))
                                    : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                                        : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena))))));
        tracep->fullQData(oldp+366,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1)
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way2)
                                              ? (((QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U])))
                                              : 0ULL))
                                      : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                          : ((0x21U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+368,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                      ? (((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                           : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc) 
                                         + ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                             ? 4ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+370,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                      ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullCData(oldp+371,(((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_fencei))
                                      ? 2U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                               ? 1U
                                               : 0U))),2);
        tracep->fullCData(oldp+372,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_fencei))
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
        tracep->fullSData(oldp+373,(((0U != (0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)))
                                      ? (0xfffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                      : 0U)),12);
        tracep->fullBit(oldp+374,((((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                     ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                     : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
        tracep->fullBit(oldp+375,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
        tracep->fullIData(oldp+376,((0x7fffffU & ((
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready)))
                                                   ? (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                              >> 9U))
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag))),23);
        tracep->fullBit(oldp+377,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei) 
                                   | ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                      & (0U == ((((~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
                                                  | (~ 
                                                     vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
                                                | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]))))));
        tracep->fullBit(oldp+378,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei) 
                                   | ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                      & (0U == (((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
                                                 | (~ 
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])) 
                                                | (~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])))))));
        tracep->fullBit(oldp+379,(((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                       >> 3U)))] 
                                    & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                       >> 3U)))]) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))));
        tracep->fullBit(oldp+380,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                        : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))));
        tracep->fullBit(oldp+381,((1U & (~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                             : ((0x20U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))))));
        tracep->fullQData(oldp+382,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+384,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+386,(((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+388,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                      ? 4ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)),64);
        tracep->fullBit(oldp+390,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+391,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+392,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+393,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+394,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+395,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+396,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+397,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullQData(oldp+398,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                      : 0ULL)),64);
        tracep->fullQData(oldp+400,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                      : 0ULL)),64);
        tracep->fullQData(oldp+402,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                                          : 0ULL))),64);
        tracep->fullQData(oldp+404,(((((QData)((IData)(
                                                       vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                        << 1U) | ((QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                                  >> 0x1fU))) 
                                     - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
        tracep->fullBit(oldp+406,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                   & (2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U)))));
        tracep->fullBit(oldp+407,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                                   & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))));
        tracep->fullBit(oldp+408,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))));
        tracep->fullQData(oldp+409,(((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                      : ((0x2004000ULL 
                                          == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                          : 0ULL))),64);
        tracep->fullQData(oldp+411,(((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                      ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                         | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))
                                      : (1ULL + vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))),64);
        tracep->fullQData(oldp+413,(((0x2004000ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                      ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                          & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                         | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp))
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)),64);
        tracep->fullCData(oldp+415,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                      ? 2U : 1U)),5);
        tracep->fullQData(oldp+416,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc),64);
        tracep->fullBit(oldp+418,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
        tracep->fullBit(oldp+419,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
        tracep->fullCData(oldp+420,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size),3);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o),64);
        tracep->fullCData(oldp+423,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask),8);
        tracep->fullBit(oldp+424,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
        tracep->fullBit(oldp+425,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
        tracep->fullBit(oldp+426,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+427,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
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
        tracep->fullBit(oldp+428,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid));
        tracep->fullCData(oldp+429,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id),5);
        tracep->fullQData(oldp+430,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+432,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size),3);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data),64);
        tracep->fullCData(oldp+435,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U))),5);
        tracep->fullQData(oldp+436,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc)),64);
        tracep->fullBit(oldp+438,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid));
        tracep->fullBit(oldp+439,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready));
        tracep->fullCData(oldp+440,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : 1U)),8);
        tracep->fullCData(oldp+441,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size))),3);
        tracep->fullCData(oldp+442,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : 1U)),2);
        tracep->fullQData(oldp+443,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o)),64);
        tracep->fullCData(oldp+445,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask))),8);
        tracep->fullBit(oldp+446,(((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+447,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
        tracep->fullBit(oldp+448,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+449,((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                           ? 2U : 1U))));
        tracep->fullCData(oldp+450,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))),5);
        tracep->fullQData(oldp+451,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+453,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : 1U)),8);
        tracep->fullCData(oldp+454,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size))),3);
        tracep->fullCData(oldp+455,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 0U : 1U)),2);
        tracep->fullBit(oldp+456,((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
        tracep->fullCData(oldp+457,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                          ? 2U : 1U)
                                      : 0U)),5);
        tracep->fullQData(oldp+458,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+460,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid));
        tracep->fullBit(oldp+461,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready));
        tracep->fullCData(oldp+462,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 1U : 0U)),8);
        tracep->fullCData(oldp+463,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size)
                                      : 0U)),3);
        tracep->fullCData(oldp+464,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? 1U : 0U)),2);
        tracep->fullQData(oldp+465,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data),64);
        tracep->fullCData(oldp+467,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb),8);
        tracep->fullBit(oldp+468,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                            ? 2U : 1U)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+469,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
        tracep->fullBit(oldp+470,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready));
        tracep->fullBit(oldp+471,((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                           ? 2U : 1U))));
        tracep->fullCData(oldp+472,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                      : 0U)),5);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr),64);
        tracep->fullCData(oldp+475,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 1U : 0U)),8);
        tracep->fullCData(oldp+476,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)
                                      : 0U)),3);
        tracep->fullCData(oldp+477,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                      ? 1U : 0U)),2);
        tracep->fullBit(oldp+478,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
        tracep->fullBit(oldp+479,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid));
        tracep->fullQData(oldp+480,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc),64);
        tracep->fullBit(oldp+482,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena));
        tracep->fullBit(oldp+483,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid));
        tracep->fullIData(oldp+484,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst),32);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc),64);
        tracep->fullBit(oldp+487,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
        tracep->fullBit(oldp+488,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
        tracep->fullCData(oldp+489,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask),8);
        tracep->fullQData(oldp+490,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc),64);
        tracep->fullQData(oldp+492,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data)),64);
        tracep->fullQData(oldp+494,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data),64);
        tracep->fullBit(oldp+496,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid));
        tracep->fullBit(oldp+497,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint));
        tracep->fullQData(oldp+498,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i),64);
        tracep->fullBit(oldp+500,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
        tracep->fullBit(oldp+501,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
        tracep->fullBit(oldp+502,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
        tracep->fullCData(oldp+503,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask),8);
        tracep->fullQData(oldp+504,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data)),64);
        tracep->fullQData(oldp+506,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data),64);
        tracep->fullQData(oldp+508,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc),64);
        tracep->fullBit(oldp+510,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready));
        tracep->fullQData(oldp+511,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data),64);
        tracep->fullBit(oldp+513,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid));
        tracep->fullBit(oldp+514,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready));
        tracep->fullCData(oldp+515,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
        tracep->fullCData(oldp+516,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
        tracep->fullBit(oldp+517,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+518,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+519,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
        tracep->fullBit(oldp+520,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 1U))));
        tracep->fullQData(oldp+521,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
        tracep->fullQData(oldp+523,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
        tracep->fullQData(oldp+525,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
        tracep->fullBit(oldp+527,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
        tracep->fullCData(oldp+528,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
        tracep->fullCData(oldp+529,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
        tracep->fullCData(oldp+530,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
        tracep->fullQData(oldp+531,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
        tracep->fullCData(oldp+533,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl),7);
        tracep->fullQData(oldp+534,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
        tracep->fullQData(oldp+536,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+538,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)))));
        tracep->fullBit(oldp+539,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid));
        tracep->fullBit(oldp+540,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
        tracep->fullBit(oldp+541,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready));
        tracep->fullBit(oldp+542,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready));
        tracep->fullBit(oldp+543,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
        tracep->fullBit(oldp+544,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read));
        tracep->fullBit(oldp+545,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read));
        tracep->fullBit(oldp+546,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read))));
        tracep->fullBit(oldp+547,((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                             ? 2U : 1U))
                                     ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                     : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid))));
        tracep->fullBit(oldp+548,(((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)) 
                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+549,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh));
        tracep->fullCData(oldp+550,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next),2);
        tracep->fullBit(oldp+551,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+552,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
        tracep->fullBit(oldp+553,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand));
        tracep->fullBit(oldp+554,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
        tracep->fullCData(oldp+555,(((6U == ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
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
        tracep->fullBit(oldp+556,(((7U == ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
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
        tracep->fullIData(oldp+557,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+558,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+559,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
        tracep->fullBit(oldp+560,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__inst_valid));
        tracep->fullWData(oldp+561,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__miss_data),128);
        tracep->fullWData(oldp+565,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb),128);
        tracep->fullBit(oldp+569,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena));
        tracep->fullBit(oldp+570,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid));
        tracep->fullIData(oldp+571,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_with_valid),24);
        tracep->fullCData(oldp+572,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index),6);
        tracep->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena)))));
        __Vtemp358[0U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]);
        __Vtemp358[1U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]);
        __Vtemp358[2U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]);
        __Vtemp358[3U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]);
        tracep->fullWData(oldp+574,(__Vtemp358),128);
        tracep->fullBit(oldp+578,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena));
        tracep->fullIData(oldp+579,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+580,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+581,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next),6);
        tracep->fullBit(oldp+582,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit));
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit));
        tracep->fullBit(oldp+584,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty));
        tracep->fullBit(oldp+585,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready));
        tracep->fullBit(oldp+586,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid));
        tracep->fullBit(oldp+587,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid));
        tracep->fullQData(oldp+588,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc),64);
        tracep->fullBit(oldp+590,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena));
        tracep->fullWData(oldp+591,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data),128);
        tracep->fullBit(oldp+595,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid));
        tracep->fullBit(oldp+596,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena));
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data),64);
        tracep->fullCData(oldp+599,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next),6);
        tracep->fullBit(oldp+600,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit));
        tracep->fullBit(oldp+601,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit));
        tracep->fullBit(oldp+602,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty));
        tracep->fullBit(oldp+603,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready));
        tracep->fullBit(oldp+604,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid));
        tracep->fullWData(oldp+605,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb),128);
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64),64);
        tracep->fullBit(oldp+611,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid));
        tracep->fullQData(oldp+612,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc),64);
        tracep->fullBit(oldp+614,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena));
        tracep->fullWData(oldp+615,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data),128);
        tracep->fullBit(oldp+619,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid));
        tracep->fullBit(oldp+620,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena));
        tracep->fullQData(oldp+621,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data),64);
        tracep->fullCData(oldp+623,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state_next),6);
        tracep->fullIData(oldp+624,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_with_valid),24);
        tracep->fullCData(oldp+625,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_index),6);
        tracep->fullCData(oldp+626,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__ram_index),6);
        tracep->fullIData(oldp+627,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
        tracep->fullSData(oldp+628,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
        tracep->fullCData(oldp+629,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)),7);
        tracep->fullBit(oldp+630,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
        tracep->fullBit(oldp+631,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_ifid1__DOT__flush));
        tracep->fullBit(oldp+632,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_ifid1__DOT__stall));
        tracep->fullBit(oldp+633,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 2U))));
        tracep->fullBit(oldp+634,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward));
        tracep->fullBit(oldp+635,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward));
        tracep->fullBit(oldp+636,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward));
        tracep->fullBit(oldp+637,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward));
        tracep->fullBit(oldp+638,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward));
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward));
        tracep->fullBit(oldp+640,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward))));
        tracep->fullBit(oldp+641,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward))));
        tracep->fullQData(oldp+642,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
        tracep->fullBit(oldp+644,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
        tracep->fullCData(oldp+645,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+646,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+647,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+648,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+649,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+650,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+651,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+652,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+653,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+654,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+655,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+656,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+657,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+658,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+659,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+660,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+661,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+662,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+663,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+664,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+665,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+666,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+667,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+668,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+669,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+670,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+671,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+672,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+673,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+674,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+675,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+676,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+677,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+678,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+679,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+680,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+681,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+682,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+683,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+684,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+685,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+686,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+687,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+688,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+689,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+690,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+691,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+692,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+693,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+694,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+695,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+696,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+697,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+698,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+699,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+700,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
        tracep->fullBit(oldp+701,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
        tracep->fullBit(oldp+702,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+703,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+704,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+705,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+706,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+707,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+708,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+709,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+710,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump));
        tracep->fullBit(oldp+711,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb3U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
        tracep->fullBit(oldp+712,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_idex3__DOT__flush));
        tracep->fullBit(oldp+713,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_idex3__DOT__stall));
        tracep->fullQData(oldp+714,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
        tracep->fullBit(oldp+716,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul));
        tracep->fullCData(oldp+717,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed),2);
        tracep->fullBit(oldp+718,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw));
        tracep->fullBit(oldp+719,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid));
        tracep->fullBit(oldp+720,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div));
        tracep->fullBit(oldp+721,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed));
        tracep->fullBit(oldp+722,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw));
        tracep->fullBit(oldp+723,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid));
        tracep->fullQData(oldp+724,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res),64);
        tracep->fullBit(oldp+726,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena));
        tracep->fullBit(oldp+727,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena));
        tracep->fullBit(oldp+728,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena));
        tracep->fullBit(oldp+729,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena));
        tracep->fullBit(oldp+730,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena));
        tracep->fullBit(oldp+731,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena));
        tracep->fullBit(oldp+732,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena));
        tracep->fullBit(oldp+733,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall));
        tracep->fullBit(oldp+734,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
        tracep->fullBit(oldp+735,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div))));
        tracep->fullQData(oldp+736,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp),64);
        tracep->fullQData(oldp+738,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp),64);
        VL_EXTEND_WQ(66,64, __Vtemp360, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
        if ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
            __Vtemp362[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
            __Vtemp362[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                      >> 0x20U));
            __Vtemp362[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp362[0U] = __Vtemp360[0U];
            __Vtemp362[1U] = __Vtemp360[1U];
            __Vtemp362[2U] = __Vtemp360[2U];
        }
        tracep->fullWData(oldp+740,(__Vtemp362),66);
        VL_EXTEND_WQ(66,64, __Vtemp364, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
        if ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
            __Vtemp366[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
            __Vtemp366[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                      >> 0x20U));
            __Vtemp366[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp366[0U] = __Vtemp364[0U];
            __Vtemp366[1U] = __Vtemp364[1U];
            __Vtemp366[2U] = __Vtemp364[2U];
        }
        tracep->fullWData(oldp+743,(__Vtemp366),66);
        tracep->fullQData(oldp+746,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
        tracep->fullQData(oldp+748,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
        tracep->fullBit(oldp+750,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign));
        tracep->fullBit(oldp+751,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign));
        tracep->fullQData(oldp+752,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                      ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
        tracep->fullQData(oldp+754,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
        VL_EXTEND_WQ(65,64, __Vtemp367, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
        tracep->fullWData(oldp+756,(__Vtemp367),65);
        tracep->fullBit(oldp+759,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign));
        tracep->fullQData(oldp+760,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
        tracep->fullQData(oldp+762,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
        tracep->fullBit(oldp+764,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_exls5__DOT__stall));
        tracep->fullQData(oldp+765,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
        tracep->fullCData(oldp+767,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
        tracep->fullSData(oldp+768,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
        tracep->fullBit(oldp+769,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid));
        tracep->fullBit(oldp+770,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready))));
        tracep->fullBit(oldp+771,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready))));
        tracep->fullBit(oldp+772,((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
        tracep->fullBit(oldp+773,((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
        tracep->fullBit(oldp+774,((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
        tracep->fullBit(oldp+775,((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
        tracep->fullQData(oldp+776,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask),64);
        tracep->fullBit(oldp+778,(vlSelf->clk));
        tracep->fullBit(oldp+779,(vlSelf->rst));
        tracep->fullQData(oldp+780,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1)
                                          ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                                                   << 3U)))))
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way2)
                                              ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                  << 9U) 
                                                 | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                                                       << 3U)))))
                                              : 0ULL))
                                      : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc
                                          : ((0x10U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                              ? ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : 
                                                 (((0x10U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
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
                                                   : 0ULL))
                                              : ((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc
                                                  : 
                                                 ((0x21U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                   ? 
                                                  ((IData)(vlSelf->rst)
                                                    ? 0ULL
                                                    : 
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
                                                     : 0ULL))
                                                   : 0ULL)))))),64);
        tracep->fullBit(oldp+782,(((~ (IData)(vlSelf->rst)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                         >> 0xbU)))));
        tracep->fullQData(oldp+783,((((IData)(vlSelf->rst) 
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
        tracep->fullIData(oldp+785,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->fullQData(oldp+786,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+788,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+790,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                      : 0ULL)),64);
        tracep->fullCData(oldp+792,(((IData)(vlSelf->rst)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                               ? ((
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)))
                                                   ? 3U
                                                   : 1U)
                                               : ((3U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand)
                                                    ? 1U
                                                    : 3U)
                                                   : 1U)))),2);
        tracep->fullCData(oldp+793,(((IData)(vlSelf->rst)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                                                   ? 2U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                                   ? 
                                                  (((2U 
                                                     != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))
                                                    ? 1U
                                                    : 2U)
                                                   : 1U)))),2);
        tracep->fullBit(oldp+794,(((~ (IData)(vlSelf->rst)) 
                                   & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready)))));
        tracep->fullBit(oldp+795,(((~ (IData)(vlSelf->rst)) 
                                   & ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                         & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                            | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                         >> 3U)))]))))));
        tracep->fullBit(oldp+796,(((~ (IData)(vlSelf->rst)) 
                                   & ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                                            >> 3U)))])))))));
        if (vlSelf->rst) {
            __Vtemp382[0U] = 0U;
            __Vtemp382[1U] = 0U;
            __Vtemp382[2U] = 0U;
            __Vtemp382[3U] = 0U;
        } else {
            __Vtemp382[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp382[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp382[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp382[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
        }
        tracep->fullWData(oldp+797,(__Vtemp382),128);
        tracep->fullQData(oldp+801,(((IData)(vlSelf->rst)
                                      ? 0ULL : (((0x10U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
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
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+803,(((~ (IData)(vlSelf->rst)) 
                                   & ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready)))));
        if (vlSelf->rst) {
            __Vtemp388[0U] = 0U;
            __Vtemp388[1U] = 0U;
            __Vtemp388[2U] = 0U;
            __Vtemp388[3U] = 0U;
        } else {
            __Vtemp388[0U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                               : 0U);
            __Vtemp388[1U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                          >> 0x20U))
                               : 0U);
            __Vtemp388[2U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                               : 0U);
            __Vtemp388[3U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                          >> 0x20U))
                               : 0U);
        }
        tracep->fullWData(oldp+804,(__Vtemp388),128);
        tracep->fullBit(oldp+808,(((~ (IData)(vlSelf->rst)) 
                                   & ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
                                                              >> 3U)))]))))))));
        tracep->fullBit(oldp+809,(((~ (IData)(vlSelf->rst)) 
                                   & ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild) 
                                            & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                               | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))])))))));
        if (vlSelf->rst) {
            __Vtemp407[0U] = 0U;
            __Vtemp407[1U] = 0U;
            __Vtemp407[2U] = 0U;
            __Vtemp407[3U] = 0U;
        } else {
            __Vtemp407[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
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
                                        : 0U));
            __Vtemp407[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
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
                                        : 0U));
            __Vtemp407[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U) : 0U));
            __Vtemp407[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U) : 0U));
        }
        tracep->fullWData(oldp+810,(__Vtemp407),128);
        tracep->fullQData(oldp+814,(((IData)(vlSelf->rst)
                                      ? 0ULL : (((0x21U 
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
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+816,(((~ (IData)(vlSelf->rst)) 
                                   & ((~ ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)))) 
                                      & ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf))))));
        tracep->fullBit(oldp+817,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                    ? (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)) 
                                       & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                             >> 6U)))
                                    : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                        ? ((~ (IData)(vlSelf->rst)) 
                                           & ((~ ((8U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                              & (((8U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))))
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & ((~ (IData)(vlSelf->rst)) 
                                              & ((~ 
                                                  ((0x20U 
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
                                                                         >> 3U)))])))))))))));
        tracep->fullBit(oldp+818,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                    ? (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)) 
                                       & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                          >> 6U)) : 
                                   ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                     ? ((~ (IData)(vlSelf->rst)) 
                                        & ((~ ((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                           & (((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                              & ((~ 
                                                  ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))])) 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                >> 3U)))])))))
                                     : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                        & ((~ (IData)(vlSelf->rst)) 
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
                                                                   >> 3U)))]))))))))));
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp448[0U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0xffffffffU
                                                : 0U)
                                            : 0U)));
            __Vtemp448[1U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0xffffffffU
                                                : 0U)
                                            : 0U)));
            __Vtemp448[2U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))
                                                    ? 0xffffffffU
                                                    : 0U))
                                            : 0U)));
            __Vtemp448[3U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))
                                                    ? 0xffffffffU
                                                    : 0U))
                                            : 0U)));
        } else {
            __Vtemp448[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                   : 0U));
            __Vtemp448[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                   : 0U));
            __Vtemp448[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                   : 0U));
            __Vtemp448[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                   : 0U));
        }
        tracep->fullWData(oldp+819,(__Vtemp448),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp461[0U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U];
            __Vtemp461[1U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U];
            __Vtemp461[2U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U];
            __Vtemp461[3U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U];
        } else {
            __Vtemp461[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->rst)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                ? (IData)(
                                                          ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                            ? 0ULL
                                                            : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                                : 0U))
                                   : 0U));
            __Vtemp461[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->rst)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                ? (IData)(
                                                          (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                             ? 0ULL
                                                             : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                           >> 0x20U))
                                                : 0U))
                                   : 0U));
            __Vtemp461[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->rst)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                ? (IData)(
                                                          ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                            ? 0ULL
                                                            : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                                : 0U))
                                   : 0U));
            __Vtemp461[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->rst)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                ? (IData)(
                                                          (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                             ? 0ULL
                                                             : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                           >> 0x20U))
                                                : 0U))
                                   : 0U));
        }
        tracep->fullWData(oldp+823,(__Vtemp461),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp502[0U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0xffffffffU
                                                : 0U)
                                            : 0U)));
            __Vtemp502[1U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0xffffffffU
                                                : 0U)
                                            : 0U)));
            __Vtemp502[2U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))
                                                    ? 0xffffffffU
                                                    : 0U))
                                            : 0U)));
            __Vtemp502[3U] = ((IData)(vlSelf->rst) ? 0U
                               : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                   ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                            ? ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))
                                                    ? 0xffffffffU
                                                    : 0U))
                                            : 0U)));
        } else {
            __Vtemp502[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                   : 0U));
            __Vtemp502[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                   : 0U));
            __Vtemp502[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                   : 0U));
            __Vtemp502[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
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
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                   : 0U));
        }
        __Vtemp503[0U] = (~ __Vtemp502[0U]);
        __Vtemp503[1U] = (~ __Vtemp502[1U]);
        __Vtemp503[2U] = (~ __Vtemp502[2U]);
        __Vtemp503[3U] = (~ __Vtemp502[3U]);
        tracep->fullWData(oldp+827,(__Vtemp503),128);
        tracep->fullBit(oldp+831,(((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))));
        tracep->fullQData(oldp+832,((((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+834,((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
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
        tracep->fullBit(oldp+836,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+837,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+838,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
                                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2))))))))))));
        tracep->fullQData(oldp+839,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                                 ? 
                                                ((0x58U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo
                                                  : 
                                                 ((((0xb0U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                    | (0x26U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                   | (0x13U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                                    : 0ULL)
                                                   : 
                                                  ((0x4cU 
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
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+841,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->fullQData(oldp+843,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->fullCData(oldp+845,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+846,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+847,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullQData(oldp+848,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+850,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))),64);
        tracep->fullQData(oldp+852,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+854,(((IData)(vlSelf->rst)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                                               ? ((
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)) 
                                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)))
                                                   ? 3U
                                                   : 1U)
                                               : ((3U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                                    & (2U 
                                                       == 
                                                       ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                         ? 2U
                                                         : 1U)))
                                                    ? 1U
                                                    : 3U)
                                                   : 1U)))),2);
        tracep->fullCData(oldp+855,(((IData)(vlSelf->rst)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                               ? ((
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))
                                                   ? 2U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                                   ? 
                                                  (((2U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))
                                                    ? 1U
                                                    : 2U)
                                                   : 1U)))),2);
        tracep->fullCData(oldp+856,(1U),8);
        tracep->fullCData(oldp+857,(1U),2);
        tracep->fullCData(oldp+858,(0U),2);
        tracep->fullBit(oldp+859,(1U));
        tracep->fullBit(oldp+860,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ifid_jumpflush));
        tracep->fullBit(oldp+861,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_ex_csr_update));
        tracep->fullQData(oldp+862,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_bpu_data),64);
        tracep->fullBit(oldp+864,(0U));
        tracep->fullBit(oldp+865,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_flush));
        tracep->fullBit(oldp+866,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_flush));
        tracep->fullIData(oldp+867,(0x80U),32);
        tracep->fullIData(oldp+868,(0x40U),32);
        tracep->fullIData(oldp+869,(6U),32);
        tracep->fullBit(oldp+870,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way1_clean));
        tracep->fullBit(oldp+871,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way2_clean));
        tracep->fullIData(oldp+872,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
    }
}
