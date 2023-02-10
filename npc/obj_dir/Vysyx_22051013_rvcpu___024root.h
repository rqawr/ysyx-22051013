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
    VL_IN(inst,31,0);
    VL_OUT64(inst_pc,63,0);

    // LOCAL SIGNALS
    CData/*4:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rd_addr;
    CData/*0:0*/ ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena;
    CData/*6:0*/ ysyx_22051013_rvcpu__DOT__id_ex_alu_sel;
    CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_addi;
    CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_auipc;
    CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_lui;
    CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jal;
    CData/*0:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__inst_jalr;
    IData/*19:0*/ ysyx_22051013_rvcpu__DOT__idu1__DOT__decode__DOT__j_imm;
    IData/*31:0*/ ysyx_22051013_rvcpu__DOT__reg3__DOT__i;
    QData/*63:0*/ ysyx_22051013_rvcpu__DOT__id_ex_pc;
    QData/*63:0*/ ysyx_22051013_rvcpu__DOT__id_ex_op1;
    QData/*63:0*/ ysyx_22051013_rvcpu__DOT__id_ex_op2;
    QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ex_aludata;
    QData/*63:0*/ ysyx_22051013_rvcpu__DOT__ifu0__DOT__pc_next;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22051013_rvcpu__DOT__reg3__DOT__regs;

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
