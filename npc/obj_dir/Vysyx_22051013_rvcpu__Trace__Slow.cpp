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
        tracep->declBit(c+637,"clk", false,-1);
        tracep->declBit(c+638,"rst", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu rst", false,-1);
        tracep->declBus(c+671,"ysyx_22051013_rvcpu axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_aw_valid", false,-1);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_aw_ready", false,-1);
        tracep->declQuad(c+355,"ysyx_22051013_rvcpu axi_w_data", false,-1, 63,0);
        tracep->declBus(c+438,"ysyx_22051013_rvcpu axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_w_valid", false,-1);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_w_ready", false,-1);
        tracep->declBus(c+671,"ysyx_22051013_rvcpu axi_b_id", false,-1, 4,0);
        tracep->declBus(c+672,"ysyx_22051013_rvcpu axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_b_valid", false,-1);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu axi_b_ready", false,-1);
        tracep->declBus(c+4,"ysyx_22051013_rvcpu axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+357,"ysyx_22051013_rvcpu axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+359,"ysyx_22051013_rvcpu axi_ar_valid", false,-1);
        tracep->declBit(c+5,"ysyx_22051013_rvcpu axi_ar_ready", false,-1);
        tracep->declBus(c+6,"ysyx_22051013_rvcpu axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+7,"ysyx_22051013_rvcpu axi_r_data", false,-1, 63,0);
        tracep->declBus(c+672,"ysyx_22051013_rvcpu axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_r_valid", false,-1);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu axi_r_ready", false,-1);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu axi_icache_valid", false,-1);
        tracep->declQuad(c+11,"ysyx_22051013_rvcpu axi_icache_inst", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu icache_axi_pc", false,-1, 63,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu icache_axi_ena", false,-1);
        tracep->declBit(c+439,"ysyx_22051013_rvcpu icache_if_valid", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu icache_if_inst", false,-1, 31,0);
        tracep->declQuad(c+441,"ysyx_22051013_rvcpu if_icache_pc", false,-1, 63,0);
        tracep->declBit(c+443,"ysyx_22051013_rvcpu lsu_ddsel_we", false,-1);
        tracep->declBit(c+444,"ysyx_22051013_rvcpu lsu_ddsel_re", false,-1);
        tracep->declBus(c+445,"ysyx_22051013_rvcpu lsu_ddsel_wmask", false,-1, 7,0);
        tracep->declQuad(c+446,"ysyx_22051013_rvcpu lsu_ddsel_data_pc", false,-1, 63,0);
        tracep->declQuad(c+360,"ysyx_22051013_rvcpu lsu_ddsel_read_data", false,-1, 63,0);
        tracep->declQuad(c+448,"ysyx_22051013_rvcpu lsu_ddsel_write_data", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu lsu_ddsel_ready", false,-1);
        tracep->declBit(c+450,"ysyx_22051013_rvcpu lsu_ddsel_valid", false,-1);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu lsu_ddsel_device_data", false,-1, 63,0);
        tracep->declBit(c+451,"ysyx_22051013_rvcpu ddsel_axi_re", false,-1);
        tracep->declBit(c+452,"ysyx_22051013_rvcpu ddsel_axi_we", false,-1);
        tracep->declBus(c+438,"ysyx_22051013_rvcpu ddsel_axi_mask", false,-1, 7,0);
        tracep->declQuad(c+355,"ysyx_22051013_rvcpu ddsel_axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22051013_rvcpu axi_ddsel_data_i", false,-1, 63,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22051013_rvcpu axi_ddsel_valid", false,-1);
        tracep->declBit(c+453,"ysyx_22051013_rvcpu ddsel_dcache_re", false,-1);
        tracep->declBit(c+454,"ysyx_22051013_rvcpu ddsel_dcache_we", false,-1);
        tracep->declBus(c+455,"ysyx_22051013_rvcpu ddsel_dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+456,"ysyx_22051013_rvcpu ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+458,"ysyx_22051013_rvcpu dcache_ddsel_data", false,-1, 63,0);
        tracep->declQuad(c+460,"ysyx_22051013_rvcpu ddsel_dcache_pc", false,-1, 63,0);
        tracep->declBit(c+362,"ysyx_22051013_rvcpu dcache_ddsel_valid", false,-1);
        tracep->declBit(c+462,"ysyx_22051013_rvcpu ddsel_dcache_ready", false,-1);
        tracep->declBit(c+363,"ysyx_22051013_rvcpu dcache_ddsel_axi_re", false,-1);
        tracep->declBit(c+22,"ysyx_22051013_rvcpu dcache_ddsel_axi_we", false,-1);
        tracep->declQuad(c+463,"ysyx_22051013_rvcpu axi_ddsel_dcache_data", false,-1, 63,0);
        tracep->declQuad(c+364,"ysyx_22051013_rvcpu dcache_ddsel_axi_data", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_22051013_rvcpu dcache_ddsel_axi_pc", false,-1, 63,0);
        tracep->declBit(c+465,"ysyx_22051013_rvcpu axi_ddsel_dcache_valid", false,-1);
        tracep->declBit(c+639,"ysyx_22051013_rvcpu bpu_ifid_jump", false,-1);
        tracep->declQuad(c+640,"ysyx_22051013_rvcpu bpu_if_pc", false,-1, 63,0);
        tracep->declBit(c+23,"ysyx_22051013_rvcpu bpu_icache_hold", false,-1);
        tracep->declBit(c+466,"ysyx_22051013_rvcpu if_icache_ready", false,-1);
        tracep->declBit(c+674,"ysyx_22051013_rvcpu update", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu ifid_if_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu ifid_if_pc", false,-1, 63,0);
        tracep->declBus(c+26,"ysyx_22051013_rvcpu ifid_id_inst", false,-1, 31,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu ifid_id_pc", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22051013_rvcpu ifid_id_jump", false,-1);
        tracep->declBus(c+467,"ysyx_22051013_rvcpu id_reg_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+468,"ysyx_22051013_rvcpu id_reg_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+469,"ysyx_22051013_rvcpu id_reg_rs1_ena", false,-1);
        tracep->declBit(c+470,"ysyx_22051013_rvcpu id_reg_rs2_ena", false,-1);
        tracep->declQuad(c+368,"ysyx_22051013_rvcpu id_if_pc", false,-1, 63,0);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu id_if_pc_sel", false,-1);
        tracep->declBit(c+675,"ysyx_22051013_rvcpu id_ifid_jumpflush", false,-1);
        tracep->declBit(c+472,"ysyx_22051013_rvcpu id_load_flag", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu id_if_stall_ena", false,-1);
        tracep->declBus(c+642,"ysyx_22051013_rvcpu idex_id_inst", false,-1, 31,0);
        tracep->declQuad(c+643,"ysyx_22051013_rvcpu idex_id_pc", false,-1, 63,0);
        tracep->declQuad(c+474,"ysyx_22051013_rvcpu idex_id_op1", false,-1, 63,0);
        tracep->declQuad(c+476,"ysyx_22051013_rvcpu idex_id_op2", false,-1, 63,0);
        tracep->declQuad(c+478,"ysyx_22051013_rvcpu idex_id_imm", false,-1, 63,0);
        tracep->declBit(c+480,"ysyx_22051013_rvcpu idex_id_rd_ena", false,-1);
        tracep->declBus(c+370,"ysyx_22051013_rvcpu idex_id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+481,"ysyx_22051013_rvcpu idex_id_lsctl", false,-1, 3,0);
        tracep->declBus(c+482,"ysyx_22051013_rvcpu idex_id_wbctl", false,-1, 1,0);
        tracep->declBus(c+483,"ysyx_22051013_rvcpu idex_id_csrctl", false,-1, 3,0);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu idex_id_alu_sel", false,-1, 7,0);
        tracep->declBus(c+30,"ysyx_22051013_rvcpu idex_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+31,"ysyx_22051013_rvcpu idex_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22051013_rvcpu idex_ex_op1", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu idex_ex_op2", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22051013_rvcpu idex_ex_imm", false,-1, 63,0);
        tracep->declBit(c+39,"ysyx_22051013_rvcpu idex_ex_rd_ena", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu idex_ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu idex_ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+42,"ysyx_22051013_rvcpu idex_ex_wbctl", false,-1, 1,0);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu idex_ex_csrctl", false,-1, 3,0);
        tracep->declBus(c+44,"ysyx_22051013_rvcpu idex_ex_alu_sel", false,-1, 7,0);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu ex_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu ex_id_data_forward", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu ex_load_ena", false,-1);
        tracep->declQuad(c+645,"ysyx_22051013_rvcpu ex_if_pc", false,-1, 63,0);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu ex_if_pc_sel", false,-1);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu exls_ex_aludata", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu exls_ex_store_data", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu exls_ls_inst", false,-1, 31,0);
        tracep->declQuad(c+47,"ysyx_22051013_rvcpu exls_ls_pc", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22051013_rvcpu exls_ls_aludata", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu exls_ls_store_data", false,-1, 63,0);
        tracep->declBit(c+51,"ysyx_22051013_rvcpu exls_ls_rd_ena", false,-1);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu exls_ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu exls_ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu exls_ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+488,"ysyx_22051013_rvcpu ls_lswb_data_forward", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu ls_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+488,"ysyx_22051013_rvcpu ls_id_data_forward", false,-1, 63,0);
        tracep->declQuad(c+371,"ysyx_22051013_rvcpu lswb_ls_wbdata", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu lswb_wb_inst", false,-1, 31,0);
        tracep->declQuad(c+56,"ysyx_22051013_rvcpu lswb_wb_pc", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu lswb_wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+59,"ysyx_22051013_rvcpu lswb_wb_wbdata", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu lswb_wb_aludata", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu lswb_wb_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu lswb_wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu wb_reg_rd_data", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu wb_reg_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wb_reg_rd_addr", false,-1, 4,0);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wb_id_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu wb_id_data_forward", false,-1, 63,0);
        tracep->declQuad(c+647,"ysyx_22051013_rvcpu reg_id_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+649,"ysyx_22051013_rvcpu reg_id_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+676,"ysyx_22051013_rvcpu reg_bpu_data", false,-1, 63,0);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu if_valid", false,-1);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu id_valid", false,-1);
        tracep->declBit(c+493,"ysyx_22051013_rvcpu ex_valid", false,-1);
        tracep->declBit(c+494,"ysyx_22051013_rvcpu ls_valid", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu wb_ready", false,-1);
        tracep->declBit(c+495,"ysyx_22051013_rvcpu ls_ready", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu ex_ready", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu id_ready", false,-1);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu ex_flush", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu id_idex_flush", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu id_ifid_flush", false,-1);
        tracep->declBit(c+679,"ysyx_22051013_rvcpu ls_lswb_flush", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu axi_master_arbitrator0 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu axi_master_arbitrator0 rst", false,-1);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_pc", false,-1, 63,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu axi_master_arbitrator0 icache_ena", false,-1);
        tracep->declQuad(c+11,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_inst_valid", false,-1);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_pc", false,-1, 63,0);
        tracep->declQuad(c+355,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_i", false,-1, 63,0);
        tracep->declBit(c+452,"ysyx_22051013_rvcpu axi_master_arbitrator0 we", false,-1);
        tracep->declBit(c+451,"ysyx_22051013_rvcpu axi_master_arbitrator0 re", false,-1);
        tracep->declBus(c+438,"ysyx_22051013_rvcpu axi_master_arbitrator0 wmask", false,-1, 7,0);
        tracep->declQuad(c+19,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_o", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_data_valid", false,-1);
        tracep->declBus(c+671,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_valid", false,-1);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_aw_ready", false,-1);
        tracep->declQuad(c+355,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+438,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_valid", false,-1);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_w_ready", false,-1);
        tracep->declBus(c+671,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+672,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_valid", false,-1);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_b_ready", false,-1);
        tracep->declBus(c+4,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+357,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+359,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_valid", false,-1);
        tracep->declBit(c+5,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_ar_ready", false,-1);
        tracep->declBus(c+6,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+7,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+672,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_valid", false,-1);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu axi_master_arbitrator0 axi_r_ready", false,-1);
        tracep->declBit(c+373,"ysyx_22051013_rvcpu axi_master_arbitrator0 if_chosen", false,-1);
        tracep->declBit(c+451,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_chosen_read", false,-1);
        tracep->declBit(c+452,"ysyx_22051013_rvcpu axi_master_arbitrator0 ls_chosen_write", false,-1);
        tracep->declBus(c+65,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_state", false,-1, 2,0);
        tracep->declBus(c+497,"ysyx_22051013_rvcpu axi_master_arbitrator0 arb_state_next", false,-1, 2,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_master_arbitrator0 dwrite_shakehand", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_w_not_ready", false,-1);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu axi_master_arbitrator0 iread_shakehand", false,-1);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu axi_master_arbitrator0 dread_shakehand", false,-1);
        tracep->declBit(c+66,"ysyx_22051013_rvcpu axi_master_arbitrator0 data_r_not_ready", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu axi_slave1 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu axi_slave1 rst", false,-1);
        tracep->declBus(c+671,"ysyx_22051013_rvcpu axi_slave1 axi_aw_id", false,-1, 4,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu axi_slave1 axi_aw_addr", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_slave1 axi_aw_valid", false,-1);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_slave1 axi_aw_ready", false,-1);
        tracep->declQuad(c+355,"ysyx_22051013_rvcpu axi_slave1 axi_w_data", false,-1, 63,0);
        tracep->declBus(c+438,"ysyx_22051013_rvcpu axi_slave1 axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+1,"ysyx_22051013_rvcpu axi_slave1 axi_w_valid", false,-1);
        tracep->declBit(c+2,"ysyx_22051013_rvcpu axi_slave1 axi_w_ready", false,-1);
        tracep->declBus(c+671,"ysyx_22051013_rvcpu axi_slave1 axi_b_id", false,-1, 4,0);
        tracep->declBus(c+672,"ysyx_22051013_rvcpu axi_slave1 axi_b_resp", false,-1, 1,0);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_slave1 axi_b_valid", false,-1);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu axi_slave1 axi_b_ready", false,-1);
        tracep->declBus(c+4,"ysyx_22051013_rvcpu axi_slave1 axi_ar_id", false,-1, 4,0);
        tracep->declQuad(c+357,"ysyx_22051013_rvcpu axi_slave1 axi_ar_addr", false,-1, 63,0);
        tracep->declBit(c+359,"ysyx_22051013_rvcpu axi_slave1 axi_ar_valid", false,-1);
        tracep->declBit(c+5,"ysyx_22051013_rvcpu axi_slave1 axi_ar_ready", false,-1);
        tracep->declBus(c+6,"ysyx_22051013_rvcpu axi_slave1 axi_r_id", false,-1, 4,0);
        tracep->declQuad(c+7,"ysyx_22051013_rvcpu axi_slave1 axi_r_data", false,-1, 63,0);
        tracep->declBus(c+672,"ysyx_22051013_rvcpu axi_slave1 axi_r_resp", false,-1, 1,0);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_slave1 axi_r_valid", false,-1);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu axi_slave1 axi_r_ready", false,-1);
        tracep->declBit(c+67,"ysyx_22051013_rvcpu axi_slave1 awc_shakehand", false,-1);
        tracep->declBit(c+67,"ysyx_22051013_rvcpu axi_slave1 wc_shakehand", false,-1);
        tracep->declBit(c+3,"ysyx_22051013_rvcpu axi_slave1 bc_shakehand", false,-1);
        tracep->declBus(c+68,"ysyx_22051013_rvcpu axi_slave1 s_write_state", false,-1, 1,0);
        tracep->declBus(c+69,"ysyx_22051013_rvcpu axi_slave1 s_write_state_next", false,-1, 1,0);
        tracep->declBit(c+498,"ysyx_22051013_rvcpu axi_slave1 arc_shakehand", false,-1);
        tracep->declBit(c+9,"ysyx_22051013_rvcpu axi_slave1 rc_shakehand", false,-1);
        tracep->declBus(c+70,"ysyx_22051013_rvcpu axi_slave1 s_read_state", false,-1, 1,0);
        tracep->declBus(c+374,"ysyx_22051013_rvcpu axi_slave1 s_read_state_next", false,-1, 1,0);
        tracep->declQuad(c+71,"ysyx_22051013_rvcpu axi_slave1 dpic_read_data", false,-1, 63,0);
        tracep->declBus(c+680,"ysyx_22051013_rvcpu axi_slave1 rlen", false,-1, 7,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu i_cache2 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu i_cache2 rst", false,-1);
        tracep->declQuad(c+441,"ysyx_22051013_rvcpu i_cache2 inst_pc", false,-1, 63,0);
        tracep->declBit(c+466,"ysyx_22051013_rvcpu i_cache2 pc_ready", false,-1);
        tracep->declBit(c+439,"ysyx_22051013_rvcpu i_cache2 inst_valid", false,-1);
        tracep->declBit(c+23,"ysyx_22051013_rvcpu i_cache2 hold", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu i_cache2 inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu i_cache2 pc", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22051013_rvcpu i_cache2 axi_pc", false,-1, 63,0);
        tracep->declBit(c+15,"ysyx_22051013_rvcpu i_cache2 axi_ena", false,-1);
        tracep->declQuad(c+11,"ysyx_22051013_rvcpu i_cache2 axi_inst", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22051013_rvcpu i_cache2 axi_valid", false,-1);
        tracep->declBus(c+499,"ysyx_22051013_rvcpu i_cache2 icache_tag", false,-1, 22,0);
        tracep->declBus(c+500,"ysyx_22051013_rvcpu i_cache2 icache_index", false,-1, 5,0);
        tracep->declBus(c+73,"ysyx_22051013_rvcpu i_cache2 icache_state", false,-1, 3,0);
        tracep->declBus(c+501,"ysyx_22051013_rvcpu i_cache2 icache_state_next", false,-1, 3,0);
        tracep->declBit(c+375,"ysyx_22051013_rvcpu i_cache2 way1_hit", false,-1);
        tracep->declBit(c+376,"ysyx_22051013_rvcpu i_cache2 way2_hit", false,-1);
        tracep->declBit(c+74,"ysyx_22051013_rvcpu i_cache2 hit1", false,-1);
        tracep->declBit(c+75,"ysyx_22051013_rvcpu i_cache2 hit2", false,-1);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu i_cache2 hit_pc", false,-1, 63,0);
        tracep->declBus(c+76,"ysyx_22051013_rvcpu i_cache2 hit_index", false,-1, 5,0);
        tracep->declBus(c+77,"ysyx_22051013_rvcpu i_cache2 hit_tag", false,-1, 22,0);
        tracep->declArray(c+78,"ysyx_22051013_rvcpu i_cache2 miss_data", false,-1, 127,0);
        tracep->declArray(c+82,"ysyx_22051013_rvcpu i_cache2 cache_strb", false,-1, 127,0);
        tracep->declBit(c+86,"ysyx_22051013_rvcpu i_cache2 cache_ena", false,-1);
        tracep->declBit(c+87,"ysyx_22051013_rvcpu i_cache2 write_in_valid", false,-1);
        tracep->declBit(c+88,"ysyx_22051013_rvcpu i_cache2 delay1", false,-1);
        tracep->declBit(c+89,"ysyx_22051013_rvcpu i_cache2 delay2", false,-1);
        tracep->declBus(c+502,"ysyx_22051013_rvcpu i_cache2 tag_with_valid", false,-1, 23,0);
        tracep->declBus(c+503,"ysyx_22051013_rvcpu i_cache2 tag", false,-1, 22,0);
        tracep->declBus(c+90,"ysyx_22051013_rvcpu i_cache2 i_tag_way1", false,-1, 22,0);
        tracep->declBit(c+91,"ysyx_22051013_rvcpu i_cache2 i_tag_valid1", false,-1);
        tracep->declBit(c+92,"ysyx_22051013_rvcpu i_cache2 way1_tag_ena", false,-1);
        tracep->declBus(c+504,"ysyx_22051013_rvcpu i_cache2 index", false,-1, 5,0);
        tracep->declBus(c+93,"ysyx_22051013_rvcpu i_cache2 i_tag_way2", false,-1, 22,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu i_cache2 i_tag_valid2", false,-1);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu i_cache2 way2_tag_ena", false,-1);
        tracep->declArray(c+96,"ysyx_22051013_rvcpu i_cache2 cache_data", false,-1, 127,0);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu i_cache2 ce", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu i_cache2 tag_ram0 clk", false,-1);
        tracep->declBus(c+504,"ysyx_22051013_rvcpu i_cache2 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+502,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+92,"ysyx_22051013_rvcpu i_cache2 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+90,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+91,"ysyx_22051013_rvcpu i_cache2 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+90,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+91,"ysyx_22051013_rvcpu i_cache2 tag_ram0 out_vaild", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu i_cache2 tag_ram1 clk", false,-1);
        tracep->declBus(c+504,"ysyx_22051013_rvcpu i_cache2 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+502,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+95,"ysyx_22051013_rvcpu i_cache2 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+93,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu i_cache2 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+93,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+94,"ysyx_22051013_rvcpu i_cache2 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+681,"ysyx_22051013_rvcpu i_cache2 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+682,"ysyx_22051013_rvcpu i_cache2 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+683,"ysyx_22051013_rvcpu i_cache2 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+681,"ysyx_22051013_rvcpu i_cache2 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+96,"ysyx_22051013_rvcpu i_cache2 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu i_cache2 data_ram0 CLK", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu i_cache2 data_ram0 CEN", false,-1);
        tracep->declBit(c+100,"ysyx_22051013_rvcpu i_cache2 data_ram0 WEN", false,-1);
        tracep->declArray(c+101,"ysyx_22051013_rvcpu i_cache2 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+76,"ysyx_22051013_rvcpu i_cache2 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+78,"ysyx_22051013_rvcpu i_cache2 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu i_cache2 data_ram0 cen", false,-1);
        tracep->declBit(c+86,"ysyx_22051013_rvcpu i_cache2 data_ram0 wen", false,-1);
        tracep->declArray(c+82,"ysyx_22051013_rvcpu i_cache2 data_ram0 bwen", false,-1, 127,0);
        tracep->declBit(c+444,"ysyx_22051013_rvcpu dcache_device_sel3 core_re", false,-1);
        tracep->declBit(c+443,"ysyx_22051013_rvcpu dcache_device_sel3 core_we", false,-1);
        tracep->declBus(c+445,"ysyx_22051013_rvcpu dcache_device_sel3 core_mask", false,-1, 7,0);
        tracep->declQuad(c+448,"ysyx_22051013_rvcpu dcache_device_sel3 core_data_i", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu dcache_device_sel3 device_data_i", false,-1, 63,0);
        tracep->declQuad(c+446,"ysyx_22051013_rvcpu dcache_device_sel3 core_addr", false,-1, 63,0);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu dcache_device_sel3 core_ready", false,-1);
        tracep->declBit(c+450,"ysyx_22051013_rvcpu dcache_device_sel3 data_valid", false,-1);
        tracep->declQuad(c+360,"ysyx_22051013_rvcpu dcache_device_sel3 data_to_core", false,-1, 63,0);
        tracep->declBit(c+451,"ysyx_22051013_rvcpu dcache_device_sel3 axi_re", false,-1);
        tracep->declBit(c+452,"ysyx_22051013_rvcpu dcache_device_sel3 axi_we", false,-1);
        tracep->declBus(c+438,"ysyx_22051013_rvcpu dcache_device_sel3 axi_mask", false,-1, 7,0);
        tracep->declQuad(c+355,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+436,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_pc", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22051013_rvcpu dcache_device_sel3 axi_valid", false,-1);
        tracep->declQuad(c+19,"ysyx_22051013_rvcpu dcache_device_sel3 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+453,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_re", false,-1);
        tracep->declBit(c+454,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_we", false,-1);
        tracep->declBus(c+455,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_mask", false,-1, 7,0);
        tracep->declQuad(c+456,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_o", false,-1, 63,0);
        tracep->declQuad(c+460,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_pc", false,-1, 63,0);
        tracep->declBit(c+462,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_ready", false,-1);
        tracep->declBit(c+362,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_valid", false,-1);
        tracep->declQuad(c+458,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_data_i", false,-1, 63,0);
        tracep->declBit(c+363,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_re", false,-1);
        tracep->declBit(c+22,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_we", false,-1);
        tracep->declQuad(c+366,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_pc", false,-1, 63,0);
        tracep->declQuad(c+364,"ysyx_22051013_rvcpu dcache_device_sel3 dcache_axi_data", false,-1, 63,0);
        tracep->declQuad(c+463,"ysyx_22051013_rvcpu dcache_device_sel3 axi_dcache_data", false,-1, 63,0);
        tracep->declBit(c+465,"ysyx_22051013_rvcpu dcache_device_sel3 axi_dcache_valid", false,-1);
        tracep->declBit(c+505,"ysyx_22051013_rvcpu dcache_device_sel3 device_ena", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu d_cache4 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu d_cache4 rst", false,-1);
        tracep->declQuad(c+460,"ysyx_22051013_rvcpu d_cache4 data_pc", false,-1, 63,0);
        tracep->declQuad(c+456,"ysyx_22051013_rvcpu d_cache4 data_i", false,-1, 63,0);
        tracep->declBit(c+462,"ysyx_22051013_rvcpu d_cache4 core_ready", false,-1);
        tracep->declBit(c+453,"ysyx_22051013_rvcpu d_cache4 re", false,-1);
        tracep->declBit(c+454,"ysyx_22051013_rvcpu d_cache4 we", false,-1);
        tracep->declBus(c+455,"ysyx_22051013_rvcpu d_cache4 wmask", false,-1, 7,0);
        tracep->declBit(c+362,"ysyx_22051013_rvcpu d_cache4 data_valid", false,-1);
        tracep->declQuad(c+458,"ysyx_22051013_rvcpu d_cache4 data_o", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_22051013_rvcpu d_cache4 axi_pc", false,-1, 63,0);
        tracep->declBit(c+363,"ysyx_22051013_rvcpu d_cache4 axi_r_ena", false,-1);
        tracep->declBit(c+22,"ysyx_22051013_rvcpu d_cache4 axi_w_ena", false,-1);
        tracep->declQuad(c+364,"ysyx_22051013_rvcpu d_cache4 axi_data_o", false,-1, 63,0);
        tracep->declQuad(c+463,"ysyx_22051013_rvcpu d_cache4 axi_data_i", false,-1, 63,0);
        tracep->declBit(c+465,"ysyx_22051013_rvcpu d_cache4 axi_valid", false,-1);
        tracep->declBus(c+506,"ysyx_22051013_rvcpu d_cache4 dcache_tag", false,-1, 22,0);
        tracep->declBus(c+507,"ysyx_22051013_rvcpu d_cache4 dcache_index", false,-1, 5,0);
        tracep->declBus(c+105,"ysyx_22051013_rvcpu d_cache4 dread_state", false,-1, 5,0);
        tracep->declBus(c+508,"ysyx_22051013_rvcpu d_cache4 dread_state_next", false,-1, 5,0);
        tracep->declBit(c+509,"ysyx_22051013_rvcpu d_cache4 way1_r_hit", false,-1);
        tracep->declBit(c+510,"ysyx_22051013_rvcpu d_cache4 way2_r_hit", false,-1);
        tracep->declBit(c+511,"ysyx_22051013_rvcpu d_cache4 way1_r_dirty", false,-1);
        tracep->declBit(c+377,"ysyx_22051013_rvcpu d_cache4 way2_r_dirty", false,-1);
        tracep->declBit(c+512,"ysyx_22051013_rvcpu d_cache4 core_re_ready", false,-1);
        tracep->declBit(c+106,"ysyx_22051013_rvcpu d_cache4 tag_update", false,-1);
        tracep->declBit(c+378,"ysyx_22051013_rvcpu d_cache4 tag_update_temp", false,-1);
        tracep->declBit(c+513,"ysyx_22051013_rvcpu d_cache4 data_r_valid", false,-1);
        tracep->declBit(c+514,"ysyx_22051013_rvcpu d_cache4 write_r_valid", false,-1);
        tracep->declBit(c+379,"ysyx_22051013_rvcpu d_cache4 way1_r_ena", false,-1);
        tracep->declBit(c+380,"ysyx_22051013_rvcpu d_cache4 way2_r_ena", false,-1);
        tracep->declQuad(c+515,"ysyx_22051013_rvcpu d_cache4 missr_pc", false,-1, 63,0);
        tracep->declBit(c+517,"ysyx_22051013_rvcpu d_cache4 missr_ena", false,-1);
        tracep->declArray(c+518,"ysyx_22051013_rvcpu d_cache4 missr_data", false,-1, 127,0);
        tracep->declArray(c+381,"ysyx_22051013_rvcpu d_cache4 cache_r_strb", false,-1, 127,0);
        tracep->declBit(c+379,"ysyx_22051013_rvcpu d_cache4 dirtyr_way1_clean", false,-1);
        tracep->declBit(c+380,"ysyx_22051013_rvcpu d_cache4 dirtyr_way2_clean", false,-1);
        tracep->declBit(c+107,"ysyx_22051013_rvcpu d_cache4 dirtyr_valid", false,-1);
        tracep->declBit(c+108,"ysyx_22051013_rvcpu d_cache4 dirtyr_ena", false,-1);
        tracep->declQuad(c+385,"ysyx_22051013_rvcpu d_cache4 dirtyr_pc", false,-1, 63,0);
        tracep->declQuad(c+522,"ysyx_22051013_rvcpu d_cache4 dirtyr_data", false,-1, 63,0);
        tracep->declBit(c+109,"ysyx_22051013_rvcpu d_cache4 delayr", false,-1);
        tracep->declBus(c+110,"ysyx_22051013_rvcpu d_cache4 dwrite_state", false,-1, 5,0);
        tracep->declBus(c+524,"ysyx_22051013_rvcpu d_cache4 dwrite_state_next", false,-1, 5,0);
        tracep->declBit(c+525,"ysyx_22051013_rvcpu d_cache4 way1_w_hit", false,-1);
        tracep->declBit(c+526,"ysyx_22051013_rvcpu d_cache4 way2_w_hit", false,-1);
        tracep->declBit(c+527,"ysyx_22051013_rvcpu d_cache4 way1_w_dirty", false,-1);
        tracep->declBit(c+377,"ysyx_22051013_rvcpu d_cache4 way2_w_dirty", false,-1);
        tracep->declBit(c+528,"ysyx_22051013_rvcpu d_cache4 core_wr_ready", false,-1);
        tracep->declBit(c+111,"ysyx_22051013_rvcpu d_cache4 tag_w_update", false,-1);
        tracep->declBit(c+387,"ysyx_22051013_rvcpu d_cache4 tag_w_update_temp", false,-1);
        tracep->declBit(c+529,"ysyx_22051013_rvcpu d_cache4 data_w_valid", false,-1);
        tracep->declBit(c+684,"ysyx_22051013_rvcpu d_cache4 dirtyw_way1_clean", false,-1);
        tracep->declBit(c+685,"ysyx_22051013_rvcpu d_cache4 dirtyw_way2_clean", false,-1);
        tracep->declArray(c+388,"ysyx_22051013_rvcpu d_cache4 data_write_o", false,-1, 127,0);
        tracep->declArray(c+530,"ysyx_22051013_rvcpu d_cache4 hit_w_strb", false,-1, 127,0);
        tracep->declQuad(c+534,"ysyx_22051013_rvcpu d_cache4 strb_w_64", false,-1, 63,0);
        tracep->declBit(c+536,"ysyx_22051013_rvcpu d_cache4 write_w_valid", false,-1);
        tracep->declBit(c+392,"ysyx_22051013_rvcpu d_cache4 way1_w_ena", false,-1);
        tracep->declBit(c+393,"ysyx_22051013_rvcpu d_cache4 way2_w_ena", false,-1);
        tracep->declQuad(c+537,"ysyx_22051013_rvcpu d_cache4 missw_pc", false,-1, 63,0);
        tracep->declBit(c+539,"ysyx_22051013_rvcpu d_cache4 missw_ena", false,-1);
        tracep->declArray(c+540,"ysyx_22051013_rvcpu d_cache4 missw_data", false,-1, 127,0);
        tracep->declArray(c+394,"ysyx_22051013_rvcpu d_cache4 cache_w_strb", false,-1, 127,0);
        tracep->declBit(c+112,"ysyx_22051013_rvcpu d_cache4 dirtyw_valid", false,-1);
        tracep->declBit(c+113,"ysyx_22051013_rvcpu d_cache4 dirtyw_ena", false,-1);
        tracep->declQuad(c+398,"ysyx_22051013_rvcpu d_cache4 dirtyw_pc", false,-1, 63,0);
        tracep->declQuad(c+544,"ysyx_22051013_rvcpu d_cache4 dirtyw_data", false,-1, 63,0);
        tracep->declBit(c+114,"ysyx_22051013_rvcpu d_cache4 delayw", false,-1);
        tracep->declBit(c+400,"ysyx_22051013_rvcpu d_cache4 way1_ena", false,-1);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu d_cache4 tag_with_valid", false,-1, 23,0);
        tracep->declBus(c+115,"ysyx_22051013_rvcpu d_cache4 d_tag_way1", false,-1, 22,0);
        tracep->declBit(c+116,"ysyx_22051013_rvcpu d_cache4 d_tag_valid1", false,-1);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu d_cache4 way2_ena", false,-1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu d_cache4 d_tag_way2", false,-1, 22,0);
        tracep->declBit(c+118,"ysyx_22051013_rvcpu d_cache4 d_tag_valid2", false,-1);
        tracep->declArray(c+119,"ysyx_22051013_rvcpu d_cache4 cache_data", false,-1, 127,0);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu d_cache4 ce", false,-1);
        tracep->declArray(c+402,"ysyx_22051013_rvcpu d_cache4 cache_strb", false,-1, 127,0);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu d_cache4 cache_ena", false,-1);
        tracep->declArray(c+407,"ysyx_22051013_rvcpu d_cache4 ram_i_data", false,-1, 127,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu d_cache4 tag_ram0 clk", false,-1);
        tracep->declBus(c+507,"ysyx_22051013_rvcpu d_cache4 tag_ram0 addr", false,-1, 5,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+400,"ysyx_22051013_rvcpu d_cache4 tag_ram0 write_ena", false,-1);
        tracep->declBus(c+115,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+116,"ysyx_22051013_rvcpu d_cache4 tag_ram0 tag_valid", false,-1);
        tracep->declBus(c+115,"ysyx_22051013_rvcpu d_cache4 tag_ram0 out_data", false,-1, 22,0);
        tracep->declBit(c+116,"ysyx_22051013_rvcpu d_cache4 tag_ram0 out_vaild", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu d_cache4 tag_ram1 clk", false,-1);
        tracep->declBus(c+507,"ysyx_22051013_rvcpu d_cache4 tag_ram1 addr", false,-1, 5,0);
        tracep->declBus(c+546,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_data_i", false,-1, 23,0);
        tracep->declBit(c+401,"ysyx_22051013_rvcpu d_cache4 tag_ram1 write_ena", false,-1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_data_o", false,-1, 22,0);
        tracep->declBit(c+118,"ysyx_22051013_rvcpu d_cache4 tag_ram1 tag_valid", false,-1);
        tracep->declBus(c+117,"ysyx_22051013_rvcpu d_cache4 tag_ram1 out_data", false,-1, 22,0);
        tracep->declBit(c+118,"ysyx_22051013_rvcpu d_cache4 tag_ram1 out_vaild", false,-1);
        tracep->declBus(c+681,"ysyx_22051013_rvcpu d_cache4 data_ram0 Bits", false,-1, 31,0);
        tracep->declBus(c+682,"ysyx_22051013_rvcpu d_cache4 data_ram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+683,"ysyx_22051013_rvcpu d_cache4 data_ram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+681,"ysyx_22051013_rvcpu d_cache4 data_ram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+119,"ysyx_22051013_rvcpu d_cache4 data_ram0 Q", false,-1, 127,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu d_cache4 data_ram0 CLK", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu d_cache4 data_ram0 CEN", false,-1);
        tracep->declBit(c+411,"ysyx_22051013_rvcpu d_cache4 data_ram0 WEN", false,-1);
        tracep->declArray(c+412,"ysyx_22051013_rvcpu d_cache4 data_ram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+507,"ysyx_22051013_rvcpu d_cache4 data_ram0 A", false,-1, 5,0);
        tracep->declArray(c+407,"ysyx_22051013_rvcpu d_cache4 data_ram0 D", false,-1, 127,0);
        tracep->declBit(c+673,"ysyx_22051013_rvcpu d_cache4 data_ram0 cen", false,-1);
        tracep->declBit(c+406,"ysyx_22051013_rvcpu d_cache4 data_ram0 wen", false,-1);
        tracep->declArray(c+402,"ysyx_22051013_rvcpu d_cache4 data_ram0 bwen", false,-1, 127,0);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu bpu_static rst", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu bpu_static inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu bpu_static pc_i", false,-1, 63,0);
        tracep->declQuad(c+640,"ysyx_22051013_rvcpu bpu_static pc_o", false,-1, 63,0);
        tracep->declBit(c+23,"ysyx_22051013_rvcpu bpu_static bpu_pc_hold", false,-1);
        tracep->declBit(c+639,"ysyx_22051013_rvcpu bpu_static bpu_jump", false,-1);
        tracep->declBus(c+547,"ysyx_22051013_rvcpu bpu_static j_imm", false,-1, 20,1);
        tracep->declBus(c+548,"ysyx_22051013_rvcpu bpu_static b_imm", false,-1, 12,1);
        tracep->declBus(c+549,"ysyx_22051013_rvcpu bpu_static opcode", false,-1, 6,0);
        tracep->declBit(c+651,"ysyx_22051013_rvcpu bpu_static inst_jal", false,-1);
        tracep->declBit(c+550,"ysyx_22051013_rvcpu bpu_static inst_bxx", false,-1);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu bpu_static op1", false,-1, 63,0);
        tracep->declQuad(c+652,"ysyx_22051013_rvcpu bpu_static op2", false,-1, 63,0);
        tracep->declQuad(c+654,"ysyx_22051013_rvcpu bpu_static pr_pc", false,-1, 63,0);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu ifu0 id_pc_jump", false,-1);
        tracep->declQuad(c+368,"ysyx_22051013_rvcpu ifu0 id_pc_i", false,-1, 63,0);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu ifu0 ex_pc_jump", false,-1);
        tracep->declQuad(c+645,"ysyx_22051013_rvcpu ifu0 ex_pc_i", false,-1, 63,0);
        tracep->declQuad(c+640,"ysyx_22051013_rvcpu ifu0 bpu_pc_i", false,-1, 63,0);
        tracep->declBit(c+439,"ysyx_22051013_rvcpu ifu0 inst_valid", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu ifu0 id_ready", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu ifu0 id_stall", false,-1);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu ifu0 if_valid", false,-1);
        tracep->declBit(c+466,"ysyx_22051013_rvcpu ifu0 core_ready", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu ifu0 inst_i", false,-1, 31,0);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu ifu0 inst_o", false,-1, 31,0);
        tracep->declQuad(c+441,"ysyx_22051013_rvcpu ifu0 pc_next", false,-1, 63,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu reg_ifid1 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu reg_ifid1 rst", false,-1);
        tracep->declBus(c+440,"ysyx_22051013_rvcpu reg_ifid1 if_inst", false,-1, 31,0);
        tracep->declQuad(c+24,"ysyx_22051013_rvcpu reg_ifid1 if_pc", false,-1, 63,0);
        tracep->declBit(c+639,"ysyx_22051013_rvcpu reg_ifid1 bpu_jump", false,-1);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu reg_ifid1 if_valid", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu reg_ifid1 id_stall", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu reg_ifid1 id_flush", false,-1);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu reg_ifid1 ex_flush", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu reg_ifid1 id_ready", false,-1);
        tracep->declBit(c+29,"ysyx_22051013_rvcpu reg_ifid1 id_jump", false,-1);
        tracep->declBus(c+26,"ysyx_22051013_rvcpu reg_ifid1 id_inst", false,-1, 31,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu reg_ifid1 id_pc", false,-1, 63,0);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu idu2 rst", false,-1);
        tracep->declBus(c+26,"ysyx_22051013_rvcpu idu2 inst_i", false,-1, 31,0);
        tracep->declQuad(c+27,"ysyx_22051013_rvcpu idu2 pc_i", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22051013_rvcpu idu2 bpu_jump", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu idu2 ex_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu idu2 ex_data_forward", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu idu2 ls_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+488,"ysyx_22051013_rvcpu idu2 ls_data_forward", false,-1, 63,0);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu idu2 wb_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu idu2 wb_data_forward", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu idu2 ex_load_ena", false,-1);
        tracep->declBus(c+467,"ysyx_22051013_rvcpu idu2 rs1_addr", false,-1, 4,0);
        tracep->declBit(c+469,"ysyx_22051013_rvcpu idu2 rs1_ena", false,-1);
        tracep->declQuad(c+647,"ysyx_22051013_rvcpu idu2 rs1_data", false,-1, 63,0);
        tracep->declBus(c+468,"ysyx_22051013_rvcpu idu2 rs2_addr", false,-1, 4,0);
        tracep->declBit(c+470,"ysyx_22051013_rvcpu idu2 rs2_ena", false,-1);
        tracep->declQuad(c+649,"ysyx_22051013_rvcpu idu2 rs2_data", false,-1, 63,0);
        tracep->declBit(c+480,"ysyx_22051013_rvcpu idu2 rd_ena", false,-1);
        tracep->declBus(c+370,"ysyx_22051013_rvcpu idu2 rd_addr", false,-1, 4,0);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu idu2 alusrc_o", false,-1, 7,0);
        tracep->declBus(c+481,"ysyx_22051013_rvcpu idu2 lsctl_o", false,-1, 3,0);
        tracep->declBus(c+482,"ysyx_22051013_rvcpu idu2 wbctl_o", false,-1, 1,0);
        tracep->declBus(c+483,"ysyx_22051013_rvcpu idu2 csr_ctl", false,-1, 3,0);
        tracep->declBit(c+472,"ysyx_22051013_rvcpu idu2 load_flag", false,-1);
        tracep->declQuad(c+474,"ysyx_22051013_rvcpu idu2 op1", false,-1, 63,0);
        tracep->declQuad(c+476,"ysyx_22051013_rvcpu idu2 op2", false,-1, 63,0);
        tracep->declQuad(c+478,"ysyx_22051013_rvcpu idu2 imm", false,-1, 63,0);
        tracep->declBus(c+642,"ysyx_22051013_rvcpu idu2 inst_o", false,-1, 31,0);
        tracep->declQuad(c+643,"ysyx_22051013_rvcpu idu2 pc_o", false,-1, 63,0);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu idu2 ex_ready", false,-1);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu idu2 if_valid", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu idu2 id_flush", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu idu2 id_ex_flush", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu idu2 id_ready", false,-1);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu idu2 id_valid", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu idu2 id_stall", false,-1);
        tracep->declBit(c+471,"ysyx_22051013_rvcpu idu2 jump_ena", false,-1);
        tracep->declQuad(c+368,"ysyx_22051013_rvcpu idu2 jump_pc", false,-1, 63,0);
        tracep->declBus(c+123,"ysyx_22051013_rvcpu idu2 rd", false,-1, 4,0);
        tracep->declBus(c+124,"ysyx_22051013_rvcpu idu2 rs1", false,-1, 4,0);
        tracep->declBus(c+125,"ysyx_22051013_rvcpu idu2 rs2", false,-1, 4,0);
        tracep->declBit(c+551,"ysyx_22051013_rvcpu idu2 imm_ena", false,-1);
        tracep->declBit(c+552,"ysyx_22051013_rvcpu idu2 branch", false,-1);
        tracep->declBit(c+656,"ysyx_22051013_rvcpu idu2 op1_relate", false,-1);
        tracep->declBit(c+657,"ysyx_22051013_rvcpu idu2 op2_relate", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu idu2 id_stall_ena", false,-1);
        tracep->declBit(c+416,"ysyx_22051013_rvcpu idu2 ex_op1_forward", false,-1);
        tracep->declBit(c+417,"ysyx_22051013_rvcpu idu2 ls_op1_forward", false,-1);
        tracep->declBit(c+418,"ysyx_22051013_rvcpu idu2 wb_op1_forward", false,-1);
        tracep->declBit(c+419,"ysyx_22051013_rvcpu idu2 ex_op2_forward", false,-1);
        tracep->declBit(c+420,"ysyx_22051013_rvcpu idu2 ls_op2_forward", false,-1);
        tracep->declBit(c+421,"ysyx_22051013_rvcpu idu2 wb_op2_forward", false,-1);
        tracep->declBit(c+553,"ysyx_22051013_rvcpu idu2 ex_branch", false,-1);
        tracep->declQuad(c+554,"ysyx_22051013_rvcpu idu2 op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+556,"ysyx_22051013_rvcpu idu2 op1_lt_op2", false,-1);
        tracep->declBit(c+557,"ysyx_22051013_rvcpu idu2 csr_wr_ena", false,-1);
        tracep->declBit(c+558,"ysyx_22051013_rvcpu idu2 csr_rd_ena", false,-1);
        tracep->declBit(c+559,"ysyx_22051013_rvcpu idu2 mret_ena", false,-1);
        tracep->declBit(c+560,"ysyx_22051013_rvcpu idu2 ecall_ena", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu idu2 decode rst", false,-1);
        tracep->declBus(c+26,"ysyx_22051013_rvcpu idu2 decode inst", false,-1, 31,0);
        tracep->declBit(c+469,"ysyx_22051013_rvcpu idu2 decode rs1_ena", false,-1);
        tracep->declBit(c+470,"ysyx_22051013_rvcpu idu2 decode rs2_ena", false,-1);
        tracep->declBus(c+482,"ysyx_22051013_rvcpu idu2 decode wb_ctl", false,-1, 1,0);
        tracep->declBus(c+481,"ysyx_22051013_rvcpu idu2 decode mem_ctl", false,-1, 3,0);
        tracep->declBit(c+552,"ysyx_22051013_rvcpu idu2 decode branch", false,-1);
        tracep->declQuad(c+478,"ysyx_22051013_rvcpu idu2 decode ext_imm", false,-1, 63,0);
        tracep->declBit(c+551,"ysyx_22051013_rvcpu idu2 decode imm_ena", false,-1);
        tracep->declBit(c+472,"ysyx_22051013_rvcpu idu2 decode load", false,-1);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu idu2 decode alu_ctl", false,-1, 7,0);
        tracep->declBus(c+126,"ysyx_22051013_rvcpu idu2 decode opcode", false,-1, 6,0);
        tracep->declBus(c+127,"ysyx_22051013_rvcpu idu2 decode funct3", false,-1, 2,0);
        tracep->declBus(c+128,"ysyx_22051013_rvcpu idu2 decode funct7", false,-1, 6,0);
        tracep->declBus(c+129,"ysyx_22051013_rvcpu idu2 decode i_imm", false,-1, 11,0);
        tracep->declBus(c+130,"ysyx_22051013_rvcpu idu2 decode j_imm", false,-1, 20,1);
        tracep->declBus(c+131,"ysyx_22051013_rvcpu idu2 decode u_imm", false,-1, 19,0);
        tracep->declBus(c+132,"ysyx_22051013_rvcpu idu2 decode s_imm", false,-1, 11,0);
        tracep->declBus(c+133,"ysyx_22051013_rvcpu idu2 decode b_imm", false,-1, 12,1);
        tracep->declBus(c+561,"ysyx_22051013_rvcpu idu2 decode inst_type", false,-1, 7,0);
        tracep->declBit(c+562,"ysyx_22051013_rvcpu idu2 decode inst_lui", false,-1);
        tracep->declBit(c+563,"ysyx_22051013_rvcpu idu2 decode inst_auipc", false,-1);
        tracep->declBit(c+564,"ysyx_22051013_rvcpu idu2 decode inst_jal", false,-1);
        tracep->declBit(c+565,"ysyx_22051013_rvcpu idu2 decode inst_jalr", false,-1);
        tracep->declBit(c+566,"ysyx_22051013_rvcpu idu2 decode inst_sb", false,-1);
        tracep->declBit(c+567,"ysyx_22051013_rvcpu idu2 decode inst_sh", false,-1);
        tracep->declBit(c+568,"ysyx_22051013_rvcpu idu2 decode inst_sw", false,-1);
        tracep->declBit(c+569,"ysyx_22051013_rvcpu idu2 decode inst_sd", false,-1);
        tracep->declBit(c+570,"ysyx_22051013_rvcpu idu2 decode inst_lb", false,-1);
        tracep->declBit(c+571,"ysyx_22051013_rvcpu idu2 decode inst_lh", false,-1);
        tracep->declBit(c+572,"ysyx_22051013_rvcpu idu2 decode inst_lw", false,-1);
        tracep->declBit(c+573,"ysyx_22051013_rvcpu idu2 decode inst_ld", false,-1);
        tracep->declBit(c+574,"ysyx_22051013_rvcpu idu2 decode inst_lbu", false,-1);
        tracep->declBit(c+575,"ysyx_22051013_rvcpu idu2 decode inst_lhu", false,-1);
        tracep->declBit(c+576,"ysyx_22051013_rvcpu idu2 decode inst_lwu", false,-1);
        tracep->declBit(c+577,"ysyx_22051013_rvcpu idu2 decode inst_beq", false,-1);
        tracep->declBit(c+578,"ysyx_22051013_rvcpu idu2 decode inst_bne", false,-1);
        tracep->declBit(c+579,"ysyx_22051013_rvcpu idu2 decode inst_blt", false,-1);
        tracep->declBit(c+580,"ysyx_22051013_rvcpu idu2 decode inst_bge", false,-1);
        tracep->declBit(c+581,"ysyx_22051013_rvcpu idu2 decode inst_bltu", false,-1);
        tracep->declBit(c+582,"ysyx_22051013_rvcpu idu2 decode inst_bgeu", false,-1);
        tracep->declBit(c+583,"ysyx_22051013_rvcpu idu2 decode inst_add", false,-1);
        tracep->declBit(c+584,"ysyx_22051013_rvcpu idu2 decode inst_sub", false,-1);
        tracep->declBit(c+585,"ysyx_22051013_rvcpu idu2 decode inst_sll", false,-1);
        tracep->declBit(c+586,"ysyx_22051013_rvcpu idu2 decode inst_slt", false,-1);
        tracep->declBit(c+587,"ysyx_22051013_rvcpu idu2 decode inst_sltu", false,-1);
        tracep->declBit(c+588,"ysyx_22051013_rvcpu idu2 decode inst_xor", false,-1);
        tracep->declBit(c+589,"ysyx_22051013_rvcpu idu2 decode inst_srl", false,-1);
        tracep->declBit(c+590,"ysyx_22051013_rvcpu idu2 decode inst_sra", false,-1);
        tracep->declBit(c+591,"ysyx_22051013_rvcpu idu2 decode inst_or", false,-1);
        tracep->declBit(c+592,"ysyx_22051013_rvcpu idu2 decode inst_and", false,-1);
        tracep->declBit(c+593,"ysyx_22051013_rvcpu idu2 decode inst_div", false,-1);
        tracep->declBit(c+594,"ysyx_22051013_rvcpu idu2 decode inst_divu", false,-1);
        tracep->declBit(c+595,"ysyx_22051013_rvcpu idu2 decode inst_mul", false,-1);
        tracep->declBit(c+596,"ysyx_22051013_rvcpu idu2 decode inst_mulh", false,-1);
        tracep->declBit(c+597,"ysyx_22051013_rvcpu idu2 decode inst_mulhsu", false,-1);
        tracep->declBit(c+598,"ysyx_22051013_rvcpu idu2 decode inst_mulhu", false,-1);
        tracep->declBit(c+599,"ysyx_22051013_rvcpu idu2 decode inst_rem", false,-1);
        tracep->declBit(c+600,"ysyx_22051013_rvcpu idu2 decode inst_remu", false,-1);
        tracep->declBit(c+422,"ysyx_22051013_rvcpu idu2 decode inst_addi", false,-1);
        tracep->declBit(c+423,"ysyx_22051013_rvcpu idu2 decode inst_slti", false,-1);
        tracep->declBit(c+424,"ysyx_22051013_rvcpu idu2 decode inst_sltiu", false,-1);
        tracep->declBit(c+425,"ysyx_22051013_rvcpu idu2 decode inst_xori", false,-1);
        tracep->declBit(c+426,"ysyx_22051013_rvcpu idu2 decode inst_ori", false,-1);
        tracep->declBit(c+427,"ysyx_22051013_rvcpu idu2 decode inst_andi", false,-1);
        tracep->declBit(c+428,"ysyx_22051013_rvcpu idu2 decode inst_slli", false,-1);
        tracep->declBit(c+429,"ysyx_22051013_rvcpu idu2 decode inst_srli", false,-1);
        tracep->declBit(c+601,"ysyx_22051013_rvcpu idu2 decode inst_srai", false,-1);
        tracep->declBit(c+602,"ysyx_22051013_rvcpu idu2 decode inst_addiw", false,-1);
        tracep->declBit(c+603,"ysyx_22051013_rvcpu idu2 decode inst_slliw", false,-1);
        tracep->declBit(c+604,"ysyx_22051013_rvcpu idu2 decode inst_srliw", false,-1);
        tracep->declBit(c+605,"ysyx_22051013_rvcpu idu2 decode inst_sraiw", false,-1);
        tracep->declBit(c+606,"ysyx_22051013_rvcpu idu2 decode inst_addw", false,-1);
        tracep->declBit(c+607,"ysyx_22051013_rvcpu idu2 decode inst_subw", false,-1);
        tracep->declBit(c+608,"ysyx_22051013_rvcpu idu2 decode inst_sllw", false,-1);
        tracep->declBit(c+609,"ysyx_22051013_rvcpu idu2 decode inst_srlw", false,-1);
        tracep->declBit(c+610,"ysyx_22051013_rvcpu idu2 decode inst_sraw", false,-1);
        tracep->declBit(c+611,"ysyx_22051013_rvcpu idu2 decode inst_divuw", false,-1);
        tracep->declBit(c+612,"ysyx_22051013_rvcpu idu2 decode inst_divw", false,-1);
        tracep->declBit(c+613,"ysyx_22051013_rvcpu idu2 decode inst_mulw", false,-1);
        tracep->declBit(c+614,"ysyx_22051013_rvcpu idu2 decode inst_remuw", false,-1);
        tracep->declBit(c+615,"ysyx_22051013_rvcpu idu2 decode inst_remw", false,-1);
        tracep->declBit(c+616,"ysyx_22051013_rvcpu idu2 decode inst_ecall", false,-1);
        tracep->declBit(c+617,"ysyx_22051013_rvcpu idu2 decode inst_mret", false,-1);
        tracep->declBit(c+618,"ysyx_22051013_rvcpu idu2 decode inst_csrrw", false,-1);
        tracep->declBit(c+619,"ysyx_22051013_rvcpu idu2 decode inst_csrrs", false,-1);
        tracep->declBit(c+620,"ysyx_22051013_rvcpu idu2 decode inst_csrrc", false,-1);
        tracep->declBit(c+621,"ysyx_22051013_rvcpu idu2 decode inst_csrrwi", false,-1);
        tracep->declBit(c+622,"ysyx_22051013_rvcpu idu2 decode inst_csrrsi", false,-1);
        tracep->declBit(c+623,"ysyx_22051013_rvcpu idu2 decode inst_csrrci", false,-1);
        tracep->declBit(c+624,"ysyx_22051013_rvcpu idu2 decode inst_ebreak", false,-1);
        tracep->declBit(c+625,"ysyx_22051013_rvcpu idu2 decode inst_csr", false,-1);
        tracep->declBit(c+626,"ysyx_22051013_rvcpu idu2 decode jump", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu reg_idex3 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu reg_idex3 rst", false,-1);
        tracep->declBus(c+642,"ysyx_22051013_rvcpu reg_idex3 id_inst", false,-1, 31,0);
        tracep->declQuad(c+643,"ysyx_22051013_rvcpu reg_idex3 id_pc", false,-1, 63,0);
        tracep->declQuad(c+474,"ysyx_22051013_rvcpu reg_idex3 id_op1", false,-1, 63,0);
        tracep->declQuad(c+476,"ysyx_22051013_rvcpu reg_idex3 id_op2", false,-1, 63,0);
        tracep->declQuad(c+478,"ysyx_22051013_rvcpu reg_idex3 id_imm", false,-1, 63,0);
        tracep->declBit(c+480,"ysyx_22051013_rvcpu reg_idex3 id_rd_ena", false,-1);
        tracep->declBus(c+370,"ysyx_22051013_rvcpu reg_idex3 id_rd_addr", false,-1, 4,0);
        tracep->declBus(c+484,"ysyx_22051013_rvcpu reg_idex3 id_alusrc", false,-1, 7,0);
        tracep->declBus(c+481,"ysyx_22051013_rvcpu reg_idex3 id_lsctl", false,-1, 3,0);
        tracep->declBus(c+482,"ysyx_22051013_rvcpu reg_idex3 id_wbctl", false,-1, 1,0);
        tracep->declBus(c+483,"ysyx_22051013_rvcpu reg_idex3 id_csrctl", false,-1, 3,0);
        tracep->declBit(c+472,"ysyx_22051013_rvcpu reg_idex3 id_load_flag", false,-1);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu reg_idex3 id_valid", false,-1);
        tracep->declBit(c+473,"ysyx_22051013_rvcpu reg_idex3 id_flush", false,-1);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu reg_idex3 ex_flush", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu reg_idex3 ex_ready", false,-1);
        tracep->declBus(c+30,"ysyx_22051013_rvcpu reg_idex3 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+31,"ysyx_22051013_rvcpu reg_idex3 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22051013_rvcpu reg_idex3 ex_op1", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu reg_idex3 ex_op2", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22051013_rvcpu reg_idex3 ex_imm", false,-1, 63,0);
        tracep->declBit(c+39,"ysyx_22051013_rvcpu reg_idex3 ex_rd_ena", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu reg_idex3 ex_rd_addr", false,-1, 4,0);
        tracep->declBus(c+44,"ysyx_22051013_rvcpu reg_idex3 ex_alusrc", false,-1, 7,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu reg_idex3 ex_lsctl", false,-1, 3,0);
        tracep->declBit(c+45,"ysyx_22051013_rvcpu reg_idex3 ex_load_flag", false,-1);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu reg_idex3 ex_csrctl", false,-1, 3,0);
        tracep->declBus(c+42,"ysyx_22051013_rvcpu reg_idex3 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu exu4 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu exu4 rst", false,-1);
        tracep->declQuad(c+33,"ysyx_22051013_rvcpu exu4 op1", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu exu4 op2", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22051013_rvcpu exu4 imm", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22051013_rvcpu exu4 pc_i", false,-1, 63,0);
        tracep->declBus(c+44,"ysyx_22051013_rvcpu exu4 alu_sel", false,-1, 7,0);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu exu4 csr_ctl", false,-1, 3,0);
        tracep->declBit(c+495,"ysyx_22051013_rvcpu exu4 ls_ready", false,-1);
        tracep->declBit(c+492,"ysyx_22051013_rvcpu exu4 id_valid", false,-1);
        tracep->declBit(c+493,"ysyx_22051013_rvcpu exu4 ex_valid", false,-1);
        tracep->declBit(c+496,"ysyx_22051013_rvcpu exu4 ex_ready", false,-1);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu exu4 ex_flush", false,-1);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu exu4 store_data", false,-1, 63,0);
        tracep->declBit(c+487,"ysyx_22051013_rvcpu exu4 ex_jump_ena", false,-1);
        tracep->declQuad(c+645,"ysyx_22051013_rvcpu exu4 ex_jump_pc", false,-1, 63,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu exu4 exu_res", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22051013_rvcpu exu4 op1_add_op2", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22051013_rvcpu exu4 op1_addw_op2", false,-1, 63,0);
        tracep->declQuad(c+138,"ysyx_22051013_rvcpu exu4 op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22051013_rvcpu exu4 op1_subw_op2", false,-1, 63,0);
        tracep->declBit(c+142,"ysyx_22051013_rvcpu exu4 op1_lt_op2", false,-1);
        tracep->declQuad(c+143,"ysyx_22051013_rvcpu exu4 op1_sra_op2", false,-1, 63,0);
        tracep->declBus(c+145,"ysyx_22051013_rvcpu exu4 sllw", false,-1, 31,0);
        tracep->declQuad(c+146,"ysyx_22051013_rvcpu exu4 op1_sllw_op2", false,-1, 63,0);
        tracep->declBus(c+148,"ysyx_22051013_rvcpu exu4 srlw", false,-1, 31,0);
        tracep->declQuad(c+149,"ysyx_22051013_rvcpu exu4 op1_srlw_op2", false,-1, 63,0);
        tracep->declBus(c+151,"ysyx_22051013_rvcpu exu4 sraw", false,-1, 31,0);
        tracep->declQuad(c+152,"ysyx_22051013_rvcpu exu4 op1_sraw_op2", false,-1, 63,0);
        tracep->declQuad(c+627,"ysyx_22051013_rvcpu exu4 alu_res", false,-1, 63,0);
        tracep->declBit(c+154,"ysyx_22051013_rvcpu exu4 mul", false,-1);
        tracep->declBus(c+155,"ysyx_22051013_rvcpu exu4 mul_signed", false,-1, 1,0);
        tracep->declBit(c+156,"ysyx_22051013_rvcpu exu4 mulw", false,-1);
        tracep->declBit(c+157,"ysyx_22051013_rvcpu exu4 delay1", false,-1);
        tracep->declBit(c+158,"ysyx_22051013_rvcpu exu4 mul_valid", false,-1);
        tracep->declBit(c+159,"ysyx_22051013_rvcpu exu4 mul_out_valid", false,-1);
        tracep->declBit(c+160,"ysyx_22051013_rvcpu exu4 mul_ready", false,-1);
        tracep->declQuad(c+161,"ysyx_22051013_rvcpu exu4 result_hi", false,-1, 63,0);
        tracep->declQuad(c+163,"ysyx_22051013_rvcpu exu4 result_lo", false,-1, 63,0);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu exu4 flush", false,-1);
        tracep->declQuad(c+165,"ysyx_22051013_rvcpu exu4 mul_res", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22051013_rvcpu exu4 mul_res_temp", false,-1, 63,0);
        tracep->declBit(c+169,"ysyx_22051013_rvcpu exu4 div", false,-1);
        tracep->declBit(c+170,"ysyx_22051013_rvcpu exu4 div_signed", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu exu4 divw", false,-1);
        tracep->declBit(c+172,"ysyx_22051013_rvcpu exu4 delay2", false,-1);
        tracep->declBit(c+173,"ysyx_22051013_rvcpu exu4 div_valid", false,-1);
        tracep->declBit(c+174,"ysyx_22051013_rvcpu exu4 div_out_valid", false,-1);
        tracep->declBit(c+175,"ysyx_22051013_rvcpu exu4 div_ready", false,-1);
        tracep->declQuad(c+430,"ysyx_22051013_rvcpu exu4 quotient", false,-1, 63,0);
        tracep->declQuad(c+432,"ysyx_22051013_rvcpu exu4 remainder", false,-1, 63,0);
        tracep->declQuad(c+434,"ysyx_22051013_rvcpu exu4 div_res", false,-1, 63,0);
        tracep->declQuad(c+176,"ysyx_22051013_rvcpu exu4 div_res_temp", false,-1, 63,0);
        tracep->declBit(c+178,"ysyx_22051013_rvcpu exu4 mul_reg", false,-1);
        tracep->declBit(c+179,"ysyx_22051013_rvcpu exu4 mul_stall", false,-1);
        tracep->declBit(c+180,"ysyx_22051013_rvcpu exu4 div_reg", false,-1);
        tracep->declBit(c+181,"ysyx_22051013_rvcpu exu4 div_stall", false,-1);
        tracep->declBus(c+182,"ysyx_22051013_rvcpu exu4 csr_addr", false,-1, 11,0);
        tracep->declQuad(c+183,"ysyx_22051013_rvcpu exu4 read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+185,"ysyx_22051013_rvcpu exu4 write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+187,"ysyx_22051013_rvcpu exu4 mcause_value", false,-1, 63,0);
        tracep->declQuad(c+189,"ysyx_22051013_rvcpu exu4 set_data", false,-1, 63,0);
        tracep->declQuad(c+191,"ysyx_22051013_rvcpu exu4 clear_data", false,-1, 63,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu exu4 booth_mul0 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu exu4 booth_mul0 rst", false,-1);
        tracep->declBit(c+158,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_valid", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu exu4 booth_mul0 flush", false,-1);
        tracep->declBus(c+155,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_signed", false,-1, 1,0);
        tracep->declBit(c+156,"ysyx_22051013_rvcpu exu4 booth_mul0 mulw", false,-1);
        tracep->declQuad(c+33,"ysyx_22051013_rvcpu exu4 booth_mul0 mult_op1", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu exu4 booth_mul0 mult_op2", false,-1, 63,0);
        tracep->declBit(c+160,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_ready", false,-1);
        tracep->declBit(c+159,"ysyx_22051013_rvcpu exu4 booth_mul0 out_valid", false,-1);
        tracep->declQuad(c+161,"ysyx_22051013_rvcpu exu4 booth_mul0 result_hi", false,-1, 63,0);
        tracep->declQuad(c+163,"ysyx_22051013_rvcpu exu4 booth_mul0 result_lo", false,-1, 63,0);
        tracep->declBit(c+193,"ysyx_22051013_rvcpu exu4 booth_mul0 mul_doing", false,-1);
        tracep->declQuad(c+194,"ysyx_22051013_rvcpu exu4 booth_mul0 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_22051013_rvcpu exu4 booth_mul0 op2_temp", false,-1, 63,0);
        tracep->declArray(c+198,"ysyx_22051013_rvcpu exu4 booth_mul0 op1_ext", false,-1, 65,0);
        tracep->declArray(c+201,"ysyx_22051013_rvcpu exu4 booth_mul0 op2_ext", false,-1, 65,0);
        tracep->declArray(c+204,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplicand", false,-1, 131,0);
        tracep->declArray(c+209,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplier", false,-1, 66,0);
        tracep->declBus(c+212,"ysyx_22051013_rvcpu exu4 booth_mul0 sel", false,-1, 2,0);
        tracep->declBit(c+213,"ysyx_22051013_rvcpu exu4 booth_mul0 carry", false,-1);
        tracep->declArray(c+214,"ysyx_22051013_rvcpu exu4 booth_mul0 multiplicand_mod", false,-1, 131,0);
        tracep->declArray(c+219,"ysyx_22051013_rvcpu exu4 booth_mul0 result_temp", false,-1, 131,0);
        tracep->declBit(c+224,"ysyx_22051013_rvcpu exu4 booth_mul0 unused_ok", false,-1);
        tracep->declArray(c+204,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 mult", false,-1, 131,0);
        tracep->declBus(c+212,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel", false,-1, 2,0);
        tracep->declArray(c+214,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 part_mul", false,-1, 131,0);
        tracep->declBit(c+213,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 carry", false,-1);
        tracep->declBit(c+225,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y_add", false,-1);
        tracep->declBit(c+226,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y", false,-1);
        tracep->declBit(c+227,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 y_sub", false,-1);
        tracep->declBit(c+228,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_negative", false,-1);
        tracep->declBit(c+229,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_double_negative", false,-1);
        tracep->declBit(c+230,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_positive", false,-1);
        tracep->declBit(c+231,"ysyx_22051013_rvcpu exu4 booth_mul0 booth10 sel_double_positive", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu exu4 divide1 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu exu4 divide1 rst", false,-1);
        tracep->declBit(c+173,"ysyx_22051013_rvcpu exu4 divide1 div_valid", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu exu4 divide1 flush", false,-1);
        tracep->declBit(c+171,"ysyx_22051013_rvcpu exu4 divide1 divw", false,-1);
        tracep->declBit(c+170,"ysyx_22051013_rvcpu exu4 divide1 div_signed", false,-1);
        tracep->declQuad(c+33,"ysyx_22051013_rvcpu exu4 divide1 div_op1", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu exu4 divide1 div_op2", false,-1, 63,0);
        tracep->declBit(c+175,"ysyx_22051013_rvcpu exu4 divide1 div_ready", false,-1);
        tracep->declBit(c+174,"ysyx_22051013_rvcpu exu4 divide1 out_valid", false,-1);
        tracep->declQuad(c+430,"ysyx_22051013_rvcpu exu4 divide1 quotient", false,-1, 63,0);
        tracep->declQuad(c+432,"ysyx_22051013_rvcpu exu4 divide1 remainder", false,-1, 63,0);
        tracep->declBit(c+232,"ysyx_22051013_rvcpu exu4 divide1 div_doing", false,-1);
        tracep->declQuad(c+233,"ysyx_22051013_rvcpu exu4 divide1 op1_temp", false,-1, 63,0);
        tracep->declQuad(c+235,"ysyx_22051013_rvcpu exu4 divide1 op2_temp", false,-1, 63,0);
        tracep->declBit(c+237,"ysyx_22051013_rvcpu exu4 divide1 op1_sign", false,-1);
        tracep->declBit(c+238,"ysyx_22051013_rvcpu exu4 divide1 op2_sign", false,-1);
        tracep->declQuad(c+239,"ysyx_22051013_rvcpu exu4 divide1 op1_abs", false,-1, 63,0);
        tracep->declQuad(c+241,"ysyx_22051013_rvcpu exu4 divide1 op2_abs", false,-1, 63,0);
        tracep->declArray(c+243,"ysyx_22051013_rvcpu exu4 divide1 dividend", false,-1, 127,0);
        tracep->declArray(c+247,"ysyx_22051013_rvcpu exu4 divide1 divisor", false,-1, 64,0);
        tracep->declBus(c+250,"ysyx_22051013_rvcpu exu4 divide1 cnt", false,-1, 6,0);
        tracep->declQuad(c+251,"ysyx_22051013_rvcpu exu4 divide1 temp_q", false,-1, 63,0);
        tracep->declBit(c+253,"ysyx_22051013_rvcpu exu4 divide1 sub_sign", false,-1);
        tracep->declQuad(c+254,"ysyx_22051013_rvcpu exu4 divide1 mod_dividend", false,-1, 63,0);
        tracep->declQuad(c+629,"ysyx_22051013_rvcpu exu4 divide1 mod_quo", false,-1, 63,0);
        tracep->declQuad(c+631,"ysyx_22051013_rvcpu exu4 divide1 mod_rem", false,-1, 63,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu exu4 csr_operate clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu exu4 csr_operate rst", false,-1);
        tracep->declBus(c+43,"ysyx_22051013_rvcpu exu4 csr_operate csr_ctl", false,-1, 3,0);
        tracep->declBus(c+182,"ysyx_22051013_rvcpu exu4 csr_operate csr_addr", false,-1, 11,0);
        tracep->declQuad(c+187,"ysyx_22051013_rvcpu exu4 csr_operate mcause_value", false,-1, 63,0);
        tracep->declQuad(c+185,"ysyx_22051013_rvcpu exu4 csr_operate write_csr_data", false,-1, 63,0);
        tracep->declQuad(c+183,"ysyx_22051013_rvcpu exu4 csr_operate read_csr_data", false,-1, 63,0);
        tracep->declBit(c+256,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_rd", false,-1);
        tracep->declBit(c+257,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_wr", false,-1);
        tracep->declBit(c+258,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mie", false,-1);
        tracep->declBit(c+259,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mpie", false,-1);
        tracep->declBus(c+260,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_mpp", false,-1, 1,0);
        tracep->declQuad(c+261,"ysyx_22051013_rvcpu exu4 csr_operate mstatus", false,-1, 63,0);
        tracep->declBit(c+263,"ysyx_22051013_rvcpu exu4 csr_operate mstatus_ie_ena", false,-1);
        tracep->declBit(c+264,"ysyx_22051013_rvcpu exu4 csr_operate mie_set", false,-1);
        tracep->declBit(c+265,"ysyx_22051013_rvcpu exu4 csr_operate mpie_set", false,-1);
        tracep->declBus(c+266,"ysyx_22051013_rvcpu exu4 csr_operate mpp_set", false,-1, 1,0);
        tracep->declBit(c+267,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_rd", false,-1);
        tracep->declBit(c+268,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_wr", false,-1);
        tracep->declQuad(c+269,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_base", false,-1, 63,2);
        tracep->declBus(c+672,"ysyx_22051013_rvcpu exu4 csr_operate mtvec_mode", false,-1, 1,0);
        tracep->declQuad(c+271,"ysyx_22051013_rvcpu exu4 csr_operate mtvec", false,-1, 63,0);
        tracep->declBit(c+273,"ysyx_22051013_rvcpu exu4 csr_operate mepc_rd", false,-1);
        tracep->declBit(c+274,"ysyx_22051013_rvcpu exu4 csr_operate mepc_wr", false,-1);
        tracep->declQuad(c+275,"ysyx_22051013_rvcpu exu4 csr_operate mepc", false,-1, 63,0);
        tracep->declBit(c+277,"ysyx_22051013_rvcpu exu4 csr_operate mcause_rd", false,-1);
        tracep->declBit(c+278,"ysyx_22051013_rvcpu exu4 csr_operate mcause_wr", false,-1);
        tracep->declQuad(c+279,"ysyx_22051013_rvcpu exu4 csr_operate mcause", false,-1, 63,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu reg_exls5 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu reg_exls5 rst", false,-1);
        tracep->declBus(c+30,"ysyx_22051013_rvcpu reg_exls5 ex_inst", false,-1, 31,0);
        tracep->declQuad(c+31,"ysyx_22051013_rvcpu reg_exls5 ex_pc", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22051013_rvcpu reg_exls5 ex_store_data", false,-1, 63,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu reg_exls5 ex_exu_res", false,-1, 63,0);
        tracep->declBus(c+41,"ysyx_22051013_rvcpu reg_exls5 ex_lsctl", false,-1, 3,0);
        tracep->declBus(c+42,"ysyx_22051013_rvcpu reg_exls5 ex_wbctl", false,-1, 1,0);
        tracep->declBit(c+39,"ysyx_22051013_rvcpu reg_exls5 ex_rd_ena", false,-1);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr", false,-1, 4,0);
        tracep->declBit(c+493,"ysyx_22051013_rvcpu reg_exls5 ex_valid", false,-1);
        tracep->declBit(c+495,"ysyx_22051013_rvcpu reg_exls5 ls_ready", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_exls5 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+47,"ysyx_22051013_rvcpu reg_exls5 ls_pc", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu reg_exls5 ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22051013_rvcpu reg_exls5 ls_exu_res", false,-1, 63,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu reg_exls5 ls_lsctl", false,-1, 3,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu reg_exls5 ls_wbctl", false,-1, 1,0);
        tracep->declBit(c+51,"ysyx_22051013_rvcpu reg_exls5 ls_rd_ena", false,-1);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_exls5 ls_rd_addr", false,-1, 4,0);
        tracep->declBus(c+40,"ysyx_22051013_rvcpu reg_exls5 ex_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+485,"ysyx_22051013_rvcpu reg_exls5 ex_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu lsu6 rst", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu lsu6 clk", false,-1);
        tracep->declQuad(c+49,"ysyx_22051013_rvcpu lsu6 alu_res", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu lsu6 store_data", false,-1, 63,0);
        tracep->declBus(c+53,"ysyx_22051013_rvcpu lsu6 ls_ctl", false,-1, 3,0);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu lsu6 wb_ready", false,-1);
        tracep->declBit(c+493,"ysyx_22051013_rvcpu lsu6 ex_valid", false,-1);
        tracep->declBit(c+495,"ysyx_22051013_rvcpu lsu6 ls_ready", false,-1);
        tracep->declBit(c+494,"ysyx_22051013_rvcpu lsu6 ls_valid", false,-1);
        tracep->declBit(c+443,"ysyx_22051013_rvcpu lsu6 we", false,-1);
        tracep->declBit(c+444,"ysyx_22051013_rvcpu lsu6 re", false,-1);
        tracep->declBit(c+16,"ysyx_22051013_rvcpu lsu6 core_ready", false,-1);
        tracep->declQuad(c+446,"ysyx_22051013_rvcpu lsu6 data_pc", false,-1, 63,0);
        tracep->declQuad(c+360,"ysyx_22051013_rvcpu lsu6 data_temp", false,-1, 63,0);
        tracep->declQuad(c+448,"ysyx_22051013_rvcpu lsu6 data_o", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22051013_rvcpu lsu6 device_data_o", false,-1, 63,0);
        tracep->declBus(c+445,"ysyx_22051013_rvcpu lsu6 wlen", false,-1, 7,0);
        tracep->declBit(c+450,"ysyx_22051013_rvcpu lsu6 data_valid", false,-1);
        tracep->declQuad(c+488,"ysyx_22051013_rvcpu lsu6 ls_data_forward", false,-1, 63,0);
        tracep->declQuad(c+371,"ysyx_22051013_rvcpu lsu6 ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+658,"ysyx_22051013_rvcpu lsu6 raddr", false,-1, 63,0);
        tracep->declQuad(c+660,"ysyx_22051013_rvcpu lsu6 waddr", false,-1, 63,0);
        tracep->declQuad(c+633,"ysyx_22051013_rvcpu lsu6 load_data", false,-1, 63,0);
        tracep->declBit(c+281,"ysyx_22051013_rvcpu lsu6 data_ok", false,-1);
        tracep->declQuad(c+282,"ysyx_22051013_rvcpu lsu6 data_i", false,-1, 63,0);
        tracep->declBus(c+284,"ysyx_22051013_rvcpu lsu6 byte_sel", false,-1, 2,0);
        tracep->declBus(c+285,"ysyx_22051013_rvcpu lsu6 half_sel", false,-1, 1,0);
        tracep->declBit(c+286,"ysyx_22051013_rvcpu lsu6 word_sel", false,-1);
        tracep->declBus(c+635,"ysyx_22051013_rvcpu lsu6 data_byte", false,-1, 7,0);
        tracep->declBus(c+636,"ysyx_22051013_rvcpu lsu6 data_half", false,-1, 15,0);
        tracep->declBus(c+287,"ysyx_22051013_rvcpu lsu6 data_word", false,-1, 31,0);
        tracep->declBus(c+662,"ysyx_22051013_rvcpu lsu6 sb_mask", false,-1, 7,0);
        tracep->declBus(c+663,"ysyx_22051013_rvcpu lsu6 sh_mask", false,-1, 7,0);
        tracep->declBus(c+664,"ysyx_22051013_rvcpu lsu6 sw_mask", false,-1, 7,0);
        tracep->declQuad(c+665,"ysyx_22051013_rvcpu lsu6 sb_data", false,-1, 63,0);
        tracep->declQuad(c+667,"ysyx_22051013_rvcpu lsu6 sw_data", false,-1, 63,0);
        tracep->declQuad(c+669,"ysyx_22051013_rvcpu lsu6 sh_data", false,-1, 63,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu reg_lswb7 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu reg_lswb7 rst", false,-1);
        tracep->declBus(c+46,"ysyx_22051013_rvcpu reg_lswb7 ls_inst", false,-1, 31,0);
        tracep->declQuad(c+47,"ysyx_22051013_rvcpu reg_lswb7 ls_pc", false,-1, 63,0);
        tracep->declBus(c+54,"ysyx_22051013_rvcpu reg_lswb7 ls_wbctl", false,-1, 1,0);
        tracep->declQuad(c+49,"ysyx_22051013_rvcpu reg_lswb7 ls_exu_res", false,-1, 63,0);
        tracep->declQuad(c+371,"ysyx_22051013_rvcpu reg_lswb7 ls_wbdata", false,-1, 63,0);
        tracep->declBit(c+51,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_ena", false,-1);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+488,"ysyx_22051013_rvcpu reg_lswb7 ls_data_forward", false,-1, 63,0);
        tracep->declBit(c+494,"ysyx_22051013_rvcpu reg_lswb7 ls_valid", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu reg_lswb7 wb_ready", false,-1);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu reg_lswb7 wb_inst", false,-1, 31,0);
        tracep->declQuad(c+56,"ysyx_22051013_rvcpu reg_lswb7 wb_pc", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu reg_lswb7 wb_wbctl", false,-1, 1,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu reg_lswb7 wb_exu_res", false,-1, 63,0);
        tracep->declQuad(c+59,"ysyx_22051013_rvcpu reg_lswb7 wb_wbdata", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu reg_lswb7 wb_rd_addr", false,-1, 4,0);
        tracep->declBus(c+52,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+488,"ysyx_22051013_rvcpu reg_lswb7 ls_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu wbu8 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu wbu8 rst", false,-1);
        tracep->declQuad(c+59,"ysyx_22051013_rvcpu wbu8 ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22051013_rvcpu wbu8 wb_ctl", false,-1, 1,0);
        tracep->declQuad(c+61,"ysyx_22051013_rvcpu wbu8 exu_res", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_22051013_rvcpu wbu8 inst_i", false,-1, 31,0);
        tracep->declQuad(c+56,"ysyx_22051013_rvcpu wbu8 pc_i", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu wbu8 rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wbu8 rd_addr", false,-1, 4,0);
        tracep->declBit(c+494,"ysyx_22051013_rvcpu wbu8 ls_valid", false,-1);
        tracep->declBit(c+678,"ysyx_22051013_rvcpu wbu8 wb_ready", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wbu8 wb_rd_addr_forward", false,-1, 4,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu wbu8 wb_rd_data_forward", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu wbu8 wb_rd_ena", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu wbu8 wb_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu wbu8 wb_data", false,-1, 63,0);
        tracep->declBit(c+288,"ysyx_22051013_rvcpu wbu8 ebreak_ena", false,-1);
        tracep->declQuad(c+686,"ysyx_22051013_rvcpu wbu8 pc_zero", false,-1, 63,0);
        tracep->declBus(c+688,"ysyx_22051013_rvcpu wbu8 inst_zero", false,-1, 31,0);
        tracep->declBit(c+289,"ysyx_22051013_rvcpu wbu8 flag", false,-1);
        tracep->declBit(c+637,"ysyx_22051013_rvcpu reg9 clk", false,-1);
        tracep->declBit(c+638,"ysyx_22051013_rvcpu reg9 rst", false,-1);
        tracep->declBus(c+64,"ysyx_22051013_rvcpu reg9 waddr", false,-1, 4,0);
        tracep->declQuad(c+490,"ysyx_22051013_rvcpu reg9 wdata", false,-1, 63,0);
        tracep->declBit(c+63,"ysyx_22051013_rvcpu reg9 wen", false,-1);
        tracep->declBus(c+467,"ysyx_22051013_rvcpu reg9 raddr1", false,-1, 4,0);
        tracep->declQuad(c+647,"ysyx_22051013_rvcpu reg9 rdata1", false,-1, 63,0);
        tracep->declBit(c+469,"ysyx_22051013_rvcpu reg9 ren1", false,-1);
        tracep->declBus(c+468,"ysyx_22051013_rvcpu reg9 raddr2", false,-1, 4,0);
        tracep->declQuad(c+649,"ysyx_22051013_rvcpu reg9 rdata2", false,-1, 63,0);
        tracep->declBit(c+470,"ysyx_22051013_rvcpu reg9 ren2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+290+i*2,"ysyx_22051013_rvcpu reg9 regs", true,(i+0), 63,0);}}
        tracep->declBus(c+354,"ysyx_22051013_rvcpu reg9 i", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp316;
    VlWide<3>/*95:0*/ __Vtemp318;
    VlWide<3>/*95:0*/ __Vtemp320;
    VlWide<3>/*95:0*/ __Vtemp322;
    VlWide<3>/*95:0*/ __Vtemp324;
    VlWide<5>/*159:0*/ __Vtemp342;
    VlWide<5>/*159:0*/ __Vtemp343;
    VlWide<3>/*95:0*/ __Vtemp344;
    VlWide<4>/*127:0*/ __Vtemp357;
    VlWide<4>/*127:0*/ __Vtemp361;
    VlWide<4>/*127:0*/ __Vtemp378;
    VlWide<4>/*127:0*/ __Vtemp415;
    VlWide<4>/*127:0*/ __Vtemp426;
    VlWide<4>/*127:0*/ __Vtemp463;
    VlWide<4>/*127:0*/ __Vtemp464;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))));
        tracep->fullBit(oldp+2,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                 & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))));
        tracep->fullBit(oldp+3,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
        tracep->fullCData(oldp+4,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                    ? 1U : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                             ? 2U : 0U))),5);
        tracep->fullBit(oldp+5,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_id),5);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data),64);
        tracep->fullBit(oldp+9,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand));
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst),64);
        tracep->fullQData(oldp+13,(((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                     & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
                                     ? (0xfffffffffffffff8ULL 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc)
                                     : 0ULL)),64);
        tracep->fullBit(oldp+15,((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                   & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))));
        tracep->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i),64);
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
        tracep->fullBit(oldp+22,(((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                   ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                                   : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena)))));
        tracep->fullBit(oldp+23,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc),64);
        tracep->fullIData(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
        tracep->fullIData(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
        tracep->fullBit(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl),4);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
        tracep->fullIData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
        tracep->fullBit(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
        tracep->fullIData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
        tracep->fullBit(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state),3);
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand));
        tracep->fullBit(oldp+67,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                  & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                     & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))))));
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state),2);
        tracep->fullCData(oldp+69,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
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
        tracep->fullCData(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state),2);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data),64);
        tracep->fullCData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state),4);
        tracep->fullBit(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1));
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2));
        tracep->fullCData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index),6);
        tracep->fullIData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag),23);
        if ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) {
            __Vtemp313[0U] = 0U;
            __Vtemp313[1U] = 0U;
            __Vtemp313[2U] = 0U;
            __Vtemp313[3U] = 0U;
        } else {
            __Vtemp313[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                               ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst)
                               : 0U);
            __Vtemp313[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                               ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst 
                                          >> 0x20U))
                               : 0U);
            __Vtemp313[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                               ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst)
                               : 0U);
            __Vtemp313[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))
                               ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_inst 
                                          >> 0x20U))
                               : 0U);
        }
        tracep->fullWData(oldp+78,(__Vtemp313),128);
        tracep->fullWData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb),128);
        tracep->fullBit(oldp+86,(((~ (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) 
                                  & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))));
        tracep->fullBit(oldp+87,(((~ (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) 
                                  & ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                     & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1))))));
        tracep->fullBit(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1));
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2));
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+91,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullBit(oldp+92,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
                                   & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
                                  & (0U == ((((~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
                                              | (~ 
                                                 vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
                                            | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])))));
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullBit(oldp+95,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
                                   & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
                                  & (0U == (((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
                                              | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
                                             | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])) 
                                            | (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]))))));
        tracep->fullWData(oldp+96,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data),128);
        tracep->fullBit(oldp+100,((1U & (~ ((~ (((8U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) 
                                            & ((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))))));
        __Vtemp316[0U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]);
        __Vtemp316[1U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]);
        __Vtemp316[2U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]);
        __Vtemp316[3U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]);
        tracep->fullWData(oldp+101,(__Vtemp316),128);
        tracep->fullCData(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state),6);
        tracep->fullBit(oldp+106,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update));
        tracep->fullBit(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid));
        tracep->fullBit(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena));
        tracep->fullBit(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr));
        tracep->fullCData(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state),6);
        tracep->fullBit(oldp+111,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update));
        tracep->fullBit(oldp+112,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid));
        tracep->fullBit(oldp+113,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena));
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw));
        tracep->fullIData(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data),23);
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
        tracep->fullIData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data),23);
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
        tracep->fullWData(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data),128);
        tracep->fullCData(oldp+123,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+124,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+125,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+126,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
        tracep->fullCData(oldp+127,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+128,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+129,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
        tracep->fullIData(oldp+131,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                     >> 0xcU)),20);
        tracep->fullSData(oldp+132,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
        tracep->fullSData(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
        tracep->fullIData(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
        tracep->fullIData(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
        tracep->fullIData(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul));
        tracep->fullCData(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed),2);
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw));
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid));
        tracep->fullBit(oldp+160,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                      | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                     | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))))));
        tracep->fullQData(oldp+161,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                      ? (((QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo),64);
        tracep->fullQData(oldp+165,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
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
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp),64);
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div));
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2));
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid));
        tracep->fullBit(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid));
        tracep->fullBit(oldp+175,((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp),64);
        tracep->fullBit(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg));
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall));
        tracep->fullBit(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg));
        tracep->fullBit(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
        tracep->fullSData(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr),12);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value),64);
        tracep->fullQData(oldp+189,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                     | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)),64);
        tracep->fullQData(oldp+191,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                     & (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))),64);
        tracep->fullBit(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing));
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp),64);
        VL_EXTEND_WQ(66,64, __Vtemp318, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
        if ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
            __Vtemp320[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
            __Vtemp320[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                      >> 0x20U));
            __Vtemp320[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp320[0U] = __Vtemp318[0U];
            __Vtemp320[1U] = __Vtemp318[1U];
            __Vtemp320[2U] = __Vtemp318[2U];
        }
        tracep->fullWData(oldp+198,(__Vtemp320),66);
        VL_EXTEND_WQ(66,64, __Vtemp322, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
        if ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
            __Vtemp324[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
            __Vtemp324[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                      >> 0x20U));
            __Vtemp324[2U] = (3U & (- (IData)((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                             >> 0x3fU))))));
        } else {
            __Vtemp324[0U] = __Vtemp322[0U];
            __Vtemp324[1U] = __Vtemp322[1U];
            __Vtemp324[2U] = __Vtemp322[2U];
        }
        tracep->fullWData(oldp+201,(__Vtemp324),66);
        tracep->fullWData(oldp+204,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand),132);
        tracep->fullWData(oldp+209,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier),67);
        tracep->fullCData(oldp+212,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])),3);
        tracep->fullBit(oldp+213,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative))));
        if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
            __Vtemp342[1U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                               << 1U)));
            __Vtemp342[2U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                               << 1U)));
            __Vtemp342[3U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                  >> 0x1fU) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                               << 1U)));
            __Vtemp342[4U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                  >> 0x1fU) | (0xeU 
                                               & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                  << 1U))));
            __Vtemp343[0U] = (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                 << 1U));
        } else {
            __Vtemp342[1U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp342[2U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp342[3U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp342[4U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp343[0U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
        __Vtemp343[1U] = __Vtemp342[1U];
        __Vtemp343[2U] = __Vtemp342[2U];
        __Vtemp343[3U] = __Vtemp342[3U];
        __Vtemp343[4U] = (0xfU & __Vtemp342[4U]);
        tracep->fullWData(oldp+214,(__Vtemp343),132);
        tracep->fullWData(oldp+219,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp),132);
        tracep->fullBit(oldp+224,((0xfU == (0xfU & 
                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U]))));
        tracep->fullBit(oldp+225,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+226,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+227,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
        tracep->fullBit(oldp+228,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative));
        tracep->fullBit(oldp+229,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative));
        tracep->fullBit(oldp+230,((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))));
        tracep->fullBit(oldp+231,((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
        tracep->fullBit(oldp+232,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing));
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
        tracep->fullBit(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign));
        tracep->fullBit(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign));
        tracep->fullQData(oldp+239,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                      ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
        tracep->fullWData(oldp+243,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend),128);
        VL_EXTEND_WQ(65,64, __Vtemp344, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
        tracep->fullWData(oldp+247,(__Vtemp344),65);
        tracep->fullCData(oldp+250,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt),7);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q),64);
        tracep->fullBit(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign));
        tracep->fullQData(oldp+254,(((((QData)((IData)(
                                                       vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                        << 1U) | ((QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                                  >> 0x1fU))) 
                                     - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
        tracep->fullBit(oldp+256,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+257,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr));
        tracep->fullBit(oldp+258,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie));
        tracep->fullBit(oldp+259,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie));
        tracep->fullCData(oldp+260,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp),2);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus),64);
        tracep->fullBit(oldp+263,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena));
        tracep->fullBit(oldp+264,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 1U)) 
                                         & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                            >> 3U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))))));
        tracep->fullBit(oldp+265,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                          ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                            >> 7U))
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))))));
        tracep->fullCData(oldp+266,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                      ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                                 >> 0xdU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        tracep->fullBit(oldp+267,((1U & (((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 2U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullBit(oldp+268,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base),62);
        tracep->fullQData(oldp+271,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                     << 2U)),64);
        tracep->fullBit(oldp+273,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 2U)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))));
        tracep->fullBit(oldp+274,((1U & (((0x341U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                          & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                             >> 3U)) 
                                         | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                            >> 1U)))));
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc),64);
        tracep->fullBit(oldp+277,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 2U))));
        tracep->fullBit(oldp+278,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                      >> 3U))));
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause),64);
        tracep->fullBit(oldp+281,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok));
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
        tracep->fullCData(oldp+284,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
        tracep->fullCData(oldp+285,((3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+286,((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                 >> 2U)))));
        tracep->fullIData(oldp+287,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
        tracep->fullBit(oldp+288,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
        tracep->fullBit(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag));
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
        tracep->fullIData(oldp+354,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        tracep->fullQData(oldp+355,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                      : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                          : ((0x21U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+357,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                      ? ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
                                          ? (0xfffffffffffffff8ULL 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc)
                                          : 0ULL) : 
                                     ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc
                                       : 0ULL))),64);
        tracep->fullBit(oldp+359,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                   | ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re)))));
        tracep->fullQData(oldp+360,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                      : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data)),64);
        tracep->fullBit(oldp+362,((1U & ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                                          : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                              ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                                              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we)))))));
        tracep->fullBit(oldp+363,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
        tracep->fullQData(oldp+364,(((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                      : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                          : 0ULL))),64);
        tracep->fullQData(oldp+366,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
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
        tracep->fullQData(oldp+368,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                      ? ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                          ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                             + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)
                                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                              ? (4ULL 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)
                                              : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)))
                                      : 0ULL)),64);
        tracep->fullCData(oldp+370,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                      ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 7U))
                                      : 0U)),5);
        tracep->fullQData(oldp+371,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+373,(((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))) 
                                   & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1))))));
        tracep->fullCData(oldp+374,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                      ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                                          ? 2U : 1U)
                                      : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                          ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                              ? 1U : 2U)
                                          : 1U))),2);
        tracep->fullBit(oldp+375,((((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                          >> 9U))) 
                                    == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild))));
        tracep->fullBit(oldp+376,((((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                          >> 9U))) 
                                    == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild))));
        tracep->fullBit(oldp+377,(((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                       >> 3U)))] 
                                    & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                       >> 3U)))]) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))));
        tracep->fullBit(oldp+378,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready))));
        tracep->fullBit(oldp+379,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                   & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                      & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))])))));
        tracep->fullBit(oldp+380,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp357[0U] = 0U;
            __Vtemp357[1U] = 0U;
            __Vtemp357[2U] = 0U;
            __Vtemp357[3U] = 0U;
        } else {
            __Vtemp357[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]))
                                   ? 0xffffffffU : 0U)
                               : 0U);
            __Vtemp357[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                               ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                         | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                         [(0x3fU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                            >> 3U)))]))
                                   ? 0xffffffffU : 0U)
                               : 0U);
            __Vtemp357[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp357[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
        tracep->fullWData(oldp+381,(__Vtemp357),128);
        tracep->fullQData(oldp+385,((((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
        tracep->fullBit(oldp+387,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready))));
        if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
            __Vtemp361[0U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                       ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
            __Vtemp361[1U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                        ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                      >> 0x20U));
            __Vtemp361[2U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                       ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
            __Vtemp361[3U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                        ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                      >> 0x20U));
        } else {
            __Vtemp361[0U] = 0U;
            __Vtemp361[1U] = 0U;
            __Vtemp361[2U] = 0U;
            __Vtemp361[3U] = 0U;
        }
        tracep->fullWData(oldp+388,(__Vtemp361),128);
        tracep->fullBit(oldp+392,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
        tracep->fullBit(oldp+393,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            __Vtemp378[0U] = 0U;
            __Vtemp378[1U] = 0U;
            __Vtemp378[2U] = 0U;
            __Vtemp378[3U] = 0U;
        } else {
            __Vtemp378[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            __Vtemp378[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            __Vtemp378[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            __Vtemp378[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
        tracep->fullWData(oldp+394,(__Vtemp378),128);
        tracep->fullQData(oldp+398,((((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
        tracep->fullBit(oldp+400,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
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
        tracep->fullBit(oldp+401,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
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
            __Vtemp415[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp415[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp415[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp415[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp415[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp415[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp415[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp415[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
        tracep->fullWData(oldp+402,(__Vtemp415),128);
        tracep->fullBit(oldp+406,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                    : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                        : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))));
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp426[0U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U];
            __Vtemp426[1U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U];
            __Vtemp426[2U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U];
            __Vtemp426[3U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U];
        } else {
            __Vtemp426[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                       : 0U) : 0U));
            __Vtemp426[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                  >> 0x20U))
                                       : 0U) : 0U));
            __Vtemp426[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                       : 0U) : 0U));
            __Vtemp426[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U]
                               : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                  >> 0x20U))
                                       : 0U) : 0U));
        }
        tracep->fullWData(oldp+407,(__Vtemp426),128);
        tracep->fullBit(oldp+411,((1U & (~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                             : ((0x20U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))))));
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp463[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp463[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp463[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp463[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp463[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp463[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp463[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp463[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
        __Vtemp464[0U] = (~ __Vtemp463[0U]);
        __Vtemp464[1U] = (~ __Vtemp463[1U]);
        __Vtemp464[2U] = (~ __Vtemp463[2U]);
        __Vtemp464[3U] = (~ __Vtemp463[3U]);
        tracep->fullWData(oldp+412,(__Vtemp464),128);
        tracep->fullBit(oldp+416,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                        | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+417,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+418,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
        tracep->fullBit(oldp+419,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                        | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+420,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+421,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                       | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
        tracep->fullBit(oldp+422,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+423,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+424,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x3000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+425,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x4000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+426,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x6000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+427,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x7000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+428,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x1000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullBit(oldp+429,((1U & (IData)(((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                 & (0x5000U 
                                                    == 
                                                    (0x40007000U 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        tracep->fullQData(oldp+430,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                      : 0ULL)),64);
        tracep->fullQData(oldp+432,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                      : 0ULL)),64);
        tracep->fullQData(oldp+434,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
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
        tracep->fullQData(oldp+436,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc),64);
        tracep->fullCData(oldp+438,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask)
                                      : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                          ? 0U : 0xffU))),8);
        tracep->fullBit(oldp+439,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid));
        tracep->fullIData(oldp+440,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst),32);
        tracep->fullQData(oldp+441,(vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc),64);
        tracep->fullBit(oldp+443,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
        tracep->fullBit(oldp+444,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
        tracep->fullCData(oldp+445,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask),8);
        tracep->fullQData(oldp+446,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc),64);
        tracep->fullQData(oldp+448,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data),64);
        tracep->fullBit(oldp+450,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid));
        tracep->fullBit(oldp+451,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re));
        tracep->fullBit(oldp+452,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
        tracep->fullBit(oldp+453,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
        tracep->fullBit(oldp+454,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
        tracep->fullCData(oldp+455,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask),8);
        tracep->fullQData(oldp+456,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data)),64);
        tracep->fullQData(oldp+458,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data),64);
        tracep->fullQData(oldp+460,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc),64);
        tracep->fullBit(oldp+462,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready));
        tracep->fullQData(oldp+463,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data),64);
        tracep->fullBit(oldp+465,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid));
        tracep->fullBit(oldp+466,(vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_ready));
        tracep->fullCData(oldp+467,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
        tracep->fullCData(oldp+468,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
        tracep->fullBit(oldp+469,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
        tracep->fullBit(oldp+470,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
        tracep->fullBit(oldp+471,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
        tracep->fullBit(oldp+472,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 1U))));
        tracep->fullBit(oldp+473,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
        tracep->fullQData(oldp+474,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
        tracep->fullQData(oldp+476,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
        tracep->fullQData(oldp+478,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
        tracep->fullBit(oldp+480,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
        tracep->fullCData(oldp+481,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
        tracep->fullCData(oldp+482,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
        tracep->fullCData(oldp+483,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                      << 3U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena))))),4);
        tracep->fullCData(oldp+484,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
        tracep->fullBit(oldp+487,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel));
        tracep->fullQData(oldp+488,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
        tracep->fullQData(oldp+490,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
        tracep->fullBit(oldp+492,(vlSelf->ysyx_22051013_rvcpu__DOT__if_valid));
        tracep->fullBit(oldp+493,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid));
        tracep->fullBit(oldp+494,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
        tracep->fullBit(oldp+495,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready));
        tracep->fullBit(oldp+496,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready));
        tracep->fullCData(oldp+497,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next),3);
        tracep->fullBit(oldp+498,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
        tracep->fullIData(oldp+499,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+500,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+501,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
        tracep->fullIData(oldp+502,((0x800000U | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag)),24);
        tracep->fullIData(oldp+503,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag),23);
        tracep->fullCData(oldp+504,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index),6);
        tracep->fullBit(oldp+505,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena));
        tracep->fullIData(oldp+506,((0x7fffffU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 9U)))),23);
        tracep->fullCData(oldp+507,((0x3fU & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                      >> 3U)))),6);
        tracep->fullCData(oldp+508,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next),6);
        tracep->fullBit(oldp+509,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit));
        tracep->fullBit(oldp+510,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit));
        tracep->fullBit(oldp+511,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty));
        tracep->fullBit(oldp+512,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready));
        tracep->fullBit(oldp+513,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid));
        tracep->fullBit(oldp+514,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid));
        tracep->fullQData(oldp+515,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc),64);
        tracep->fullBit(oldp+517,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena));
        tracep->fullWData(oldp+518,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data),128);
        tracep->fullQData(oldp+522,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data),64);
        tracep->fullCData(oldp+524,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next),6);
        tracep->fullBit(oldp+525,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit));
        tracep->fullBit(oldp+526,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit));
        tracep->fullBit(oldp+527,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty));
        tracep->fullBit(oldp+528,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready));
        tracep->fullBit(oldp+529,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid));
        tracep->fullWData(oldp+530,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb),128);
        tracep->fullQData(oldp+534,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64),64);
        tracep->fullBit(oldp+536,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid));
        tracep->fullQData(oldp+537,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc),64);
        tracep->fullBit(oldp+539,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena));
        tracep->fullWData(oldp+540,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data),128);
        tracep->fullQData(oldp+544,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data),64);
        tracep->fullIData(oldp+546,((0x800000U | (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 9U))))),24);
        tracep->fullIData(oldp+547,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
        tracep->fullSData(oldp+548,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
        tracep->fullCData(oldp+549,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)),7);
        tracep->fullBit(oldp+550,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
        tracep->fullBit(oldp+551,((1U & (((IData)((0U 
                                                   != 
                                                   (0xb3U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
        tracep->fullBit(oldp+552,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                         >> 2U))));
        tracep->fullBit(oldp+553,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
        tracep->fullQData(oldp+554,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
        tracep->fullBit(oldp+556,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
        tracep->fullBit(oldp+557,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena));
        tracep->fullBit(oldp+558,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena));
        tracep->fullBit(oldp+559,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena));
        tracep->fullBit(oldp+560,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena));
        tracep->fullCData(oldp+561,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
        tracep->fullBit(oldp+562,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
        tracep->fullBit(oldp+563,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
        tracep->fullBit(oldp+564,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
        tracep->fullBit(oldp+565,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
        tracep->fullBit(oldp+566,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
        tracep->fullBit(oldp+567,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
        tracep->fullBit(oldp+568,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
        tracep->fullBit(oldp+569,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
        tracep->fullBit(oldp+570,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
        tracep->fullBit(oldp+571,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
        tracep->fullBit(oldp+572,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
        tracep->fullBit(oldp+573,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
        tracep->fullBit(oldp+574,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
        tracep->fullBit(oldp+575,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
        tracep->fullBit(oldp+576,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
        tracep->fullBit(oldp+577,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
        tracep->fullBit(oldp+578,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
        tracep->fullBit(oldp+579,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
        tracep->fullBit(oldp+580,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
        tracep->fullBit(oldp+581,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
        tracep->fullBit(oldp+582,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
        tracep->fullBit(oldp+584,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
        tracep->fullBit(oldp+585,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
        tracep->fullBit(oldp+586,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
        tracep->fullBit(oldp+587,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
        tracep->fullBit(oldp+588,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
        tracep->fullBit(oldp+589,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
        tracep->fullBit(oldp+590,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
        tracep->fullBit(oldp+591,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
        tracep->fullBit(oldp+592,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
        tracep->fullBit(oldp+593,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
        tracep->fullBit(oldp+594,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
        tracep->fullBit(oldp+595,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
        tracep->fullBit(oldp+596,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
        tracep->fullBit(oldp+597,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+598,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+599,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
        tracep->fullBit(oldp+600,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
        tracep->fullBit(oldp+601,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
        tracep->fullBit(oldp+602,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
        tracep->fullBit(oldp+603,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
        tracep->fullBit(oldp+604,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
        tracep->fullBit(oldp+605,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+606,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
        tracep->fullBit(oldp+607,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
        tracep->fullBit(oldp+608,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
        tracep->fullBit(oldp+609,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
        tracep->fullBit(oldp+610,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
        tracep->fullBit(oldp+611,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
        tracep->fullBit(oldp+612,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
        tracep->fullBit(oldp+613,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
        tracep->fullBit(oldp+614,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
        tracep->fullBit(oldp+615,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
        tracep->fullBit(oldp+616,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
        tracep->fullBit(oldp+617,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
        tracep->fullBit(oldp+618,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+619,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+620,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+621,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+622,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+623,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+624,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+625,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+626,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))));
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
        tracep->fullCData(oldp+635,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
        tracep->fullSData(oldp+636,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
        tracep->fullBit(oldp+637,(vlSelf->clk));
        tracep->fullBit(oldp+638,(vlSelf->rst));
        tracep->fullBit(oldp+639,(((~ (IData)(vlSelf->rst)) 
                                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                         >> 0xbU)))));
        tracep->fullQData(oldp+640,((((IData)(vlSelf->rst) 
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
        tracep->fullIData(oldp+642,(((IData)(vlSelf->rst)
                                      ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->fullQData(oldp+643,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->fullQData(oldp+645,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)),64);
        tracep->fullQData(oldp+647,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+649,((((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                      ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                     [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                      : 0ULL)),64);
        tracep->fullBit(oldp+651,(((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))));
        tracep->fullQData(oldp+652,((((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+654,((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
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
        tracep->fullBit(oldp+656,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullBit(oldp+657,(((~ (IData)(vlSelf->rst)) 
                                   & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->fullQData(oldp+658,(((IData)(vlSelf->rst)
                                      ? 0ULL : (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->fullQData(oldp+660,(((IData)(vlSelf->rst)
                                      ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->fullCData(oldp+662,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+663,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+664,(((IData)(vlSelf->rst)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                               ? 0xf0U
                                               : 0xfU))),8);
        tracep->fullQData(oldp+665,(((IData)(vlSelf->rst)
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
        tracep->fullQData(oldp+667,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                                 ? 
                                                ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                 << 0x20U)
                                                 : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))),64);
        tracep->fullQData(oldp+669,(((IData)(vlSelf->rst)
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
        tracep->fullCData(oldp+671,(2U),5);
        tracep->fullCData(oldp+672,(0U),2);
        tracep->fullBit(oldp+673,(1U));
        tracep->fullBit(oldp+674,(vlSelf->ysyx_22051013_rvcpu__DOT__update));
        tracep->fullBit(oldp+675,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ifid_jumpflush));
        tracep->fullQData(oldp+676,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_bpu_data),64);
        tracep->fullBit(oldp+678,(0U));
        tracep->fullBit(oldp+679,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_flush));
        tracep->fullCData(oldp+680,(8U),8);
        tracep->fullIData(oldp+681,(0x80U),32);
        tracep->fullIData(oldp+682,(0x40U),32);
        tracep->fullIData(oldp+683,(6U),32);
        tracep->fullBit(oldp+684,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way1_clean));
        tracep->fullBit(oldp+685,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way2_clean));
        tracep->fullQData(oldp+686,(0ULL),64);
        tracep->fullIData(oldp+688,(0U),32);
    }
}
