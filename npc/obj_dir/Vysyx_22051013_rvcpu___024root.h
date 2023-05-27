// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22051013_rvcpu.h for the primary calling header

#ifndef VERILATED_VYSYX_22051013_RVCPU___024ROOT_H_
#define VERILATED_VYSYX_22051013_RVCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22051013_rvcpu__Syms;
class Vysyx_22051013_rvcpu_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22051013_rvcpu___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__axi_r_id;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__icache_if_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lsu_ddsel_we;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lsu_ddsel_re;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ddsel_axi_re;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ddsel_axi_we;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__axi_ddsel_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ddsel_dcache_re;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ddsel_dcache_we;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ifid_id_jump;
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr;
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_if_pc_sel;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_ifid_jumpflush;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idex_id_rd_ena;
        CData/*3:0*/ ysyx_22051013_rvcpu__DOT__idex_id_lsctl;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__idex_id_wbctl;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__idex_id_alu_sel;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena;
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr;
        CData/*3:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_wbctl;
        CData/*3:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_csrctl;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ex_load_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ex_if_pc_sel;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena;
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr;
        CData/*3:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_lsctl;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ex_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ls_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ls_ready;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ex_ready;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ls_lswb_flush;
        CData/*2:0*/ ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state;
        CData/*2:0*/ ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next;
        CData/*3:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state;
        CData/*3:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena;
        CData/*5:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state;
        CData/*5:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next;
    };
    struct {
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr;
        CData/*5:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state;
        CData/*5:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way1_clean;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way2_clean;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl;
    };
    struct {
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mul;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__div;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__mul_doing;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op1_sign;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__op2_sign;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_sign;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign;
        CData/*6:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mie_set;
    };
    struct {
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpie_set;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpp_set;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr;
        SData/*15:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__icache_if_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__ifid_id_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_inst;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data;
        IData/*22:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data;
        IData/*22:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data;
        IData/*22:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data;
        IData/*22:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data;
        IData/*19:0*/ ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm;
        IData/*19:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplicand;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__result_temp;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__final_result;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__reg9__DOT__i;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_r_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_icache_inst;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ddsel_axi_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__dcache_ddsel_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ifid_if_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ifid_id_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idex_id_op1;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idex_id_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idex_id_imm;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_op1;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_imm;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exls_ex_aludata;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_aludata;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_store_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_aludata;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__wb_reg_rd_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__reg_bpu_data;
    };
    struct {
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__bpu_static__DOT__pr_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
        QData/*61:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i;
        VlUnpacked<CData/*0:0*/, 64> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use;
        VlUnpacked<CData/*0:0*/, 64> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use;
        VlUnpacked<IData/*23:0*/, 64> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram;
        VlUnpacked<IData/*23:0*/, 64> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram;
        VlUnpacked<CData/*0:0*/, 64> ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use;
        VlUnpacked<CData/*0:0*/, 64> ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use;
        VlUnpacked<CData/*0:0*/, 64> ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty;
        VlUnpacked<CData/*0:0*/, 64> ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty;
        VlUnpacked<IData/*23:0*/, 64> ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram;
        VlUnpacked<IData/*23:0*/, 64> ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22051013_rvcpu__DOT__reg9__DOT__regs;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1;
        CData/*4:0*/ __Vdlyvlsb__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v1;
        CData/*5:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
        CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_jump;
        CData/*1:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_wbctl;
        CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena;
        CData/*3:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__idex_ex_lsctl;
        CData/*6:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt;
        CData/*1:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exls_ls_wbctl;
        CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok;
        CData/*0:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
        CData/*4:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v0;
        CData/*4:0*/ __Vdlyvdim0__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
        CData/*0:0*/ __Vdlyvset__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
        CData/*0:0*/ __Vclklast__TOP__clk;
        IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram__v0;
        IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram__v0;
        VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram__v0;
    };
    struct {
        IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram__v0;
        IData/*22:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram__v0;
        VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram__v0;
        VlWide<4>/*127:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend;
        QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__ifid_if_pc;
        QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__ifid_id_pc;
        QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__multiply0__DOT__multiplier;
        QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q;
        QData/*63:0*/ __Vdly__ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
        QData/*63:0*/ __Vdlyvval__ysyx_22051013_rvcpu__DOT__reg9__DOT__regs__v32;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vysyx_22051013_rvcpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22051013_rvcpu___024root);  ///< Copying not allowed
  public:
    Vysyx_22051013_rvcpu___024root(const char* name);
    ~Vysyx_22051013_rvcpu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22051013_rvcpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
