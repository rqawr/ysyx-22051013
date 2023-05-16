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
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__data_not_ready;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lsu_axi_we;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lsu_axi_re;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__lsu_axi_wmask;
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__axi_r_id;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__cache_axi_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__cache_if_valid;
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
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__data_ok;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena;
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__ls_valid;
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
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild;
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
    };
    struct {
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
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp;
    };
    struct {
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mie_set;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpie_set;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mpp_set;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__sb_mask;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr;
        SData/*15:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__cache_if_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__ifid_id_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__idex_ex_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exls_ls_inst;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__lswb_wb_inst;
        IData/*23:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data;
        IData/*23:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data;
        IData/*19:0*/ ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm;
        IData/*19:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mul;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__divw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__remw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__reg9__DOT__i;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_cache_inst;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu_axi_datapc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu_axi_read_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu_axi_write_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_r_data;
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
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__data_temp;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__miss_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__out_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__out_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__bpu_static__DOT__pr_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2;
    };
    struct {
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__div;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__rem;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus;
        QData/*61:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data;
        VlUnpacked<CData/*0:0*/, 32> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use;
        VlUnpacked<CData/*0:0*/, 32> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use;
        VlUnpacked<IData/*24:0*/, 32> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram;
        VlUnpacked<IData/*24:0*/, 32> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22051013_rvcpu__DOT__reg9__DOT__regs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
