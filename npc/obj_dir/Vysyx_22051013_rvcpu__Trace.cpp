// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22051013_rvcpu__Syms.h"


void Vysyx_22051013_rvcpu___024root__traceChgSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22051013_rvcpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22051013_rvcpu___024root* const __restrict vlSelf = static_cast<Vysyx_22051013_rvcpu___024root*>(voidSelf);
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22051013_rvcpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22051013_rvcpu___024root__traceChgSub0(Vysyx_22051013_rvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp475;
    VlWide<3>/*95:0*/ __Vtemp477;
    VlWide<3>/*95:0*/ __Vtemp479;
    VlWide<3>/*95:0*/ __Vtemp481;
    VlWide<5>/*159:0*/ __Vtemp499;
    VlWide<5>/*159:0*/ __Vtemp500;
    VlWide<3>/*95:0*/ __Vtemp501;
    VlWide<4>/*127:0*/ __Vtemp508;
    VlWide<4>/*127:0*/ __Vtemp523;
    VlWide<4>/*127:0*/ __Vtemp527;
    VlWide<4>/*127:0*/ __Vtemp544;
    VlWide<4>/*127:0*/ __Vtemp581;
    VlWide<4>/*127:0*/ __Vtemp592;
    VlWide<4>/*127:0*/ __Vtemp629;
    VlWide<4>/*127:0*/ __Vtemp630;
    VlWide<4>/*127:0*/ __Vtemp631;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))));
            tracep->chgBit(oldp+1,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
            tracep->chgBit(oldp+2,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
            tracep->chgQData(oldp+3,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data
                                       : 0ULL)),64);
            tracep->chgBit(oldp+5,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
            tracep->chgBit(oldp+6,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))));
            tracep->chgBit(oldp+7,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))));
            tracep->chgBit(oldp+8,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid));
            tracep->chgIData(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst),32);
            tracep->chgBit(oldp+11,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
            tracep->chgBit(oldp+14,(((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                                      : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena)))));
            tracep->chgBit(oldp+15,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc),64);
            tracep->chgIData(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
            tracep->chgBit(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
            tracep->chgIData(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel),2);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel),3);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr),5);
            tracep->chgBit(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl),7);
            tracep->chgSData(oldp+41,(((0U != (0xfU 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)))
                                        ? (0xfffU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                        : 0U)),12);
            tracep->chgIData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
            tracep->chgCData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
            tracep->chgCData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
            tracep->chgCData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl),7);
            tracep->chgSData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr),12);
            tracep->chgCData(oldp+53,(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                         | (9U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                        | (0xdU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                        ? 3U : ((((2U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                                  | (0xaU 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                                 | (0xeU 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                                 ? 4U
                                                 : 
                                                ((((4U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                                   | (0xbU 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                                  | (0xfU 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                                  ? 5U
                                                  : 
                                                 (((8U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                                   | (0xcU 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                                   ? 6U
                                                   : 0U))))),3);
            tracep->chgCData(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl),7);
            tracep->chgSData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr),12);
            tracep->chgIData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
            tracep->chgCData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
            tracep->chgBit(oldp+64,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
            tracep->chgCData(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
            tracep->chgBit(oldp+68,(((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena))));
            tracep->chgCData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr),5);
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel));
            tracep->chgQData(oldp+71,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
                                        : 0ULL)),64);
            tracep->chgBit(oldp+73,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)))));
            tracep->chgBit(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid));
            tracep->chgBit(oldp+75,((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime 
                                     > vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)));
            tracep->chgCData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state),3);
            tracep->chgCData(oldp+77,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state),3);
            tracep->chgCData(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state),2);
            tracep->chgCData(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state),2);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state),2);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data),64);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state),4);
            tracep->chgBit(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2));
            tracep->chgCData(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index),6);
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag),23);
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1));
            tracep->chgBit(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2));
            tracep->chgIData(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data),23);
            tracep->chgBit(oldp+91,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
            tracep->chgIData(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data),23);
            tracep->chgBit(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
            tracep->chgWData(oldp+94,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data),128);
            tracep->chgCData(oldp+98,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state),6);
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update));
            tracep->chgBit(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid));
            tracep->chgBit(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena));
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr));
            tracep->chgCData(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state),6);
            tracep->chgBit(oldp+104,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update));
            tracep->chgBit(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid));
            tracep->chgBit(oldp+106,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena));
            tracep->chgBit(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw));
            tracep->chgIData(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data),23);
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
            tracep->chgIData(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data),23);
            tracep->chgBit(oldp+111,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
            tracep->chgWData(oldp+112,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data),128);
            tracep->chgIData(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
            tracep->chgSData(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
            tracep->chgCData(oldp+118,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)),7);
            tracep->chgCData(oldp+119,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+120,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+121,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+122,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
            tracep->chgCData(oldp+123,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+124,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0x19U)),7);
            tracep->chgSData(oldp+125,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+126,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
            tracep->chgIData(oldp+127,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+128,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
            tracep->chgSData(oldp+129,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
            tracep->chgIData(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
            tracep->chgIData(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
            tracep->chgIData(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
            tracep->chgBit(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul));
            tracep->chgCData(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed),2);
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid));
            tracep->chgBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid));
            tracep->chgBit(oldp+160,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                         | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                        | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))))));
            tracep->chgQData(oldp+161,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo),64);
            tracep->chgQData(oldp+165,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                         ? ((0x58U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo
                                             : ((((0xb0U 
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
                                         : 0ULL)),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp),64);
            tracep->chgBit(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw));
            tracep->chgBit(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2));
            tracep->chgBit(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid));
            tracep->chgBit(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid));
            tracep->chgBit(oldp+175,((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp),64);
            tracep->chgBit(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg));
            tracep->chgBit(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall));
            tracep->chgBit(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg));
            tracep->chgBit(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
            tracep->chgBit(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena));
            tracep->chgBit(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena));
            tracep->chgBit(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena));
            tracep->chgBit(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena));
            tracep->chgBit(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena));
            tracep->chgBit(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena));
            tracep->chgBit(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena));
            tracep->chgQData(oldp+189,((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr))),64);
            tracep->chgBit(oldp+191,((((0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                       | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                      | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))));
            tracep->chgBit(oldp+192,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div))));
            tracep->chgQData(oldp+193,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                                             : 0ULL))),64);
            tracep->chgBit(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing));
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp),64);
            VL_EXTEND_WQ(66,64, __Vtemp475, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
            if ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
                __Vtemp477[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
                __Vtemp477[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                          >> 0x20U));
                __Vtemp477[2U] = (3U & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                              >> 0x3fU))))));
            } else {
                __Vtemp477[0U] = __Vtemp475[0U];
                __Vtemp477[1U] = __Vtemp475[1U];
                __Vtemp477[2U] = __Vtemp475[2U];
            }
            tracep->chgWData(oldp+200,(__Vtemp477),66);
            VL_EXTEND_WQ(66,64, __Vtemp479, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
            if ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
                __Vtemp481[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
                __Vtemp481[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                          >> 0x20U));
                __Vtemp481[2U] = (3U & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                              >> 0x3fU))))));
            } else {
                __Vtemp481[0U] = __Vtemp479[0U];
                __Vtemp481[1U] = __Vtemp479[1U];
                __Vtemp481[2U] = __Vtemp479[2U];
            }
            tracep->chgWData(oldp+203,(__Vtemp481),66);
            tracep->chgWData(oldp+206,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand),132);
            tracep->chgWData(oldp+211,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier),67);
            tracep->chgCData(oldp+214,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])),3);
            tracep->chgBit(oldp+215,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative))));
            if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
                __Vtemp499[1U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                                   << 1U)));
                __Vtemp499[2U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                                   << 1U)));
                __Vtemp499[3U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                                   << 1U)));
                __Vtemp499[4U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                      >> 0x1fU) | (0xeU 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                      << 1U))));
                __Vtemp500[0U] = (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                     << 1U));
            } else {
                __Vtemp499[1U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                       >> 0x1fU) | 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                       << 1U)) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                   ? 
                                                  (~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U])
                                                   : 
                                                  ((1U 
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
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U]
                                                    : 0U)));
                __Vtemp499[2U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                       << 1U)) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                   ? 
                                                  (~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U])
                                                   : 
                                                  ((1U 
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
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U]
                                                    : 0U)));
                __Vtemp499[3U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                       >> 0x1fU) | 
                                      (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                       << 1U)) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                   ? 
                                                  (~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U])
                                                   : 
                                                  ((1U 
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
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U]
                                                    : 0U)));
                __Vtemp499[4U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                       >> 0x1fU) | 
                                      (0xeU & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                               << 1U)))
                                   : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                       ? (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U])
                                       : ((1U & ((~ 
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
                                           ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U]
                                           : 0U)));
                __Vtemp500[0U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))
                                   ? (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                      << 1U) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative)
                                                 ? 
                                                (~ 
                                                 vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U])
                                                 : 
                                                ((1U 
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
            __Vtemp500[1U] = __Vtemp499[1U];
            __Vtemp500[2U] = __Vtemp499[2U];
            __Vtemp500[3U] = __Vtemp499[3U];
            __Vtemp500[4U] = (0xfU & __Vtemp499[4U]);
            tracep->chgWData(oldp+216,(__Vtemp500),132);
            tracep->chgWData(oldp+221,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp),132);
            tracep->chgBit(oldp+226,((0xfU == (0xfU 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U]))));
            tracep->chgBit(oldp+227,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+228,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+229,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
            tracep->chgBit(oldp+230,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative));
            tracep->chgBit(oldp+231,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative));
            tracep->chgBit(oldp+232,((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))));
            tracep->chgBit(oldp+233,((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
            tracep->chgBit(oldp+234,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing));
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
            tracep->chgBit(oldp+239,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign));
            tracep->chgBit(oldp+240,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign));
            tracep->chgQData(oldp+241,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
            tracep->chgWData(oldp+245,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend),128);
            VL_EXTEND_WQ(65,64, __Vtemp501, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
            tracep->chgWData(oldp+249,(__Vtemp501),65);
            tracep->chgCData(oldp+252,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt),7);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q),64);
            tracep->chgBit(oldp+255,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign));
            tracep->chgQData(oldp+256,(((((QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                               >> 0x1fU))) 
                                        - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
            tracep->chgBit(oldp+258,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok));
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
            tracep->chgCData(oldp+261,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
            tracep->chgCData(oldp+262,((3U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+263,((1U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                    >> 2U)))));
            tracep->chgIData(oldp+264,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data),64);
            tracep->chgQData(oldp+267,((((((- (QData)((IData)(
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
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data),64);
            tracep->chgQData(oldp+271,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                         ? 0xbULL : 
                                        ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
                                          ? 0x8000000000000007ULL
                                          : 0ULL))),64);
            tracep->chgQData(oldp+273,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                        | vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata)),64);
            tracep->chgQData(oldp+275,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata))),64);
            tracep->chgBit(oldp+277,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump));
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__delay));
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_delay),64);
            tracep->chgBit(oldp+281,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
            tracep->chgCData(oldp+282,((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))),4);
            tracep->chgBit(oldp+283,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+284,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle),64);
            tracep->chgBit(oldp+287,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+288,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie));
            tracep->chgQData(oldp+290,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+292,(((0x344U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip));
            tracep->chgQData(oldp+294,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+296,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+297,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+299,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgBit(oldp+303,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+304,((1U & ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump))) 
                                            & ((1U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)))))));
            tracep->chgBit(oldp+305,((1U & ((1U & (
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                    >> 1U) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)))))));
            tracep->chgCData(oldp+306,(((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 1U) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                                         ? 3U : ((1U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                                                 >> 0xbU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
            tracep->chgBit(oldp+307,((1U & ((((0x305U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
            tracep->chgBit(oldp+308,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+311,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+313,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 2U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))));
            tracep->chgBit(oldp+314,((1U & ((((0x341U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 3U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc),64);
            tracep->chgBit(oldp+317,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+318,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
            tracep->chgQData(oldp+339,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
            tracep->chgQData(oldp+341,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
            tracep->chgQData(oldp+343,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
            tracep->chgQData(oldp+347,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
            tracep->chgQData(oldp+349,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
            tracep->chgQData(oldp+351,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
            tracep->chgQData(oldp+353,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
            tracep->chgQData(oldp+355,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
            tracep->chgQData(oldp+357,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
            tracep->chgQData(oldp+359,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
            tracep->chgQData(oldp+361,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
            tracep->chgQData(oldp+363,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
            tracep->chgQData(oldp+365,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
            tracep->chgQData(oldp+367,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
            tracep->chgQData(oldp+371,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
            tracep->chgQData(oldp+373,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
            tracep->chgQData(oldp+375,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
            tracep->chgQData(oldp+377,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
            tracep->chgQData(oldp+379,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
            tracep->chgQData(oldp+381,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
            tracep->chgQData(oldp+383,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
            tracep->chgIData(oldp+385,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
            tracep->chgCData(oldp+386,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state),2);
            tracep->chgCData(oldp+387,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state),2);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime),64);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+392,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                       ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                       : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
            tracep->chgCData(oldp+393,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                             ? ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                 ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                                 : 0U)
                                             : 0U) : 
                                        ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                          ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                              ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                          : 0U))),5);
            tracep->chgBit(oldp+394,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                       ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                       : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
            tracep->chgBit(oldp+395,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
            tracep->chgCData(oldp+396,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                             ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         : 0U)),5);
            tracep->chgBit(oldp+397,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
            tracep->chgCData(oldp+398,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                             : 0U) : 0U)),5);
            tracep->chgQData(oldp+399,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                         ? ((0x200bff8ULL 
                                             == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                             : ((0x2004000ULL 
                                                 == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                                 : 0ULL))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+401,((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+403,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                       : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                           : ((0x20U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena))))));
            tracep->chgBit(oldp+404,((1U & ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                             ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                                             : ((4U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                 ? 
                                                (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                                                 : 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we)))))));
            tracep->chgBit(oldp+405,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                       : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
            tracep->chgQData(oldp+406,(((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                         : ((0x21U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                             : 0ULL))),64);
            tracep->chgQData(oldp+408,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc
                                         : ((0x10U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                             ? (((0x10U 
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
                                                 : 0ULL)
                                             : ((0x20U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc
                                                 : 
                                                ((0x21U 
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
            tracep->chgQData(oldp+410,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                         ? (((0x42U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                              : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc) 
                                            + ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                                ? 4ULL
                                                : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+412,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgBit(oldp+413,((((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                        ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                        : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
            tracep->chgCData(oldp+414,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                         ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)))
                                             ? 3U : 1U)
                                         : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand)
                                                 ? 1U
                                                 : 3U)
                                             : 1U))),2);
            tracep->chgBit(oldp+415,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
            tracep->chgCData(oldp+416,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                         ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                                             ? 2U : 1U)
                                         : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                             ? (((2U 
                                                  != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))
                                                 ? 1U
                                                 : 2U)
                                             : 1U))),2);
            tracep->chgBit(oldp+417,((((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                             >> 9U))) 
                                       == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild))));
            tracep->chgBit(oldp+418,((((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                             >> 9U))) 
                                       == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild))));
            if ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                  & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) {
                __Vtemp508[0U] = 0U;
                __Vtemp508[1U] = 0U;
                __Vtemp508[2U] = 0U;
                __Vtemp508[3U] = 0U;
            } else {
                __Vtemp508[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                                   ? (IData)((((1U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                               : 0ULL))
                                   : 0U);
                __Vtemp508[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                                   ? (IData)(((((1U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                                ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                                : 0ULL) 
                                              >> 0x20U))
                                   : 0U);
                __Vtemp508[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                                   ? (IData)((((1U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                               ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                               : 0ULL))
                                   : 0U);
                __Vtemp508[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                                   ? (IData)(((((1U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                                ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                                : 0ULL) 
                                              >> 0x20U))
                                   : 0U);
            }
            tracep->chgWData(oldp+419,(__Vtemp508),128);
            tracep->chgBit(oldp+423,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
                                       & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
                                      & (0U == ((((~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
                                                  | (~ 
                                                     vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])) 
                                                 | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
                                                | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])))));
            tracep->chgBit(oldp+424,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2)) 
                                       & (8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) 
                                      & (0U == (((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
                                                  | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
                                                 | (~ 
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])) 
                                                | (~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]))))));
            tracep->chgBit(oldp+425,(((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))] 
                                       & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))]) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))));
            tracep->chgBit(oldp+426,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready))));
            tracep->chgBit(oldp+427,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                      & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)) 
                                         & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                            | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                         >> 3U)))])))));
            tracep->chgBit(oldp+428,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                __Vtemp523[0U] = 0U;
                __Vtemp523[1U] = 0U;
                __Vtemp523[2U] = 0U;
                __Vtemp523[3U] = 0U;
            } else {
                __Vtemp523[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))]))
                                       ? 0xffffffffU
                                       : 0U) : 0U);
                __Vtemp523[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))]))
                                       ? 0xffffffffU
                                       : 0U) : 0U);
                __Vtemp523[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))]))
                                       ? 0U : ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0xffffffffU
                                                : 0U))
                                   : 0U);
                __Vtemp523[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)) 
                                             | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                             [(0x3fU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))]))
                                       ? 0U : ((1U 
                                                & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                               >> 3U)))]))
                                                ? 0xffffffffU
                                                : 0U))
                                   : 0U);
            }
            tracep->chgWData(oldp+429,(__Vtemp523),128);
            tracep->chgQData(oldp+433,((((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            tracep->chgBit(oldp+435,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready))));
            if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
                __Vtemp527[0U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
                __Vtemp527[1U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                          >> 0x20U));
                __Vtemp527[2U] = (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data));
                __Vtemp527[3U] = (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                          >> 0x20U));
            } else {
                __Vtemp527[0U] = 0U;
                __Vtemp527[1U] = 0U;
                __Vtemp527[2U] = 0U;
                __Vtemp527[3U] = 0U;
            }
            tracep->chgWData(oldp+436,(__Vtemp527),128);
            tracep->chgBit(oldp+440,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
                                                              >> 3U)))])))))));
            tracep->chgBit(oldp+441,(((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
                __Vtemp544[0U] = 0U;
                __Vtemp544[1U] = 0U;
                __Vtemp544[2U] = 0U;
                __Vtemp544[3U] = 0U;
            } else {
                __Vtemp544[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                       ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]
                                               ? 0U
                                               : (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0xffffffffU
                                                   : 0U))
                                           : 0U) : 0xffffffffU)
                                   : 0U);
                __Vtemp544[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                       ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]
                                               ? 0U
                                               : (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]
                                                   ? 0xffffffffU
                                                   : 0U))
                                           : 0U) : 0xffffffffU)
                                   : 0U);
                __Vtemp544[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                       ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]
                                               ? 0xffffffffU
                                               : 0U)
                                           : 0xffffffffU)
                                       : 0U) : 0U);
                __Vtemp544[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                                   ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild)
                                       ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild)
                                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                           >> 3U)))]
                                               ? 0xffffffffU
                                               : 0U)
                                           : 0xffffffffU)
                                       : 0U) : 0U);
            }
            tracep->chgWData(oldp+442,(__Vtemp544),128);
            tracep->chgQData(oldp+446,((((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            tracep->chgBit(oldp+448,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
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
            tracep->chgBit(oldp+449,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                       ? ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
                                          & (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                __Vtemp581[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
                __Vtemp581[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
                __Vtemp581[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
                __Vtemp581[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
            } else {
                __Vtemp581[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                       : 0U));
                __Vtemp581[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                       : 0U));
                __Vtemp581[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                       : 0U));
                __Vtemp581[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                       : 0U));
            }
            tracep->chgWData(oldp+450,(__Vtemp581),128);
            tracep->chgBit(oldp+454,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                       : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                           : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))));
            if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
                __Vtemp592[0U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U];
                __Vtemp592[1U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U];
                __Vtemp592[2U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U];
                __Vtemp592[3U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U];
            } else {
                __Vtemp592[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U]
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? (IData)(
                                                     ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                       ? 0ULL
                                                       : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                           : 0U) : 0U));
                __Vtemp592[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U]
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? (IData)(
                                                     (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                      >> 0x20U))
                                           : 0U) : 0U));
                __Vtemp592[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U]
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? (IData)(
                                                     ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                       ? 0ULL
                                                       : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                                           : 0U) : 0U));
                __Vtemp592[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U]
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? (IData)(
                                                     (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                                      >> 0x20U))
                                           : 0U) : 0U));
            }
            tracep->chgWData(oldp+455,(__Vtemp592),128);
            tracep->chgBit(oldp+459,((1U & (~ ((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                    ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))))));
            if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
                __Vtemp629[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
                __Vtemp629[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
                __Vtemp629[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
                __Vtemp629[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
                                            : 0U));
            } else {
                __Vtemp629[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U]
                                       : 0U));
                __Vtemp629[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U]
                                       : 0U));
                __Vtemp629[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U]
                                       : 0U));
                __Vtemp629[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                   ? (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                       & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
                                       ? 0U : (((0x20U 
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
                                                : 0U))
                                   : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U]
                                       : 0U));
            }
            __Vtemp630[0U] = (~ __Vtemp629[0U]);
            __Vtemp630[1U] = (~ __Vtemp629[1U]);
            __Vtemp630[2U] = (~ __Vtemp629[2U]);
            __Vtemp630[3U] = (~ __Vtemp629[3U]);
            tracep->chgWData(oldp+460,(__Vtemp630),128);
            tracep->chgQData(oldp+464,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+466,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+468,(((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
            tracep->chgQData(oldp+470,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                         ? 4ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)),64);
            tracep->chgBit(oldp+472,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+473,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+474,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+475,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+476,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+477,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+478,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+479,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgQData(oldp+480,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                         : 0ULL)),64);
            tracep->chgQData(oldp+482,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                         : 0ULL)),64);
            tracep->chgQData(oldp+484,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
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
                                             : ((((
                                                   (0x43U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                                   | (0x86U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                  | (0x15U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                                 | (0x83U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                                  : 0ULL)
                                                 : 0ULL))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+486,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                                         ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)))
                                             ? 3U : 1U)
                                         : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                                             ? (((3U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                                 & (2U 
                                                    == 
                                                    ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                      ? 2U
                                                      : 1U)))
                                                 ? 1U
                                                 : 3U)
                                             : 1U))),2);
            tracep->chgBit(oldp+487,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                      & (2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U)))));
            tracep->chgBit(oldp+488,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                                      & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                         & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))));
            tracep->chgBit(oldp+489,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))));
            tracep->chgCData(oldp+490,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                         ? (((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                                             & ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                                & (4U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))
                                             ? 2U : 1U)
                                         : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                             ? (((2U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))
                                                 ? 1U
                                                 : 2U)
                                             : 1U))),2);
            tracep->chgQData(oldp+491,(((0x200bff8ULL 
                                         == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                         : ((0x2004000ULL 
                                             == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                             : 0ULL))),64);
            tracep->chgQData(oldp+493,(((0x200bff8ULL 
                                         == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                         ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                            | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))
                                         : (1ULL + vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))),64);
            tracep->chgQData(oldp+495,(((0x2004000ULL 
                                         == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                         ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                            | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp))
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+497,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                         ? 2U : 1U)),5);
            tracep->chgQData(oldp+498,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc),64);
            tracep->chgBit(oldp+500,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
            tracep->chgBit(oldp+501,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                       : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
            tracep->chgCData(oldp+502,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size),3);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o),64);
            tracep->chgCData(oldp+505,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask),8);
            tracep->chgBit(oldp+506,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
            tracep->chgBit(oldp+507,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
            tracep->chgBit(oldp+508,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                       : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+509,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? ((2U == 
                                             ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U))
                                             ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U)
                                             : 0U) : 
                                        ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                  ? 2U
                                                  : 1U))
                                          ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                   ? 2U
                                                   : 1U)))),5);
            tracep->chgBit(oldp+510,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid));
            tracep->chgCData(oldp+511,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id),5);
            tracep->chgQData(oldp+512,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+514,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size),3);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data),64);
            tracep->chgCData(oldp+517,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                  ? 2U
                                                  : 1U))),5);
            tracep->chgQData(oldp+518,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc)),64);
            tracep->chgBit(oldp+520,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid));
            tracep->chgBit(oldp+521,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready));
            tracep->chgCData(oldp+522,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : 1U)),8);
            tracep->chgCData(oldp+523,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size))),3);
            tracep->chgCData(oldp+524,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : 1U)),2);
            tracep->chgQData(oldp+525,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o)),64);
            tracep->chgCData(oldp+527,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask))),8);
            tracep->chgBit(oldp+528,(((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+529,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
            tracep->chgBit(oldp+530,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+531,((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))));
            tracep->chgCData(oldp+532,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))),5);
            tracep->chgQData(oldp+533,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr)),64);
            tracep->chgCData(oldp+535,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : 1U)),8);
            tracep->chgCData(oldp+536,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size))),3);
            tracep->chgCData(oldp+537,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : 1U)),2);
            tracep->chgBit(oldp+538,((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
            tracep->chgCData(oldp+539,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                             ? 2U : 1U)
                                         : 0U)),5);
            tracep->chgQData(oldp+540,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr),64);
            tracep->chgBit(oldp+542,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid));
            tracep->chgBit(oldp+543,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready));
            tracep->chgCData(oldp+544,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 1U : 0U)),8);
            tracep->chgCData(oldp+545,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size)
                                         : 0U)),3);
            tracep->chgCData(oldp+546,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 1U : 0U)),2);
            tracep->chgQData(oldp+547,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+549,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb),8);
            tracep->chgBit(oldp+550,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+551,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
            tracep->chgBit(oldp+552,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready));
            tracep->chgBit(oldp+553,((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))));
            tracep->chgCData(oldp+554,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                         : 0U)),5);
            tracep->chgQData(oldp+555,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr),64);
            tracep->chgCData(oldp+557,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 1U : 0U)),8);
            tracep->chgCData(oldp+558,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)
                                         : 0U)),3);
            tracep->chgCData(oldp+559,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+560,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
            tracep->chgBit(oldp+561,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid));
            tracep->chgQData(oldp+562,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc),64);
            tracep->chgBit(oldp+564,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena));
            tracep->chgQData(oldp+565,(vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc),64);
            tracep->chgBit(oldp+567,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
            tracep->chgBit(oldp+568,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
            tracep->chgCData(oldp+569,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask),8);
            tracep->chgQData(oldp+570,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc),64);
            tracep->chgQData(oldp+572,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data)),64);
            tracep->chgQData(oldp+574,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data),64);
            tracep->chgBit(oldp+576,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid));
            tracep->chgBit(oldp+577,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint));
            tracep->chgQData(oldp+578,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i),64);
            tracep->chgBit(oldp+580,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
            tracep->chgBit(oldp+581,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
            tracep->chgBit(oldp+582,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
            tracep->chgCData(oldp+583,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask),8);
            tracep->chgQData(oldp+584,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data)),64);
            tracep->chgQData(oldp+586,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data),64);
            tracep->chgQData(oldp+588,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc),64);
            tracep->chgBit(oldp+590,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready));
            tracep->chgQData(oldp+591,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data),64);
            tracep->chgBit(oldp+593,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid));
            tracep->chgBit(oldp+594,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready));
            tracep->chgCData(oldp+595,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
            tracep->chgCData(oldp+596,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
            tracep->chgBit(oldp+597,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+598,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+599,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
            tracep->chgBit(oldp+600,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 1U))));
            tracep->chgQData(oldp+601,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
            tracep->chgQData(oldp+603,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
            tracep->chgQData(oldp+605,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
            tracep->chgBit(oldp+607,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
            tracep->chgCData(oldp+608,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
            tracep->chgCData(oldp+609,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
            tracep->chgCData(oldp+610,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
            tracep->chgCData(oldp+611,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc))
                                         ? 2U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+612,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump)
                                         ? 2U : ((1U 
                                                  & (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xb3U 
                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                                   ? 1U
                                                   : 0U)))),3);
            tracep->chgQData(oldp+613,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
            tracep->chgQData(oldp+615,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
            tracep->chgQData(oldp+617,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+619,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
            tracep->chgBit(oldp+620,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready));
            tracep->chgBit(oldp+621,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready));
            tracep->chgBit(oldp+622,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
            tracep->chgBit(oldp+623,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read));
            tracep->chgBit(oldp+624,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read));
            tracep->chgBit(oldp+625,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read))));
            tracep->chgBit(oldp+626,((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                ? 2U
                                                : 1U))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid))));
            tracep->chgBit(oldp+627,(((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+628,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh));
            tracep->chgCData(oldp+629,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next),2);
            tracep->chgBit(oldp+630,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+631,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
            tracep->chgBit(oldp+632,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand));
            tracep->chgBit(oldp+633,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
            tracep->chgCData(oldp+634,(((6U == ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                         ? 8U : ((5U 
                                                  == 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)))
                                                  ? 4U
                                                  : 
                                                 ((4U 
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
            tracep->chgBit(oldp+635,(((7U == ((2U == 
                                               ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                               ? 0U
                                               : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size))) 
                                      & (((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                   ? 2U
                                                   : 1U)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we)) 
                                         & ((0xffU 
                                             == ((2U 
                                                  == 
                                                  ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                    ? 2U
                                                    : 1U))
                                                  ? 0U
                                                  : 1U)) 
                                            & ((3U 
                                                == 
                                                ((2U 
                                                  == 
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
            tracep->chgIData(oldp+636,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+637,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+638,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
            tracep->chgWData(oldp+639,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb),128);
            tracep->chgBit(oldp+643,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena));
            tracep->chgBit(oldp+644,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid));
            tracep->chgIData(oldp+645,((0x800000U | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag)),24);
            tracep->chgIData(oldp+646,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag),23);
            tracep->chgCData(oldp+647,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index),6);
            tracep->chgBit(oldp+648,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena)))));
            __Vtemp631[0U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]);
            __Vtemp631[1U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]);
            __Vtemp631[2U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]);
            __Vtemp631[3U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]);
            tracep->chgWData(oldp+649,(__Vtemp631),128);
            tracep->chgBit(oldp+653,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena));
            tracep->chgIData(oldp+654,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+655,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+656,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next),6);
            tracep->chgBit(oldp+657,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit));
            tracep->chgBit(oldp+658,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit));
            tracep->chgBit(oldp+659,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty));
            tracep->chgBit(oldp+660,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready));
            tracep->chgBit(oldp+661,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid));
            tracep->chgBit(oldp+662,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid));
            tracep->chgQData(oldp+663,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc),64);
            tracep->chgBit(oldp+665,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena));
            tracep->chgWData(oldp+666,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data),128);
            tracep->chgQData(oldp+670,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data),64);
            tracep->chgCData(oldp+672,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next),6);
            tracep->chgBit(oldp+673,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit));
            tracep->chgBit(oldp+674,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit));
            tracep->chgBit(oldp+675,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty));
            tracep->chgBit(oldp+676,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready));
            tracep->chgBit(oldp+677,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid));
            tracep->chgWData(oldp+678,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb),128);
            tracep->chgQData(oldp+682,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64),64);
            tracep->chgBit(oldp+684,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid));
            tracep->chgQData(oldp+685,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc),64);
            tracep->chgBit(oldp+687,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena));
            tracep->chgWData(oldp+688,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data),128);
            tracep->chgQData(oldp+692,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data),64);
            tracep->chgIData(oldp+694,((0x800000U | 
                                        (0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                    >> 9U))))),24);
            tracep->chgBit(oldp+695,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
            tracep->chgBit(oldp+696,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+697,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward));
            tracep->chgBit(oldp+698,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward));
            tracep->chgBit(oldp+699,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward));
            tracep->chgBit(oldp+700,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward));
            tracep->chgBit(oldp+701,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward));
            tracep->chgBit(oldp+702,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward));
            tracep->chgBit(oldp+703,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward))));
            tracep->chgBit(oldp+704,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward))));
            tracep->chgBit(oldp+705,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
                                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2)))))))))));
            tracep->chgQData(oldp+706,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+708,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
            tracep->chgCData(oldp+709,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+710,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+711,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+712,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+713,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+714,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+715,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+716,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+717,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+718,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+719,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+720,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+721,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+722,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+723,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+724,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+725,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+726,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+727,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+728,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+729,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+730,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+731,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+732,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+733,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+734,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+735,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+736,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+737,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+738,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+739,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+740,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+741,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+742,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+743,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+744,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+745,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+746,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+747,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+748,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+749,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+750,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+751,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+752,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+753,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+754,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+755,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+756,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+757,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+758,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+759,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+760,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+761,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+762,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+763,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+764,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+765,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+766,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+767,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+768,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+769,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+770,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+771,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+772,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+773,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+774,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump));
            tracep->chgBit(oldp+775,((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb3U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
            tracep->chgQData(oldp+776,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
            tracep->chgQData(oldp+778,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
            tracep->chgQData(oldp+780,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
            tracep->chgQData(oldp+782,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
            tracep->chgCData(oldp+784,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
            tracep->chgSData(oldp+785,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
            tracep->chgBit(oldp+786,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid));
            tracep->chgBit(oldp+787,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready))));
            tracep->chgBit(oldp+788,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready))));
            tracep->chgBit(oldp+789,((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
            tracep->chgBit(oldp+790,((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
            tracep->chgBit(oldp+791,((0x2004000ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
            tracep->chgBit(oldp+792,((0x2004000ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
            tracep->chgQData(oldp+793,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask),64);
        }
        tracep->chgBit(oldp+795,(vlSelf->clk));
        tracep->chgBit(oldp+796,(vlSelf->rst));
        tracep->chgBit(oldp+797,(((~ (IData)(vlSelf->rst)) 
                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                        >> 0xbU)))));
        tracep->chgQData(oldp+798,((((IData)(vlSelf->rst) 
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
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                    : 4ULL)))))),64);
        tracep->chgIData(oldp+800,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->chgQData(oldp+801,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->chgQData(oldp+803,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                     : 0ULL)),64);
        tracep->chgQData(oldp+805,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                     : 0ULL)),64);
        tracep->chgBit(oldp+807,(((IData)(vlSelf->rst)
                                   ? 0U : (IData)((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))));
        tracep->chgQData(oldp+808,((((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+810,((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
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
        tracep->chgBit(oldp+812,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+813,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgQData(oldp+814,(((IData)(vlSelf->rst)
                                     ? 0ULL : (0xfffffffffffffff8ULL 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->chgQData(oldp+816,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->chgCData(oldp+818,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+819,(((IData)(vlSelf->rst)
                                     ? 0U : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 1U))))
                                              ? 3U : 
                                             ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                           >> 1U))))
                                               ? 0xcU
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                               >> 1U))))
                                                   ? 0x30U
                                                   : 0xc0U))))),8);
        tracep->chgCData(oldp+820,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgQData(oldp+821,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                           >> 2U)))
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (1U 
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
        tracep->chgQData(oldp+823,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))),64);
        tracep->chgQData(oldp+825,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 1U))))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))
                                                : (
                                                   (1U 
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
    }
}

void Vysyx_22051013_rvcpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22051013_rvcpu___024root* const __restrict vlSelf = static_cast<Vysyx_22051013_rvcpu___024root*>(voidSelf);
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
