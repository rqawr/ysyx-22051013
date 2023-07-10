// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013__Syms.h"


void Vysyx_22051013___024root__traceInitSub0(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22051013___024root__traceInitTop(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22051013___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22051013___024root__traceInitSub0(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+804,"clock", false,-1);
        tracep->declBit(c+805,"reset", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 clock", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 reset", false,-1);
        tracep->declBus(c+432,"ysyx_22051013 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+433,"ysyx_22051013 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+435,"ysyx_22051013 axi_aw_valid", false,-1);
        tracep->declBit(c+436,"ysyx_22051013 axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+437,"ysyx_22051013 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+881,"ysyx_22051013 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+438,"ysyx_22051013 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+440,"ysyx_22051013 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+441,"ysyx_22051013 axi_w_last", false,-1);
        tracep->declBit(c+442,"ysyx_22051013 axi_w_valid", false,-1);
        tracep->declBit(c+443,"ysyx_22051013 axi_w_ready", false,-1);
        tracep->declBus(c+444,"ysyx_22051013 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+363,"ysyx_22051013 axi_b_valid", false,-1);
        tracep->declBit(c+883,"ysyx_22051013 axi_b_ready", false,-1);
        tracep->declBus(c+445,"ysyx_22051013 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+446,"ysyx_22051013 axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013 axi_ar_valid", false,-1);
        tracep->declBit(c+364,"ysyx_22051013 axi_ar_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+448,"ysyx_22051013 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+881,"ysyx_22051013 axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+449,"ysyx_22051013 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+450,"ysyx_22051013 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+365,"ysyx_22051013 axi_r_last", false,-1);
        tracep->declBit(c+365,"ysyx_22051013 axi_r_valid", false,-1);
        tracep->declBit(c+883,"ysyx_22051013 axi_r_ready", false,-1);
        tracep->declBus(c+452,"ysyx_22051013 soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+453,"ysyx_22051013 soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+455,"ysyx_22051013 soc_axi_aw_valid", false,-1);
        tracep->declBit(c+456,"ysyx_22051013 soc_axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+457,"ysyx_22051013 soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+458,"ysyx_22051013 soc_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+459,"ysyx_22051013 soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+461,"ysyx_22051013 soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+462,"ysyx_22051013 soc_axi_w_last", false,-1);
        tracep->declBit(c+463,"ysyx_22051013 soc_axi_w_valid", false,-1);
        tracep->declBit(c+464,"ysyx_22051013 soc_axi_w_ready", false,-1);
        tracep->declBus(c+452,"ysyx_22051013 soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013 soc_axi_b_valid", false,-1);
        tracep->declBit(c+465,"ysyx_22051013 soc_axi_b_ready", false,-1);
        tracep->declBus(c+466,"ysyx_22051013 soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+467,"ysyx_22051013 soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+366,"ysyx_22051013 soc_axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013 soc_axi_ar_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+469,"ysyx_22051013 soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+470,"ysyx_22051013 soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+367,"ysyx_22051013 soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+4,"ysyx_22051013 soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013 soc_axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013 soc_axi_r_valid", false,-1);
        tracep->declBit(c+471,"ysyx_22051013 soc_axi_r_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013 t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+473,"ysyx_22051013 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+475,"ysyx_22051013 t_axi_aw_valid", false,-1);
        tracep->declBit(c+475,"ysyx_22051013 t_axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+476,"ysyx_22051013 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+477,"ysyx_22051013 t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+478,"ysyx_22051013 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+480,"ysyx_22051013 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+481,"ysyx_22051013 t_axi_w_last", false,-1);
        tracep->declBit(c+482,"ysyx_22051013 t_axi_w_valid", false,-1);
        tracep->declBit(c+483,"ysyx_22051013 t_axi_w_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013 t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013 t_axi_b_valid", false,-1);
        tracep->declBit(c+484,"ysyx_22051013 t_axi_b_ready", false,-1);
        tracep->declBus(c+485,"ysyx_22051013 t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+486,"ysyx_22051013 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+368,"ysyx_22051013 t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013 t_axi_ar_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+488,"ysyx_22051013 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+489,"ysyx_22051013 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBus(c+369,"ysyx_22051013 t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+370,"ysyx_22051013 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013 t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013 t_axi_r_valid", false,-1);
        tracep->declBit(c+490,"ysyx_22051013 t_axi_r_ready", false,-1);
        tracep->declQuad(c+491,"ysyx_22051013 core_idsel_inst_pc", false,-1, 63,0);
        tracep->declBit(c+493,"ysyx_22051013 core_idsel_core_ready", false,-1);
        tracep->declBit(c+494,"ysyx_22051013 idsel_core_inst_valid", false,-1);
        tracep->declBus(c+495,"ysyx_22051013 idsel_core_inst", false,-1, 31,0);
        tracep->declQuad(c+10,"ysyx_22051013 idsel_core_pc", false,-1, 63,0);
        tracep->declBit(c+496,"ysyx_22051013 idsel_axi_re", false,-1);
        tracep->declQuad(c+497,"ysyx_22051013 axi_idsel_inst_i", false,-1, 63,0);
        tracep->declBus(c+12,"ysyx_22051013 idsel_axi_inst_size", false,-1, 2,0);
        tracep->declQuad(c+372,"ysyx_22051013 idsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051013 axi_idsel_valid", false,-1);
        tracep->declBit(c+500,"ysyx_22051013 icache_idsel_axi_re", false,-1);
        tracep->declQuad(c+501,"ysyx_22051013 icache_idsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+503,"ysyx_22051013 idsel_icache_ena", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 idsel_icache_fencei", false,-1);
        tracep->declBus(c+504,"ysyx_22051013 icache_idsel_inst", false,-1, 31,0);
        tracep->declQuad(c+14,"ysyx_22051013 icache_core_pc", false,-1, 63,0);
        tracep->declQuad(c+505,"ysyx_22051013 idsel_icache_pc", false,-1, 63,0);
        tracep->declBit(c+374,"ysyx_22051013 icache_idsel_valid", false,-1);
        tracep->declBit(c+507,"ysyx_22051013 idsel_icache_ready", false,-1);
        tracep->declQuad(c+375,"ysyx_22051013 axi_idsel_icache_inst", false,-1, 63,0);
        tracep->declBit(c+508,"ysyx_22051013 axi_idsel_icache_valid", false,-1);
        tracep->declBit(c+509,"ysyx_22051013 core_ddsel_we", false,-1);
        tracep->declBit(c+510,"ysyx_22051013 core_ddsel_re", false,-1);
        tracep->declBus(c+511,"ysyx_22051013 core_ddsel_wlen", false,-1, 7,0);
        tracep->declQuad(c+512,"ysyx_22051013 core_ddsel_data_pc", false,-1, 63,0);
        tracep->declQuad(c+514,"ysyx_22051013 ddsel_core_data_temp", false,-1, 63,0);
        tracep->declQuad(c+516,"ysyx_22051013 core_ddsel_ls_data", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22051013 core_ddsel_core_ready", false,-1);
        tracep->declBit(c+518,"ysyx_22051013 ddsel_core_data_valid", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 core_ddsel_fencei", false,-1);
        tracep->declQuad(c+17,"ysyx_22051013 core_ddsel_device_data", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_22051013 core_ddsel_data_size", false,-1, 2,0);
        tracep->declBit(c+519,"ysyx_22051013 ddsel_axi_clint", false,-1);
        tracep->declBit(c+377,"ysyx_22051013 ddsel_axi_re", false,-1);
        tracep->declBit(c+441,"ysyx_22051013 ddsel_axi_we", false,-1);
        tracep->declBus(c+440,"ysyx_22051013 ddsel_axi_mask", false,-1, 7,0);
        tracep->declQuad(c+438,"ysyx_22051013 ddsel_axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+520,"ysyx_22051013 axi_ddsel_data_i", false,-1, 63,0);
        tracep->declQuad(c+433,"ysyx_22051013 ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+522,"ysyx_22051013 axi_ddsel_valid", false,-1);
        tracep->declBus(c+437,"ysyx_22051013 ddsel_axi_data_size", false,-1, 2,0);
        tracep->declBit(c+13,"ysyx_22051013 ddsel_dcache_fencei", false,-1);
        tracep->declBit(c+523,"ysyx_22051013 ddsel_dcache_re", false,-1);
        tracep->declBit(c+524,"ysyx_22051013 ddsel_dcache_we", false,-1);
        tracep->declBus(c+525,"ysyx_22051013 ddsel_dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+526,"ysyx_22051013 ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+528,"ysyx_22051013 dcache_ddsel_data", false,-1, 63,0);
        tracep->declQuad(c+530,"ysyx_22051013 ddsel_dcache_pc", false,-1, 63,0);
        tracep->declBit(c+378,"ysyx_22051013 dcache_ddsel_valid", false,-1);
        tracep->declBit(c+532,"ysyx_22051013 ddsel_dcache_ready", false,-1);
        tracep->declBit(c+379,"ysyx_22051013 dcache_ddsel_axi_re", false,-1);
        tracep->declBit(c+380,"ysyx_22051013 dcache_ddsel_axi_we", false,-1);
        tracep->declQuad(c+533,"ysyx_22051013 axi_ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+381,"ysyx_22051013 dcache_ddsel_axi_data", false,-1, 63,0);
        tracep->declQuad(c+806,"ysyx_22051013 dcache_ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+535,"ysyx_22051013 axi_ddsel_dcache_valid", false,-1);
        tracep->declBit(c+20,"ysyx_22051013 time_interrupt", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 rst", false,-1);
        tracep->declBit(c+494,"ysyx_22051013 rvcore0 inst_valid", false,-1);
        tracep->declBit(c+493,"ysyx_22051013 rvcore0 if_core_ready", false,-1);
        tracep->declBus(c+495,"ysyx_22051013 rvcore0 if_inst", false,-1, 31,0);
        tracep->declQuad(c+10,"ysyx_22051013 rvcore0 if_pc", false,-1, 63,0);
        tracep->declQuad(c+491,"ysyx_22051013 rvcore0 if_pc_next", false,-1, 63,0);
        tracep->declBit(c+509,"ysyx_22051013 rvcore0 we", false,-1);
        tracep->declBit(c+510,"ysyx_22051013 rvcore0 re", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 fencei_o", false,-1);
        tracep->declBit(c+16,"ysyx_22051013 rvcore0 id_core_ready", false,-1);
        tracep->declQuad(c+512,"ysyx_22051013 rvcore0 data_pc", false,-1, 63,0);
        tracep->declQuad(c+514,"ysyx_22051013 rvcore0 data_temp", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013 rvcore0 device_data_o", false,-1, 63,0);
        tracep->declQuad(c+516,"ysyx_22051013 rvcore0 ls_data_o", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_22051013 rvcore0 data_size", false,-1, 2,0);
        tracep->declBus(c+511,"ysyx_22051013 rvcore0 wlen", false,-1, 7,0);
        tracep->declBit(c+518,"ysyx_22051013 rvcore0 data_valid", false,-1);
        tracep->declBit(c+20,"ysyx_22051013 rvcore0 time_interrupt", false,-1);
        tracep->declBit(c+808,"ysyx_22051013 rvcore0 bpu_ifid_jump", false,-1);
        tracep->declQuad(c+809,"ysyx_22051013 rvcore0 bpu_if_pc", false,-1, 63,0);
        tracep->declBus(c+495,"ysyx_22051013 rvcore0 ifid_if_inst", false,-1, 31,0);
        tracep->declQuad(c+10,"ysyx_22051013 rvcore0 ifid_if_pc", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22051013 rvcore0 ifid_id_inst", false,-1, 31,0);
        tracep->declQuad(c+22,"ysyx_22051013 rvcore0 ifid_id_pc", false,-1, 63,0);
        tracep->declBit(c+24,"ysyx_22051013 rvcore0 ifid_id_jump", false,-1);
        tracep->declBus(c+536,"ysyx_22051013 rvcore0 id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+537,"ysyx_22051013 rvcore0 id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+538,"ysyx_22051013 rvcore0 id_reg_rs1_ena", false,-1);
        tracep->declBit(c+539,"ysyx_22051013 rvcore0 id_reg_rs2_ena", false,-1);
        tracep->declQuad(c+383,"ysyx_22051013 rvcore0 id_if_pc", false,-1, 63,0);
        tracep->declBit(c+540,"ysyx_22051013 rvcore0 id_if_pc_sel", false,-1);
        tracep->declBit(c+541,"ysyx_22051013 rvcore0 id_load_flag", false,-1);
        tracep->declBit(c+542,"ysyx_22051013 rvcore0 csr_ena", false,-1);
        tracep->declBit(c+25,"ysyx_22051013 rvcore0 ex_csr_ena", false,-1);
        tracep->declBit(c+26,"ysyx_22051013 rvcore0 ls_csr_ena", false,-1);
        tracep->declBus(c+27,"ysyx_22051013 rvcore0 csr_imm", false,-1, 4,0);
        tracep->declQuad(c+811,"ysyx_22051013 rvcore0 idex_id_pc", false,-1, 63,0);
        tracep->declQuad(c+543,"ysyx_22051013 rvcore0 idex_id_op1", false,-1, 63,0);
        tracep->declQuad(c+545,"ysyx_22051013 rvcore0 idex_id_op2", false,-1, 63,0);
        tracep->declQuad(c+547,"ysyx_22051013 rvcore0 idex_id_imm", false,-1, 63,0);
        tracep->declBit(c+549,"ysyx_22051013 rvcore0 idex_id_rd_ena", false,-1);
        tracep->declBus(c+385,"ysyx_22051013 rvcore0 idex_id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+550,"ysyx_22051013 rvcore0 idex_id_lsctl", false,-1, 3,0);
        tracep->declBus(c+551,"ysyx_22051013 rvcore0 idex_id_wbctl", false,-1, 1,0);
        tracep->declBus(c+552,"ysyx_22051013 rvcore0 idex_id_alu_sel", false,-1, 7,0);
        tracep->declBus(c+386,"ysyx_22051013 rvcore0 idex_id_op1sel", false,-1, 1,0);
        tracep->declBus(c+387,"ysyx_22051013 rvcore0 idex_id_op2sel", false,-1, 2,0);
        tracep->declBus(c+813,"ysyx_22051013 rvcore0 idex_id_inst", false,-1, 31,0);
        tracep->declBus(c+28,"ysyx_22051013 rvcore0 idex_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+29,"ysyx_22051013 rvcore0 idex_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22051013 rvcore0 idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22051013 rvcore0 idex_ex_op2", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013 rvcore0 idex_ex_imm", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22051013 rvcore0 idex_ex_rd_ena", false,-1);
        tracep->declBus(c+38,"ysyx_22051013 rvcore0 idex_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_22051013 rvcore0 idex_ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+40,"ysyx_22051013 rvcore0 idex_ex_wbctl", false,-1, 1,0);
        tracep->declBus(c+41,"ysyx_22051013 rvcore0 idex_ex_alu_sel", false,-1, 7,0);
        tracep->declBus(c+42,"ysyx_22051013 rvcore0 idex_ex_op1sel", false,-1, 1,0);
        tracep->declBus(c+43,"ysyx_22051013 rvcore0 idex_ex_op2sel", false,-1, 2,0);
        tracep->declBus(c+44,"ysyx_22051013 rvcore0 idex_ex_rs1_addr", false,-1, 4,0);
        tracep->declBit(c+25,"ysyx_22051013 rvcore0 idex_ex_csr_ena", false,-1);
        tracep->declBus(c+38,"ysyx_22051013 rvcore0 ex_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+553,"ysyx_22051013 rvcore0 ex_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013 rvcore0 ex_load_ena", false,-1);
        tracep->declBus(c+555,"ysyx_22051013 rvcore0 exls_ex_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+388,"ysyx_22051013 rvcore0 exls_ex_csr_addr", false,-1, 11,0);
        tracep->declBit(c+46,"ysyx_22051013 rvcore0 exls_ex_fencei", false,-1);
        tracep->declQuad(c+553,"ysyx_22051013 rvcore0 exls_ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22051013 rvcore0 exls_ex_store_data", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22051013 rvcore0 exls_ls_inst", false,-1, 31,0);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 exls_ls_fencei", false,-1);
        tracep->declQuad(c+48,"ysyx_22051013 rvcore0 exls_ls_pc", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22051013 rvcore0 exls_ls_aludata", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013 rvcore0 exls_ls_store_data", false,-1, 63,0);
        tracep->declBit(c+52,"ysyx_22051013 rvcore0 exls_ls_rd_ena", false,-1);
        tracep->declBus(c+53,"ysyx_22051013 rvcore0 exls_ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+54,"ysyx_22051013 rvcore0 exls_ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+55,"ysyx_22051013 rvcore0 exls_ls_wbctl", false,-1, 1,0);
        tracep->declBus(c+56,"ysyx_22051013 rvcore0 exls_ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+57,"ysyx_22051013 rvcore0 exls_ls_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+556,"ysyx_22051013 rvcore0 ls_lswb_data_forward", false,-1, 63,0);
        tracep->declBus(c+53,"ysyx_22051013 rvcore0 ls_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+556,"ysyx_22051013 rvcore0 ls_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 ls_if_pc_sel", false,-1);
        tracep->declQuad(c+50,"ysyx_22051013 rvcore0 ls_if_pc", false,-1, 63,0);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 ls_flush", false,-1);
        tracep->declQuad(c+558,"ysyx_22051013 rvcore0 lswb_ls_wbdata", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013 rvcore0 lswb_wb_inst", false,-1, 31,0);
        tracep->declBus(c+59,"ysyx_22051013 rvcore0 lswb_wb_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+60,"ysyx_22051013 rvcore0 lswb_wb_csr_addr", false,-1, 11,0);
        tracep->declQuad(c+61,"ysyx_22051013 rvcore0 lswb_wb_pc", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22051013 rvcore0 lswb_wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+64,"ysyx_22051013 rvcore0 lswb_wb_wbdata", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22051013 rvcore0 lswb_wb_aludata", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013 rvcore0 lswb_wb_rd_ena", false,-1);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 lswb_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051013 rvcore0 wb_reg_rd_data", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013 rvcore0 wb_reg_rd_ena", false,-1);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 wb_reg_rd_addr", false,-1, 4,0);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 wb_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051013 rvcore0 wb_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 ie_if_pc_sel", false,-1);
        tracep->declQuad(c+73,"ysyx_22051013 rvcore0 ie_if_pc", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 ie_flush", false,-1);
        tracep->declQuad(c+814,"ysyx_22051013 rvcore0 reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+816,"ysyx_22051013 rvcore0 reg_id_rs2_data", false,-1, 63,0);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 if_valid", false,-1);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 id_valid", false,-1);
        tracep->declBit(c+561,"ysyx_22051013 rvcore0 ex_valid", false,-1);
        tracep->declBit(c+562,"ysyx_22051013 rvcore0 ls_valid", false,-1);
        tracep->declBit(c+884,"ysyx_22051013 rvcore0 wb_ready", false,-1);
        tracep->declBit(c+563,"ysyx_22051013 rvcore0 ls_ready", false,-1);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 ex_ready", false,-1);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 id_ready", false,-1);
        tracep->declBit(c+565,"ysyx_22051013 rvcore0 id_idex_flush", false,-1);
        tracep->declBit(c+540,"ysyx_22051013 rvcore0 id_ifid_flush", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 bpu_static clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 bpu_static rst", false,-1);
        tracep->declBus(c+495,"ysyx_22051013 rvcore0 bpu_static inst", false,-1, 31,0);
        tracep->declQuad(c+10,"ysyx_22051013 rvcore0 bpu_static pc_i", false,-1, 63,0);
        tracep->declQuad(c+809,"ysyx_22051013 rvcore0 bpu_static pc_o", false,-1, 63,0);
        tracep->declBit(c+808,"ysyx_22051013 rvcore0 bpu_static bpu_jump", false,-1);
        tracep->declBus(c+566,"ysyx_22051013 rvcore0 bpu_static j_imm", false,-1, 20,1);
        tracep->declBus(c+567,"ysyx_22051013 rvcore0 bpu_static b_imm", false,-1, 12,1);
        tracep->declBus(c+568,"ysyx_22051013 rvcore0 bpu_static opcode", false,-1, 6,0);
        tracep->declBit(c+818,"ysyx_22051013 rvcore0 bpu_static inst_jal", false,-1);
        tracep->declBit(c+569,"ysyx_22051013 rvcore0 bpu_static inst_bxx", false,-1);
        tracep->declQuad(c+10,"ysyx_22051013 rvcore0 bpu_static op1", false,-1, 63,0);
        tracep->declQuad(c+819,"ysyx_22051013 rvcore0 bpu_static op2", false,-1, 63,0);
        tracep->declQuad(c+821,"ysyx_22051013 rvcore0 bpu_static pr_pc", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx_22051013 rvcore0 bpu_static hold", false,-1);
        tracep->declBit(c+540,"ysyx_22051013 rvcore0 ifu0 id_pc_jump", false,-1);
        tracep->declQuad(c+383,"ysyx_22051013 rvcore0 ifu0 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 ifu0 ie_pc_jump", false,-1);
        tracep->declQuad(c+73,"ysyx_22051013 rvcore0 ifu0 ie_pc_i", false,-1, 63,0);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 ifu0 ls_pc_jump", false,-1);
        tracep->declQuad(c+50,"ysyx_22051013 rvcore0 ifu0 ls_pc_i", false,-1, 63,0);
        tracep->declQuad(c+809,"ysyx_22051013 rvcore0 ifu0 bpu_pc_i", false,-1, 63,0);
        tracep->declBit(c+494,"ysyx_22051013 rvcore0 ifu0 inst_valid", false,-1);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 ifu0 id_ready", false,-1);
        tracep->declBit(c+565,"ysyx_22051013 rvcore0 ifu0 id_stall", false,-1);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 ifu0 if_valid", false,-1);
        tracep->declBit(c+493,"ysyx_22051013 rvcore0 ifu0 core_ready", false,-1);
        tracep->declBus(c+495,"ysyx_22051013 rvcore0 ifu0 inst_i", false,-1, 31,0);
        tracep->declQuad(c+10,"ysyx_22051013 rvcore0 ifu0 pc_i", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22051013 rvcore0 ifu0 pc_o", false,-1, 63,0);
        tracep->declBus(c+495,"ysyx_22051013 rvcore0 ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+491,"ysyx_22051013 rvcore0 ifu0 pc_next", false,-1, 63,0);
        tracep->declBit(c+76,"ysyx_22051013 rvcore0 ifu0 clean_stall", false,-1);
        tracep->declBit(c+570,"ysyx_22051013 rvcore0 ifu0 stall", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 reg_ifid1 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 reg_ifid1 rst", false,-1);
        tracep->declBus(c+495,"ysyx_22051013 rvcore0 reg_ifid1 if_inst", false,-1, 31,0);
        tracep->declQuad(c+10,"ysyx_22051013 rvcore0 reg_ifid1 if_pc", false,-1, 63,0);
        tracep->declBit(c+808,"ysyx_22051013 rvcore0 reg_ifid1 bpu_jump", false,-1);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 reg_ifid1 if_valid", false,-1);
        tracep->declBit(c+540,"ysyx_22051013 rvcore0 reg_ifid1 id_flush", false,-1);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 reg_ifid1 ie_flush", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 reg_ifid1 ls_flush", false,-1);
        tracep->declBit(c+565,"ysyx_22051013 rvcore0 reg_ifid1 id_stall", false,-1);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 reg_ifid1 id_ready", false,-1);
        tracep->declBit(c+24,"ysyx_22051013 rvcore0 reg_ifid1 id_jump", false,-1);
        tracep->declBus(c+21,"ysyx_22051013 rvcore0 reg_ifid1 id_inst", false,-1, 31,0);
        tracep->declQuad(c+22,"ysyx_22051013 rvcore0 reg_ifid1 id_pc", false,-1, 63,0);
        tracep->declBit(c+571,"ysyx_22051013 rvcore0 reg_ifid1 flush", false,-1);
        tracep->declBit(c+572,"ysyx_22051013 rvcore0 reg_ifid1 stall", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 idu2 rst", false,-1);
        tracep->declBus(c+21,"ysyx_22051013 rvcore0 idu2 inst_i", false,-1, 31,0);
        tracep->declQuad(c+22,"ysyx_22051013 rvcore0 idu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+24,"ysyx_22051013 rvcore0 idu2 bpu_jump", false,-1);
        tracep->declBus(c+38,"ysyx_22051013 rvcore0 idu2 ex_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+553,"ysyx_22051013 rvcore0 idu2 ex_data_forward", false,-1, 63,0);
        tracep->declBus(c+53,"ysyx_22051013 rvcore0 idu2 ls_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+556,"ysyx_22051013 rvcore0 idu2 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 idu2 wb_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051013 rvcore0 idu2 wb_data_forward", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013 rvcore0 idu2 ex_load_ena", false,-1);
        tracep->declBit(c+25,"ysyx_22051013 rvcore0 idu2 ex_csr_ena", false,-1);
        tracep->declBit(c+26,"ysyx_22051013 rvcore0 idu2 ls_csr_ena", false,-1);
        tracep->declBus(c+536,"ysyx_22051013 rvcore0 idu2 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+538,"ysyx_22051013 rvcore0 idu2 rs1_ena", false,-1);
        tracep->declQuad(c+814,"ysyx_22051013 rvcore0 idu2 rs1_data", false,-1, 63,0);
        tracep->declBus(c+537,"ysyx_22051013 rvcore0 idu2 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+539,"ysyx_22051013 rvcore0 idu2 rs2_ena", false,-1);
        tracep->declQuad(c+816,"ysyx_22051013 rvcore0 idu2 rs2_data", false,-1, 63,0);
        tracep->declBit(c+549,"ysyx_22051013 rvcore0 idu2 rd_ena", false,-1);
        tracep->declBus(c+385,"ysyx_22051013 rvcore0 idu2 rd_addr", false,-1, 4,0);
        tracep->declBus(c+552,"ysyx_22051013 rvcore0 idu2 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+550,"ysyx_22051013 rvcore0 idu2 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+551,"ysyx_22051013 rvcore0 idu2 wbctl_o", false,-1, 1,0);
        tracep->declBus(c+386,"ysyx_22051013 rvcore0 idu2 op1_sel", false,-1, 1,0);
        tracep->declBus(c+387,"ysyx_22051013 rvcore0 idu2 op2_sel", false,-1, 2,0);
        tracep->declBit(c+541,"ysyx_22051013 rvcore0 idu2 load_flag", false,-1);
        tracep->declBit(c+542,"ysyx_22051013 rvcore0 idu2 csr_ena", false,-1);
        tracep->declQuad(c+543,"ysyx_22051013 rvcore0 idu2 op1", false,-1, 63,0);
        tracep->declQuad(c+545,"ysyx_22051013 rvcore0 idu2 op2", false,-1, 63,0);
        tracep->declQuad(c+547,"ysyx_22051013 rvcore0 idu2 imm", false,-1, 63,0);
        tracep->declBus(c+813,"ysyx_22051013 rvcore0 idu2 inst_o", false,-1, 31,0);
        tracep->declQuad(c+811,"ysyx_22051013 rvcore0 idu2 pc_o", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22051013 rvcore0 idu2 csr_imm", false,-1, 4,0);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 idu2 ex_ready", false,-1);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 idu2 if_valid", false,-1);
        tracep->declBit(c+540,"ysyx_22051013 rvcore0 idu2 id_flush", false,-1);
        tracep->declBit(c+565,"ysyx_22051013 rvcore0 idu2 id_ex_flush", false,-1);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 idu2 id_ready", false,-1);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 idu2 id_valid", false,-1);
        tracep->declBit(c+540,"ysyx_22051013 rvcore0 idu2 jump_ena", false,-1);
        tracep->declQuad(c+383,"ysyx_22051013 rvcore0 idu2 jump_pc", false,-1, 63,0);
        tracep->declBus(c+77,"ysyx_22051013 rvcore0 idu2 rd", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22051013 rvcore0 idu2 rs1", false,-1, 4,0);
        tracep->declBus(c+78,"ysyx_22051013 rvcore0 idu2 rs2", false,-1, 4,0);
        tracep->declBit(c+573,"ysyx_22051013 rvcore0 idu2 branch", false,-1);
        tracep->declBit(c+823,"ysyx_22051013 rvcore0 idu2 op1_relate", false,-1);
        tracep->declBit(c+824,"ysyx_22051013 rvcore0 idu2 op2_relate", false,-1);
        tracep->declBit(c+389,"ysyx_22051013 rvcore0 idu2 csr_op1_stall", false,-1);
        tracep->declBit(c+390,"ysyx_22051013 rvcore0 idu2 csr_op2_stall", false,-1);
        tracep->declBit(c+565,"ysyx_22051013 rvcore0 idu2 id_stall_ena", false,-1);
        tracep->declBit(c+574,"ysyx_22051013 rvcore0 idu2 ex_op1_forward", false,-1);
        tracep->declBit(c+575,"ysyx_22051013 rvcore0 idu2 ls_op1_forward", false,-1);
        tracep->declBit(c+576,"ysyx_22051013 rvcore0 idu2 wb_op1_forward", false,-1);
        tracep->declBit(c+577,"ysyx_22051013 rvcore0 idu2 ex_op2_forward", false,-1);
        tracep->declBit(c+578,"ysyx_22051013 rvcore0 idu2 ls_op2_forward", false,-1);
        tracep->declBit(c+579,"ysyx_22051013 rvcore0 idu2 wb_op2_forward", false,-1);
        tracep->declBit(c+580,"ysyx_22051013 rvcore0 idu2 op1_forward_ena", false,-1);
        tracep->declBit(c+581,"ysyx_22051013 rvcore0 idu2 op2_forward_ena", false,-1);
        tracep->declQuad(c+391,"ysyx_22051013 rvcore0 idu2 op1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+393,"ysyx_22051013 rvcore0 idu2 op2_forward_data", false,-1, 63,0);
        tracep->declBit(c+825,"ysyx_22051013 rvcore0 idu2 ex_branch", false,-1);
        tracep->declBit(c+582,"ysyx_22051013 rvcore0 idu2 diff_sign", false,-1);
        tracep->declBit(c+583,"ysyx_22051013 rvcore0 idu2 op_ltu_op2", false,-1);
        tracep->declBit(c+584,"ysyx_22051013 rvcore0 idu2 op1_lt_op2", false,-1);
        tracep->declQuad(c+395,"ysyx_22051013 rvcore0 idu2 p1", false,-1, 63,0);
        tracep->declQuad(c+397,"ysyx_22051013 rvcore0 idu2 p2", false,-1, 63,0);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 idu2 decode rst", false,-1);
        tracep->declBus(c+21,"ysyx_22051013 rvcore0 idu2 decode inst", false,-1, 31,0);
        tracep->declBit(c+538,"ysyx_22051013 rvcore0 idu2 decode rs1_ena", false,-1);
        tracep->declBit(c+539,"ysyx_22051013 rvcore0 idu2 decode rs2_ena", false,-1);
        tracep->declBit(c+542,"ysyx_22051013 rvcore0 idu2 decode csr", false,-1);
        tracep->declBus(c+551,"ysyx_22051013 rvcore0 idu2 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+550,"ysyx_22051013 rvcore0 idu2 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+573,"ysyx_22051013 rvcore0 idu2 decode branch", false,-1);
        tracep->declQuad(c+547,"ysyx_22051013 rvcore0 idu2 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+541,"ysyx_22051013 rvcore0 idu2 decode load", false,-1);
        tracep->declBus(c+386,"ysyx_22051013 rvcore0 idu2 decode op1_sel", false,-1, 1,0);
        tracep->declBus(c+387,"ysyx_22051013 rvcore0 idu2 decode op2_sel", false,-1, 2,0);
        tracep->declBus(c+552,"ysyx_22051013 rvcore0 idu2 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+79,"ysyx_22051013 rvcore0 idu2 decode opcode", false,-1, 6,0);
        tracep->declBus(c+80,"ysyx_22051013 rvcore0 idu2 decode funct3", false,-1, 2,0);
        tracep->declBus(c+81,"ysyx_22051013 rvcore0 idu2 decode funct7", false,-1, 6,0);
        tracep->declBus(c+82,"ysyx_22051013 rvcore0 idu2 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+83,"ysyx_22051013 rvcore0 idu2 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+84,"ysyx_22051013 rvcore0 idu2 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+85,"ysyx_22051013 rvcore0 idu2 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+86,"ysyx_22051013 rvcore0 idu2 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+585,"ysyx_22051013 rvcore0 idu2 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+586,"ysyx_22051013 rvcore0 idu2 decode inst_lui", false,-1);
        tracep->declBit(c+587,"ysyx_22051013 rvcore0 idu2 decode inst_auipc", false,-1);
        tracep->declBit(c+588,"ysyx_22051013 rvcore0 idu2 decode inst_jal", false,-1);
        tracep->declBit(c+589,"ysyx_22051013 rvcore0 idu2 decode inst_jalr", false,-1);
        tracep->declBit(c+590,"ysyx_22051013 rvcore0 idu2 decode inst_sb", false,-1);
        tracep->declBit(c+591,"ysyx_22051013 rvcore0 idu2 decode inst_sh", false,-1);
        tracep->declBit(c+592,"ysyx_22051013 rvcore0 idu2 decode inst_sw", false,-1);
        tracep->declBit(c+593,"ysyx_22051013 rvcore0 idu2 decode inst_sd", false,-1);
        tracep->declBit(c+594,"ysyx_22051013 rvcore0 idu2 decode inst_lb", false,-1);
        tracep->declBit(c+595,"ysyx_22051013 rvcore0 idu2 decode inst_lh", false,-1);
        tracep->declBit(c+596,"ysyx_22051013 rvcore0 idu2 decode inst_lw", false,-1);
        tracep->declBit(c+597,"ysyx_22051013 rvcore0 idu2 decode inst_ld", false,-1);
        tracep->declBit(c+598,"ysyx_22051013 rvcore0 idu2 decode inst_lbu", false,-1);
        tracep->declBit(c+599,"ysyx_22051013 rvcore0 idu2 decode inst_lhu", false,-1);
        tracep->declBit(c+600,"ysyx_22051013 rvcore0 idu2 decode inst_lwu", false,-1);
        tracep->declBit(c+601,"ysyx_22051013 rvcore0 idu2 decode inst_beq", false,-1);
        tracep->declBit(c+602,"ysyx_22051013 rvcore0 idu2 decode inst_bne", false,-1);
        tracep->declBit(c+603,"ysyx_22051013 rvcore0 idu2 decode inst_blt", false,-1);
        tracep->declBit(c+604,"ysyx_22051013 rvcore0 idu2 decode inst_bge", false,-1);
        tracep->declBit(c+605,"ysyx_22051013 rvcore0 idu2 decode inst_bltu", false,-1);
        tracep->declBit(c+606,"ysyx_22051013 rvcore0 idu2 decode inst_bgeu", false,-1);
        tracep->declBit(c+607,"ysyx_22051013 rvcore0 idu2 decode inst_add", false,-1);
        tracep->declBit(c+608,"ysyx_22051013 rvcore0 idu2 decode inst_sub", false,-1);
        tracep->declBit(c+609,"ysyx_22051013 rvcore0 idu2 decode inst_sll", false,-1);
        tracep->declBit(c+610,"ysyx_22051013 rvcore0 idu2 decode inst_slt", false,-1);
        tracep->declBit(c+611,"ysyx_22051013 rvcore0 idu2 decode inst_sltu", false,-1);
        tracep->declBit(c+612,"ysyx_22051013 rvcore0 idu2 decode inst_xor", false,-1);
        tracep->declBit(c+613,"ysyx_22051013 rvcore0 idu2 decode inst_srl", false,-1);
        tracep->declBit(c+614,"ysyx_22051013 rvcore0 idu2 decode inst_sra", false,-1);
        tracep->declBit(c+615,"ysyx_22051013 rvcore0 idu2 decode inst_or", false,-1);
        tracep->declBit(c+616,"ysyx_22051013 rvcore0 idu2 decode inst_and", false,-1);
        tracep->declBit(c+617,"ysyx_22051013 rvcore0 idu2 decode inst_div", false,-1);
        tracep->declBit(c+618,"ysyx_22051013 rvcore0 idu2 decode inst_divu", false,-1);
        tracep->declBit(c+619,"ysyx_22051013 rvcore0 idu2 decode inst_mul", false,-1);
        tracep->declBit(c+620,"ysyx_22051013 rvcore0 idu2 decode inst_mulh", false,-1);
        tracep->declBit(c+621,"ysyx_22051013 rvcore0 idu2 decode inst_mulhsu", false,-1);
        tracep->declBit(c+622,"ysyx_22051013 rvcore0 idu2 decode inst_mulhu", false,-1);
        tracep->declBit(c+623,"ysyx_22051013 rvcore0 idu2 decode inst_rem", false,-1);
        tracep->declBit(c+624,"ysyx_22051013 rvcore0 idu2 decode inst_remu", false,-1);
        tracep->declBit(c+399,"ysyx_22051013 rvcore0 idu2 decode inst_addi", false,-1);
        tracep->declBit(c+400,"ysyx_22051013 rvcore0 idu2 decode inst_slti", false,-1);
        tracep->declBit(c+401,"ysyx_22051013 rvcore0 idu2 decode inst_sltiu", false,-1);
        tracep->declBit(c+402,"ysyx_22051013 rvcore0 idu2 decode inst_xori", false,-1);
        tracep->declBit(c+403,"ysyx_22051013 rvcore0 idu2 decode inst_ori", false,-1);
        tracep->declBit(c+404,"ysyx_22051013 rvcore0 idu2 decode inst_andi", false,-1);
        tracep->declBit(c+405,"ysyx_22051013 rvcore0 idu2 decode inst_slli", false,-1);
        tracep->declBit(c+406,"ysyx_22051013 rvcore0 idu2 decode inst_srli", false,-1);
        tracep->declBit(c+625,"ysyx_22051013 rvcore0 idu2 decode inst_srai", false,-1);
        tracep->declBit(c+626,"ysyx_22051013 rvcore0 idu2 decode inst_addiw", false,-1);
        tracep->declBit(c+627,"ysyx_22051013 rvcore0 idu2 decode inst_slliw", false,-1);
        tracep->declBit(c+628,"ysyx_22051013 rvcore0 idu2 decode inst_srliw", false,-1);
        tracep->declBit(c+629,"ysyx_22051013 rvcore0 idu2 decode inst_sraiw", false,-1);
        tracep->declBit(c+630,"ysyx_22051013 rvcore0 idu2 decode inst_addw", false,-1);
        tracep->declBit(c+631,"ysyx_22051013 rvcore0 idu2 decode inst_subw", false,-1);
        tracep->declBit(c+632,"ysyx_22051013 rvcore0 idu2 decode inst_sllw", false,-1);
        tracep->declBit(c+633,"ysyx_22051013 rvcore0 idu2 decode inst_srlw", false,-1);
        tracep->declBit(c+634,"ysyx_22051013 rvcore0 idu2 decode inst_sraw", false,-1);
        tracep->declBit(c+635,"ysyx_22051013 rvcore0 idu2 decode inst_divuw", false,-1);
        tracep->declBit(c+636,"ysyx_22051013 rvcore0 idu2 decode inst_divw", false,-1);
        tracep->declBit(c+637,"ysyx_22051013 rvcore0 idu2 decode inst_mulw", false,-1);
        tracep->declBit(c+638,"ysyx_22051013 rvcore0 idu2 decode inst_remuw", false,-1);
        tracep->declBit(c+639,"ysyx_22051013 rvcore0 idu2 decode inst_remw", false,-1);
        tracep->declBit(c+640,"ysyx_22051013 rvcore0 idu2 decode inst_ecall", false,-1);
        tracep->declBit(c+641,"ysyx_22051013 rvcore0 idu2 decode inst_mret", false,-1);
        tracep->declBit(c+642,"ysyx_22051013 rvcore0 idu2 decode inst_csrrw", false,-1);
        tracep->declBit(c+643,"ysyx_22051013 rvcore0 idu2 decode inst_csrrs", false,-1);
        tracep->declBit(c+644,"ysyx_22051013 rvcore0 idu2 decode inst_csrrc", false,-1);
        tracep->declBit(c+645,"ysyx_22051013 rvcore0 idu2 decode inst_csrrwi", false,-1);
        tracep->declBit(c+646,"ysyx_22051013 rvcore0 idu2 decode inst_csrrsi", false,-1);
        tracep->declBit(c+647,"ysyx_22051013 rvcore0 idu2 decode inst_csrrci", false,-1);
        tracep->declBit(c+648,"ysyx_22051013 rvcore0 idu2 decode inst_ebreak", false,-1);
        tracep->declBit(c+87,"ysyx_22051013 rvcore0 idu2 decode inst_fencei", false,-1);
        tracep->declBit(c+649,"ysyx_22051013 rvcore0 idu2 decode inst_csr", false,-1);
        tracep->declBit(c+650,"ysyx_22051013 rvcore0 idu2 decode jump", false,-1);
        tracep->declBit(c+651,"ysyx_22051013 rvcore0 idu2 decode imm_ena", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 reg_idex3 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 reg_idex3 rst", false,-1);
        tracep->declBus(c+813,"ysyx_22051013 rvcore0 reg_idex3 id_inst", false,-1, 31,0);
        tracep->declQuad(c+811,"ysyx_22051013 rvcore0 reg_idex3 id_pc", false,-1, 63,0);
        tracep->declQuad(c+543,"ysyx_22051013 rvcore0 reg_idex3 id_op1", false,-1, 63,0);
        tracep->declQuad(c+545,"ysyx_22051013 rvcore0 reg_idex3 id_op2", false,-1, 63,0);
        tracep->declBus(c+386,"ysyx_22051013 rvcore0 reg_idex3 id_op1_sel", false,-1, 1,0);
        tracep->declBus(c+387,"ysyx_22051013 rvcore0 reg_idex3 id_op2_sel", false,-1, 2,0);
        tracep->declQuad(c+547,"ysyx_22051013 rvcore0 reg_idex3 id_imm", false,-1, 63,0);
        tracep->declBit(c+549,"ysyx_22051013 rvcore0 reg_idex3 id_rd_ena", false,-1);
        tracep->declBus(c+385,"ysyx_22051013 rvcore0 reg_idex3 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22051013 rvcore0 reg_idex3 id_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+552,"ysyx_22051013 rvcore0 reg_idex3 id_alusrc", false,-1, 7,0);
        tracep->declBus(c+550,"ysyx_22051013 rvcore0 reg_idex3 id_lsctl", false,-1, 3,0);
        tracep->declBus(c+551,"ysyx_22051013 rvcore0 reg_idex3 id_wbctl", false,-1, 1,0);
        tracep->declBit(c+541,"ysyx_22051013 rvcore0 reg_idex3 id_load_flag", false,-1);
        tracep->declBit(c+542,"ysyx_22051013 rvcore0 reg_idex3 id_csr_ena", false,-1);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 reg_idex3 id_valid", false,-1);
        tracep->declBit(c+565,"ysyx_22051013 rvcore0 reg_idex3 id_flush", false,-1);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 reg_idex3 ie_flush", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 reg_idex3 ls_flush", false,-1);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 reg_idex3 ex_ready", false,-1);
        tracep->declBus(c+28,"ysyx_22051013 rvcore0 reg_idex3 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+29,"ysyx_22051013 rvcore0 reg_idex3 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22051013 rvcore0 reg_idex3 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22051013 rvcore0 reg_idex3 ex_op2", false,-1, 63,0);
        tracep->declBus(c+42,"ysyx_22051013 rvcore0 reg_idex3 ex_op1_sel", false,-1, 1,0);
        tracep->declBus(c+43,"ysyx_22051013 rvcore0 reg_idex3 ex_op2_sel", false,-1, 2,0);
        tracep->declQuad(c+35,"ysyx_22051013 rvcore0 reg_idex3 ex_imm", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22051013 rvcore0 reg_idex3 ex_rd_ena", false,-1);
        tracep->declBus(c+38,"ysyx_22051013 rvcore0 reg_idex3 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+44,"ysyx_22051013 rvcore0 reg_idex3 ex_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+41,"ysyx_22051013 rvcore0 reg_idex3 ex_alusrc", false,-1, 7,0);
        tracep->declBus(c+39,"ysyx_22051013 rvcore0 reg_idex3 ex_lsctl", false,-1, 3,0);
        tracep->declBit(c+45,"ysyx_22051013 rvcore0 reg_idex3 ex_load_flag", false,-1);
        tracep->declBit(c+25,"ysyx_22051013 rvcore0 reg_idex3 ex_csr_ena", false,-1);
        tracep->declBus(c+40,"ysyx_22051013 rvcore0 reg_idex3 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+652,"ysyx_22051013 rvcore0 reg_idex3 flush", false,-1);
        tracep->declBit(c+653,"ysyx_22051013 rvcore0 reg_idex3 stall", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 exu4 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 exu4 rst", false,-1);
        tracep->declQuad(c+31,"ysyx_22051013 rvcore0 exu4 reg_op1", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22051013 rvcore0 exu4 reg_op2", false,-1, 63,0);
        tracep->declBus(c+42,"ysyx_22051013 rvcore0 exu4 op1_sel", false,-1, 1,0);
        tracep->declBus(c+43,"ysyx_22051013 rvcore0 exu4 op2_sel", false,-1, 2,0);
        tracep->declBus(c+38,"ysyx_22051013 rvcore0 exu4 rd_addr", false,-1, 4,0);
        tracep->declBus(c+44,"ysyx_22051013 rvcore0 exu4 rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"ysyx_22051013 rvcore0 exu4 imm", false,-1, 63,0);
        tracep->declQuad(c+29,"ysyx_22051013 rvcore0 exu4 pc_i", false,-1, 63,0);
        tracep->declBus(c+41,"ysyx_22051013 rvcore0 exu4 alu_sel", false,-1, 7,0);
        tracep->declBit(c+563,"ysyx_22051013 rvcore0 exu4 ls_ready", false,-1);
        tracep->declBit(c+560,"ysyx_22051013 rvcore0 exu4 id_valid", false,-1);
        tracep->declBit(c+561,"ysyx_22051013 rvcore0 exu4 ex_valid", false,-1);
        tracep->declBit(c+564,"ysyx_22051013 rvcore0 exu4 ex_ready", false,-1);
        tracep->declQuad(c+33,"ysyx_22051013 rvcore0 exu4 store_data", false,-1, 63,0);
        tracep->declBus(c+388,"ysyx_22051013 rvcore0 exu4 csr_addr", false,-1, 11,0);
        tracep->declBus(c+555,"ysyx_22051013 rvcore0 exu4 csr_ctl", false,-1, 6,0);
        tracep->declBit(c+46,"ysyx_22051013 rvcore0 exu4 fencei", false,-1);
        tracep->declQuad(c+553,"ysyx_22051013 rvcore0 exu4 exu_res", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22051013 rvcore0 exu4 op1", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22051013 rvcore0 exu4 op2", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22051013 rvcore0 exu4 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22051013 rvcore0 exu4 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22051013 rvcore0 exu4 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22051013 rvcore0 exu4 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_22051013 rvcore0 exu4 op1_lt_op2", false,-1);
        tracep->declQuad(c+101,"ysyx_22051013 rvcore0 exu4 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+103,"ysyx_22051013 rvcore0 exu4 sllw", false,-1, 31,0);
        tracep->declQuad(c+104,"ysyx_22051013 rvcore0 exu4 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+106,"ysyx_22051013 rvcore0 exu4 srlw", false,-1, 31,0);
        tracep->declQuad(c+107,"ysyx_22051013 rvcore0 exu4 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+109,"ysyx_22051013 rvcore0 exu4 sraw", false,-1, 31,0);
        tracep->declQuad(c+110,"ysyx_22051013 rvcore0 exu4 op1_sraw_op2", false,-1, 63,0);
        tracep->declQuad(c+654,"ysyx_22051013 rvcore0 exu4 alu_res", false,-1, 63,0);
        tracep->declBit(c+656,"ysyx_22051013 rvcore0 exu4 mul", false,-1);
        tracep->declBus(c+657,"ysyx_22051013 rvcore0 exu4 mul_signed", false,-1, 1,0);
        tracep->declBit(c+658,"ysyx_22051013 rvcore0 exu4 mulw", false,-1);
        tracep->declBit(c+112,"ysyx_22051013 rvcore0 exu4 delay1", false,-1);
        tracep->declBit(c+659,"ysyx_22051013 rvcore0 exu4 mul_valid", false,-1);
        tracep->declBit(c+113,"ysyx_22051013 rvcore0 exu4 mul_out_valid", false,-1);
        tracep->declQuad(c+114,"ysyx_22051013 rvcore0 exu4 result_hi", false,-1, 63,0);
        tracep->declQuad(c+116,"ysyx_22051013 rvcore0 exu4 result_lo", false,-1, 63,0);
        tracep->declBit(c+884,"ysyx_22051013 rvcore0 exu4 flush", false,-1);
        tracep->declQuad(c+826,"ysyx_22051013 rvcore0 exu4 mul_res", false,-1, 63,0);
        tracep->declQuad(c+118,"ysyx_22051013 rvcore0 exu4 mul_res_temp", false,-1, 63,0);
        tracep->declBit(c+660,"ysyx_22051013 rvcore0 exu4 div", false,-1);
        tracep->declBit(c+661,"ysyx_22051013 rvcore0 exu4 div_signed", false,-1);
        tracep->declBit(c+662,"ysyx_22051013 rvcore0 exu4 divw", false,-1);
        tracep->declBit(c+120,"ysyx_22051013 rvcore0 exu4 delay2", false,-1);
        tracep->declBit(c+663,"ysyx_22051013 rvcore0 exu4 div_valid", false,-1);
        tracep->declBit(c+121,"ysyx_22051013 rvcore0 exu4 div_out_valid", false,-1);
        tracep->declQuad(c+407,"ysyx_22051013 rvcore0 exu4 quotient", false,-1, 63,0);
        tracep->declQuad(c+409,"ysyx_22051013 rvcore0 exu4 remainder", false,-1, 63,0);
        tracep->declQuad(c+664,"ysyx_22051013 rvcore0 exu4 div_res", false,-1, 63,0);
        tracep->declQuad(c+122,"ysyx_22051013 rvcore0 exu4 div_res_temp", false,-1, 63,0);
        tracep->declBit(c+666,"ysyx_22051013 rvcore0 exu4 csr_wr_ena", false,-1);
        tracep->declBit(c+667,"ysyx_22051013 rvcore0 exu4 csr_rd_ena", false,-1);
        tracep->declBit(c+668,"ysyx_22051013 rvcore0 exu4 mret_ena", false,-1);
        tracep->declBit(c+669,"ysyx_22051013 rvcore0 exu4 ecall_ena", false,-1);
        tracep->declBit(c+670,"ysyx_22051013 rvcore0 exu4 csrrw_ena", false,-1);
        tracep->declBit(c+671,"ysyx_22051013 rvcore0 exu4 csrrs_ena", false,-1);
        tracep->declBit(c+672,"ysyx_22051013 rvcore0 exu4 csrrc_ena", false,-1);
        tracep->declQuad(c+124,"ysyx_22051013 rvcore0 exu4 csr_op", false,-1, 63,0);
        tracep->declBit(c+126,"ysyx_22051013 rvcore0 exu4 csrrxi_ena", false,-1);
        tracep->declBit(c+127,"ysyx_22051013 rvcore0 exu4 mul_reg", false,-1);
        tracep->declBit(c+673,"ysyx_22051013 rvcore0 exu4 mul_stall", false,-1);
        tracep->declBit(c+128,"ysyx_22051013 rvcore0 exu4 div_reg", false,-1);
        tracep->declBit(c+674,"ysyx_22051013 rvcore0 exu4 div_stall", false,-1);
        tracep->declBit(c+675,"ysyx_22051013 rvcore0 exu4 muldiv_ena", false,-1);
        tracep->declQuad(c+411,"ysyx_22051013 rvcore0 exu4 muldiv_res", false,-1, 63,0);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 exu4 booth_mul0 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 exu4 booth_mul0 rst", false,-1);
        tracep->declBit(c+659,"ysyx_22051013 rvcore0 exu4 booth_mul0 mul_valid", false,-1);
        tracep->declBit(c+884,"ysyx_22051013 rvcore0 exu4 booth_mul0 flush", false,-1);
        tracep->declBus(c+657,"ysyx_22051013 rvcore0 exu4 booth_mul0 mul_signed", false,-1, 1,0);
        tracep->declBit(c+658,"ysyx_22051013 rvcore0 exu4 booth_mul0 mulw", false,-1);
        tracep->declQuad(c+88,"ysyx_22051013 rvcore0 exu4 booth_mul0 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22051013 rvcore0 exu4 booth_mul0 mult_op2", false,-1, 63,0);
        tracep->declBit(c+113,"ysyx_22051013 rvcore0 exu4 booth_mul0 out_valid", false,-1);
        tracep->declQuad(c+114,"ysyx_22051013 rvcore0 exu4 booth_mul0 result_hi", false,-1, 63,0);
        tracep->declQuad(c+116,"ysyx_22051013 rvcore0 exu4 booth_mul0 result_lo", false,-1, 63,0);
        tracep->declBit(c+129,"ysyx_22051013 rvcore0 exu4 booth_mul0 mul_ready", false,-1);
        tracep->declBit(c+130,"ysyx_22051013 rvcore0 exu4 booth_mul0 mul_doing", false,-1);
        tracep->declQuad(c+676,"ysyx_22051013 rvcore0 exu4 booth_mul0 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+678,"ysyx_22051013 rvcore0 exu4 booth_mul0 op2_temp", false,-1, 63,0);
        tracep->declArray(c+680,"ysyx_22051013 rvcore0 exu4 booth_mul0 op1_ext", false,-1, 65,0);
        tracep->declArray(c+683,"ysyx_22051013 rvcore0 exu4 booth_mul0 op2_ext", false,-1, 65,0);
        tracep->declArray(c+131,"ysyx_22051013 rvcore0 exu4 booth_mul0 multiplicand", false,-1, 131,0);
        tracep->declArray(c+136,"ysyx_22051013 rvcore0 exu4 booth_mul0 multiplier", false,-1, 66,0);
        tracep->declBus(c+139,"ysyx_22051013 rvcore0 exu4 booth_mul0 sel", false,-1, 2,0);
        tracep->declBit(c+140,"ysyx_22051013 rvcore0 exu4 booth_mul0 carry", false,-1);
        tracep->declArray(c+141,"ysyx_22051013 rvcore0 exu4 booth_mul0 multiplicand_mod", false,-1, 131,0);
        tracep->declArray(c+146,"ysyx_22051013 rvcore0 exu4 booth_mul0 result_temp", false,-1, 131,0);
        tracep->declArray(c+131,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 mult", false,-1, 131,0);
        tracep->declBus(c+139,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 sel", false,-1, 2,0);
        tracep->declArray(c+141,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 part_mul", false,-1, 131,0);
        tracep->declBit(c+140,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 carry", false,-1);
        tracep->declBit(c+151,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 y_add", false,-1);
        tracep->declBit(c+152,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 y", false,-1);
        tracep->declBit(c+153,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 y_sub", false,-1);
        tracep->declBit(c+154,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 sel_negative", false,-1);
        tracep->declBit(c+155,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 sel_double_negative", false,-1);
        tracep->declBit(c+156,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 sel_positive", false,-1);
        tracep->declBit(c+157,"ysyx_22051013 rvcore0 exu4 booth_mul0 booth10 sel_double_positive", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 exu4 divide1 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 exu4 divide1 rst", false,-1);
        tracep->declBit(c+663,"ysyx_22051013 rvcore0 exu4 divide1 div_valid", false,-1);
        tracep->declBit(c+884,"ysyx_22051013 rvcore0 exu4 divide1 flush", false,-1);
        tracep->declBit(c+662,"ysyx_22051013 rvcore0 exu4 divide1 divw", false,-1);
        tracep->declBit(c+661,"ysyx_22051013 rvcore0 exu4 divide1 div_signed", false,-1);
        tracep->declQuad(c+88,"ysyx_22051013 rvcore0 exu4 divide1 div_op1", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22051013 rvcore0 exu4 divide1 div_op2", false,-1, 63,0);
        tracep->declBit(c+121,"ysyx_22051013 rvcore0 exu4 divide1 out_valid", false,-1);
        tracep->declQuad(c+407,"ysyx_22051013 rvcore0 exu4 divide1 quotient", false,-1, 63,0);
        tracep->declQuad(c+409,"ysyx_22051013 rvcore0 exu4 divide1 remainder", false,-1, 63,0);
        tracep->declBit(c+158,"ysyx_22051013 rvcore0 exu4 divide1 div_ready", false,-1);
        tracep->declBit(c+159,"ysyx_22051013 rvcore0 exu4 divide1 div_doing", false,-1);
        tracep->declQuad(c+686,"ysyx_22051013 rvcore0 exu4 divide1 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+688,"ysyx_22051013 rvcore0 exu4 divide1 op2_temp", false,-1, 63,0);
        tracep->declBit(c+690,"ysyx_22051013 rvcore0 exu4 divide1 op1_sign", false,-1);
        tracep->declBit(c+691,"ysyx_22051013 rvcore0 exu4 divide1 op2_sign", false,-1);
        tracep->declQuad(c+692,"ysyx_22051013 rvcore0 exu4 divide1 op1_abs", false,-1, 63,0);
        tracep->declQuad(c+694,"ysyx_22051013 rvcore0 exu4 divide1 op2_abs", false,-1, 63,0);
        tracep->declArray(c+160,"ysyx_22051013 rvcore0 exu4 divide1 dividend", false,-1, 127,0);
        tracep->declArray(c+696,"ysyx_22051013 rvcore0 exu4 divide1 divisor", false,-1, 64,0);
        tracep->declBus(c+164,"ysyx_22051013 rvcore0 exu4 divide1 cnt", false,-1, 6,0);
        tracep->declQuad(c+165,"ysyx_22051013 rvcore0 exu4 divide1 temp_q", false,-1, 63,0);
        tracep->declBit(c+699,"ysyx_22051013 rvcore0 exu4 divide1 sub_sign", false,-1);
        tracep->declQuad(c+413,"ysyx_22051013 rvcore0 exu4 divide1 mod_dividend", false,-1, 63,0);
        tracep->declQuad(c+700,"ysyx_22051013 rvcore0 exu4 divide1 mod_quo", false,-1, 63,0);
        tracep->declQuad(c+702,"ysyx_22051013 rvcore0 exu4 divide1 mod_rem", false,-1, 63,0);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 reg_exls5 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 reg_exls5 rst", false,-1);
        tracep->declBus(c+28,"ysyx_22051013 rvcore0 reg_exls5 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+29,"ysyx_22051013 rvcore0 reg_exls5 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22051013 rvcore0 reg_exls5 ex_store_data", false,-1, 63,0);
        tracep->declQuad(c+553,"ysyx_22051013 rvcore0 reg_exls5 ex_exu_res", false,-1, 63,0);
        tracep->declBus(c+39,"ysyx_22051013 rvcore0 reg_exls5 ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+40,"ysyx_22051013 rvcore0 reg_exls5 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+37,"ysyx_22051013 rvcore0 reg_exls5 ex_rd_ena", false,-1);
        tracep->declBus(c+38,"ysyx_22051013 rvcore0 reg_exls5 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+555,"ysyx_22051013 rvcore0 reg_exls5 ex_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+388,"ysyx_22051013 rvcore0 reg_exls5 ex_csr_addr", false,-1, 11,0);
        tracep->declBit(c+46,"ysyx_22051013 rvcore0 reg_exls5 ex_fencei", false,-1);
        tracep->declBit(c+25,"ysyx_22051013 rvcore0 reg_exls5 ex_csr_ena", false,-1);
        tracep->declBit(c+561,"ysyx_22051013 rvcore0 reg_exls5 ex_valid", false,-1);
        tracep->declBit(c+563,"ysyx_22051013 rvcore0 reg_exls5 ls_ready", false,-1);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 reg_exls5 ie_flush", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 reg_exls5 ls_flush", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 reg_exls5 ls_fencei", false,-1);
        tracep->declBus(c+56,"ysyx_22051013 rvcore0 reg_exls5 ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+57,"ysyx_22051013 rvcore0 reg_exls5 ls_csr_addr", false,-1, 11,0);
        tracep->declBus(c+47,"ysyx_22051013 rvcore0 reg_exls5 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+48,"ysyx_22051013 rvcore0 reg_exls5 ls_pc", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013 rvcore0 reg_exls5 ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22051013 rvcore0 reg_exls5 ls_exu_res", false,-1, 63,0);
        tracep->declBus(c+54,"ysyx_22051013 rvcore0 reg_exls5 ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+55,"ysyx_22051013 rvcore0 reg_exls5 ls_wbctl", false,-1, 1,0);
        tracep->declBit(c+52,"ysyx_22051013 rvcore0 reg_exls5 ls_rd_ena", false,-1);
        tracep->declBus(c+53,"ysyx_22051013 rvcore0 reg_exls5 ls_rd_addr", false,-1, 4,0);
        tracep->declBit(c+26,"ysyx_22051013 rvcore0 reg_exls5 ls_csr_ena", false,-1);
        tracep->declBus(c+38,"ysyx_22051013 rvcore0 reg_exls5 ex_rd_addr_forward", false,-1, 4,0);
        tracep->declBit(c+25,"ysyx_22051013 rvcore0 reg_exls5 ex_csr", false,-1);
        tracep->declQuad(c+553,"ysyx_22051013 rvcore0 reg_exls5 ex_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+167,"ysyx_22051013 rvcore0 reg_exls5 flush", false,-1);
        tracep->declBit(c+704,"ysyx_22051013 rvcore0 reg_exls5 stall", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 lsu6 rst", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 lsu6 clk", false,-1);
        tracep->declQuad(c+50,"ysyx_22051013 rvcore0 lsu6 alu_res", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013 rvcore0 lsu6 store_data", false,-1, 63,0);
        tracep->declBus(c+54,"ysyx_22051013 rvcore0 lsu6 ls_ctl", false,-1, 3,0);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 lsu6 fencei", false,-1);
        tracep->declBit(c+884,"ysyx_22051013 rvcore0 lsu6 wb_ready", false,-1);
        tracep->declBit(c+561,"ysyx_22051013 rvcore0 lsu6 ex_valid", false,-1);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 lsu6 except_ena", false,-1);
        tracep->declBit(c+563,"ysyx_22051013 rvcore0 lsu6 ls_ready", false,-1);
        tracep->declBit(c+562,"ysyx_22051013 rvcore0 lsu6 ls_valid", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 lsu6 ls_flush", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 lsu6 ls_jump", false,-1);
        tracep->declQuad(c+50,"ysyx_22051013 rvcore0 lsu6 ls_jump_pc", false,-1, 63,0);
        tracep->declBit(c+509,"ysyx_22051013 rvcore0 lsu6 we", false,-1);
        tracep->declBit(c+510,"ysyx_22051013 rvcore0 lsu6 re", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 rvcore0 lsu6 fencei_o", false,-1);
        tracep->declBit(c+16,"ysyx_22051013 rvcore0 lsu6 core_ready", false,-1);
        tracep->declQuad(c+512,"ysyx_22051013 rvcore0 lsu6 data_pc", false,-1, 63,0);
        tracep->declQuad(c+514,"ysyx_22051013 rvcore0 lsu6 data_temp", false,-1, 63,0);
        tracep->declQuad(c+516,"ysyx_22051013 rvcore0 lsu6 data_o", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_22051013 rvcore0 lsu6 data_size", false,-1, 2,0);
        tracep->declQuad(c+17,"ysyx_22051013 rvcore0 lsu6 device_data_o", false,-1, 63,0);
        tracep->declBus(c+511,"ysyx_22051013 rvcore0 lsu6 wlen", false,-1, 7,0);
        tracep->declBit(c+518,"ysyx_22051013 rvcore0 lsu6 data_valid", false,-1);
        tracep->declQuad(c+556,"ysyx_22051013 rvcore0 lsu6 ls_data_forward", false,-1, 63,0);
        tracep->declQuad(c+558,"ysyx_22051013 rvcore0 lsu6 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+828,"ysyx_22051013 rvcore0 lsu6 raddr", false,-1, 63,0);
        tracep->declQuad(c+828,"ysyx_22051013 rvcore0 lsu6 waddr", false,-1, 63,0);
        tracep->declQuad(c+705,"ysyx_22051013 rvcore0 lsu6 load_data", false,-1, 63,0);
        tracep->declBit(c+168,"ysyx_22051013 rvcore0 lsu6 data_ok", false,-1);
        tracep->declQuad(c+169,"ysyx_22051013 rvcore0 lsu6 data_i", false,-1, 63,0);
        tracep->declBus(c+171,"ysyx_22051013 rvcore0 lsu6 byte_sel", false,-1, 2,0);
        tracep->declBus(c+172,"ysyx_22051013 rvcore0 lsu6 half_sel", false,-1, 1,0);
        tracep->declBit(c+173,"ysyx_22051013 rvcore0 lsu6 word_sel", false,-1);
        tracep->declBus(c+707,"ysyx_22051013 rvcore0 lsu6 data_byte", false,-1, 7,0);
        tracep->declBus(c+708,"ysyx_22051013 rvcore0 lsu6 data_half", false,-1, 15,0);
        tracep->declBus(c+174,"ysyx_22051013 rvcore0 lsu6 data_word", false,-1, 31,0);
        tracep->declBus(c+830,"ysyx_22051013 rvcore0 lsu6 sb_mask", false,-1, 7,0);
        tracep->declBus(c+831,"ysyx_22051013 rvcore0 lsu6 sh_mask", false,-1, 7,0);
        tracep->declBus(c+832,"ysyx_22051013 rvcore0 lsu6 sw_mask", false,-1, 7,0);
        tracep->declQuad(c+833,"ysyx_22051013 rvcore0 lsu6 sb_data", false,-1, 63,0);
        tracep->declQuad(c+835,"ysyx_22051013 rvcore0 lsu6 sw_data", false,-1, 63,0);
        tracep->declQuad(c+837,"ysyx_22051013 rvcore0 lsu6 sh_data", false,-1, 63,0);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 reg_lswb7 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 reg_lswb7 rst", false,-1);
        tracep->declBus(c+47,"ysyx_22051013 rvcore0 reg_lswb7 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+48,"ysyx_22051013 rvcore0 reg_lswb7 ls_pc", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_22051013 rvcore0 reg_lswb7 ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+50,"ysyx_22051013 rvcore0 reg_lswb7 ls_exu_res", false,-1, 63,0);
        tracep->declQuad(c+558,"ysyx_22051013 rvcore0 reg_lswb7 ls_wbdata", false,-1, 63,0);
        tracep->declBit(c+52,"ysyx_22051013 rvcore0 reg_lswb7 ls_rd_ena", false,-1);
        tracep->declBus(c+53,"ysyx_22051013 rvcore0 reg_lswb7 ls_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+556,"ysyx_22051013 rvcore0 reg_lswb7 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22051013 rvcore0 reg_lswb7 ls_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+57,"ysyx_22051013 rvcore0 reg_lswb7 ls_csr_addr", false,-1, 11,0);
        tracep->declBit(c+562,"ysyx_22051013 rvcore0 reg_lswb7 ls_valid", false,-1);
        tracep->declBit(c+884,"ysyx_22051013 rvcore0 reg_lswb7 wb_ready", false,-1);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 reg_lswb7 ie_flush", false,-1);
        tracep->declBus(c+59,"ysyx_22051013 rvcore0 reg_lswb7 wb_csr_ctl", false,-1, 6,0);
        tracep->declBus(c+60,"ysyx_22051013 rvcore0 reg_lswb7 wb_csr_addr", false,-1, 11,0);
        tracep->declBus(c+58,"ysyx_22051013 rvcore0 reg_lswb7 wb_inst", false,-1, 31,0);
        tracep->declQuad(c+61,"ysyx_22051013 rvcore0 reg_lswb7 wb_pc", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22051013 rvcore0 reg_lswb7 wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+66,"ysyx_22051013 rvcore0 reg_lswb7 wb_exu_res", false,-1, 63,0);
        tracep->declQuad(c+64,"ysyx_22051013 rvcore0 reg_lswb7 wb_wbdata", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013 rvcore0 reg_lswb7 wb_rd_ena", false,-1);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 reg_lswb7 wb_rd_addr", false,-1, 4,0);
        tracep->declBus(c+53,"ysyx_22051013 rvcore0 reg_lswb7 ls_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+556,"ysyx_22051013 rvcore0 reg_lswb7 ls_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 reg_lswb7 flush", false,-1);
        tracep->declBit(c+562,"ysyx_22051013 rvcore0 reg_lswb7 stall", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 wbu8 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 wbu8 rst", false,-1);
        tracep->declQuad(c+64,"ysyx_22051013 rvcore0 wbu8 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22051013 rvcore0 wbu8 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+66,"ysyx_22051013 rvcore0 wbu8 exu_res", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013 rvcore0 wbu8 inst_i", false,-1, 31,0);
        tracep->declQuad(c+61,"ysyx_22051013 rvcore0 wbu8 pc_i", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013 rvcore0 wbu8 rd_ena", false,-1);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 wbu8 rd_addr", false,-1, 4,0);
        tracep->declBus(c+59,"ysyx_22051013 rvcore0 wbu8 csr_ctl", false,-1, 6,0);
        tracep->declBus(c+60,"ysyx_22051013 rvcore0 wbu8 csr_addr", false,-1, 11,0);
        tracep->declQuad(c+48,"ysyx_22051013 rvcore0 wbu8 ls_pc_i", false,-1, 63,0);
        tracep->declBit(c+562,"ysyx_22051013 rvcore0 wbu8 ls_valid", false,-1);
        tracep->declBit(c+565,"ysyx_22051013 rvcore0 wbu8 id_stall", false,-1);
        tracep->declBit(c+20,"ysyx_22051013 rvcore0 wbu8 time_interrupt", false,-1);
        tracep->declBit(c+884,"ysyx_22051013 rvcore0 wbu8 wb_ready", false,-1);
        tracep->declQuad(c+73,"ysyx_22051013 rvcore0 wbu8 ie_jump_pc", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 wbu8 ie_flush", false,-1);
        tracep->declBit(c+72,"ysyx_22051013 rvcore0 wbu8 ie_jump", false,-1);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 wbu8 wb_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051013 rvcore0 wbu8 wb_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013 rvcore0 wbu8 wb_rd_ena", false,-1);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 wbu8 wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051013 rvcore0 wbu8 wb_data", false,-1, 63,0);
        tracep->declQuad(c+175,"ysyx_22051013 rvcore0 wbu8 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+177,"ysyx_22051013 rvcore0 wbu8 write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+179,"ysyx_22051013 rvcore0 wbu8 w_csr_data", false,-1, 63,0);
        tracep->declQuad(c+181,"ysyx_22051013 rvcore0 wbu8 mcause_value", false,-1, 63,0);
        tracep->declQuad(c+183,"ysyx_22051013 rvcore0 wbu8 set_data", false,-1, 63,0);
        tracep->declQuad(c+185,"ysyx_22051013 rvcore0 wbu8 clear_data", false,-1, 63,0);
        tracep->declBit(c+187,"ysyx_22051013 rvcore0 wbu8 time_jump", false,-1);
        tracep->declBit(c+188,"ysyx_22051013 rvcore0 wbu8 delay", false,-1);
        tracep->declQuad(c+189,"ysyx_22051013 rvcore0 wbu8 pc_delay", false,-1, 63,0);
        tracep->declBit(c+191,"ysyx_22051013 rvcore0 wbu8 ebreak_ena", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 wbu8 csr_operate clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 wbu8 csr_operate rst", false,-1);
        tracep->declQuad(c+48,"ysyx_22051013 rvcore0 wbu8 csr_operate pc_i", false,-1, 63,0);
        tracep->declBus(c+192,"ysyx_22051013 rvcore0 wbu8 csr_operate csr_ctl", false,-1, 3,0);
        tracep->declBus(c+60,"ysyx_22051013 rvcore0 wbu8 csr_operate csr_addr", false,-1, 11,0);
        tracep->declBit(c+562,"ysyx_22051013 rvcore0 wbu8 csr_operate core_valid", false,-1);
        tracep->declQuad(c+181,"ysyx_22051013 rvcore0 wbu8 csr_operate mcause_value", false,-1, 63,0);
        tracep->declQuad(c+179,"ysyx_22051013 rvcore0 wbu8 csr_operate write_csr_data", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22051013 rvcore0 wbu8 csr_operate time_interrupt", false,-1);
        tracep->declBit(c+187,"ysyx_22051013 rvcore0 wbu8 csr_operate time_interrupt_confirm", false,-1);
        tracep->declQuad(c+175,"ysyx_22051013 rvcore0 wbu8 csr_operate read_csr_data", false,-1, 63,0);
        tracep->declBit(c+193,"ysyx_22051013 rvcore0 wbu8 csr_operate mcycle_rd", false,-1);
        tracep->declBit(c+194,"ysyx_22051013 rvcore0 wbu8 csr_operate mcycle_wr", false,-1);
        tracep->declQuad(c+195,"ysyx_22051013 rvcore0 wbu8 csr_operate mcycle", false,-1, 63,0);
        tracep->declBit(c+197,"ysyx_22051013 rvcore0 wbu8 csr_operate mie_rd", false,-1);
        tracep->declBit(c+198,"ysyx_22051013 rvcore0 wbu8 csr_operate mie_wr", false,-1);
        tracep->declBit(c+199,"ysyx_22051013 rvcore0 wbu8 csr_operate mtie", false,-1);
        tracep->declQuad(c+200,"ysyx_22051013 rvcore0 wbu8 csr_operate mie", false,-1, 63,0);
        tracep->declBit(c+202,"ysyx_22051013 rvcore0 wbu8 csr_operate mip_rd", false,-1);
        tracep->declBit(c+203,"ysyx_22051013 rvcore0 wbu8 csr_operate mtip", false,-1);
        tracep->declQuad(c+204,"ysyx_22051013 rvcore0 wbu8 csr_operate mip", false,-1, 63,0);
        tracep->declBit(c+206,"ysyx_22051013 rvcore0 wbu8 csr_operate mstatus_rd", false,-1);
        tracep->declBit(c+207,"ysyx_22051013 rvcore0 wbu8 csr_operate mstatus_wr", false,-1);
        tracep->declBit(c+208,"ysyx_22051013 rvcore0 wbu8 csr_operate mstatus_mie", false,-1);
        tracep->declBit(c+209,"ysyx_22051013 rvcore0 wbu8 csr_operate mstatus_mpie", false,-1);
        tracep->declBus(c+210,"ysyx_22051013 rvcore0 wbu8 csr_operate mstatus_mpp", false,-1, 1,0);
        tracep->declQuad(c+211,"ysyx_22051013 rvcore0 wbu8 csr_operate mstatus", false,-1, 63,0);
        tracep->declBit(c+213,"ysyx_22051013 rvcore0 wbu8 csr_operate mstatus_ie_ena", false,-1);
        tracep->declBit(c+214,"ysyx_22051013 rvcore0 wbu8 csr_operate mie_set", false,-1);
        tracep->declBit(c+215,"ysyx_22051013 rvcore0 wbu8 csr_operate mpie_set", false,-1);
        tracep->declBus(c+216,"ysyx_22051013 rvcore0 wbu8 csr_operate mpp_set", false,-1, 1,0);
        tracep->declBit(c+217,"ysyx_22051013 rvcore0 wbu8 csr_operate mtvec_rd", false,-1);
        tracep->declBit(c+218,"ysyx_22051013 rvcore0 wbu8 csr_operate mtvec_wr", false,-1);
        tracep->declQuad(c+219,"ysyx_22051013 rvcore0 wbu8 csr_operate mtvec_base", false,-1, 63,2);
        tracep->declBus(c+882,"ysyx_22051013 rvcore0 wbu8 csr_operate mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+221,"ysyx_22051013 rvcore0 wbu8 csr_operate mtvec", false,-1, 63,0);
        tracep->declBit(c+223,"ysyx_22051013 rvcore0 wbu8 csr_operate mepc_rd", false,-1);
        tracep->declBit(c+224,"ysyx_22051013 rvcore0 wbu8 csr_operate mepc_wr", false,-1);
        tracep->declQuad(c+225,"ysyx_22051013 rvcore0 wbu8 csr_operate mepc", false,-1, 63,0);
        tracep->declBit(c+227,"ysyx_22051013 rvcore0 wbu8 csr_operate mcause_rd", false,-1);
        tracep->declBit(c+228,"ysyx_22051013 rvcore0 wbu8 csr_operate mcause_wr", false,-1);
        tracep->declQuad(c+229,"ysyx_22051013 rvcore0 wbu8 csr_operate mcause", false,-1, 63,0);
        tracep->declBit(c+804,"ysyx_22051013 rvcore0 reg9 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 rvcore0 reg9 rst", false,-1);
        tracep->declBus(c+69,"ysyx_22051013 rvcore0 reg9 waddr", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22051013 rvcore0 reg9 wdata", false,-1, 63,0);
        tracep->declBit(c+68,"ysyx_22051013 rvcore0 reg9 wen", false,-1);
        tracep->declBus(c+536,"ysyx_22051013 rvcore0 reg9 raddr1", false,-1, 4,0);
        tracep->declQuad(c+814,"ysyx_22051013 rvcore0 reg9 rdata1", false,-1, 63,0);
        tracep->declBit(c+538,"ysyx_22051013 rvcore0 reg9 ren1", false,-1);
        tracep->declBus(c+537,"ysyx_22051013 rvcore0 reg9 raddr2", false,-1, 4,0);
        tracep->declQuad(c+816,"ysyx_22051013 rvcore0 reg9 rdata2", false,-1, 63,0);
        tracep->declBit(c+539,"ysyx_22051013 rvcore0 reg9 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+231+i*2,"ysyx_22051013 rvcore0 reg9 regs", true,(i+0), 63,0);}}
        tracep->declBit(c+804,"ysyx_22051013 axi_master_arbitrator1 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 axi_master_arbitrator1 rst", false,-1);
        tracep->declQuad(c+372,"ysyx_22051013 axi_master_arbitrator1 icache_pc", false,-1, 63,0);
        tracep->declBit(c+496,"ysyx_22051013 axi_master_arbitrator1 icache_ena", false,-1);
        tracep->declBus(c+12,"ysyx_22051013 axi_master_arbitrator1 inst_size", false,-1, 2,0);
        tracep->declQuad(c+497,"ysyx_22051013 axi_master_arbitrator1 axi_inst", false,-1, 63,0);
        tracep->declBit(c+499,"ysyx_22051013 axi_master_arbitrator1 axi_inst_valid", false,-1);
        tracep->declQuad(c+433,"ysyx_22051013 axi_master_arbitrator1 data_pc", false,-1, 63,0);
        tracep->declQuad(c+438,"ysyx_22051013 axi_master_arbitrator1 data_i", false,-1, 63,0);
        tracep->declBit(c+441,"ysyx_22051013 axi_master_arbitrator1 we", false,-1);
        tracep->declBit(c+377,"ysyx_22051013 axi_master_arbitrator1 re", false,-1);
        tracep->declBus(c+437,"ysyx_22051013 axi_master_arbitrator1 data_size", false,-1, 2,0);
        tracep->declBus(c+440,"ysyx_22051013 axi_master_arbitrator1 wmask", false,-1, 7,0);
        tracep->declBit(c+519,"ysyx_22051013 axi_master_arbitrator1 clint_ena", false,-1);
        tracep->declQuad(c+520,"ysyx_22051013 axi_master_arbitrator1 data_o", false,-1, 63,0);
        tracep->declBit(c+522,"ysyx_22051013 axi_master_arbitrator1 axi_data_valid", false,-1);
        tracep->declBus(c+432,"ysyx_22051013 axi_master_arbitrator1 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+433,"ysyx_22051013 axi_master_arbitrator1 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+435,"ysyx_22051013 axi_master_arbitrator1 axi_aw_valid", false,-1);
        tracep->declBit(c+436,"ysyx_22051013 axi_master_arbitrator1 axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 axi_master_arbitrator1 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+437,"ysyx_22051013 axi_master_arbitrator1 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+881,"ysyx_22051013 axi_master_arbitrator1 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+438,"ysyx_22051013 axi_master_arbitrator1 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+440,"ysyx_22051013 axi_master_arbitrator1 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+441,"ysyx_22051013 axi_master_arbitrator1 axi_w_last", false,-1);
        tracep->declBit(c+442,"ysyx_22051013 axi_master_arbitrator1 axi_w_valid", false,-1);
        tracep->declBit(c+443,"ysyx_22051013 axi_master_arbitrator1 axi_w_ready", false,-1);
        tracep->declBus(c+444,"ysyx_22051013 axi_master_arbitrator1 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 axi_master_arbitrator1 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+363,"ysyx_22051013 axi_master_arbitrator1 axi_b_valid", false,-1);
        tracep->declBit(c+883,"ysyx_22051013 axi_master_arbitrator1 axi_b_ready", false,-1);
        tracep->declBus(c+445,"ysyx_22051013 axi_master_arbitrator1 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+446,"ysyx_22051013 axi_master_arbitrator1 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+880,"ysyx_22051013 axi_master_arbitrator1 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+448,"ysyx_22051013 axi_master_arbitrator1 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+881,"ysyx_22051013 axi_master_arbitrator1 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1,"ysyx_22051013 axi_master_arbitrator1 axi_ar_valid", false,-1);
        tracep->declBit(c+364,"ysyx_22051013 axi_master_arbitrator1 axi_ar_ready", false,-1);
        tracep->declBus(c+449,"ysyx_22051013 axi_master_arbitrator1 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+450,"ysyx_22051013 axi_master_arbitrator1 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 axi_master_arbitrator1 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+365,"ysyx_22051013 axi_master_arbitrator1 axi_r_last", false,-1);
        tracep->declBit(c+365,"ysyx_22051013 axi_master_arbitrator1 axi_r_valid", false,-1);
        tracep->declBit(c+883,"ysyx_22051013 axi_master_arbitrator1 axi_r_ready", false,-1);
        tracep->declBit(c+709,"ysyx_22051013 axi_master_arbitrator1 if_read", false,-1);
        tracep->declBit(c+710,"ysyx_22051013 axi_master_arbitrator1 ls_read", false,-1);
        tracep->declBit(c+441,"ysyx_22051013 axi_master_arbitrator1 ls_write", false,-1);
        tracep->declBit(c+441,"ysyx_22051013 axi_master_arbitrator1 w_valid", false,-1);
        tracep->declBit(c+711,"ysyx_22051013 axi_master_arbitrator1 r_valid", false,-1);
        tracep->declBit(c+712,"ysyx_22051013 axi_master_arbitrator1 aw_sh", false,-1);
        tracep->declBit(c+713,"ysyx_22051013 axi_master_arbitrator1 w_sh", false,-1);
        tracep->declBit(c+714,"ysyx_22051013 axi_master_arbitrator1 b_sh", false,-1);
        tracep->declBit(c+415,"ysyx_22051013 axi_master_arbitrator1 ar_sh", false,-1);
        tracep->declBit(c+715,"ysyx_22051013 axi_master_arbitrator1 r_sh", false,-1);
        tracep->declBus(c+295,"ysyx_22051013 axi_master_arbitrator1 arb_w_state", false,-1, 2,0);
        tracep->declBus(c+296,"ysyx_22051013 axi_master_arbitrator1 arb_r_state", false,-1, 2,0);
        tracep->declBus(c+297,"ysyx_22051013 axi_master_arbitrator1 read_state", false,-1, 1,0);
        tracep->declBus(c+716,"ysyx_22051013 axi_master_arbitrator1 read_state_next", false,-1, 1,0);
        tracep->declBit(c+714,"ysyx_22051013 axi_master_arbitrator1 data_w_not_ready", false,-1);
        tracep->declBit(c+715,"ysyx_22051013 axi_master_arbitrator1 data_r_not_ready", false,-1);
        tracep->declBit(c+885,"ysyx_22051013 axi_master_arbitrator1 unused_ok", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 icache_device_sel2 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 icache_device_sel2 rst", false,-1);
        tracep->declQuad(c+491,"ysyx_22051013 icache_device_sel2 core_addr", false,-1, 63,0);
        tracep->declBit(c+493,"ysyx_22051013 icache_device_sel2 core_ready", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 icache_device_sel2 fencei", false,-1);
        tracep->declBit(c+494,"ysyx_22051013 icache_device_sel2 inst_valid", false,-1);
        tracep->declQuad(c+10,"ysyx_22051013 icache_device_sel2 pc", false,-1, 63,0);
        tracep->declBus(c+495,"ysyx_22051013 icache_device_sel2 inst", false,-1, 31,0);
        tracep->declBit(c+496,"ysyx_22051013 icache_device_sel2 axi_re", false,-1);
        tracep->declQuad(c+372,"ysyx_22051013 icache_device_sel2 axi_inst_pc", false,-1, 63,0);
        tracep->declBus(c+12,"ysyx_22051013 icache_device_sel2 axi_size", false,-1, 2,0);
        tracep->declBit(c+499,"ysyx_22051013 icache_device_sel2 axi_valid", false,-1);
        tracep->declQuad(c+497,"ysyx_22051013 icache_device_sel2 axi_inst_i", false,-1, 63,0);
        tracep->declBit(c+500,"ysyx_22051013 icache_device_sel2 icache_axi_re", false,-1);
        tracep->declQuad(c+501,"ysyx_22051013 icache_device_sel2 icache_axi_pc", false,-1, 63,0);
        tracep->declQuad(c+375,"ysyx_22051013 icache_device_sel2 axi_icache_inst", false,-1, 63,0);
        tracep->declBit(c+508,"ysyx_22051013 icache_device_sel2 axi_icache_valid", false,-1);
        tracep->declBit(c+503,"ysyx_22051013 icache_device_sel2 icache_ena", false,-1);
        tracep->declQuad(c+505,"ysyx_22051013 icache_device_sel2 icache_inst_pc", false,-1, 63,0);
        tracep->declBit(c+507,"ysyx_22051013 icache_device_sel2 icache_ready", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 icache_device_sel2 icache_fencei", false,-1);
        tracep->declBit(c+374,"ysyx_22051013 icache_device_sel2 icache_valid", false,-1);
        tracep->declQuad(c+14,"ysyx_22051013 icache_device_sel2 icache_pc", false,-1, 63,0);
        tracep->declBus(c+504,"ysyx_22051013 icache_device_sel2 icache_inst_i", false,-1, 31,0);
        tracep->declBit(c+717,"ysyx_22051013 icache_device_sel2 mem_ena", false,-1);
        tracep->declBit(c+718,"ysyx_22051013 icache_device_sel2 clint_ena", false,-1);
        tracep->declBit(c+298,"ysyx_22051013 icache_device_sel2 sel_now", false,-1);
        tracep->declBit(c+299,"ysyx_22051013 icache_device_sel2 core_re", false,-1);
        tracep->declQuad(c+300,"ysyx_22051013 icache_device_sel2 pc_now", false,-1, 63,0);
        tracep->declBit(c+804,"ysyx_22051013 i_cache3 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 i_cache3 rst", false,-1);
        tracep->declQuad(c+505,"ysyx_22051013 i_cache3 inst_pc", false,-1, 63,0);
        tracep->declBit(c+507,"ysyx_22051013 i_cache3 pc_ready", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 i_cache3 fencei", false,-1);
        tracep->declBit(c+503,"ysyx_22051013 i_cache3 icache_ena", false,-1);
        tracep->declBit(c+494,"ysyx_22051013 i_cache3 icache_valid", false,-1);
        tracep->declBit(c+374,"ysyx_22051013 i_cache3 i_valid", false,-1);
        tracep->declBus(c+504,"ysyx_22051013 i_cache3 inst", false,-1, 31,0);
        tracep->declQuad(c+14,"ysyx_22051013 i_cache3 pc", false,-1, 63,0);
        tracep->declQuad(c+501,"ysyx_22051013 i_cache3 axi_pc", false,-1, 63,0);
        tracep->declBit(c+500,"ysyx_22051013 i_cache3 axi_ena", false,-1);
        tracep->declQuad(c+375,"ysyx_22051013 i_cache3 axi_inst", false,-1, 63,0);
        tracep->declBit(c+508,"ysyx_22051013 i_cache3 axi_valid", false,-1);
        tracep->declBus(c+719,"ysyx_22051013 i_cache3 icache_tag", false,-1, 22,0);
        tracep->declBus(c+720,"ysyx_22051013 i_cache3 icache_index", false,-1, 5,0);
        tracep->declBit(c+302,"ysyx_22051013 i_cache3 hit1", false,-1);
        tracep->declBit(c+303,"ysyx_22051013 i_cache3 hit2", false,-1);
        tracep->declQuad(c+14,"ysyx_22051013 i_cache3 hit_pc", false,-1, 63,0);
        tracep->declBus(c+304,"ysyx_22051013 i_cache3 hit_index", false,-1, 5,0);
        tracep->declBus(c+305,"ysyx_22051013 i_cache3 hit_tag", false,-1, 22,0);
        tracep->declBus(c+306,"ysyx_22051013 i_cache3 fencei_index", false,-1, 6,0);
        tracep->declBus(c+307,"ysyx_22051013 i_cache3 icache_state", false,-1, 3,0);
        tracep->declBus(c+721,"ysyx_22051013 i_cache3 icache_state_next", false,-1, 3,0);
        tracep->declBit(c+722,"ysyx_22051013 i_cache3 inst_valid", false,-1);
        tracep->declArray(c+723,"ysyx_22051013 i_cache3 miss_data", false,-1, 127,0);
        tracep->declArray(c+727,"ysyx_22051013 i_cache3 cache_strb", false,-1, 127,0);
        tracep->declBit(c+731,"ysyx_22051013 i_cache3 cache_ena", false,-1);
        tracep->declBit(c+732,"ysyx_22051013 i_cache3 write_in_valid", false,-1);
        tracep->declBit(c+308,"ysyx_22051013 i_cache3 delay1", false,-1);
        tracep->declBus(c+416,"ysyx_22051013 i_cache3 tag", false,-1, 22,0);
        tracep->declBus(c+733,"ysyx_22051013 i_cache3 tag_with_valid", false,-1, 23,0);
        tracep->declBit(c+417,"ysyx_22051013 i_cache3 way1_tag_ena", false,-1);
        tracep->declBit(c+418,"ysyx_22051013 i_cache3 way2_tag_ena", false,-1);
        tracep->declBus(c+734,"ysyx_22051013 i_cache3 index", false,-1, 5,0);
        tracep->declBus(c+309,"ysyx_22051013 i_cache3 i_tag_way1", false,-1, 22,0);
        tracep->declBit(c+310,"ysyx_22051013 i_cache3 i_tag_valid1", false,-1);
        tracep->declBus(c+311,"ysyx_22051013 i_cache3 i_tag_way2", false,-1, 22,0);
        tracep->declBit(c+312,"ysyx_22051013 i_cache3 i_tag_valid2", false,-1);
        tracep->declArray(c+313,"ysyx_22051013 i_cache3 cache_data", false,-1, 127,0);
        tracep->declBit(c+317,"ysyx_22051013 i_cache3 ce", false,-1);
        tracep->declBus(c+318,"ysyx_22051013 i_cache3 i", false,-1, 31,0);
        tracep->declBit(c+804,"ysyx_22051013 i_cache3 tag_ram0 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 i_cache3 tag_ram0 rst", false,-1);
        tracep->declBus(c+734,"ysyx_22051013 i_cache3 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+733,"ysyx_22051013 i_cache3 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+417,"ysyx_22051013 i_cache3 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+309,"ysyx_22051013 i_cache3 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+310,"ysyx_22051013 i_cache3 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+309,"ysyx_22051013 i_cache3 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+310,"ysyx_22051013 i_cache3 tag_ram0 out_vaild", false,-1);
        tracep->declBus(c+319,"ysyx_22051013 i_cache3 tag_ram0 tg", false,-1, 31,0);
        tracep->declBit(c+804,"ysyx_22051013 i_cache3 tag_ram1 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 i_cache3 tag_ram1 rst", false,-1);
        tracep->declBus(c+734,"ysyx_22051013 i_cache3 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+733,"ysyx_22051013 i_cache3 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+418,"ysyx_22051013 i_cache3 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+311,"ysyx_22051013 i_cache3 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+312,"ysyx_22051013 i_cache3 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+311,"ysyx_22051013 i_cache3 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+312,"ysyx_22051013 i_cache3 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+320,"ysyx_22051013 i_cache3 tag_ram1 tg", false,-1, 31,0);
        tracep->declBus(c+886,"ysyx_22051013 i_cache3 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+887,"ysyx_22051013 i_cache3 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+888,"ysyx_22051013 i_cache3 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+886,"ysyx_22051013 i_cache3 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+313,"ysyx_22051013 i_cache3 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+804,"ysyx_22051013 i_cache3 data_ram0 CLK", false,-1);
        tracep->declBit(c+317,"ysyx_22051013 i_cache3 data_ram0 CEN", false,-1);
        tracep->declBit(c+735,"ysyx_22051013 i_cache3 data_ram0 WEN", false,-1);
        tracep->declArray(c+736,"ysyx_22051013 i_cache3 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+304,"ysyx_22051013 i_cache3 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+723,"ysyx_22051013 i_cache3 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+321,"ysyx_22051013 i_cache3 data_ram0 cen", false,-1);
        tracep->declBit(c+731,"ysyx_22051013 i_cache3 data_ram0 wen", false,-1);
        tracep->declArray(c+727,"ysyx_22051013 i_cache3 data_ram0 bwen", false,-1, 127,0);
        tracep->declBit(c+510,"ysyx_22051013 dcache_device_sel4 core_re", false,-1);
        tracep->declBit(c+509,"ysyx_22051013 dcache_device_sel4 core_we", false,-1);
        tracep->declBus(c+511,"ysyx_22051013 dcache_device_sel4 core_mask", false,-1, 7,0);
        tracep->declQuad(c+516,"ysyx_22051013 dcache_device_sel4 core_data_i", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013 dcache_device_sel4 device_data_i", false,-1, 63,0);
        tracep->declQuad(c+512,"ysyx_22051013 dcache_device_sel4 core_addr", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22051013 dcache_device_sel4 core_ready", false,-1);
        tracep->declBus(c+19,"ysyx_22051013 dcache_device_sel4 core_size", false,-1, 2,0);
        tracep->declBit(c+13,"ysyx_22051013 dcache_device_sel4 fencei", false,-1);
        tracep->declBit(c+518,"ysyx_22051013 dcache_device_sel4 data_valid", false,-1);
        tracep->declQuad(c+514,"ysyx_22051013 dcache_device_sel4 data_to_core", false,-1, 63,0);
        tracep->declBit(c+519,"ysyx_22051013 dcache_device_sel4 clint_ena", false,-1);
        tracep->declBit(c+377,"ysyx_22051013 dcache_device_sel4 axi_re", false,-1);
        tracep->declBit(c+441,"ysyx_22051013 dcache_device_sel4 axi_we", false,-1);
        tracep->declBus(c+440,"ysyx_22051013 dcache_device_sel4 axi_mask", false,-1, 7,0);
        tracep->declQuad(c+438,"ysyx_22051013 dcache_device_sel4 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+433,"ysyx_22051013 dcache_device_sel4 axi_data_pc", false,-1, 63,0);
        tracep->declBus(c+437,"ysyx_22051013 dcache_device_sel4 axi_size", false,-1, 2,0);
        tracep->declBit(c+522,"ysyx_22051013 dcache_device_sel4 axi_valid", false,-1);
        tracep->declQuad(c+520,"ysyx_22051013 dcache_device_sel4 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+379,"ysyx_22051013 dcache_device_sel4 dcache_axi_re", false,-1);
        tracep->declBit(c+380,"ysyx_22051013 dcache_device_sel4 dcache_axi_we", false,-1);
        tracep->declQuad(c+806,"ysyx_22051013 dcache_device_sel4 dcache_axi_pc", false,-1, 63,0);
        tracep->declQuad(c+381,"ysyx_22051013 dcache_device_sel4 dcache_axi_data", false,-1, 63,0);
        tracep->declQuad(c+533,"ysyx_22051013 dcache_device_sel4 axi_dcache_data", false,-1, 63,0);
        tracep->declBit(c+535,"ysyx_22051013 dcache_device_sel4 axi_dcache_valid", false,-1);
        tracep->declBit(c+523,"ysyx_22051013 dcache_device_sel4 dcache_re", false,-1);
        tracep->declBit(c+524,"ysyx_22051013 dcache_device_sel4 dcache_we", false,-1);
        tracep->declBus(c+525,"ysyx_22051013 dcache_device_sel4 dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+526,"ysyx_22051013 dcache_device_sel4 dcache_data_o", false,-1, 63,0);
        tracep->declQuad(c+530,"ysyx_22051013 dcache_device_sel4 dcache_data_pc", false,-1, 63,0);
        tracep->declBit(c+532,"ysyx_22051013 dcache_device_sel4 dcache_ready", false,-1);
        tracep->declBit(c+13,"ysyx_22051013 dcache_device_sel4 dcache_fencei", false,-1);
        tracep->declBit(c+378,"ysyx_22051013 dcache_device_sel4 dcache_valid", false,-1);
        tracep->declQuad(c+528,"ysyx_22051013 dcache_device_sel4 dcache_data_i", false,-1, 63,0);
        tracep->declBit(c+740,"ysyx_22051013 dcache_device_sel4 device_ena", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 d_cache5 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 d_cache5 rst", false,-1);
        tracep->declQuad(c+530,"ysyx_22051013 d_cache5 data_pc", false,-1, 63,0);
        tracep->declQuad(c+526,"ysyx_22051013 d_cache5 data_i", false,-1, 63,0);
        tracep->declBit(c+532,"ysyx_22051013 d_cache5 core_ready", false,-1);
        tracep->declBit(c+523,"ysyx_22051013 d_cache5 re", false,-1);
        tracep->declBit(c+524,"ysyx_22051013 d_cache5 we", false,-1);
        tracep->declBus(c+525,"ysyx_22051013 d_cache5 wmask", false,-1, 7,0);
        tracep->declBit(c+13,"ysyx_22051013 d_cache5 fencei", false,-1);
        tracep->declBit(c+378,"ysyx_22051013 d_cache5 data_valid", false,-1);
        tracep->declQuad(c+528,"ysyx_22051013 d_cache5 data_o", false,-1, 63,0);
        tracep->declQuad(c+806,"ysyx_22051013 d_cache5 axi_pc", false,-1, 63,0);
        tracep->declBit(c+379,"ysyx_22051013 d_cache5 axi_r_ena", false,-1);
        tracep->declBit(c+380,"ysyx_22051013 d_cache5 axi_w_ena", false,-1);
        tracep->declQuad(c+381,"ysyx_22051013 d_cache5 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+533,"ysyx_22051013 d_cache5 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+535,"ysyx_22051013 d_cache5 axi_valid", false,-1);
        tracep->declBus(c+741,"ysyx_22051013 d_cache5 dcache_tag", false,-1, 22,0);
        tracep->declBus(c+742,"ysyx_22051013 d_cache5 dcache_index", false,-1, 5,0);
        tracep->declBus(c+322,"ysyx_22051013 d_cache5 dread_state", false,-1, 5,0);
        tracep->declBus(c+743,"ysyx_22051013 d_cache5 dread_state_next", false,-1, 5,0);
        tracep->declBit(c+744,"ysyx_22051013 d_cache5 way1_r_hit", false,-1);
        tracep->declBit(c+745,"ysyx_22051013 d_cache5 way2_r_hit", false,-1);
        tracep->declBit(c+746,"ysyx_22051013 d_cache5 way1_r_dirty", false,-1);
        tracep->declBit(c+419,"ysyx_22051013 d_cache5 way2_r_dirty", false,-1);
        tracep->declBit(c+747,"ysyx_22051013 d_cache5 core_re_ready", false,-1);
        tracep->declBit(c+323,"ysyx_22051013 d_cache5 tag_update", false,-1);
        tracep->declBit(c+839,"ysyx_22051013 d_cache5 tag_update_temp", false,-1);
        tracep->declBit(c+748,"ysyx_22051013 d_cache5 data_r_valid", false,-1);
        tracep->declBit(c+749,"ysyx_22051013 d_cache5 write_r_valid", false,-1);
        tracep->declBit(c+840,"ysyx_22051013 d_cache5 way1_r_ena", false,-1);
        tracep->declBit(c+841,"ysyx_22051013 d_cache5 way2_r_ena", false,-1);
        tracep->declQuad(c+750,"ysyx_22051013 d_cache5 missr_pc", false,-1, 63,0);
        tracep->declBit(c+752,"ysyx_22051013 d_cache5 missr_ena", false,-1);
        tracep->declArray(c+753,"ysyx_22051013 d_cache5 missr_data", false,-1, 127,0);
        tracep->declArray(c+842,"ysyx_22051013 d_cache5 cache_r_strb", false,-1, 127,0);
        tracep->declBit(c+840,"ysyx_22051013 d_cache5 dirtyr_way1_clean", false,-1);
        tracep->declBit(c+841,"ysyx_22051013 d_cache5 dirtyr_way2_clean", false,-1);
        tracep->declBus(c+889,"ysyx_22051013 d_cache5 pc_zero", false,-1, 2,0);
        tracep->declBit(c+757,"ysyx_22051013 d_cache5 dirtyr_valid", false,-1);
        tracep->declBit(c+758,"ysyx_22051013 d_cache5 dirtyr_ena", false,-1);
        tracep->declQuad(c+846,"ysyx_22051013 d_cache5 dirtyr_pc", false,-1, 63,0);
        tracep->declQuad(c+759,"ysyx_22051013 d_cache5 dirtyr_data", false,-1, 63,0);
        tracep->declBit(c+324,"ysyx_22051013 d_cache5 delayr", false,-1);
        tracep->declBus(c+325,"ysyx_22051013 d_cache5 dwrite_state", false,-1, 5,0);
        tracep->declBus(c+761,"ysyx_22051013 d_cache5 dwrite_state_next", false,-1, 5,0);
        tracep->declBit(c+762,"ysyx_22051013 d_cache5 way1_w_hit", false,-1);
        tracep->declBit(c+763,"ysyx_22051013 d_cache5 way2_w_hit", false,-1);
        tracep->declBit(c+764,"ysyx_22051013 d_cache5 way1_w_dirty", false,-1);
        tracep->declBit(c+419,"ysyx_22051013 d_cache5 way2_w_dirty", false,-1);
        tracep->declBit(c+765,"ysyx_22051013 d_cache5 core_wr_ready", false,-1);
        tracep->declBit(c+326,"ysyx_22051013 d_cache5 tag_w_update", false,-1);
        tracep->declBit(c+848,"ysyx_22051013 d_cache5 tag_w_update_temp", false,-1);
        tracep->declBit(c+766,"ysyx_22051013 d_cache5 data_w_valid", false,-1);
        tracep->declArray(c+849,"ysyx_22051013 d_cache5 data_write_o", false,-1, 127,0);
        tracep->declArray(c+767,"ysyx_22051013 d_cache5 hit_w_strb", false,-1, 127,0);
        tracep->declQuad(c+771,"ysyx_22051013 d_cache5 strb_w_64", false,-1, 63,0);
        tracep->declBit(c+773,"ysyx_22051013 d_cache5 write_w_valid", false,-1);
        tracep->declBit(c+853,"ysyx_22051013 d_cache5 way1_w_ena", false,-1);
        tracep->declBit(c+854,"ysyx_22051013 d_cache5 way2_w_ena", false,-1);
        tracep->declQuad(c+774,"ysyx_22051013 d_cache5 missw_pc", false,-1, 63,0);
        tracep->declBit(c+776,"ysyx_22051013 d_cache5 missw_ena", false,-1);
        tracep->declArray(c+777,"ysyx_22051013 d_cache5 missw_data", false,-1, 127,0);
        tracep->declArray(c+855,"ysyx_22051013 d_cache5 cache_w_strb", false,-1, 127,0);
        tracep->declBit(c+781,"ysyx_22051013 d_cache5 dirtyw_valid", false,-1);
        tracep->declBit(c+782,"ysyx_22051013 d_cache5 dirtyw_ena", false,-1);
        tracep->declQuad(c+859,"ysyx_22051013 d_cache5 dirtyw_pc", false,-1, 63,0);
        tracep->declQuad(c+783,"ysyx_22051013 d_cache5 dirtyw_data", false,-1, 63,0);
        tracep->declBit(c+327,"ysyx_22051013 d_cache5 delayw", false,-1);
        tracep->declBus(c+328,"ysyx_22051013 d_cache5 fencei_state", false,-1, 5,0);
        tracep->declBus(c+785,"ysyx_22051013 d_cache5 fencei_state_next", false,-1, 5,0);
        tracep->declBus(c+329,"ysyx_22051013 d_cache5 fencei_index", false,-1, 7,0);
        tracep->declBit(c+330,"ysyx_22051013 d_cache5 dirty_hit", false,-1);
        tracep->declBit(c+331,"ysyx_22051013 d_cache5 fencei_way1", false,-1);
        tracep->declBit(c+332,"ysyx_22051013 d_cache5 fencei_way2", false,-1);
        tracep->declQuad(c+333,"ysyx_22051013 d_cache5 fencei_pc", false,-1, 63,0);
        tracep->declQuad(c+335,"ysyx_22051013 d_cache5 fencei_data", false,-1, 63,0);
        tracep->declBit(c+337,"ysyx_22051013 d_cache5 fencei_way1_ena", false,-1);
        tracep->declBit(c+338,"ysyx_22051013 d_cache5 fencei_way2_ena", false,-1);
        tracep->declBit(c+339,"ysyx_22051013 d_cache5 fencei_axi_ena", false,-1);
        tracep->declBit(c+861,"ysyx_22051013 d_cache5 w_finish", false,-1);
        tracep->declBit(c+340,"ysyx_22051013 d_cache5 delayf", false,-1);
        tracep->declBus(c+341,"ysyx_22051013 d_cache5 i", false,-1, 31,0);
        tracep->declBus(c+342,"ysyx_22051013 d_cache5 j", false,-1, 31,0);
        tracep->declBit(c+862,"ysyx_22051013 d_cache5 way1_ena", false,-1);
        tracep->declBus(c+786,"ysyx_22051013 d_cache5 tag_with_valid", false,-1, 23,0);
        tracep->declBus(c+787,"ysyx_22051013 d_cache5 tag_index", false,-1, 5,0);
        tracep->declBus(c+343,"ysyx_22051013 d_cache5 d_tag_way1", false,-1, 22,0);
        tracep->declBit(c+344,"ysyx_22051013 d_cache5 d_tag_valid1", false,-1);
        tracep->declBit(c+863,"ysyx_22051013 d_cache5 way2_ena", false,-1);
        tracep->declBus(c+345,"ysyx_22051013 d_cache5 d_tag_way2", false,-1, 22,0);
        tracep->declBit(c+346,"ysyx_22051013 d_cache5 d_tag_valid2", false,-1);
        tracep->declArray(c+347,"ysyx_22051013 d_cache5 cache_data", false,-1, 127,0);
        tracep->declBit(c+884,"ysyx_22051013 d_cache5 ce", false,-1);
        tracep->declArray(c+864,"ysyx_22051013 d_cache5 ram_strb", false,-1, 127,0);
        tracep->declBit(c+420,"ysyx_22051013 d_cache5 ram_ena", false,-1);
        tracep->declArray(c+868,"ysyx_22051013 d_cache5 ram_i_data", false,-1, 127,0);
        tracep->declBus(c+788,"ysyx_22051013 d_cache5 ram_index", false,-1, 5,0);
        tracep->declBit(c+804,"ysyx_22051013 d_cache5 tag_ram0 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 d_cache5 tag_ram0 rst", false,-1);
        tracep->declBus(c+787,"ysyx_22051013 d_cache5 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+786,"ysyx_22051013 d_cache5 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+862,"ysyx_22051013 d_cache5 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+343,"ysyx_22051013 d_cache5 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+344,"ysyx_22051013 d_cache5 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+343,"ysyx_22051013 d_cache5 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+344,"ysyx_22051013 d_cache5 tag_ram0 out_vaild", false,-1);
        tracep->declBus(c+351,"ysyx_22051013 d_cache5 tag_ram0 tg", false,-1, 31,0);
        tracep->declBit(c+804,"ysyx_22051013 d_cache5 tag_ram1 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 d_cache5 tag_ram1 rst", false,-1);
        tracep->declBus(c+787,"ysyx_22051013 d_cache5 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+786,"ysyx_22051013 d_cache5 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+863,"ysyx_22051013 d_cache5 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+345,"ysyx_22051013 d_cache5 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+346,"ysyx_22051013 d_cache5 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+345,"ysyx_22051013 d_cache5 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+346,"ysyx_22051013 d_cache5 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+352,"ysyx_22051013 d_cache5 tag_ram1 tg", false,-1, 31,0);
        tracep->declBus(c+886,"ysyx_22051013 d_cache5 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+887,"ysyx_22051013 d_cache5 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+888,"ysyx_22051013 d_cache5 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+886,"ysyx_22051013 d_cache5 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+347,"ysyx_22051013 d_cache5 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+804,"ysyx_22051013 d_cache5 data_ram0 CLK", false,-1);
        tracep->declBit(c+884,"ysyx_22051013 d_cache5 data_ram0 CEN", false,-1);
        tracep->declBit(c+421,"ysyx_22051013 d_cache5 data_ram0 WEN", false,-1);
        tracep->declArray(c+872,"ysyx_22051013 d_cache5 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+788,"ysyx_22051013 d_cache5 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+868,"ysyx_22051013 d_cache5 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+883,"ysyx_22051013 d_cache5 data_ram0 cen", false,-1);
        tracep->declBit(c+420,"ysyx_22051013 d_cache5 data_ram0 wen", false,-1);
        tracep->declArray(c+864,"ysyx_22051013 d_cache5 data_ram0 bwen", false,-1, 127,0);
        tracep->declBus(c+432,"ysyx_22051013 xbar6 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+433,"ysyx_22051013 xbar6 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+435,"ysyx_22051013 xbar6 axi_aw_valid", false,-1);
        tracep->declBit(c+436,"ysyx_22051013 xbar6 axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 xbar6 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+437,"ysyx_22051013 xbar6 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+881,"ysyx_22051013 xbar6 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+438,"ysyx_22051013 xbar6 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+440,"ysyx_22051013 xbar6 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+441,"ysyx_22051013 xbar6 axi_w_last", false,-1);
        tracep->declBit(c+442,"ysyx_22051013 xbar6 axi_w_valid", false,-1);
        tracep->declBit(c+443,"ysyx_22051013 xbar6 axi_w_ready", false,-1);
        tracep->declBus(c+444,"ysyx_22051013 xbar6 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 xbar6 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+363,"ysyx_22051013 xbar6 axi_b_valid", false,-1);
        tracep->declBit(c+883,"ysyx_22051013 xbar6 axi_b_ready", false,-1);
        tracep->declBus(c+445,"ysyx_22051013 xbar6 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+446,"ysyx_22051013 xbar6 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+880,"ysyx_22051013 xbar6 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+448,"ysyx_22051013 xbar6 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+881,"ysyx_22051013 xbar6 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1,"ysyx_22051013 xbar6 axi_ar_valid", false,-1);
        tracep->declBit(c+364,"ysyx_22051013 xbar6 axi_ar_ready", false,-1);
        tracep->declBus(c+449,"ysyx_22051013 xbar6 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+450,"ysyx_22051013 xbar6 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 xbar6 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+365,"ysyx_22051013 xbar6 axi_r_last", false,-1);
        tracep->declBit(c+365,"ysyx_22051013 xbar6 axi_r_valid", false,-1);
        tracep->declBit(c+883,"ysyx_22051013 xbar6 axi_r_ready", false,-1);
        tracep->declBus(c+452,"ysyx_22051013 xbar6 soc_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+453,"ysyx_22051013 xbar6 soc_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+455,"ysyx_22051013 xbar6 soc_axi_aw_valid", false,-1);
        tracep->declBit(c+456,"ysyx_22051013 xbar6 soc_axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 xbar6 soc_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+457,"ysyx_22051013 xbar6 soc_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+458,"ysyx_22051013 xbar6 soc_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+459,"ysyx_22051013 xbar6 soc_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+461,"ysyx_22051013 xbar6 soc_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+462,"ysyx_22051013 xbar6 soc_axi_w_last", false,-1);
        tracep->declBit(c+463,"ysyx_22051013 xbar6 soc_axi_w_valid", false,-1);
        tracep->declBit(c+464,"ysyx_22051013 xbar6 soc_axi_w_ready", false,-1);
        tracep->declBus(c+452,"ysyx_22051013 xbar6 soc_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 xbar6 soc_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013 xbar6 soc_axi_b_valid", false,-1);
        tracep->declBit(c+465,"ysyx_22051013 xbar6 soc_axi_b_ready", false,-1);
        tracep->declBus(c+466,"ysyx_22051013 xbar6 soc_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+467,"ysyx_22051013 xbar6 soc_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+880,"ysyx_22051013 xbar6 soc_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+469,"ysyx_22051013 xbar6 soc_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+470,"ysyx_22051013 xbar6 soc_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+366,"ysyx_22051013 xbar6 soc_axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013 xbar6 soc_axi_ar_ready", false,-1);
        tracep->declBus(c+367,"ysyx_22051013 xbar6 soc_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+4,"ysyx_22051013 xbar6 soc_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 xbar6 soc_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013 xbar6 soc_axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013 xbar6 soc_axi_r_valid", false,-1);
        tracep->declBit(c+471,"ysyx_22051013 xbar6 soc_axi_r_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013 xbar6 t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+473,"ysyx_22051013 xbar6 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+475,"ysyx_22051013 xbar6 t_axi_aw_valid", false,-1);
        tracep->declBit(c+475,"ysyx_22051013 xbar6 t_axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 xbar6 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+476,"ysyx_22051013 xbar6 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+477,"ysyx_22051013 xbar6 t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+478,"ysyx_22051013 xbar6 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+480,"ysyx_22051013 xbar6 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+481,"ysyx_22051013 xbar6 t_axi_w_last", false,-1);
        tracep->declBit(c+482,"ysyx_22051013 xbar6 t_axi_w_valid", false,-1);
        tracep->declBit(c+483,"ysyx_22051013 xbar6 t_axi_w_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013 xbar6 t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 xbar6 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013 xbar6 t_axi_b_valid", false,-1);
        tracep->declBit(c+484,"ysyx_22051013 xbar6 t_axi_b_ready", false,-1);
        tracep->declBus(c+485,"ysyx_22051013 xbar6 t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+486,"ysyx_22051013 xbar6 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+880,"ysyx_22051013 xbar6 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+488,"ysyx_22051013 xbar6 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+489,"ysyx_22051013 xbar6 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+368,"ysyx_22051013 xbar6 t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013 xbar6 t_axi_ar_ready", false,-1);
        tracep->declBus(c+369,"ysyx_22051013 xbar6 t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+370,"ysyx_22051013 xbar6 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 xbar6 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013 xbar6 t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013 xbar6 t_axi_r_valid", false,-1);
        tracep->declBit(c+490,"ysyx_22051013 xbar6 t_axi_r_ready", false,-1);
        tracep->declBit(c+490,"ysyx_22051013 xbar6 clint_read", false,-1);
        tracep->declBit(c+484,"ysyx_22051013 xbar6 clint_write", false,-1);
        tracep->declBit(c+804,"ysyx_22051013 clint7 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 clint7 rst", false,-1);
        tracep->declBit(c+20,"ysyx_22051013 clint7 time_interrupt", false,-1);
        tracep->declBus(c+472,"ysyx_22051013 clint7 t_axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+473,"ysyx_22051013 clint7 t_axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+475,"ysyx_22051013 clint7 t_axi_aw_valid", false,-1);
        tracep->declBit(c+475,"ysyx_22051013 clint7 t_axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 clint7 t_axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+476,"ysyx_22051013 clint7 t_axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+477,"ysyx_22051013 clint7 t_axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+478,"ysyx_22051013 clint7 t_axi_w_data", false,-1, 63,0);
        tracep->declBus(c+480,"ysyx_22051013 clint7 t_axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+481,"ysyx_22051013 clint7 t_axi_w_last", false,-1);
        tracep->declBit(c+482,"ysyx_22051013 clint7 t_axi_w_valid", false,-1);
        tracep->declBit(c+483,"ysyx_22051013 clint7 t_axi_w_ready", false,-1);
        tracep->declBus(c+472,"ysyx_22051013 clint7 t_axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 clint7 t_axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+7,"ysyx_22051013 clint7 t_axi_b_valid", false,-1);
        tracep->declBit(c+484,"ysyx_22051013 clint7 t_axi_b_ready", false,-1);
        tracep->declBus(c+485,"ysyx_22051013 clint7 t_axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+486,"ysyx_22051013 clint7 t_axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+880,"ysyx_22051013 clint7 t_axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+488,"ysyx_22051013 clint7 t_axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+489,"ysyx_22051013 clint7 t_axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+368,"ysyx_22051013 clint7 t_axi_ar_valid", false,-1);
        tracep->declBit(c+8,"ysyx_22051013 clint7 t_axi_ar_ready", false,-1);
        tracep->declBus(c+369,"ysyx_22051013 clint7 t_axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+370,"ysyx_22051013 clint7 t_axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 clint7 t_axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013 clint7 t_axi_r_last", false,-1);
        tracep->declBit(c+9,"ysyx_22051013 clint7 t_axi_r_valid", false,-1);
        tracep->declBit(c+490,"ysyx_22051013 clint7 t_axi_r_ready", false,-1);
        tracep->declBus(c+353,"ysyx_22051013 clint7 clint_write_state", false,-1, 1,0);
        tracep->declBus(c+876,"ysyx_22051013 clint7 clint_write_state_next", false,-1, 1,0);
        tracep->declBit(c+475,"ysyx_22051013 clint7 awc_shakehand", false,-1);
        tracep->declBit(c+789,"ysyx_22051013 clint7 wc_shakehand", false,-1);
        tracep->declBit(c+422,"ysyx_22051013 clint7 bc_shakehand", false,-1);
        tracep->declBit(c+423,"ysyx_22051013 clint7 arc_shakehand", false,-1);
        tracep->declBit(c+424,"ysyx_22051013 clint7 rc_shakehand", false,-1);
        tracep->declBus(c+354,"ysyx_22051013 clint7 clint_read_state", false,-1, 1,0);
        tracep->declBus(c+877,"ysyx_22051013 clint7 clint_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+425,"ysyx_22051013 clint7 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+355,"ysyx_22051013 clint7 csr_mtime", false,-1, 63,0);
        tracep->declQuad(c+357,"ysyx_22051013 clint7 csr_mtimecmp", false,-1, 63,0);
        tracep->declBit(c+790,"ysyx_22051013 clint7 mtime_read", false,-1);
        tracep->declBit(c+791,"ysyx_22051013 clint7 mtime_write", false,-1);
        tracep->declBit(c+792,"ysyx_22051013 clint7 mtimecmp_read", false,-1);
        tracep->declBit(c+793,"ysyx_22051013 clint7 mtimecmp_write", false,-1);
        tracep->declBit(c+794,"ysyx_22051013 clint7 read_condi", false,-1);
        tracep->declBit(c+795,"ysyx_22051013 clint7 write_condi", false,-1);
        tracep->declQuad(c+796,"ysyx_22051013 clint7 wmask", false,-1, 63,0);
        tracep->declQuad(c+427,"ysyx_22051013 clint7 mtime_temp", false,-1, 63,0);
        tracep->declQuad(c+429,"ysyx_22051013 clint7 mtimecmp_temp", false,-1, 63,0);
        tracep->declBit(c+804,"ysyx_22051013 axi_slave8 clk", false,-1);
        tracep->declBit(c+805,"ysyx_22051013 axi_slave8 rst", false,-1);
        tracep->declBus(c+452,"ysyx_22051013 axi_slave8 axi_aw_id", false,-1, 3,0);
        tracep->declQuad(c+453,"ysyx_22051013 axi_slave8 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+455,"ysyx_22051013 axi_slave8 axi_aw_valid", false,-1);
        tracep->declBit(c+456,"ysyx_22051013 axi_slave8 axi_aw_ready", false,-1);
        tracep->declBus(c+880,"ysyx_22051013 axi_slave8 axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+457,"ysyx_22051013 axi_slave8 axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+458,"ysyx_22051013 axi_slave8 axi_aw_burst", false,-1, 1,0);
        tracep->declQuad(c+459,"ysyx_22051013 axi_slave8 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+461,"ysyx_22051013 axi_slave8 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+462,"ysyx_22051013 axi_slave8 axi_w_last", false,-1);
        tracep->declBit(c+463,"ysyx_22051013 axi_slave8 axi_w_valid", false,-1);
        tracep->declBit(c+464,"ysyx_22051013 axi_slave8 axi_w_ready", false,-1);
        tracep->declBus(c+452,"ysyx_22051013 axi_slave8 axi_b_id", false,-1, 3,0);
        tracep->declBus(c+882,"ysyx_22051013 axi_slave8 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+2,"ysyx_22051013 axi_slave8 axi_b_valid", false,-1);
        tracep->declBit(c+465,"ysyx_22051013 axi_slave8 axi_b_ready", false,-1);
        tracep->declBus(c+466,"ysyx_22051013 axi_slave8 axi_ar_id", false,-1, 3,0);
        tracep->declQuad(c+467,"ysyx_22051013 axi_slave8 axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+880,"ysyx_22051013 axi_slave8 axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+469,"ysyx_22051013 axi_slave8 axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+470,"ysyx_22051013 axi_slave8 axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+366,"ysyx_22051013 axi_slave8 axi_ar_valid", false,-1);
        tracep->declBit(c+3,"ysyx_22051013 axi_slave8 axi_ar_ready", false,-1);
        tracep->declBus(c+367,"ysyx_22051013 axi_slave8 axi_r_id", false,-1, 3,0);
        tracep->declQuad(c+4,"ysyx_22051013 axi_slave8 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+882,"ysyx_22051013 axi_slave8 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+6,"ysyx_22051013 axi_slave8 axi_r_last", false,-1);
        tracep->declBit(c+6,"ysyx_22051013 axi_slave8 axi_r_valid", false,-1);
        tracep->declBit(c+471,"ysyx_22051013 axi_slave8 axi_r_ready", false,-1);
        tracep->declBit(c+798,"ysyx_22051013 axi_slave8 awc_shakehand", false,-1);
        tracep->declBit(c+799,"ysyx_22051013 axi_slave8 wc_shakehand", false,-1);
        tracep->declBit(c+800,"ysyx_22051013 axi_slave8 bc_shakehand", false,-1);
        tracep->declBus(c+359,"ysyx_22051013 axi_slave8 s_write_state", false,-1, 1,0);
        tracep->declBus(c+878,"ysyx_22051013 axi_slave8 s_write_state_next", false,-1, 1,0);
        tracep->declBit(c+801,"ysyx_22051013 axi_slave8 arc_shakehand", false,-1);
        tracep->declBit(c+431,"ysyx_22051013 axi_slave8 rc_shakehand", false,-1);
        tracep->declBus(c+360,"ysyx_22051013 axi_slave8 s_read_state", false,-1, 1,0);
        tracep->declBus(c+879,"ysyx_22051013 axi_slave8 s_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+361,"ysyx_22051013 axi_slave8 dpic_read_data", false,-1, 63,0);
        tracep->declBus(c+802,"ysyx_22051013 axi_slave8 rlen", false,-1, 7,0);
        tracep->declBit(c+803,"ysyx_22051013 axi_slave8 unused_ok", false,-1);
    }
}

void Vysyx_22051013___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22051013___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22051013___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22051013___024root__traceRegister(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22051013___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22051013___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22051013___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22051013___024root__traceFullSub0(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22051013___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22051013___024root* const __restrict vlSelf = static_cast<Vysyx_22051013___024root*>(voidSelf);
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22051013___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22051013___024root__traceFullSub0(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp356;
    VlWide<5>/*159:0*/ __Vtemp357;
    VlWide<3>/*95:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp363;
    VlWide<3>/*95:0*/ __Vtemp365;
    VlWide<3>/*95:0*/ __Vtemp367;
    VlWide<3>/*95:0*/ __Vtemp368;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<4>/*127:0*/ __Vtemp384;
    VlWide<4>/*127:0*/ __Vtemp390;
    VlWide<4>/*127:0*/ __Vtemp409;
    VlWide<4>/*127:0*/ __Vtemp450;
    VlWide<4>/*127:0*/ __Vtemp463;
    VlWide<4>/*127:0*/ __Vtemp504;
    VlWide<4>/*127:0*/ __Vtemp505;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state))));
        tracep->fullBit(oldp+2,((3U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state))));
        tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))));
        tracep->fullQData(oldp+4,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))
                                    ? vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__dpic_read_data
                                    : 0ULL)),64);
        tracep->fullBit(oldp+6,((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))));
        tracep->fullBit(oldp+7,((3U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state))));
        tracep->fullBit(oldp+8,((1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))));
        tracep->fullBit(oldp+9,((2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))));
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22051013__DOT__idsel_core_pc),64);
        tracep->fullCData(oldp+12,(((IData)(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now)
                                     ? 3U : 0U)),3);
        tracep->fullBit(oldp+13,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei));
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_pc),64);
        tracep->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_ok)))));
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data),64);
        tracep->fullCData(oldp+19,(((((1U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                      | (9U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl))) 
                                     | (0xdU == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                     ? 0U : ((((2U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                               | (0xaU 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl))) 
                                              | (0xeU 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                              ? 1U : 
                                             ((((4U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                                | (0xbU 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl))) 
                                               | (0xfU 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                               ? 2U
                                               : ((
                                                   (5U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                                   | (0xcU 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                                   ? 3U
                                                   : 0U))))),3);
        tracep->fullBit(oldp+20,((vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime 
                                  > vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp)));
        tracep->fullIData(oldp+21,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst),32);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc),64);
        tracep->fullBit(oldp+24,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_jump));
        tracep->fullBit(oldp+25,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_csr_ena));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_csr_ena));
        tracep->fullCData(oldp+27,((0x1fU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                             >> 0xfU))),5);
        tracep->fullIData(oldp+28,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_inst),32);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_pc),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op2),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_imm),64);
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_ena));
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_addr),5);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_lsctl),4);
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_wbctl),2);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel),8);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op1sel),2);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op2sel),3);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rs1_addr),5);
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_load_ena));
        tracep->fullBit(oldp+46,((0xc1U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel))));
        tracep->fullIData(oldp+47,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_inst),32);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_pc),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata),64);
        tracep->fullBit(oldp+52,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_rd_ena));
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_rd_addr),5);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl),4);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_wbctl),2);
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_csr_ctl),7);
        tracep->fullSData(oldp+57,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_csr_addr),12);
        tracep->fullIData(oldp+58,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_inst),32);
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl),7);
        tracep->fullSData(oldp+60,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr),12);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_pc),64);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_wbctl),2);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_wbdata),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata),64);
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_rd_ena));
        tracep->fullCData(oldp+69,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_rd_addr),5);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wb_reg_rd_data),64);
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ie_if_pc_sel));
        tracep->fullQData(oldp+73,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ie_if_pc_sel)
                                     ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data
                                     : 0ULL)),64);
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__hold));
        tracep->fullBit(oldp+76,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ie_if_pc_sel) 
                                  | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei))));
        tracep->fullCData(oldp+77,((0x1fU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+79,((0x7fU & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)),7);
        tracep->fullCData(oldp+80,((7U & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+81,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                    >> 0x19U)),7);
        tracep->fullSData(oldp+82,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                    >> 0x14U)),12);
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__j_imm),20);
        tracep->fullIData(oldp+84,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                    >> 0xcU)),20);
        tracep->fullSData(oldp+85,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__s_imm),12);
        tracep->fullSData(oldp+86,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__b_imm),12);
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_fencei));
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op2),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+98,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sub_op2 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_lt_op2));
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+103,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__sllw),32);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__srlw),32);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+109,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__sraw),32);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sraw_op2),64);
        tracep->fullBit(oldp+112,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__delay1));
        tracep->fullBit(oldp+113,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_out_valid));
        tracep->fullQData(oldp+114,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_out_valid)
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__result_lo),64);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_res_temp),64);
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__delay2));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_out_valid));
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_res_temp),64);
        tracep->fullQData(oldp+124,((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rs1_addr))),64);
        tracep->fullBit(oldp+126,((((0x94U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel)) 
                                    | (0xc8U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel))) 
                                   | (0xa4U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel)))));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_reg));
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_reg));
        tracep->fullBit(oldp+129,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                      | vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                     | vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))))));
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__mul_doing));
        tracep->fullWData(oldp+131,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand),132);
        tracep->fullWData(oldp+136,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier),67);
        tracep->fullCData(oldp+139,((7U & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])),3);
        tracep->fullBit(oldp+140,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative))));
        if (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
            __Vtemp356[1U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                               << 1U)));
            __Vtemp356[2U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                               << 1U)));
            __Vtemp356[3U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                               << 1U)));
            __Vtemp356[4U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                  >> 0x1fU) | (0xeU 
                                               & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                  << 1U))));
            __Vtemp357[0U] = (~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                 << 1U));
        } else {
            __Vtemp356[1U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                   >> 0x1fU) | (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                                << 1U))
                               : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U]
                                       : 0U)));
            __Vtemp356[2U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                   >> 0x1fU) | (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                                << 1U))
                               : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U]
                                       : 0U)));
            __Vtemp356[3U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                   >> 0x1fU) | (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                                << 1U))
                               : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U]
                                       : 0U)));
            __Vtemp356[4U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                   >> 0x1fU) | (0xeU 
                                                & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                   << 1U)))
                               : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                   ? (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U])
                                   : ((1U & ((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                       ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U]
                                       : 0U)));
            __Vtemp357[0U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                          >> 2U)) & 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                       >> 1U)) & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                               ? (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                  << 1U) : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                             ? (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U])
                                             : ((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                      >> 2U)) 
                                                    & (((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                         >> 1U) 
                                                        & (~ 
                                                           vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                                       | ((~ 
                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                            >> 1U)) 
                                                          & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))
                                                 ? 
                                                vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U]
                                                 : 0U)));
        }
        __Vtemp357[1U] = __Vtemp356[1U];
        __Vtemp357[2U] = __Vtemp356[2U];
        __Vtemp357[3U] = __Vtemp356[3U];
        __Vtemp357[4U] = (0xfU & __Vtemp356[4U]);
        tracep->fullWData(oldp+141,(__Vtemp357),132);
        tracep->fullWData(oldp+146,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp),132);
        tracep->fullBit(oldp+151,((1U & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+152,((1U & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+153,((1U & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative));
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative));
        tracep->fullBit(oldp+156,((1U & ((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))));
        tracep->fullBit(oldp+157,((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
        tracep->fullBit(oldp+158,((0U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__cnt))));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__div_doing));
        tracep->fullWData(oldp+160,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend),128);
        tracep->fullCData(oldp+164,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__cnt),7);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__temp_q),64);
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_exls5__DOT__flush));
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_ok));
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_i),64);
        tracep->fullCData(oldp+171,((7U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))),3);
        tracep->fullCData(oldp+172,((3U & (IData)((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+173,((1U & (IData)((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                 >> 2U)))));
        tracep->fullIData(oldp+174,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_word),32);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data),64);
        tracep->fullQData(oldp+177,((((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                               >> 6U))))) 
                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                                 >> 5U))))) 
                                          & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data 
                                             | vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                                >> 4U))))) 
                                         & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data 
                                            & (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata)))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                               >> 1U))))) 
                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_pc))),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data),64);
        tracep->fullQData(oldp+181,(((2U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))
                                      ? 0xbULL : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+183,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data 
                                     | vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata)),64);
        tracep->fullQData(oldp+185,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata))),64);
        tracep->fullBit(oldp+187,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump));
        tracep->fullBit(oldp+188,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__delay));
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__pc_delay),64);
        tracep->fullBit(oldp+191,((0x100073U == vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_inst)));
        tracep->fullCData(oldp+192,((0xfU & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))),4);
        tracep->fullBit(oldp+193,(((0xb00U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+194,(((0xb00U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mcycle),64);
        tracep->fullBit(oldp+197,(((0x304U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+198,(((0x304U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullBit(oldp+199,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtie));
        tracep->fullQData(oldp+200,(((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+202,(((0x344U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+203,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtip));
        tracep->fullQData(oldp+204,(((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                     << 7U)),64);
        tracep->fullBit(oldp+206,(((0x300U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+207,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr));
        tracep->fullBit(oldp+208,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie));
        tracep->fullBit(oldp+209,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie));
        tracep->fullCData(oldp+210,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp),2);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus),64);
        tracep->fullBit(oldp+213,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena));
        tracep->fullBit(oldp+214,((1U & ((~ (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                              >> 1U) 
                                             | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump))) 
                                         & ((1U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))
                                             ? (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)))))));
        tracep->fullBit(oldp+215,((1U & ((1U & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))
                                          ? (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                             | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)))))));
        tracep->fullCData(oldp+216,(((1U & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))
                                      ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        tracep->fullBit(oldp+217,((1U & ((((0x305U 
                                            == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                              >> 2U)) 
                                          | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))));
        tracep->fullBit(oldp+218,(((0x305U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base),62);
        tracep->fullQData(oldp+221,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+223,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl)))));
        tracep->fullBit(oldp+224,((1U & ((((0x341U 
                                            == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                              >> 3U)) 
                                          | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                             >> 1U)) 
                                         | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))));
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mepc),64);
        tracep->fullBit(oldp+227,(((0x342U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+228,(((0x342U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mcause),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[0]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[1]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[2]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[3]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[4]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[5]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[6]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[7]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[8]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[9]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[10]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[11]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[12]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[13]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[14]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[15]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[16]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[17]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[18]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[19]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[20]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[21]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[22]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[23]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[24]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[25]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[26]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[27]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[28]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[29]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[30]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[31]),64);
        tracep->fullCData(oldp+295,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_w_state),3);
        tracep->fullCData(oldp+296,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state),3);
        tracep->fullCData(oldp+297,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__read_state),2);
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now));
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__core_re));
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__pc_now),64);
        tracep->fullBit(oldp+302,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit1));
        tracep->fullBit(oldp+303,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit2));
        tracep->fullCData(oldp+304,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_index),6);
        tracep->fullIData(oldp+305,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_tag),23);
        tracep->fullCData(oldp+306,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__fencei_index),7);
        tracep->fullCData(oldp+307,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state),4);
        tracep->fullBit(oldp+308,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__delay1));
        tracep->fullIData(oldp+309,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+310,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+311,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+312,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullWData(oldp+313,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_data),128);
        tracep->fullBit(oldp+317,((1U == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state))));
        tracep->fullIData(oldp+318,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__i),32);
        tracep->fullIData(oldp+319,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram0__DOT__tg),32);
        tracep->fullIData(oldp+320,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram1__DOT__tg),32);
        tracep->fullBit(oldp+321,((1U != (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state))));
        tracep->fullCData(oldp+322,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state),6);
        tracep->fullBit(oldp+323,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_update));
        tracep->fullBit(oldp+324,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayr));
        tracep->fullCData(oldp+325,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state),6);
        tracep->fullBit(oldp+326,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_w_update));
        tracep->fullBit(oldp+327,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayw));
        tracep->fullCData(oldp+328,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state),6);
        tracep->fullCData(oldp+329,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index),8);
        tracep->fullBit(oldp+330,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirty_hit));
        tracep->fullBit(oldp+331,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1));
        tracep->fullBit(oldp+332,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way2));
        tracep->fullQData(oldp+333,(((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1)
                                      ? (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data)) 
                                          << 9U) | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                                                       << 3U)))))
                                      : ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way2)
                                          ? (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                                                   << 3U)))))
                                          : 0ULL))),64);
        tracep->fullQData(oldp+335,(((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1)
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[0U])))
                                      : ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way2)
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[2U])))
                                          : 0ULL))),64);
        tracep->fullBit(oldp+337,((((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)) 
                                   & (~ ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                         >> 6U)))));
        tracep->fullBit(oldp+338,((((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                      >> 6U))));
        tracep->fullBit(oldp+339,(((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)))));
        tracep->fullBit(oldp+340,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf));
        tracep->fullIData(oldp+341,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__i),32);
        tracep->fullIData(oldp+342,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__j),32);
        tracep->fullIData(oldp+343,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+344,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+345,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+346,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullWData(oldp+347,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data),128);
        tracep->fullIData(oldp+351,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__tg),32);
        tracep->fullIData(oldp+352,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__tg),32);
        tracep->fullCData(oldp+353,(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state),2);
        tracep->fullCData(oldp+354,(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state),2);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp),64);
        tracep->fullCData(oldp+359,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state),2);
        tracep->fullCData(oldp+360,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state),2);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__dpic_read_data),64);
        tracep->fullBit(oldp+363,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                    ? (3U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state))
                                    : (3U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state)))));
        tracep->fullBit(oldp+364,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                    ? (1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                    : (1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state)))));
        tracep->fullBit(oldp+365,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                    ? (2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                    : (2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state)))));
        tracep->fullBit(oldp+366,(((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state)))));
        tracep->fullCData(oldp+367,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))
                                      ? ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                          ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      : 0U)),4);
        tracep->fullBit(oldp+368,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state)))));
        tracep->fullCData(oldp+369,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                      ? ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                          ? (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)
                                          : 0U) : 0U)),4);
        tracep->fullQData(oldp+370,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                      ? (((0x200bff8ULL 
                                           == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))
                                          ? vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime
                                          : (((0x2004000ULL 
                                               == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                              & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))
                                              ? vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+372,(((IData)(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now)
                                      ? vlSelf->ysyx_22051013__DOT__icache_idsel_axi_pc
                                      : vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__pc_now)),64);
        tracep->fullBit(oldp+374,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                          ? (~ (IData)(vlSelf->ysyx_22051013__DOT__idsel_icache_ready))
                                          : (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__inst_valid)))));
        tracep->fullQData(oldp+375,(((IData)(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now)
                                      ? vlSelf->ysyx_22051013__DOT__axi_idsel_inst_i
                                      : 0ULL)),64);
        tracep->fullBit(oldp+377,(((((~ (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)) 
                                     & (IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_ok))
                                    ? (IData)(vlSelf->ysyx_22051013__DOT__core_ddsel_re)
                                    : ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                        ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_ena)
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_ena))))));
        tracep->fullBit(oldp+378,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                          ? (1U != (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state_next))
                                          : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                              ? (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_r_valid))
                                              : ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22051013__DOT__ddsel_dcache_re) 
                                                  | (IData)(vlSelf->ysyx_22051013__DOT__ddsel_dcache_we))))))));
        tracep->fullBit(oldp+379,(((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_ena)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_ena)))));
        tracep->fullBit(oldp+380,(((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state))
                                    ? ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)))
                                    : ((0x10U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                        ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_ena)
                                        : ((0x21U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_ena))))));
        tracep->fullQData(oldp+381,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                      ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1)
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[0U])))
                                          : ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way2)
                                              ? (((QData)((IData)(
                                                                  vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[2U])))
                                              : 0ULL))
                                      : ((0x10U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                          ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_data
                                          : ((0x21U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                              ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+383,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_if_pc_sel)
                                      ? (((0x42U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                           ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1
                                           : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc) 
                                         + ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_jump)
                                             ? 4ULL
                                             : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_imm))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+385,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_rd_ena)
                                      ? (0x1fU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullCData(oldp+386,(((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__jump) 
                                       | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_fencei))
                                      ? 2U : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena)
                                               ? 1U
                                               : 0U))),2);
        tracep->fullCData(oldp+387,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__jump) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_fencei))
                                      ? 2U : ((1U & 
                                               (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xb3U 
                                                           & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                                 | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc)))
                                               ? 4U
                                               : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena)
                                                   ? 1U
                                                   : 0U)))),3);
        tracep->fullSData(oldp+388,(((0U != (0xfU & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_csr_ctl)))
                                      ? (0xfffU & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_imm))
                                      : 0U)),12);
        tracep->fullBit(oldp+389,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_csr_ena)) 
                                   | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_csr_ena)))));
        tracep->fullBit(oldp+390,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_csr_ena)) 
                                   | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_csr_ena)))));
        tracep->fullQData(oldp+391,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward)
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_aludata
                                      : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward)
                                          ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_lswb_data_forward
                                          : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op1_forward)
                                              ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wb_reg_rd_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+393,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward)
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_aludata
                                      : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward)
                                          ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_lswb_data_forward
                                          : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op2_forward)
                                              ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wb_reg_rd_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+395,(((0x42U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1
                                      : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+397,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_jump)
                                      ? 4ULL : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_imm)),64);
        tracep->fullBit(oldp+399,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+400,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+401,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+402,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+403,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+404,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+405,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+406,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
        tracep->fullQData(oldp+407,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_quo
                                      : 0ULL)),64);
        tracep->fullQData(oldp+409,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_rem
                                      : 0ULL)),64);
        tracep->fullQData(oldp+411,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul)
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_res_temp
                                      : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div)
                                          ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_res_temp
                                          : 0ULL))),64);
        tracep->fullQData(oldp+413,(((((QData)((IData)(
                                                       vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                        << 1U) | ((QData)((IData)(
                                                                  vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                                  >> 0x1fU))) 
                                     - vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
        tracep->fullBit(oldp+415,((((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                     ? (1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                     : (1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))) 
                                   & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state)))));
        tracep->fullIData(oldp+416,((0x7fffffU & ((
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state)) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013__DOT__idsel_icache_ready)))
                                                   ? (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__idsel_icache_pc 
                                                              >> 9U))
                                                   : vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_tag))),23);
        tracep->fullBit(oldp+417,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei) 
                                   | ((8U == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state)) 
                                      & (0U == ((((~ 
                                                   vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[0U]) 
                                                  | (~ 
                                                     vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[1U])) 
                                                 | vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[2U]) 
                                                | vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[3U]))))));
        tracep->fullBit(oldp+418,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei) 
                                   | ((8U == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state)) 
                                      & (0U == (((vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[0U] 
                                                  | vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[1U]) 
                                                 | (~ 
                                                    vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[2U])) 
                                                | (~ 
                                                   vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[3U])))))));
        tracep->fullBit(oldp+419,(((vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_dirty
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                       >> 3U)))] 
                                    & vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                       >> 3U)))]) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild))));
        tracep->fullBit(oldp+420,(((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_r_valid)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                        ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_w_valid)
                                        : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid))))));
        tracep->fullBit(oldp+421,((1U & (~ ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                             ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_r_valid)
                                             : ((0x20U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                 ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_w_valid)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid))))))));
        tracep->fullBit(oldp+422,(((3U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)))));
        tracep->fullBit(oldp+423,(((1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state)) 
                                   & ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state))))));
        tracep->fullBit(oldp+424,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state)))));
        tracep->fullQData(oldp+425,((((0x200bff8ULL 
                                       == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))
                                      ? vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime
                                      : (((0x2004000ULL 
                                           == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))
                                          ? vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp
                                          : 0ULL))),64);
        tracep->fullQData(oldp+427,((((((0x200bff8ULL 
                                         == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))
                                      ? ((vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask 
                                          & vlSelf->ysyx_22051013__DOT__t_axi_w_data) 
                                         | ((~ vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask) 
                                            & vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime))
                                      : (1ULL + vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime))),64);
        tracep->fullQData(oldp+429,((((((0x2004000ULL 
                                         == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))
                                      ? ((vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask 
                                          & vlSelf->ysyx_22051013__DOT__t_axi_w_data) 
                                         | ((~ vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask) 
                                            & vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp))
                                      : vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp)),64);
        tracep->fullBit(oldp+431,(((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state)))));
        tracep->fullCData(oldp+432,(vlSelf->ysyx_22051013__DOT__axi_aw_id),4);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22051013__DOT__ddsel_axi_pc),64);
        tracep->fullBit(oldp+435,(vlSelf->ysyx_22051013__DOT__axi_aw_valid));
        tracep->fullBit(oldp+436,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                    ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)
                                    : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready))));
        tracep->fullCData(oldp+437,(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size),3);
        tracep->fullQData(oldp+438,(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_o),64);
        tracep->fullCData(oldp+440,(vlSelf->ysyx_22051013__DOT__ddsel_axi_mask),8);
        tracep->fullBit(oldp+441,(vlSelf->ysyx_22051013__DOT__ddsel_axi_we));
        tracep->fullBit(oldp+442,(vlSelf->ysyx_22051013__DOT__axi_w_valid));
        tracep->fullBit(oldp+443,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                    ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_w_ready)
                                    : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready))));
        tracep->fullCData(oldp+444,(vlSelf->ysyx_22051013__DOT__axi_b_id),4);
        tracep->fullCData(oldp+445,(vlSelf->ysyx_22051013__DOT__axi_ar_id),4);
        tracep->fullQData(oldp+446,(vlSelf->ysyx_22051013__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+448,(vlSelf->ysyx_22051013__DOT__axi_ar_size),3);
        tracep->fullCData(oldp+449,(vlSelf->ysyx_22051013__DOT__axi_r_id),4);
        tracep->fullQData(oldp+450,(vlSelf->ysyx_22051013__DOT__axi_r_data),64);
        tracep->fullCData(oldp+452,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))),4);
        tracep->fullQData(oldp+453,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? 0ULL : vlSelf->ysyx_22051013__DOT__ddsel_axi_pc)),64);
        tracep->fullBit(oldp+455,(vlSelf->ysyx_22051013__DOT__soc_axi_aw_valid));
        tracep->fullBit(oldp+456,(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready));
        tracep->fullCData(oldp+457,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size))),3);
        tracep->fullCData(oldp+458,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? 0U : 1U)),2);
        tracep->fullQData(oldp+459,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? 0ULL : vlSelf->ysyx_22051013__DOT__ddsel_axi_data_o)),64);
        tracep->fullCData(oldp+461,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_mask))),8);
        tracep->fullBit(oldp+462,(((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+463,(vlSelf->ysyx_22051013__DOT__soc_axi_w_valid));
        tracep->fullBit(oldp+464,(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready));
        tracep->fullBit(oldp+465,((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))));
        tracep->fullCData(oldp+466,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))),4);
        tracep->fullQData(oldp+467,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      ? 0ULL : vlSelf->ysyx_22051013__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+469,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size))),3);
        tracep->fullCData(oldp+470,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      ? 0U : 1U)),2);
        tracep->fullBit(oldp+471,((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))));
        tracep->fullCData(oldp+472,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)
                                      : 0U)),4);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_22051013__DOT__t_axi_aw_addr),64);
        tracep->fullBit(oldp+475,(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid));
        tracep->fullCData(oldp+476,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size)
                                      : 0U)),3);
        tracep->fullCData(oldp+477,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? 1U : 0U)),2);
        tracep->fullQData(oldp+478,(vlSelf->ysyx_22051013__DOT__t_axi_w_data),64);
        tracep->fullCData(oldp+480,(vlSelf->ysyx_22051013__DOT__t_axi_w_strb),8);
        tracep->fullBit(oldp+481,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+482,(vlSelf->ysyx_22051013__DOT__t_axi_w_valid));
        tracep->fullBit(oldp+483,(vlSelf->ysyx_22051013__DOT__t_axi_w_ready));
        tracep->fullBit(oldp+484,((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))));
        tracep->fullCData(oldp+485,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      ? (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)
                                      : 0U)),4);
        tracep->fullQData(oldp+486,(vlSelf->ysyx_22051013__DOT__t_axi_ar_addr),64);
        tracep->fullCData(oldp+488,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      ? (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)
                                      : 0U)),3);
        tracep->fullCData(oldp+489,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                      ? 1U : 0U)),2);
        tracep->fullBit(oldp+490,((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))));
        tracep->fullQData(oldp+491,(vlSelf->ysyx_22051013__DOT__core_idsel_inst_pc),64);
        tracep->fullBit(oldp+493,(vlSelf->ysyx_22051013__DOT__core_idsel_core_ready));
        tracep->fullBit(oldp+494,(vlSelf->ysyx_22051013__DOT__idsel_core_inst_valid));
        tracep->fullIData(oldp+495,(vlSelf->ysyx_22051013__DOT__idsel_core_inst),32);
        tracep->fullBit(oldp+496,(vlSelf->ysyx_22051013__DOT__idsel_axi_re));
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22051013__DOT__axi_idsel_inst_i),64);
        tracep->fullBit(oldp+499,(vlSelf->ysyx_22051013__DOT__axi_idsel_valid));
        tracep->fullBit(oldp+500,(vlSelf->ysyx_22051013__DOT__icache_idsel_axi_re));
        tracep->fullQData(oldp+501,(vlSelf->ysyx_22051013__DOT__icache_idsel_axi_pc),64);
        tracep->fullBit(oldp+503,(vlSelf->ysyx_22051013__DOT__idsel_icache_ena));
        tracep->fullIData(oldp+504,(vlSelf->ysyx_22051013__DOT__icache_idsel_inst),32);
        tracep->fullQData(oldp+505,(vlSelf->ysyx_22051013__DOT__idsel_icache_pc),64);
        tracep->fullBit(oldp+507,(vlSelf->ysyx_22051013__DOT__idsel_icache_ready));
        tracep->fullBit(oldp+508,(vlSelf->ysyx_22051013__DOT__axi_idsel_icache_valid));
        tracep->fullBit(oldp+509,(vlSelf->ysyx_22051013__DOT__core_ddsel_we));
        tracep->fullBit(oldp+510,(vlSelf->ysyx_22051013__DOT__core_ddsel_re));
        tracep->fullCData(oldp+511,(vlSelf->ysyx_22051013__DOT__core_ddsel_wlen),8);
        tracep->fullQData(oldp+512,(vlSelf->ysyx_22051013__DOT__core_ddsel_data_pc),64);
        tracep->fullQData(oldp+514,(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                      ? vlSelf->ysyx_22051013__DOT__axi_ddsel_data_i
                                      : vlSelf->ysyx_22051013__DOT__dcache_ddsel_data)),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data),64);
        tracep->fullBit(oldp+518,(vlSelf->ysyx_22051013__DOT__ddsel_core_data_valid));
        tracep->fullBit(oldp+519,(vlSelf->ysyx_22051013__DOT__ddsel_axi_clint));
        tracep->fullQData(oldp+520,(vlSelf->ysyx_22051013__DOT__axi_ddsel_data_i),64);
        tracep->fullBit(oldp+522,(vlSelf->ysyx_22051013__DOT__axi_ddsel_valid));
        tracep->fullBit(oldp+523,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_re));
        tracep->fullBit(oldp+524,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_we));
        tracep->fullCData(oldp+525,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_mask),8);
        tracep->fullQData(oldp+526,(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                      ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data)),64);
        tracep->fullQData(oldp+528,(vlSelf->ysyx_22051013__DOT__dcache_ddsel_data),64);
        tracep->fullQData(oldp+530,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc),64);
        tracep->fullBit(oldp+532,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_ready));
        tracep->fullQData(oldp+533,(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_data),64);
        tracep->fullBit(oldp+535,(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid));
        tracep->fullCData(oldp+536,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr),5);
        tracep->fullCData(oldp+537,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr),5);
        tracep->fullBit(oldp+538,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+539,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+540,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_if_pc_sel));
        tracep->fullBit(oldp+541,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 1U))));
        tracep->fullBit(oldp+542,(((((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrc)) 
                                     | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrwi)) 
                                    | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrsi)) 
                                   | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrci))));
        tracep->fullQData(oldp+543,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1),64);
        tracep->fullQData(oldp+545,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op2),64);
        tracep->fullQData(oldp+547,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_imm),64);
        tracep->fullBit(oldp+549,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_rd_ena));
        tracep->fullCData(oldp+550,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_lsctl),4);
        tracep->fullCData(oldp+551,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_wbctl),2);
        tracep->fullCData(oldp+552,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel),8);
        tracep->fullQData(oldp+553,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_aludata),64);
        tracep->fullCData(oldp+555,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_csr_ctl),7);
        tracep->fullQData(oldp+556,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_lswb_data_forward),64);
        tracep->fullQData(oldp+558,(((IData)(vlSelf->ysyx_22051013__DOT__core_ddsel_re)
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__load_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+560,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__if_valid));
        tracep->fullBit(oldp+561,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_valid));
        tracep->fullBit(oldp+562,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_valid));
        tracep->fullBit(oldp+563,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_ready));
        tracep->fullBit(oldp+564,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_ready));
        tracep->fullBit(oldp+565,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__id_stall_ena));
        tracep->fullIData(oldp+566,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm),20);
        tracep->fullSData(oldp+567,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm),12);
        tracep->fullCData(oldp+568,((0x7fU & vlSelf->ysyx_22051013__DOT__idsel_core_inst)),7);
        tracep->fullBit(oldp+569,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__inst_bxx));
        tracep->fullBit(oldp+570,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifu0__DOT__stall));
        tracep->fullBit(oldp+571,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_ifid1__DOT__flush));
        tracep->fullBit(oldp+572,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_ifid1__DOT__stall));
        tracep->fullBit(oldp+573,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 2U))));
        tracep->fullBit(oldp+574,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward));
        tracep->fullBit(oldp+575,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward));
        tracep->fullBit(oldp+576,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op1_forward));
        tracep->fullBit(oldp+577,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward));
        tracep->fullBit(oldp+578,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward));
        tracep->fullBit(oldp+579,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op2_forward));
        tracep->fullBit(oldp+580,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward) 
                                    | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward)) 
                                   | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op1_forward))));
        tracep->fullBit(oldp+581,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward) 
                                    | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward)) 
                                   | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op2_forward))));
        tracep->fullBit(oldp+582,((1U & ((IData)((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op2 
                                                    >> 0x3fU))))));
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op_ltu_op2));
        tracep->fullBit(oldp+584,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op1_lt_op2));
        tracep->fullCData(oldp+585,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+586,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+587,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+588,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+589,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+590,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+591,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+592,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+593,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+594,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+595,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+596,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+597,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+598,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+599,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+600,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+601,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+602,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+603,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+604,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+605,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+606,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+607,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+608,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+609,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+610,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+611,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+612,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+613,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+614,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+615,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+616,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+617,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+618,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+619,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+620,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+621,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+622,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+623,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+624,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+625,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+626,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+627,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+628,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+629,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+630,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+631,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+632,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+633,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+634,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+635,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+636,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+637,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+638,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+640,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_ecall));
        tracep->fullBit(oldp+641,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mret));
        tracep->fullBit(oldp+642,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+643,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+644,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+645,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+646,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+647,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+648,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+649,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+650,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__jump));
        tracep->fullBit(oldp+651,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb3U 
                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
        tracep->fullBit(oldp+652,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_idex3__DOT__flush));
        tracep->fullBit(oldp+653,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_idex3__DOT__stall));
        tracep->fullQData(oldp+654,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__alu_res),64);
        tracep->fullBit(oldp+656,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul));
        tracep->fullCData(oldp+657,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_signed),2);
        tracep->fullBit(oldp+658,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mulw));
        tracep->fullBit(oldp+659,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_valid));
        tracep->fullBit(oldp+660,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div));
        tracep->fullBit(oldp+661,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_signed));
        tracep->fullBit(oldp+662,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divw));
        tracep->fullBit(oldp+663,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_valid));
        tracep->fullQData(oldp+664,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_res),64);
        tracep->fullBit(oldp+666,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csr_wr_ena));
        tracep->fullBit(oldp+667,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csr_rd_ena));
        tracep->fullBit(oldp+668,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mret_ena));
        tracep->fullBit(oldp+669,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__ecall_ena));
        tracep->fullBit(oldp+670,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csrrw_ena));
        tracep->fullBit(oldp+671,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csrrs_ena));
        tracep->fullBit(oldp+672,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csrrc_ena));
        tracep->fullBit(oldp+673,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_stall));
        tracep->fullBit(oldp+674,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_stall));
        tracep->fullBit(oldp+675,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul) 
                                   | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div))));
        tracep->fullQData(oldp+676,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp),64);
        tracep->fullQData(oldp+678,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp),64);
        VL_EXTEND_WQ(66,64, __Vtemp361, vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
        if ((1U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_signed))) {
            __Vtemp363[0U] = (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
            __Vtemp363[1U] = (IData)((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                      >> 0x20U));
            __Vtemp363[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp363[0U] = __Vtemp361[0U];
            __Vtemp363[1U] = __Vtemp361[1U];
            __Vtemp363[2U] = __Vtemp361[2U];
        }
        tracep->fullWData(oldp+680,(__Vtemp363),66);
        VL_EXTEND_WQ(66,64, __Vtemp365, vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
        if ((2U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_signed))) {
            __Vtemp367[0U] = (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
            __Vtemp367[1U] = (IData)((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                      >> 0x20U));
            __Vtemp367[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp367[0U] = __Vtemp365[0U];
            __Vtemp367[1U] = __Vtemp365[1U];
            __Vtemp367[2U] = __Vtemp365[2U];
        }
        tracep->fullWData(oldp+683,(__Vtemp367),66);
        tracep->fullQData(oldp+686,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
        tracep->fullQData(oldp+688,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
        tracep->fullBit(oldp+690,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_sign));
        tracep->fullBit(oldp+691,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_sign));
        tracep->fullQData(oldp+692,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                      ? (1ULL + (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                      : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
        tracep->fullQData(oldp+694,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
        VL_EXTEND_WQ(65,64, __Vtemp368, vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_abs);
        tracep->fullWData(oldp+696,(__Vtemp368),65);
        tracep->fullBit(oldp+699,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__sub_sign));
        tracep->fullQData(oldp+700,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
        tracep->fullQData(oldp+702,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
        tracep->fullBit(oldp+704,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_exls5__DOT__stall));
        tracep->fullQData(oldp+705,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__load_data),64);
        tracep->fullCData(oldp+707,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_byte),8);
        tracep->fullSData(oldp+708,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_half),16);
        tracep->fullBit(oldp+709,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__if_read));
        tracep->fullBit(oldp+710,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__ls_read));
        tracep->fullBit(oldp+711,(((IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__if_read) 
                                   | (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__ls_read))));
        tracep->fullBit(oldp+712,((((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                     ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)
                                     : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready)) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_valid))));
        tracep->fullBit(oldp+713,(((((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                      ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_w_ready)
                                      : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready)) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__axi_w_valid)) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we))));
        tracep->fullBit(oldp+714,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__b_sh));
        tracep->fullBit(oldp+715,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__r_sh));
        tracep->fullCData(oldp+716,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__read_state_next),2);
        tracep->fullBit(oldp+717,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__mem_ena));
        tracep->fullBit(oldp+718,(((0x2000000ULL <= vlSelf->ysyx_22051013__DOT__core_idsel_inst_pc) 
                                   & (0x200ffffULL 
                                      >= vlSelf->ysyx_22051013__DOT__core_idsel_inst_pc))));
        tracep->fullIData(oldp+719,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013__DOT__idsel_icache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+720,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013__DOT__idsel_icache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+721,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state_next),4);
        tracep->fullBit(oldp+722,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__inst_valid));
        tracep->fullWData(oldp+723,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__miss_data),128);
        tracep->fullWData(oldp+727,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb),128);
        tracep->fullBit(oldp+731,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_ena));
        tracep->fullBit(oldp+732,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__write_in_valid));
        tracep->fullIData(oldp+733,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_with_valid),24);
        tracep->fullCData(oldp+734,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__index),6);
        tracep->fullBit(oldp+735,((1U & (~ (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_ena)))));
        __Vtemp369[0U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[0U]);
        __Vtemp369[1U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[1U]);
        __Vtemp369[2U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[2U]);
        __Vtemp369[3U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[3U]);
        tracep->fullWData(oldp+736,(__Vtemp369),128);
        tracep->fullBit(oldp+740,(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena));
        tracep->fullIData(oldp+741,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+742,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+743,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state_next),6);
        tracep->fullBit(oldp+744,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_r_hit));
        tracep->fullBit(oldp+745,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_r_hit));
        tracep->fullBit(oldp+746,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_r_dirty));
        tracep->fullBit(oldp+747,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_re_ready));
        tracep->fullBit(oldp+748,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_r_valid));
        tracep->fullBit(oldp+749,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_r_valid));
        tracep->fullQData(oldp+750,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_pc),64);
        tracep->fullBit(oldp+752,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_ena));
        tracep->fullWData(oldp+753,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data),128);
        tracep->fullBit(oldp+757,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_valid));
        tracep->fullBit(oldp+758,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_ena));
        tracep->fullQData(oldp+759,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_data),64);
        tracep->fullCData(oldp+761,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state_next),6);
        tracep->fullBit(oldp+762,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_w_hit));
        tracep->fullBit(oldp+763,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_w_hit));
        tracep->fullBit(oldp+764,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_w_dirty));
        tracep->fullBit(oldp+765,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_wr_ready));
        tracep->fullBit(oldp+766,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid));
        tracep->fullWData(oldp+767,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb),128);
        tracep->fullQData(oldp+771,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__strb_w_64),64);
        tracep->fullBit(oldp+773,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_w_valid));
        tracep->fullQData(oldp+774,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_pc),64);
        tracep->fullBit(oldp+776,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_ena));
        tracep->fullWData(oldp+777,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_data),128);
        tracep->fullBit(oldp+781,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_valid));
        tracep->fullBit(oldp+782,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_ena));
        tracep->fullQData(oldp+783,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_data),64);
        tracep->fullCData(oldp+785,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state_next),6);
        tracep->fullIData(oldp+786,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_with_valid),24);
        tracep->fullCData(oldp+787,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_index),6);
        tracep->fullCData(oldp+788,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__ram_index),6);
        tracep->fullBit(oldp+789,(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand));
        tracep->fullBit(oldp+790,(((0x200bff8ULL == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))));
        tracep->fullBit(oldp+791,(((((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                     & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))));
        tracep->fullBit(oldp+792,(((0x2004000ULL == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))));
        tracep->fullBit(oldp+793,(((((0x2004000ULL 
                                      == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                     & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                    & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))));
        tracep->fullBit(oldp+794,(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi));
        tracep->fullBit(oldp+795,(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi));
        tracep->fullQData(oldp+796,(vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask),64);
        tracep->fullBit(oldp+798,(((IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_valid) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready))));
        tracep->fullBit(oldp+799,(((IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_valid) 
                                   & (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready))));
        tracep->fullBit(oldp+800,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__bc_shakehand));
        tracep->fullBit(oldp+801,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__arc_shakehand));
        tracep->fullCData(oldp+802,(((3U == ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                              ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)))
                                      ? 8U : ((2U == 
                                               ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)))
                                               ? 4U
                                               : ((1U 
                                                   == 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                                     ? 0U
                                                     : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)))
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                                      ? 0U
                                                      : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)))
                                                    ? 1U
                                                    : 8U))))),8);
        tracep->fullBit(oldp+803,(((7U == ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                            ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size))) 
                                   & (((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we)) 
                                      & ((3U == ((2U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                                  ? 0U
                                                  : 1U)) 
                                         & (3U == (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                                    ? 0U
                                                    : 1U)))))));
        tracep->fullBit(oldp+804,(vlSelf->clock));
        tracep->fullBit(oldp+805,(vlSelf->reset));
        tracep->fullQData(oldp+806,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                      ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1)
                                          ? (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (0x1f8U 
                                                                & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                                                   << 3U)))))
                                          : ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way2)
                                              ? (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data)) 
                                                  << 9U) 
                                                 | (QData)((IData)(
                                                                   (0x1f8U 
                                                                    & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                                                       << 3U)))))
                                              : 0ULL))
                                      : ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                          ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_pc
                                          : ((0x10U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                              ? ((IData)(vlSelf->reset)
                                                  ? 0ULL
                                                  : 
                                                 (((0x10U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayr)))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_r_dirty)
                                                    ? 
                                                   (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data)) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1f8U 
                                                                       & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                          << 3U)))))
                                                    : 
                                                   (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data)) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1f8U 
                                                                       & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                          << 3U))))))
                                                   : 0ULL))
                                              : ((0x20U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                  ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_pc
                                                  : 
                                                 ((0x21U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                   ? 
                                                  ((IData)(vlSelf->reset)
                                                    ? 0ULL
                                                    : 
                                                   (((0x21U 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                     & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayw)))
                                                     ? 
                                                    ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_w_dirty)
                                                      ? 
                                                     (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data)) 
                                                       << 9U) 
                                                      | (QData)((IData)(
                                                                        (0x1f8U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                            << 3U)))))
                                                      : 
                                                     (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data)) 
                                                       << 9U) 
                                                      | (QData)((IData)(
                                                                        (0x1f8U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                            << 3U))))))
                                                     : 0ULL))
                                                   : 0ULL)))))),64);
        tracep->fullBit(oldp+808,(((~ (IData)(vlSelf->reset)) 
                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__inst_bxx) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                         >> 0xbU)))));
        tracep->fullQData(oldp+809,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__hold)
                                      ? 0x80000000ULL
                                      : (vlSelf->ysyx_22051013__DOT__idsel_core_pc 
                                         + (((IData)(vlSelf->reset)
                                              ? 0U : (IData)(
                                                             (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22051013__DOT__idsel_core_inst))))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm 
                                                                        >> 0x13U))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm 
                                                                      << 1U)))))
                                             : (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__inst_bxx) 
                                                 & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                    >> 0xbU))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                                         >> 0xbU))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                                       << 1U)))))
                                                 : 
                                                ((IData)(vlSelf->reset)
                                                  ? 0ULL
                                                  : 4ULL)))))),64);
        tracep->fullQData(oldp+811,(((IData)(vlSelf->reset)
                                      ? 0ULL : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc)),64);
        tracep->fullIData(oldp+813,(((IData)(vlSelf->reset)
                                      ? 0U : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)),32);
        tracep->fullQData(oldp+814,((((~ (IData)(vlSelf->reset)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+816,((((~ (IData)(vlSelf->reset)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr]
                                      : 0ULL)),64);
        tracep->fullBit(oldp+818,(((IData)(vlSelf->reset)
                                    ? 0U : (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22051013__DOT__idsel_core_inst))))));
        tracep->fullQData(oldp+819,((((IData)(vlSelf->reset)
                                       ? 0U : (IData)(
                                                      (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22051013__DOT__idsel_core_inst))))
                                      ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm 
                                                                 >> 0x13U))))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (0xfffffU 
                                                            & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm 
                                                               << 1U)))))
                                      : (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__inst_bxx) 
                                          & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                             >> 0xbU))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                                     >> 0xbU))))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfffU 
                                                                & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                                   << 1U)))))
                                          : ((IData)(vlSelf->reset)
                                              ? 0ULL
                                              : 4ULL)))),64);
        tracep->fullQData(oldp+821,((vlSelf->ysyx_22051013__DOT__idsel_core_pc 
                                     + (((IData)(vlSelf->reset)
                                          ? 0U : (IData)(
                                                         (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22051013__DOT__idsel_core_inst))))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm 
                                                                    >> 0x13U))))) 
                                             << 0x14U) 
                                            | (QData)((IData)(
                                                              (0xfffffU 
                                                               & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm 
                                                                  << 1U)))))
                                         : (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__inst_bxx) 
                                             & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                >> 0xbU))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                                        >> 0xbU))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                                                      << 1U)))))
                                             : ((IData)(vlSelf->reset)
                                                 ? 0ULL
                                                 : 4ULL))))),64);
        tracep->fullBit(oldp+823,(((~ ((IData)(vlSelf->reset) 
                                       & (0U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr)))) 
                                   & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+824,(((~ ((IData)(vlSelf->reset) 
                                       & (0U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr)))) 
                                   & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr) 
                                         == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+825,((1U & ((~ (IData)(vlSelf->reset)) 
                                         & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type) 
                                             >> 2U) 
                                            & ((0xeU 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                                ? (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1 
                                                   == vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op2)
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                                    ? 
                                                   (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1 
                                                    != vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op2)
                                                    : 
                                                   ((0xe0U 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                                     ? (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op_ltu_op2)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                                      ? 
                                                     (~ (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op_ltu_op2))
                                                      : 
                                                     ((0x38U 
                                                       == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                                       ? (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op1_lt_op2)
                                                       : 
                                                      ((0x70U 
                                                        == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel)) 
                                                       & (~ (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op1_lt_op2)))))))))))));
        tracep->fullQData(oldp+826,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_out_valid)
                                                 ? 
                                                ((0x58U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel))
                                                  ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__result_lo
                                                  : 
                                                 ((((0xb0U 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel)) 
                                                    | (0x26U 
                                                       == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel))) 
                                                   | (0x13U 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel)))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_out_valid)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                                    : 0ULL)
                                                   : 
                                                  ((0x4cU 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__result_lo 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__result_lo)))
                                                    : 0ULL)))
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+828,(((IData)(vlSelf->reset)
                                      ? 0ULL : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata)),64);
        tracep->fullCData(oldp+830,(((IData)(vlSelf->reset)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                    ? 0x20U
                                                    : 0x10U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                    ? 2U
                                                    : 1U))))),8);
        tracep->fullCData(oldp+831,(((IData)(vlSelf->reset)
                                      ? 0U : ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 0xc0U))))),8);
        tracep->fullCData(oldp+832,(((IData)(vlSelf->reset)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullQData(oldp+833,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x20U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data))))))))),64);
        tracep->fullQData(oldp+835,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data))))),64);
        tracep->fullQData(oldp+837,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                             >> 1U))))
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data))))
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)))) 
                                                   << 0x30U)))))),64);
        tracep->fullBit(oldp+839,(((~ (IData)(vlSelf->reset)) 
                                   & ((2U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_re_ready)))));
        tracep->fullBit(oldp+840,(((~ (IData)(vlSelf->reset)) 
                                   & ((~ ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                         & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                            | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                         >> 3U)))]))))));
        tracep->fullBit(oldp+841,(((~ (IData)(vlSelf->reset)) 
                                   & ((~ ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                         & ((~ ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                             >> 3U)))])) 
                                            & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                               | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                            >> 3U)))])))))));
        if (vlSelf->reset) {
            __Vtemp384[0U] = 0U;
            __Vtemp384[1U] = 0U;
            __Vtemp384[2U] = 0U;
            __Vtemp384[3U] = 0U;
        } else {
            __Vtemp384[0U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp384[1U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0xffffffffU
                                            : 0U) : 0U));
            __Vtemp384[2U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
            __Vtemp384[3U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                  | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))
                                            ? 0U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                             ? 0xffffffffU
                                             : 0U))
                                        : 0U));
        }
        tracep->fullWData(oldp+842,(__Vtemp384),128);
        tracep->fullQData(oldp+846,(((IData)(vlSelf->reset)
                                      ? 0ULL : (((0x10U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayr)))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_r_dirty)
                                                  ? 
                                                 (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data)) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    (0x1f8U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                        << 3U)))))
                                                  : 
                                                 (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data)) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    (0x1f8U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                        << 3U))))))
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+848,(((~ (IData)(vlSelf->reset)) 
                                   & ((3U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_wr_ready)))));
        if (vlSelf->reset) {
            __Vtemp390[0U] = 0U;
            __Vtemp390[1U] = 0U;
            __Vtemp390[2U] = 0U;
            __Vtemp390[3U] = 0U;
        } else {
            __Vtemp390[0U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data))
                               : 0U);
            __Vtemp390[1U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data) 
                                          >> 0x20U))
                               : 0U);
            __Vtemp390[2U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data))
                               : 0U);
            __Vtemp390[3U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data) 
                                          >> 0x20U))
                               : 0U);
        }
        tracep->fullWData(oldp+849,(__Vtemp390),128);
        tracep->fullBit(oldp+853,(((~ (IData)(vlSelf->reset)) 
                                   & ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                         & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                            | ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild) 
                                               & ((~ 
                                                   vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]) 
                                                  & vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))))))));
        tracep->fullBit(oldp+854,(((~ (IData)(vlSelf->reset)) 
                                   & ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                         & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild) 
                                            & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                               | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                            >> 3U)))])))))));
        if (vlSelf->reset) {
            __Vtemp409[0U] = 0U;
            __Vtemp409[1U] = 0U;
            __Vtemp409[2U] = 0U;
            __Vtemp409[3U] = 0U;
        } else {
            __Vtemp409[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0U
                                                    : 
                                                   (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U))
                                                : 0U)
                                            : 0xffffffffU)
                                        : 0U));
            __Vtemp409[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0U
                                                    : 
                                                   (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]
                                                     ? 0xffffffffU
                                                     : 0U))
                                                : 0U)
                                            : 0xffffffffU)
                                        : 0U));
            __Vtemp409[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U) : 0U));
            __Vtemp409[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                               ? 0U : (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                        ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                            ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                ? (
                                                   vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                                                : 0xffffffffU)
                                            : 0U) : 0U));
        }
        tracep->fullWData(oldp+855,(__Vtemp409),128);
        tracep->fullQData(oldp+859,(((IData)(vlSelf->reset)
                                      ? 0ULL : (((0x21U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                 & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayw)))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_w_dirty)
                                                  ? 
                                                 (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data)) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    (0x1f8U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                        << 3U)))))
                                                  : 
                                                 (((QData)((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data)) 
                                                   << 9U) 
                                                  | (QData)((IData)(
                                                                    (0x1f8U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                        << 3U))))))
                                                 : 0ULL))),64);
        tracep->fullBit(oldp+861,(((~ (IData)(vlSelf->reset)) 
                                   & ((~ ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)))) 
                                      & ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                         & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf))))));
        tracep->fullBit(oldp+862,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                    ? (((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)) 
                                       & (~ ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                             >> 6U)))
                                    : ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                        ? ((~ (IData)(vlSelf->reset)) 
                                           & ((~ ((8U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                  & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                              & (((8U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                  & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                >> 3U)))]))))
                                        : ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                           & ((~ (IData)(vlSelf->reset)) 
                                              & ((~ 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                   & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                                 & (((0x20U 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                     & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                       | ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild) 
                                                          & ((~ 
                                                              vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                              [
                                                              (0x3fU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                          >> 3U)))]) 
                                                             & vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                             [
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                         >> 3U)))])))))))))));
        tracep->fullBit(oldp+863,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                    ? (((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)) 
                                       & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                          >> 6U)) : 
                                   ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                     ? ((~ (IData)(vlSelf->reset)) 
                                        & ((~ ((8U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                               & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                           & (((8U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                               & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                              & ((~ 
                                                  ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))])) 
                                                 & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                    | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                    [
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                >> 3U)))])))))
                                     : ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                        & ((~ (IData)(vlSelf->reset)) 
                                           & ((~ ((0x20U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                  & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                              & (((0x20U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                  & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)) 
                                                 & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild) 
                                                    & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                       | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                       [
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                   >> 3U)))]))))))))));
        if ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))) {
            __Vtemp450[0U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0xffffffffU
                                                  : 0U)
                                                 : 0U)));
            __Vtemp450[1U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0xffffffffU
                                                  : 0U)
                                                 : 0U)));
            __Vtemp450[2U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                      | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]))
                                                   ? 0xffffffffU
                                                   : 0U))
                                                 : 0U)));
            __Vtemp450[3U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                      | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]))
                                                   ? 0xffffffffU
                                                   : 0U))
                                                 : 0U)));
        } else {
            __Vtemp450[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0U
                                                   : 
                                                  (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                                  : 0U)
                                                 : 0xffffffffU)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[0U]
                                   : 0U));
            __Vtemp450[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0U
                                                   : 
                                                  (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                                  : 0U)
                                                 : 0xffffffffU)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[1U]
                                   : 0U));
            __Vtemp450[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0xffffffffU
                                                   : 0U)
                                                  : 0xffffffffU)
                                                 : 0U)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[2U]
                                   : 0U));
            __Vtemp450[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0xffffffffU
                                                   : 0U)
                                                  : 0xffffffffU)
                                                 : 0U)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[3U]
                                   : 0U));
        }
        tracep->fullWData(oldp+864,(__Vtemp450),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))) {
            __Vtemp463[0U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[0U];
            __Vtemp463[1U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[1U];
            __Vtemp463[2U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[2U];
            __Vtemp463[3U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[3U];
        } else {
            __Vtemp463[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_data[0U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->reset)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                ? (IData)(
                                                          ((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                                            ? 0ULL
                                                            : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data))
                                                : 0U))
                                   : 0U));
            __Vtemp463[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_data[1U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->reset)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                ? (IData)(
                                                          (((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                                             ? 0ULL
                                                             : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data) 
                                                           >> 0x20U))
                                                : 0U))
                                   : 0U));
            __Vtemp463[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_data[2U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->reset)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                ? (IData)(
                                                          ((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                                            ? 0ULL
                                                            : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data))
                                                : 0U))
                                   : 0U));
            __Vtemp463[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_data[3U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? ((IData)(vlSelf->reset)
                                       ? 0U : ((4U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                ? (IData)(
                                                          (((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                                             ? 0ULL
                                                             : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data) 
                                                           >> 0x20U))
                                                : 0U))
                                   : 0U));
        }
        tracep->fullWData(oldp+868,(__Vtemp463),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))) {
            __Vtemp504[0U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0xffffffffU
                                                  : 0U)
                                                 : 0U)));
            __Vtemp504[1U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0xffffffffU
                                                  : 0U)
                                                 : 0U)));
            __Vtemp504[2U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                      | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]))
                                                   ? 0xffffffffU
                                                   : 0U))
                                                 : 0U)));
            __Vtemp504[3U] = ((IData)(vlSelf->reset)
                               ? 0U : (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                        ? 0U : (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                                 ? 
                                                ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)) 
                                                     | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                 >> 3U)))]))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)) 
                                                      | vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]))
                                                   ? 0xffffffffU
                                                   : 0U))
                                                 : 0U)));
        } else {
            __Vtemp504[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0U
                                                   : 
                                                  (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                                  : 0U)
                                                 : 0xffffffffU)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[0U]
                                   : 0U));
            __Vtemp504[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0U
                                                   : 
                                                  (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U))
                                                  : 0U)
                                                 : 0xffffffffU)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[1U]
                                   : 0U));
            __Vtemp504[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0xffffffffU
                                                   : 0U)
                                                  : 0xffffffffU)
                                                 : 0U)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[2U]
                                   : 0U));
            __Vtemp504[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? ((IData)(vlSelf->reset)
                                   ? 0U : (((0x20U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))
                                            ? 0U : 
                                           (((0x20U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid))
                                             ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild)
                                                  ? 
                                                 (vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0xffffffffU
                                                   : 0U)
                                                  : 0xffffffffU)
                                                 : 0U)
                                             : 0U)))
                               : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb[3U]
                                   : 0U));
        }
        __Vtemp505[0U] = (~ __Vtemp504[0U]);
        __Vtemp505[1U] = (~ __Vtemp504[1U]);
        __Vtemp505[2U] = (~ __Vtemp504[2U]);
        __Vtemp505[3U] = (~ __Vtemp504[3U]);
        tracep->fullWData(oldp+872,(__Vtemp505),128);
        tracep->fullCData(oldp+876,(((IData)(vlSelf->reset)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state))
                                               ? (((IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid) 
                                                   & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand))
                                                   ? 3U
                                                   : 1U)
                                               : ((3U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state))
                                                   ? 
                                                  (((3U 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)))
                                                    ? 1U
                                                    : 3U)
                                                   : 1U)))),2);
        tracep->fullCData(oldp+877,(((IData)(vlSelf->reset)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                               ? ((
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state)) 
                                                   & ((2U 
                                                       == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state))))
                                                   ? 2U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                                   ? 
                                                  (((2U 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state)))
                                                    ? 1U
                                                    : 2U)
                                                   : 1U)))),2);
        tracep->fullCData(oldp+878,(((IData)(vlSelf->reset)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state))
                                               ? ((
                                                   ((IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_valid) 
                                                    & (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready)) 
                                                   & ((IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_valid) 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready)))
                                                   ? 3U
                                                   : 1U)
                                               : ((3U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__bc_shakehand)
                                                    ? 1U
                                                    : 3U)
                                                   : 1U)))),2);
        tracep->fullCData(oldp+879,(((IData)(vlSelf->reset)
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))
                                               ? ((IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__arc_shakehand)
                                                   ? 2U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))
                                                   ? 
                                                  (((2U 
                                                     != (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state)))
                                                    ? 1U
                                                    : 2U)
                                                   : 1U)))),2);
        tracep->fullCData(oldp+880,(0U),8);
        tracep->fullCData(oldp+881,(1U),2);
        tracep->fullCData(oldp+882,(0U),2);
        tracep->fullBit(oldp+883,(1U));
        tracep->fullBit(oldp+884,(0U));
        tracep->fullBit(oldp+885,(0U));
        tracep->fullIData(oldp+886,(0x80U),32);
        tracep->fullIData(oldp+887,(0x40U),32);
        tracep->fullIData(oldp+888,(6U),32);
        tracep->fullCData(oldp+889,(0U),3);
    }
}
