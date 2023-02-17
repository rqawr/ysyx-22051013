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
        CData/*4:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rd_addr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rd_ena;
        CData/*3:0*/ ysyx_22051013_rvcpu__DOT__id_ls_ctl;
        CData/*1:0*/ ysyx_22051013_rvcpu__DOT__id_wb_ctl;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__id_ex_alu_sel;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_type;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sb;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sh;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sd;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lb;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lh;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ld;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lbu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lhu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lwu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_beq;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bne;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_blt;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bge;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bltu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_bgeu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_add;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sub;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sll;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slt;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sltu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_xor;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srl;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sra;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_or;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_and;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_div;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mul;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulh;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhsu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulhu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_rem;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remu;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srai;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addiw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_slliw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srliw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraiw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_subw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sllw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_srlw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_sraw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divuw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_divw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_mulw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remuw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_remw;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_ebreak;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_lt_op2;
    };
    struct {
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__lsu3__DOT__wlen;
        CData/*0:0*/ ysyx_22051013_rvcpu__DOT__lsu3__DOT__re;
        CData/*7:0*/ ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_byte;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__s_imm;
        SData/*11:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__b_imm;
        SData/*15:0*/ ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_half;
        IData/*19:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__sllw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__srlw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__sraw;
        VlWide<4>/*127:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__mul;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__divw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__remw;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_word;
        IData/*31:0*/ ysyx_22051013_rvcpu__DOT__reg3__DOT__i;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__if_id_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__id_ex_imm;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__id_ex_pc;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__id_ex_op1;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__id_ex_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ex_aludata;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ifu0__DOT__rinst;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_add_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_addw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sub_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sra_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sllw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_srlw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__op1_sraw_op2;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__div;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__exu2__DOT__rem;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_i;
        QData/*63:0*/ ysyx_22051013_rvcpu__DOT__lsu3__DOT__data_o;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22051013_rvcpu__DOT__reg3__DOT__regs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_ysyx_22051013_rvcpu__DOT__lsu3__DOT__pmem_read__4__rdata;
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
