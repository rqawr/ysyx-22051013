// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013__Syms.h"


void Vysyx_22051013___024root__traceChgSub0(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22051013___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22051013___024root* const __restrict vlSelf = static_cast<Vysyx_22051013___024root*>(voidSelf);
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22051013___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22051013___024root__traceChgSub0(Vysyx_22051013___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp523;
    VlWide<5>/*159:0*/ __Vtemp524;
    VlWide<3>/*95:0*/ __Vtemp528;
    VlWide<3>/*95:0*/ __Vtemp530;
    VlWide<3>/*95:0*/ __Vtemp532;
    VlWide<3>/*95:0*/ __Vtemp534;
    VlWide<3>/*95:0*/ __Vtemp535;
    VlWide<4>/*127:0*/ __Vtemp536;
    VlWide<4>/*127:0*/ __Vtemp551;
    VlWide<4>/*127:0*/ __Vtemp557;
    VlWide<4>/*127:0*/ __Vtemp576;
    VlWide<4>/*127:0*/ __Vtemp617;
    VlWide<4>/*127:0*/ __Vtemp630;
    VlWide<4>/*127:0*/ __Vtemp671;
    VlWide<4>/*127:0*/ __Vtemp672;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state))));
            tracep->chgBit(oldp+1,((3U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state))));
            tracep->chgBit(oldp+2,((1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))));
            tracep->chgQData(oldp+3,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))
                                       ? vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__dpic_read_data
                                       : 0ULL)),64);
            tracep->chgBit(oldp+5,((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))));
            tracep->chgBit(oldp+6,((3U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state))));
            tracep->chgBit(oldp+7,((1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))));
            tracep->chgBit(oldp+8,((2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))));
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22051013__DOT__idsel_core_pc),64);
            tracep->chgCData(oldp+11,(((IData)(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now)
                                        ? 3U : 0U)),3);
            tracep->chgBit(oldp+12,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei));
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_pc),64);
            tracep->chgBit(oldp+15,((1U & (~ (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_ok)))));
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data),64);
            tracep->chgCData(oldp+18,(((((1U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                         | (9U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl))) 
                                        | (0xdU == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                        ? 0U : ((((2U 
                                                   == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                                  | (0xaU 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl))) 
                                                 | (0xeU 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                                 ? 1U
                                                 : 
                                                ((((4U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                                   | (0xbU 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl))) 
                                                  | (0xfU 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                                  ? 2U
                                                  : 
                                                 (((5U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)) 
                                                   | (0xcU 
                                                      == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl)))
                                                   ? 3U
                                                   : 0U))))),3);
            tracep->chgBit(oldp+19,((vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime 
                                     > vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp)));
            tracep->chgIData(oldp+20,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst),32);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc),64);
            tracep->chgBit(oldp+23,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_jump));
            tracep->chgBit(oldp+24,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_csr_ena));
            tracep->chgBit(oldp+25,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_csr_ena));
            tracep->chgCData(oldp+26,((0x1fU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                                >> 0xfU))),5);
            tracep->chgIData(oldp+27,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_inst),32);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_pc),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op2),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_imm),64);
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_ena));
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_addr),5);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_lsctl),4);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_wbctl),2);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel),8);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op1sel),2);
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_op2sel),3);
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rs1_addr),5);
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_load_ena));
            tracep->chgBit(oldp+45,((0xc1U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel))));
            tracep->chgIData(oldp+46,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_inst),32);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_pc),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata),64);
            tracep->chgBit(oldp+51,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_rd_ena));
            tracep->chgCData(oldp+52,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_rd_addr),5);
            tracep->chgCData(oldp+53,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_lsctl),4);
            tracep->chgCData(oldp+54,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_wbctl),2);
            tracep->chgCData(oldp+55,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_csr_ctl),7);
            tracep->chgSData(oldp+56,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_csr_addr),12);
            tracep->chgIData(oldp+57,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_inst),32);
            tracep->chgCData(oldp+58,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl),7);
            tracep->chgSData(oldp+59,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr),12);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_pc),64);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_wbctl),2);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_wbdata),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata),64);
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_rd_ena));
            tracep->chgCData(oldp+68,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_rd_addr),5);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wb_reg_rd_data),64);
            tracep->chgBit(oldp+71,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ie_if_pc_sel));
            tracep->chgQData(oldp+72,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ie_if_pc_sel)
                                        ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data
                                        : 0ULL)),64);
            tracep->chgBit(oldp+74,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__hold));
            tracep->chgBit(oldp+75,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ie_if_pc_sel) 
                                     | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei))));
            tracep->chgCData(oldp+76,((0x1fU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+77,((0x1fU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+78,((0x7fU & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)),7);
            tracep->chgCData(oldp+79,((7U & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+80,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                       >> 0x19U)),7);
            tracep->chgSData(oldp+81,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                       >> 0x14U)),12);
            tracep->chgIData(oldp+82,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__j_imm),20);
            tracep->chgIData(oldp+83,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                       >> 0xcU)),20);
            tracep->chgSData(oldp+84,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__s_imm),12);
            tracep->chgSData(oldp+85,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__b_imm),12);
            tracep->chgBit(oldp+86,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_fencei));
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op2),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_addw_op2),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+97,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sub_op2 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sub_op2)))),64);
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_lt_op2));
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sra_op2),64);
            tracep->chgIData(oldp+102,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__sllw),32);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sllw_op2),64);
            tracep->chgIData(oldp+105,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__srlw),32);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_srlw_op2),64);
            tracep->chgIData(oldp+108,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__sraw),32);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__op1_sraw_op2),64);
            tracep->chgBit(oldp+111,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__delay1));
            tracep->chgBit(oldp+112,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_out_valid));
            tracep->chgQData(oldp+113,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_out_valid)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__result_lo),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_res_temp),64);
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__delay2));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_out_valid));
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_res_temp),64);
            tracep->chgQData(oldp+123,((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rs1_addr))),64);
            tracep->chgBit(oldp+125,((((0x94U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel)) 
                                       | (0xc8U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel))) 
                                      | (0xa4U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_alu_sel)))));
            tracep->chgBit(oldp+126,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_reg));
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_reg));
            tracep->chgBit(oldp+128,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                         | vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                        | vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))))));
            tracep->chgBit(oldp+129,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__mul_doing));
            tracep->chgWData(oldp+130,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand),132);
            tracep->chgWData(oldp+135,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier),67);
            tracep->chgCData(oldp+138,((7U & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])),3);
            tracep->chgBit(oldp+139,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative))));
            if (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
                __Vtemp523[1U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                                   << 1U)));
                __Vtemp523[2U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                                   << 1U)));
                __Vtemp523[3U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                                   << 1U)));
                __Vtemp523[4U] = (~ ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                      >> 0x1fU) | (0xeU 
                                                   & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                      << 1U))));
                __Vtemp524[0U] = (~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                     << 1U));
            } else {
                __Vtemp523[1U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                       << 1U)) : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                   ? 
                                                  (~ 
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U])
                                                   : 
                                                  ((1U 
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
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U]
                                                    : 0U)));
                __Vtemp523[2U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                       << 1U)) : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                   ? 
                                                  (~ 
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U])
                                                   : 
                                                  ((1U 
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
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U]
                                                    : 0U)));
                __Vtemp523[3U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                       >> 0x1fU) | 
                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                       << 1U)) : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                   ? 
                                                  (~ 
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U])
                                                   : 
                                                  ((1U 
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
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U]
                                                    : 0U)));
                __Vtemp523[4U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                       >> 0x1fU) | 
                                      (0xeU & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                               << 1U)))
                                   : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                       ? (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U])
                                       : ((1U & ((~ 
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
                                           ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U]
                                           : 0U)));
                __Vtemp524[0U] = ((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                      << 1U) : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                 ? 
                                                (~ 
                                                 vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U])
                                                 : 
                                                ((1U 
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
            __Vtemp524[1U] = __Vtemp523[1U];
            __Vtemp524[2U] = __Vtemp523[2U];
            __Vtemp524[3U] = __Vtemp523[3U];
            __Vtemp524[4U] = (0xfU & __Vtemp523[4U]);
            tracep->chgWData(oldp+140,(__Vtemp524),132);
            tracep->chgWData(oldp+145,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__result_temp),132);
            tracep->chgBit(oldp+150,((1U & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+152,((1U & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative));
            tracep->chgBit(oldp+154,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative));
            tracep->chgBit(oldp+155,((1U & ((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))));
            tracep->chgBit(oldp+156,((1U & (((~ (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
            tracep->chgBit(oldp+157,((0U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__cnt))));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__div_doing));
            tracep->chgWData(oldp+159,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend),128);
            tracep->chgCData(oldp+163,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__cnt),7);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__temp_q),64);
            tracep->chgBit(oldp+166,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_exls5__DOT__flush));
            tracep->chgBit(oldp+167,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_ok));
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_i),64);
            tracep->chgCData(oldp+170,((7U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata))),3);
            tracep->chgCData(oldp+171,((3U & (IData)(
                                                     (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+172,((1U & (IData)(
                                                   (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                    >> 2U)))));
            tracep->chgIData(oldp+173,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_word),32);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data),64);
            tracep->chgQData(oldp+176,((((((- (QData)((IData)(
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
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data),64);
            tracep->chgQData(oldp+180,(((2U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))
                                         ? 0xbULL : 
                                        ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)
                                          ? 0x8000000000000007ULL
                                          : 0ULL))),64);
            tracep->chgQData(oldp+182,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data 
                                        | vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata)),64);
            tracep->chgQData(oldp+184,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_aludata))),64);
            tracep->chgBit(oldp+186,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump));
            tracep->chgBit(oldp+187,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__delay));
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__pc_delay),64);
            tracep->chgBit(oldp+190,((0x100073U == vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_inst)));
            tracep->chgCData(oldp+191,((0xfU & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))),4);
            tracep->chgBit(oldp+192,(((0xb00U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+193,(((0xb00U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mcycle),64);
            tracep->chgBit(oldp+196,(((0x304U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+197,(((0x304U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgBit(oldp+198,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtie));
            tracep->chgQData(oldp+199,(((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+201,(((0x344U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+202,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtip));
            tracep->chgQData(oldp+203,(((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+205,(((0x300U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+206,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+207,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+208,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+209,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgBit(oldp+212,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+213,((1U & ((~ (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump))) 
                                            & ((1U 
                                                & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))
                                                ? (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)))))));
            tracep->chgBit(oldp+214,((1U & ((1U & (
                                                   ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                    >> 1U) 
                                                   | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))
                                             ? (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)))))));
            tracep->chgCData(oldp+215,(((1U & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                >> 1U) 
                                               | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))
                                         ? 3U : ((1U 
                                                  & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__w_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
            tracep->chgBit(oldp+216,((1U & ((((0x305U 
                                               == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))));
            tracep->chgBit(oldp+217,(((0x305U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+220,((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+222,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                >> 2U)) 
                                            | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl)))));
            tracep->chgBit(oldp+223,((1U & ((((0x341U 
                                               == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                 >> 3U)) 
                                             | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__time_jump)))));
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mepc),64);
            tracep->chgBit(oldp+226,(((0x342U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+227,(((0x342U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wbu8__DOT__csr_operate__DOT__mcause),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[0]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[1]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[2]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[3]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[4]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[5]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[6]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[7]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[8]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[9]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[10]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[11]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[12]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[13]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[14]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[15]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[16]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[17]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[18]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[19]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[20]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[21]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[22]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[23]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[24]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[25]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[26]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[27]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[28]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[29]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[30]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs[31]),64);
            tracep->chgCData(oldp+294,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_w_state),3);
            tracep->chgCData(oldp+295,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state),3);
            tracep->chgCData(oldp+296,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__read_state),2);
            tracep->chgBit(oldp+297,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now));
            tracep->chgBit(oldp+298,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__core_re));
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__pc_now),64);
            tracep->chgBit(oldp+301,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit1));
            tracep->chgBit(oldp+302,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit2));
            tracep->chgCData(oldp+303,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_index),6);
            tracep->chgIData(oldp+304,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_tag),23);
            tracep->chgCData(oldp+305,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__fencei_index),7);
            tracep->chgCData(oldp+306,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state),4);
            tracep->chgBit(oldp+307,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__delay1));
            tracep->chgIData(oldp+308,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram0__DOT__out_data),23);
            tracep->chgBit(oldp+309,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram0__DOT__out_vaild));
            tracep->chgIData(oldp+310,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram1__DOT__out_data),23);
            tracep->chgBit(oldp+311,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram1__DOT__out_vaild));
            tracep->chgWData(oldp+312,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_data),128);
            tracep->chgBit(oldp+316,((1U == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state))));
            tracep->chgIData(oldp+317,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__i),32);
            tracep->chgIData(oldp+318,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram0__DOT__tg),32);
            tracep->chgIData(oldp+319,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_ram1__DOT__tg),32);
            tracep->chgBit(oldp+320,((1U != (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state))));
            tracep->chgCData(oldp+321,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state),6);
            tracep->chgBit(oldp+322,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_update));
            tracep->chgBit(oldp+323,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayr));
            tracep->chgCData(oldp+324,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state),6);
            tracep->chgBit(oldp+325,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_w_update));
            tracep->chgBit(oldp+326,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayw));
            tracep->chgCData(oldp+327,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state),6);
            tracep->chgCData(oldp+328,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index),8);
            tracep->chgBit(oldp+329,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirty_hit));
            tracep->chgBit(oldp+330,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1));
            tracep->chgBit(oldp+331,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way2));
            tracep->chgQData(oldp+332,(((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1)
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
                                             : 0ULL))),64);
            tracep->chgQData(oldp+334,(((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1)
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
            tracep->chgBit(oldp+336,((((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)) 
                                      & (~ ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                            >> 6U)))));
            tracep->chgBit(oldp+337,((((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                         >> 6U))));
            tracep->chgBit(oldp+338,(((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                      & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)))));
            tracep->chgBit(oldp+339,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf));
            tracep->chgIData(oldp+340,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__i),32);
            tracep->chgIData(oldp+341,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__j),32);
            tracep->chgIData(oldp+342,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_data),23);
            tracep->chgBit(oldp+343,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild));
            tracep->chgIData(oldp+344,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_data),23);
            tracep->chgBit(oldp+345,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__out_vaild));
            tracep->chgWData(oldp+346,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data),128);
            tracep->chgIData(oldp+350,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__tg),32);
            tracep->chgIData(oldp+351,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram1__DOT__tg),32);
            tracep->chgCData(oldp+352,(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state),2);
            tracep->chgCData(oldp+353,(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state),2);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp),64);
            tracep->chgCData(oldp+358,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state),2);
            tracep->chgCData(oldp+359,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state),2);
            tracep->chgQData(oldp+360,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__dpic_read_data),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+362,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                       ? (3U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state))
                                       : (3U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state)))));
            tracep->chgBit(oldp+363,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                       ? (1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                       : (1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state)))));
            tracep->chgBit(oldp+364,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                       ? (2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                       : (2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state)))));
            tracep->chgBit(oldp+365,(((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state)))));
            tracep->chgCData(oldp+366,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                             ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         : 0U)),4);
            tracep->chgBit(oldp+367,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state)))));
            tracep->chgCData(oldp+368,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                             ? (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)
                                             : 0U) : 0U)),4);
            tracep->chgQData(oldp+369,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
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
            tracep->chgQData(oldp+371,(((IData)(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now)
                                         ? vlSelf->ysyx_22051013__DOT__icache_idsel_axi_pc
                                         : vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__pc_now)),64);
            tracep->chgBit(oldp+373,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                             ? (~ (IData)(vlSelf->ysyx_22051013__DOT__idsel_icache_ready))
                                             : (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__inst_valid)))));
            tracep->chgQData(oldp+374,(((IData)(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__sel_now)
                                         ? vlSelf->ysyx_22051013__DOT__axi_idsel_inst_i
                                         : 0ULL)),64);
            tracep->chgBit(oldp+376,(((((~ (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_ok))
                                       ? (IData)(vlSelf->ysyx_22051013__DOT__core_ddsel_re)
                                       : ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                           ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_ena)
                                           : ((0x20U 
                                               == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_ena))))));
            tracep->chgBit(oldp+377,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                             ? (1U 
                                                != (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state_next))
                                             : ((4U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                                 ? 
                                                (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_r_valid))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22051013__DOT__ddsel_dcache_re) 
                                                  | (IData)(vlSelf->ysyx_22051013__DOT__ddsel_dcache_we))))))));
            tracep->chgBit(oldp+378,(((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                       ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_ena)
                                       : ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_ena)))));
            tracep->chgBit(oldp+379,(((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state))
                                       ? ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)))
                                       : ((0x10U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                           ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_ena)
                                           : ((0x21U 
                                               == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_ena))))));
            tracep->chgQData(oldp+380,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                         ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way1)
                                             ? (((QData)((IData)(
                                                                 vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[0U])))
                                             : ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_way2)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22051013__DOT__d_cache5__DOT__cache_data[2U])))
                                                 : 0ULL))
                                         : ((0x10U 
                                             == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                             ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_data
                                             : ((0x21U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                 ? vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+382,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_if_pc_sel)
                                         ? (((0x42U 
                                              == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                              ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1
                                              : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc) 
                                            + ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_jump)
                                                ? 4ULL
                                                : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_imm))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+384,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_rd_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgCData(oldp+385,(((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__jump) 
                                          | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                         | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_fencei))
                                         ? 2U : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena)
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+386,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__jump) 
                                         | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_fencei))
                                         ? 2U : ((1U 
                                                  & (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xb3U 
                                                                & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                     | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc)))
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena)
                                                   ? 1U
                                                   : 0U)))),3);
            tracep->chgSData(oldp+387,(((0U != (0xfU 
                                                & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_csr_ctl)))
                                         ? (0xfffU 
                                            & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_imm))
                                         : 0U)),12);
            tracep->chgBit(oldp+388,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_csr_ena)) 
                                      | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward) 
                                         & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_csr_ena)))));
            tracep->chgBit(oldp+389,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_csr_ena)) 
                                      | ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward) 
                                         & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_csr_ena)))));
            tracep->chgQData(oldp+390,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward)
                                         ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_aludata
                                         : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward)
                                             ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_lswb_data_forward
                                             : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op1_forward)
                                                 ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wb_reg_rd_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+392,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward)
                                         ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_aludata
                                         : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward)
                                             ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_lswb_data_forward
                                             : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op2_forward)
                                                 ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__wb_reg_rd_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+394,(((0x42U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                         ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1
                                         : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc)),64);
            tracep->chgQData(oldp+396,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_jump)
                                         ? 4ULL : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_imm)),64);
            tracep->chgBit(oldp+398,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+399,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+400,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+401,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+402,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+403,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+404,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+405,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)))))));
            tracep->chgQData(oldp+406,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_out_valid)
                                         ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_quo
                                         : 0ULL)),64);
            tracep->chgQData(oldp+408,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_out_valid)
                                         ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_rem
                                         : 0ULL)),64);
            tracep->chgQData(oldp+410,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul)
                                         ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_res_temp
                                         : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div)
                                             ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_res_temp
                                             : 0ULL))),64);
            tracep->chgQData(oldp+412,(((((QData)((IData)(
                                                          vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                               >> 0x1fU))) 
                                        - vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
            tracep->chgBit(oldp+414,((((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                        ? (1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                        : (1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state))) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state)))));
            tracep->chgIData(oldp+415,((0x7fffffU & 
                                        (((4U == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013__DOT__idsel_icache_ready)))
                                          ? (IData)(
                                                    (vlSelf->ysyx_22051013__DOT__idsel_icache_pc 
                                                     >> 9U))
                                          : vlSelf->ysyx_22051013__DOT__i_cache3__DOT__hit_tag))),23);
            tracep->chgBit(oldp+416,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei) 
                                      | ((8U == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state)) 
                                         & (0U == (
                                                   (((~ 
                                                      vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[0U]) 
                                                     | (~ 
                                                        vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[1U])) 
                                                    | vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[2U]) 
                                                   | vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[3U]))))));
            tracep->chgBit(oldp+417,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei) 
                                      | ((8U == (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state)) 
                                         & (0U == (
                                                   ((vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[0U] 
                                                     | vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[1U]) 
                                                    | (~ 
                                                       vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[2U])) 
                                                   | (~ 
                                                      vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[3U])))))));
            tracep->chgBit(oldp+418,(((vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_dirty
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                          >> 3U)))] 
                                       & vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_recent_use
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                          >> 3U)))]) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_ram0__DOT__out_vaild))));
            tracep->chgBit(oldp+419,(((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                       ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_r_valid)
                                       : ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                           ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_w_valid)
                                           : ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid))))));
            tracep->chgBit(oldp+420,((1U & (~ ((8U 
                                                == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                                ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_r_valid)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                                                    ? (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_w_valid)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                    & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid))))))));
            tracep->chgBit(oldp+421,(((3U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_write_state)) 
                                      & (2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)))));
            tracep->chgBit(oldp+422,(((1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state)) 
                                      & ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                         & (4U == (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__arb_r_state))))));
            tracep->chgBit(oldp+423,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                      & (2U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state)))));
            tracep->chgQData(oldp+424,((((0x200bff8ULL 
                                          == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                         & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))
                                         ? vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime
                                         : (((0x2004000ULL 
                                              == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                             & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))
                                             ? vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp
                                             : 0ULL))),64);
            tracep->chgQData(oldp+426,((((((0x200bff8ULL 
                                            == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                           & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                         & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))
                                         ? ((vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask 
                                             & vlSelf->ysyx_22051013__DOT__t_axi_w_data) 
                                            | ((~ vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask) 
                                               & vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime))
                                         : (1ULL + vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtime))),64);
            tracep->chgQData(oldp+428,((((((0x2004000ULL 
                                            == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                           & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                         & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))
                                         ? ((vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask 
                                             & vlSelf->ysyx_22051013__DOT__t_axi_w_data) 
                                            | ((~ vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask) 
                                               & vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp))
                                         : vlSelf->ysyx_22051013__DOT__clint7__DOT__csr_mtimecmp)),64);
            tracep->chgBit(oldp+430,(((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)) 
                                      & (2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_read_state)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+431,(vlSelf->ysyx_22051013__DOT__axi_aw_id),4);
            tracep->chgQData(oldp+432,(vlSelf->ysyx_22051013__DOT__ddsel_axi_pc),64);
            tracep->chgBit(oldp+434,(vlSelf->ysyx_22051013__DOT__axi_aw_valid));
            tracep->chgBit(oldp+435,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                       ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)
                                       : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready))));
            tracep->chgCData(oldp+436,(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size),3);
            tracep->chgQData(oldp+437,(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_o),64);
            tracep->chgCData(oldp+439,(vlSelf->ysyx_22051013__DOT__ddsel_axi_mask),8);
            tracep->chgBit(oldp+440,(vlSelf->ysyx_22051013__DOT__ddsel_axi_we));
            tracep->chgBit(oldp+441,(vlSelf->ysyx_22051013__DOT__axi_w_valid));
            tracep->chgBit(oldp+442,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                       ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_w_ready)
                                       : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+443,(vlSelf->ysyx_22051013__DOT__axi_b_id),4);
            tracep->chgCData(oldp+444,(vlSelf->ysyx_22051013__DOT__axi_ar_id),4);
            tracep->chgQData(oldp+445,(vlSelf->ysyx_22051013__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+447,(vlSelf->ysyx_22051013__DOT__axi_ar_size),3);
            tracep->chgCData(oldp+448,(vlSelf->ysyx_22051013__DOT__axi_r_id),4);
            tracep->chgQData(oldp+449,(vlSelf->ysyx_22051013__DOT__axi_r_data),64);
            tracep->chgCData(oldp+451,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))),4);
            tracep->chgQData(oldp+452,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? 0ULL : vlSelf->ysyx_22051013__DOT__ddsel_axi_pc)),64);
            tracep->chgBit(oldp+454,(vlSelf->ysyx_22051013__DOT__soc_axi_aw_valid));
            tracep->chgBit(oldp+455,(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready));
            tracep->chgCData(oldp+456,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size))),3);
            tracep->chgCData(oldp+457,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? 0U : 1U)),2);
            tracep->chgQData(oldp+458,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? 0ULL : vlSelf->ysyx_22051013__DOT__ddsel_axi_data_o)),64);
            tracep->chgCData(oldp+460,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_mask))),8);
            tracep->chgBit(oldp+461,(((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+462,(vlSelf->ysyx_22051013__DOT__soc_axi_w_valid));
            tracep->chgBit(oldp+463,(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+464,((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))));
            tracep->chgCData(oldp+465,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))),4);
            tracep->chgQData(oldp+466,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         ? 0ULL : vlSelf->ysyx_22051013__DOT__axi_ar_addr)),64);
            tracep->chgCData(oldp+468,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size))),3);
            tracep->chgCData(oldp+469,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         ? 0U : 1U)),2);
            tracep->chgBit(oldp+470,((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))));
            tracep->chgCData(oldp+471,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)
                                         : 0U)),4);
            tracep->chgQData(oldp+472,(vlSelf->ysyx_22051013__DOT__t_axi_aw_addr),64);
            tracep->chgBit(oldp+474,(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid));
            tracep->chgCData(oldp+475,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size)
                                         : 0U)),3);
            tracep->chgCData(oldp+476,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? 1U : 0U)),2);
            tracep->chgQData(oldp+477,(vlSelf->ysyx_22051013__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+479,(vlSelf->ysyx_22051013__DOT__t_axi_w_strb),8);
            tracep->chgBit(oldp+480,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+481,(vlSelf->ysyx_22051013__DOT__t_axi_w_valid));
            tracep->chgBit(oldp+482,(vlSelf->ysyx_22051013__DOT__t_axi_w_ready));
            tracep->chgBit(oldp+483,((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))));
            tracep->chgCData(oldp+484,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         ? (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id)
                                         : 0U)),4);
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22051013__DOT__t_axi_ar_addr),64);
            tracep->chgCData(oldp+487,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         ? (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)
                                         : 0U)),3);
            tracep->chgCData(oldp+488,(((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+489,((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))));
            tracep->chgQData(oldp+490,(vlSelf->ysyx_22051013__DOT__core_idsel_inst_pc),64);
            tracep->chgBit(oldp+492,(vlSelf->ysyx_22051013__DOT__core_idsel_core_ready));
            tracep->chgBit(oldp+493,(vlSelf->ysyx_22051013__DOT__idsel_core_inst_valid));
            tracep->chgIData(oldp+494,(vlSelf->ysyx_22051013__DOT__idsel_core_inst),32);
            tracep->chgBit(oldp+495,(vlSelf->ysyx_22051013__DOT__idsel_axi_re));
            tracep->chgQData(oldp+496,(vlSelf->ysyx_22051013__DOT__axi_idsel_inst_i),64);
            tracep->chgBit(oldp+498,(vlSelf->ysyx_22051013__DOT__axi_idsel_valid));
            tracep->chgBit(oldp+499,(vlSelf->ysyx_22051013__DOT__icache_idsel_axi_re));
            tracep->chgQData(oldp+500,(vlSelf->ysyx_22051013__DOT__icache_idsel_axi_pc),64);
            tracep->chgBit(oldp+502,(vlSelf->ysyx_22051013__DOT__idsel_icache_ena));
            tracep->chgIData(oldp+503,(vlSelf->ysyx_22051013__DOT__icache_idsel_inst),32);
            tracep->chgQData(oldp+504,(vlSelf->ysyx_22051013__DOT__idsel_icache_pc),64);
            tracep->chgBit(oldp+506,(vlSelf->ysyx_22051013__DOT__idsel_icache_ready));
            tracep->chgBit(oldp+507,(vlSelf->ysyx_22051013__DOT__axi_idsel_icache_valid));
            tracep->chgBit(oldp+508,(vlSelf->ysyx_22051013__DOT__core_ddsel_we));
            tracep->chgBit(oldp+509,(vlSelf->ysyx_22051013__DOT__core_ddsel_re));
            tracep->chgCData(oldp+510,(vlSelf->ysyx_22051013__DOT__core_ddsel_wlen),8);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22051013__DOT__core_ddsel_data_pc),64);
            tracep->chgQData(oldp+513,(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                         ? vlSelf->ysyx_22051013__DOT__axi_ddsel_data_i
                                         : vlSelf->ysyx_22051013__DOT__dcache_ddsel_data)),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data),64);
            tracep->chgBit(oldp+517,(vlSelf->ysyx_22051013__DOT__ddsel_core_data_valid));
            tracep->chgBit(oldp+518,(vlSelf->ysyx_22051013__DOT__ddsel_axi_clint));
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22051013__DOT__axi_ddsel_data_i),64);
            tracep->chgBit(oldp+521,(vlSelf->ysyx_22051013__DOT__axi_ddsel_valid));
            tracep->chgBit(oldp+522,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_re));
            tracep->chgBit(oldp+523,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_we));
            tracep->chgCData(oldp+524,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_mask),8);
            tracep->chgQData(oldp+525,(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                         ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data)),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22051013__DOT__dcache_ddsel_data),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc),64);
            tracep->chgBit(oldp+531,(vlSelf->ysyx_22051013__DOT__ddsel_dcache_ready));
            tracep->chgQData(oldp+532,(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_data),64);
            tracep->chgBit(oldp+534,(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid));
            tracep->chgCData(oldp+535,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr),5);
            tracep->chgCData(oldp+536,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr),5);
            tracep->chgBit(oldp+537,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+538,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+539,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_if_pc_sel));
            tracep->chgBit(oldp+540,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 1U))));
            tracep->chgBit(oldp+541,(((((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                          | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                         | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrc)) 
                                        | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrwi)) 
                                       | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrsi)) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrci))));
            tracep->chgQData(oldp+542,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1),64);
            tracep->chgQData(oldp+544,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op2),64);
            tracep->chgQData(oldp+546,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_imm),64);
            tracep->chgBit(oldp+548,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_rd_ena));
            tracep->chgCData(oldp+549,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_lsctl),4);
            tracep->chgCData(oldp+550,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_wbctl),2);
            tracep->chgCData(oldp+551,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel),8);
            tracep->chgQData(oldp+552,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_aludata),64);
            tracep->chgCData(oldp+554,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ex_csr_ctl),7);
            tracep->chgQData(oldp+555,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_lswb_data_forward),64);
            tracep->chgQData(oldp+557,(((IData)(vlSelf->ysyx_22051013__DOT__core_ddsel_re)
                                         ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__load_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+559,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__if_valid));
            tracep->chgBit(oldp+560,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_valid));
            tracep->chgBit(oldp+561,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_valid));
            tracep->chgBit(oldp+562,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ls_ready));
            tracep->chgBit(oldp+563,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_ready));
            tracep->chgBit(oldp+564,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__id_stall_ena));
            tracep->chgIData(oldp+565,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__j_imm),20);
            tracep->chgSData(oldp+566,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm),12);
            tracep->chgCData(oldp+567,((0x7fU & vlSelf->ysyx_22051013__DOT__idsel_core_inst)),7);
            tracep->chgBit(oldp+568,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__inst_bxx));
            tracep->chgBit(oldp+569,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifu0__DOT__stall));
            tracep->chgBit(oldp+570,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_ifid1__DOT__flush));
            tracep->chgBit(oldp+571,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_ifid1__DOT__stall));
            tracep->chgBit(oldp+572,((1U & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+573,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward));
            tracep->chgBit(oldp+574,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward));
            tracep->chgBit(oldp+575,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op1_forward));
            tracep->chgBit(oldp+576,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward));
            tracep->chgBit(oldp+577,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward));
            tracep->chgBit(oldp+578,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op2_forward));
            tracep->chgBit(oldp+579,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op1_forward) 
                                       | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op1_forward)) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op1_forward))));
            tracep->chgBit(oldp+580,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ex_op2_forward) 
                                       | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__ls_op2_forward)) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__wb_op2_forward))));
            tracep->chgBit(oldp+581,((1U & ((IData)(
                                                    (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1 
                                                     >> 0x3fU)) 
                                            ^ (IData)(
                                                      (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op2 
                                                       >> 0x3fU))))));
            tracep->chgBit(oldp+582,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op_ltu_op2));
            tracep->chgBit(oldp+583,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__op1_lt_op2));
            tracep->chgCData(oldp+584,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+585,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+586,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+587,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+588,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+589,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+590,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+591,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+592,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+593,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+594,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+595,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+596,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+597,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+598,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+599,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+600,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+601,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+602,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+603,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+604,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+605,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+606,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+607,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+608,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+609,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+610,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+611,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+612,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+613,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+614,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+615,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+616,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+617,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+618,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+619,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+620,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+621,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+622,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+623,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+624,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+625,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+626,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+627,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+628,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+629,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+630,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+631,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+632,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+633,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+634,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+635,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+636,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+637,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+638,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+639,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+640,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+641,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+642,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+643,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+644,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+645,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+646,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+647,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+648,((((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+649,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__jump));
            tracep->chgBit(oldp+650,((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb3U 
                                                       & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
            tracep->chgBit(oldp+651,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_idex3__DOT__flush));
            tracep->chgBit(oldp+652,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_idex3__DOT__stall));
            tracep->chgQData(oldp+653,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__alu_res),64);
            tracep->chgBit(oldp+655,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul));
            tracep->chgCData(oldp+656,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_signed),2);
            tracep->chgBit(oldp+657,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mulw));
            tracep->chgBit(oldp+658,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_valid));
            tracep->chgBit(oldp+659,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div));
            tracep->chgBit(oldp+660,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_signed));
            tracep->chgBit(oldp+661,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divw));
            tracep->chgBit(oldp+662,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_valid));
            tracep->chgQData(oldp+663,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_res),64);
            tracep->chgBit(oldp+665,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csr_wr_ena));
            tracep->chgBit(oldp+666,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csr_rd_ena));
            tracep->chgBit(oldp+667,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mret_ena));
            tracep->chgBit(oldp+668,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__ecall_ena));
            tracep->chgBit(oldp+669,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csrrw_ena));
            tracep->chgBit(oldp+670,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csrrs_ena));
            tracep->chgBit(oldp+671,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__csrrc_ena));
            tracep->chgBit(oldp+672,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_stall));
            tracep->chgBit(oldp+673,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div_stall));
            tracep->chgBit(oldp+674,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__div))));
            tracep->chgQData(oldp+675,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp),64);
            tracep->chgQData(oldp+677,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp),64);
            VL_EXTEND_WQ(66,64, __Vtemp528, vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
            if ((1U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_signed))) {
                __Vtemp530[0U] = (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
                __Vtemp530[1U] = (IData)((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                          >> 0x20U));
                __Vtemp530[2U] = (3U & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                              >> 0x3fU))))));
            } else {
                __Vtemp530[0U] = __Vtemp528[0U];
                __Vtemp530[1U] = __Vtemp528[1U];
                __Vtemp530[2U] = __Vtemp528[2U];
            }
            tracep->chgWData(oldp+679,(__Vtemp530),66);
            VL_EXTEND_WQ(66,64, __Vtemp532, vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
            if ((2U & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_signed))) {
                __Vtemp534[0U] = (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
                __Vtemp534[1U] = (IData)((vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                          >> 0x20U));
                __Vtemp534[2U] = (3U & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                              >> 0x3fU))))));
            } else {
                __Vtemp534[0U] = __Vtemp532[0U];
                __Vtemp534[1U] = __Vtemp532[1U];
                __Vtemp534[2U] = __Vtemp532[2U];
            }
            tracep->chgWData(oldp+682,(__Vtemp534),66);
            tracep->chgQData(oldp+685,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
            tracep->chgQData(oldp+687,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
            tracep->chgBit(oldp+689,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_sign));
            tracep->chgBit(oldp+690,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_sign));
            tracep->chgQData(oldp+691,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                         : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
            tracep->chgQData(oldp+693,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
            VL_EXTEND_WQ(65,64, __Vtemp535, vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__op2_abs);
            tracep->chgWData(oldp+695,(__Vtemp535),65);
            tracep->chgBit(oldp+698,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__sub_sign));
            tracep->chgQData(oldp+699,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
            tracep->chgQData(oldp+701,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
            tracep->chgBit(oldp+703,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg_exls5__DOT__stall));
            tracep->chgQData(oldp+704,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__load_data),64);
            tracep->chgCData(oldp+706,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_byte),8);
            tracep->chgSData(oldp+707,(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__lsu6__DOT__data_half),16);
            tracep->chgBit(oldp+708,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__if_read));
            tracep->chgBit(oldp+709,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__ls_read));
            tracep->chgBit(oldp+710,(((IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__if_read) 
                                      | (IData)(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__ls_read))));
            tracep->chgBit(oldp+711,((((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                        ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)
                                        : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_valid))));
            tracep->chgBit(oldp+712,(((((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                         ? (IData)(vlSelf->ysyx_22051013__DOT__t_axi_w_ready)
                                         : (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__axi_w_valid)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+713,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__b_sh));
            tracep->chgBit(oldp+714,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__r_sh));
            tracep->chgCData(oldp+715,(vlSelf->ysyx_22051013__DOT__axi_master_arbitrator1__DOT__read_state_next),2);
            tracep->chgBit(oldp+716,(vlSelf->ysyx_22051013__DOT__icache_device_sel2__DOT__mem_ena));
            tracep->chgBit(oldp+717,(((0x2000000ULL 
                                       <= vlSelf->ysyx_22051013__DOT__core_idsel_inst_pc) 
                                      & (0x200ffffULL 
                                         >= vlSelf->ysyx_22051013__DOT__core_idsel_inst_pc))));
            tracep->chgIData(oldp+718,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__idsel_icache_pc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+719,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22051013__DOT__idsel_icache_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+720,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__icache_state_next),4);
            tracep->chgBit(oldp+721,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__inst_valid));
            tracep->chgWData(oldp+722,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__miss_data),128);
            tracep->chgWData(oldp+726,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb),128);
            tracep->chgBit(oldp+730,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_ena));
            tracep->chgBit(oldp+731,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__write_in_valid));
            tracep->chgIData(oldp+732,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__tag_with_valid),24);
            tracep->chgCData(oldp+733,(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__index),6);
            tracep->chgBit(oldp+734,((1U & (~ (IData)(vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_ena)))));
            __Vtemp536[0U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[0U]);
            __Vtemp536[1U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[1U]);
            __Vtemp536[2U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[2U]);
            __Vtemp536[3U] = (~ vlSelf->ysyx_22051013__DOT__i_cache3__DOT__cache_strb[3U]);
            tracep->chgWData(oldp+735,(__Vtemp536),128);
            tracep->chgBit(oldp+739,(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena));
            tracep->chgIData(oldp+740,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+741,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+742,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state_next),6);
            tracep->chgBit(oldp+743,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_r_hit));
            tracep->chgBit(oldp+744,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_r_hit));
            tracep->chgBit(oldp+745,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_r_dirty));
            tracep->chgBit(oldp+746,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_re_ready));
            tracep->chgBit(oldp+747,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_r_valid));
            tracep->chgBit(oldp+748,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_r_valid));
            tracep->chgQData(oldp+749,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_pc),64);
            tracep->chgBit(oldp+751,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_ena));
            tracep->chgWData(oldp+752,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data),128);
            tracep->chgBit(oldp+756,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_valid));
            tracep->chgBit(oldp+757,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_ena));
            tracep->chgQData(oldp+758,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyr_data),64);
            tracep->chgCData(oldp+760,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state_next),6);
            tracep->chgBit(oldp+761,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_w_hit));
            tracep->chgBit(oldp+762,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way2_w_hit));
            tracep->chgBit(oldp+763,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_w_dirty));
            tracep->chgBit(oldp+764,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_wr_ready));
            tracep->chgBit(oldp+765,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__data_w_valid));
            tracep->chgWData(oldp+766,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__hit_w_strb),128);
            tracep->chgQData(oldp+770,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__strb_w_64),64);
            tracep->chgBit(oldp+772,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__write_w_valid));
            tracep->chgQData(oldp+773,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_pc),64);
            tracep->chgBit(oldp+775,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_ena));
            tracep->chgWData(oldp+776,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missw_data),128);
            tracep->chgBit(oldp+780,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_valid));
            tracep->chgBit(oldp+781,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_ena));
            tracep->chgQData(oldp+782,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dirtyw_data),64);
            tracep->chgCData(oldp+784,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state_next),6);
            tracep->chgIData(oldp+785,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_with_valid),24);
            tracep->chgCData(oldp+786,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__tag_index),6);
            tracep->chgCData(oldp+787,(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__ram_index),6);
            tracep->chgBit(oldp+788,(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand));
            tracep->chgBit(oldp+789,(((0x200bff8ULL 
                                       == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))));
            tracep->chgBit(oldp+790,(((((0x200bff8ULL 
                                         == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))));
            tracep->chgBit(oldp+791,(((0x2004000ULL 
                                       == vlSelf->ysyx_22051013__DOT__t_axi_ar_addr) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi))));
            tracep->chgBit(oldp+792,(((((0x2004000ULL 
                                         == vlSelf->ysyx_22051013__DOT__t_axi_aw_addr) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__t_axi_aw_valid)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__wc_shakehand)) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi))));
            tracep->chgBit(oldp+793,(vlSelf->ysyx_22051013__DOT__clint7__DOT__read_condi));
            tracep->chgBit(oldp+794,(vlSelf->ysyx_22051013__DOT__clint7__DOT__write_condi));
            tracep->chgQData(oldp+795,(vlSelf->ysyx_22051013__DOT__clint7__DOT__wmask),64);
            tracep->chgBit(oldp+797,(((IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_valid) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+798,(((IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_valid) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__soc_axi_w_ready))));
            tracep->chgBit(oldp+799,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__bc_shakehand));
            tracep->chgBit(oldp+800,(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__arc_shakehand));
            tracep->chgCData(oldp+801,(((3U == ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)))
                                         ? 8U : ((2U 
                                                  == 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_size)))
                                                  ? 4U
                                                  : 
                                                 ((1U 
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
            tracep->chgBit(oldp+802,(((7U == ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                               ? 0U
                                               : (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_data_size))) 
                                      & (((2U != (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id)) 
                                          & (IData)(vlSelf->ysyx_22051013__DOT__ddsel_axi_we)) 
                                         & ((3U == 
                                             ((2U == (IData)(vlSelf->ysyx_22051013__DOT__axi_aw_id))
                                               ? 0U
                                               : 1U)) 
                                            & (3U == 
                                               ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__axi_ar_id))
                                                 ? 0U
                                                 : 1U)))))));
        }
        tracep->chgBit(oldp+803,(vlSelf->clock));
        tracep->chgBit(oldp+804,(vlSelf->reset));
        tracep->chgQData(oldp+805,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
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
        tracep->chgBit(oldp+807,(((~ (IData)(vlSelf->reset)) 
                                  & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__inst_bxx) 
                                     & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__b_imm) 
                                        >> 0xbU)))));
        tracep->chgQData(oldp+808,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__bpu_static__DOT__hold)
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
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                    : 4ULL)))))),64);
        tracep->chgQData(oldp+810,(((IData)(vlSelf->reset)
                                     ? 0ULL : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_pc)),64);
        tracep->chgIData(oldp+812,(((IData)(vlSelf->reset)
                                     ? 0U : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ifid_id_inst)),32);
        tracep->chgQData(oldp+813,((((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr]
                                     : 0ULL)),64);
        tracep->chgQData(oldp+815,((((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena))
                                     ? vlSelf->ysyx_22051013__DOT__rvcore0__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr]
                                     : 0ULL)),64);
        tracep->chgBit(oldp+817,(((IData)(vlSelf->reset)
                                   ? 0U : (IData)((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22051013__DOT__idsel_core_inst))))));
        tracep->chgQData(oldp+818,((((IData)(vlSelf->reset)
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
        tracep->chgQData(oldp+820,((vlSelf->ysyx_22051013__DOT__idsel_core_pc 
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
        tracep->chgBit(oldp+822,(((~ ((IData)(vlSelf->reset) 
                                      & (0U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr)))) 
                                  & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_ena) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs1_addr) 
                                        == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+823,(((~ ((IData)(vlSelf->reset) 
                                      & (0U == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr)))) 
                                  & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_ena) 
                                      & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__id_reg_rs2_addr) 
                                        == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+824,((1U & ((~ (IData)(vlSelf->reset)) 
                                        & (((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 2U) 
                                           & ((0xeU 
                                               == (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_alu_sel))
                                               ? (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op1 
                                                  == vlSelf->ysyx_22051013__DOT__rvcore0__DOT__idex_id_op2)
                                               : ((0x1cU 
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
        tracep->chgQData(oldp+825,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exu4__DOT__mul_out_valid)
                                                ? (
                                                   (0x58U 
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
        tracep->chgQData(oldp+827,(((IData)(vlSelf->reset)
                                     ? 0ULL : vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata)),64);
        tracep->chgCData(oldp+829,(((IData)(vlSelf->reset)
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
        tracep->chgCData(oldp+830,(((IData)(vlSelf->reset)
                                     ? 0U : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                             >> 1U))))
                                              ? 3U : 
                                             ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                           >> 1U))))
                                               ? 0xcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                               >> 1U))))
                                                   ? 0x30U
                                                   : 0xc0U))))),8);
        tracep->chgCData(oldp+831,(((IData)(vlSelf->reset)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgQData(oldp+832,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (1U 
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
        tracep->chgQData(oldp+834,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data))))),64);
        tracep->chgQData(oldp+836,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_aludata 
                                                            >> 1U))))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_store_data))))
                                                : (
                                                   (1U 
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
        tracep->chgBit(oldp+838,(((~ (IData)(vlSelf->reset)) 
                                  & ((2U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                     & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_re_ready)))));
        tracep->chgBit(oldp+839,(((~ (IData)(vlSelf->reset)) 
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
        tracep->chgBit(oldp+840,(((~ (IData)(vlSelf->reset)) 
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
            __Vtemp551[0U] = 0U;
            __Vtemp551[1U] = 0U;
            __Vtemp551[2U] = 0U;
            __Vtemp551[3U] = 0U;
        } else {
            __Vtemp551[0U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
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
            __Vtemp551[1U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
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
            __Vtemp551[2U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
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
            __Vtemp551[3U] = (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
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
        tracep->chgWData(oldp+841,(__Vtemp551),128);
        tracep->chgQData(oldp+845,(((IData)(vlSelf->reset)
                                     ? 0ULL : (((0x10U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                                & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayr)))
                                                ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_r_dirty)
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
        tracep->chgBit(oldp+847,(((~ (IData)(vlSelf->reset)) 
                                  & ((3U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                     & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__core_wr_ready)))));
        if (vlSelf->reset) {
            __Vtemp557[0U] = 0U;
            __Vtemp557[1U] = 0U;
            __Vtemp557[2U] = 0U;
            __Vtemp557[3U] = 0U;
        } else {
            __Vtemp557[0U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data))
                               : 0U);
            __Vtemp557[1U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data) 
                                          >> 0x20U))
                               : 0U);
            __Vtemp557[2U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data))
                               : 0U);
            __Vtemp557[3U] = ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013__DOT__dcache_device_sel4__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013__DOT__core_ddsel_ls_data) 
                                          >> 0x20U))
                               : 0U);
        }
        tracep->chgWData(oldp+848,(__Vtemp557),128);
        tracep->chgBit(oldp+852,(((~ (IData)(vlSelf->reset)) 
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
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))))))));
        tracep->chgBit(oldp+853,(((~ (IData)(vlSelf->reset)) 
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
            __Vtemp576[0U] = 0U;
            __Vtemp576[1U] = 0U;
            __Vtemp576[2U] = 0U;
            __Vtemp576[3U] = 0U;
        } else {
            __Vtemp576[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
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
            __Vtemp576[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
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
            __Vtemp576[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
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
            __Vtemp576[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
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
        tracep->chgWData(oldp+854,(__Vtemp576),128);
        tracep->chgQData(oldp+858,(((IData)(vlSelf->reset)
                                     ? 0ULL : (((0x21U 
                                                 == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state)) 
                                                & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayw)))
                                                ? ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__way1_w_dirty)
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
        tracep->chgBit(oldp+860,(((~ (IData)(vlSelf->reset)) 
                                  & ((~ ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                         & (~ (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)))) 
                                     & ((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                        & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf))))));
        tracep->chgBit(oldp+861,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
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
        tracep->chgBit(oldp+862,(((IData)(vlSelf->ysyx_22051013__DOT__rvcore0__DOT__exls_ls_fencei)
                                   ? (((4U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_state)) 
                                       & (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__delayf)) 
                                      & ((IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__fencei_index) 
                                         >> 6U)) : 
                                  ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))
                                    ? ((~ (IData)(vlSelf->reset)) 
                                       & ((~ ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013__DOT__axi_ddsel_dcache_valid)))) 
                                          & (((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state)) 
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
            __Vtemp617[0U] = ((IData)(vlSelf->reset)
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
            __Vtemp617[1U] = ((IData)(vlSelf->reset)
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
            __Vtemp617[2U] = ((IData)(vlSelf->reset)
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
            __Vtemp617[3U] = ((IData)(vlSelf->reset)
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
            __Vtemp617[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp617[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp617[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp617[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
        tracep->chgWData(oldp+863,(__Vtemp617),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))) {
            __Vtemp630[0U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[0U];
            __Vtemp630[1U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[1U];
            __Vtemp630[2U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[2U];
            __Vtemp630[3U] = vlSelf->ysyx_22051013__DOT__d_cache5__DOT__missr_data[3U];
        } else {
            __Vtemp630[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp630[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp630[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp630[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
        tracep->chgWData(oldp+867,(__Vtemp630),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dread_state))) {
            __Vtemp671[0U] = ((IData)(vlSelf->reset)
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
            __Vtemp671[1U] = ((IData)(vlSelf->reset)
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
            __Vtemp671[2U] = ((IData)(vlSelf->reset)
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
            __Vtemp671[3U] = ((IData)(vlSelf->reset)
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
            __Vtemp671[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp671[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp671[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
            __Vtemp671[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013__DOT__d_cache5__DOT__dwrite_state))
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
        __Vtemp672[0U] = (~ __Vtemp671[0U]);
        __Vtemp672[1U] = (~ __Vtemp671[1U]);
        __Vtemp672[2U] = (~ __Vtemp671[2U]);
        __Vtemp672[3U] = (~ __Vtemp671[3U]);
        tracep->chgWData(oldp+871,(__Vtemp672),128);
        tracep->chgCData(oldp+875,(((IData)(vlSelf->reset)
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
        tracep->chgCData(oldp+876,(((IData)(vlSelf->reset)
                                     ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013__DOT__clint7__DOT__clint_read_state))
                                              ? (((1U 
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
        tracep->chgCData(oldp+877,(((IData)(vlSelf->reset)
                                     ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013__DOT__axi_slave8__DOT__s_write_state))
                                              ? ((((IData)(vlSelf->ysyx_22051013__DOT__soc_axi_aw_valid) 
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
        tracep->chgCData(oldp+878,(((IData)(vlSelf->reset)
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
    }
}

void Vysyx_22051013___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22051013___024root* const __restrict vlSelf = static_cast<Vysyx_22051013___024root*>(voidSelf);
    Vysyx_22051013__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
