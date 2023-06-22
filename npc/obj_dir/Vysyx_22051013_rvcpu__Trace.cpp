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
    VlWide<5>/*159:0*/ __Vtemp521;
    VlWide<5>/*159:0*/ __Vtemp522;
    VlWide<4>/*127:0*/ __Vtemp525;
    VlWide<3>/*95:0*/ __Vtemp527;
    VlWide<3>/*95:0*/ __Vtemp529;
    VlWide<3>/*95:0*/ __Vtemp531;
    VlWide<3>/*95:0*/ __Vtemp533;
    VlWide<3>/*95:0*/ __Vtemp534;
    VlWide<4>/*127:0*/ __Vtemp549;
    VlWide<4>/*127:0*/ __Vtemp555;
    VlWide<4>/*127:0*/ __Vtemp574;
    VlWide<4>/*127:0*/ __Vtemp615;
    VlWide<4>/*127:0*/ __Vtemp628;
    VlWide<4>/*127:0*/ __Vtemp669;
    VlWide<4>/*127:0*/ __Vtemp670;
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
            tracep->chgBit(oldp+9,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok)))));
            tracep->chgBit(oldp+10,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei));
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
            tracep->chgBit(oldp+13,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc),64);
            tracep->chgIData(oldp+16,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
            tracep->chgBit(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
            tracep->chgIData(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel),2);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel),3);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr),5);
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
            tracep->chgBit(oldp+38,((0xc1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))));
            tracep->chgIData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
            tracep->chgCData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
            tracep->chgCData(oldp+46,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
            tracep->chgCData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
            tracep->chgCData(oldp+48,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl),7);
            tracep->chgSData(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr),12);
            tracep->chgCData(oldp+50,(((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
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
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl),7);
            tracep->chgSData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr),12);
            tracep->chgIData(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
            tracep->chgBit(oldp+61,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
            tracep->chgCData(oldp+62,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
            tracep->chgBit(oldp+65,(((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena))));
            tracep->chgCData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr),5);
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel));
            tracep->chgQData(oldp+68,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
                                        : 0ULL)),64);
            tracep->chgBit(oldp+70,((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime 
                                     > vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)));
            tracep->chgCData(oldp+71,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state),3);
            tracep->chgCData(oldp+72,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state),3);
            tracep->chgCData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state),2);
            tracep->chgCData(oldp+74,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state),2);
            tracep->chgCData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state),2);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data),64);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2));
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index),6);
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag),23);
            tracep->chgCData(oldp+82,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__fencei_index),7);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state),4);
            tracep->chgBit(oldp+84,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1));
            tracep->chgIData(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data),23);
            tracep->chgBit(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data),23);
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
            tracep->chgWData(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data),128);
            tracep->chgIData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__i),32);
            tracep->chgBit(oldp+94,((1U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
            tracep->chgCData(oldp+95,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state),6);
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update));
            tracep->chgBit(oldp+97,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr));
            tracep->chgCData(oldp+98,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state),6);
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update));
            tracep->chgBit(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw));
            tracep->chgCData(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state),6);
            tracep->chgCData(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index),8);
            tracep->chgBit(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirty_hit));
            tracep->chgBit(oldp+104,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1));
            tracep->chgBit(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way2));
            tracep->chgQData(oldp+106,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1)
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
                                             : 0ULL))),64);
            tracep->chgQData(oldp+108,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1)
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
            tracep->chgBit(oldp+110,((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)) 
                                      & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                            >> 6U)))));
            tracep->chgBit(oldp+111,((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                         >> 6U))));
            tracep->chgBit(oldp+112,(((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                      & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)))));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf));
            tracep->chgIData(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__i),32);
            tracep->chgIData(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__j),32);
            tracep->chgIData(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data),23);
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
            tracep->chgIData(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data),23);
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
            tracep->chgWData(oldp+120,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data),128);
            tracep->chgCData(oldp+124,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+125,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+126,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+127,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
            tracep->chgCData(oldp+128,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+129,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0x19U)),7);
            tracep->chgSData(oldp+130,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
            tracep->chgIData(oldp+132,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
            tracep->chgSData(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_fencei));
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+146,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
            tracep->chgBit(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
            tracep->chgIData(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
            tracep->chgIData(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
            tracep->chgIData(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
            tracep->chgBit(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1));
            tracep->chgBit(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid));
            tracep->chgBit(oldp+162,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                         | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                                        | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))))));
            tracep->chgQData(oldp+163,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[2U])))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp),64);
            tracep->chgBit(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid));
            tracep->chgBit(oldp+171,((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt))));
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp),64);
            tracep->chgQData(oldp+174,((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr))),64);
            tracep->chgBit(oldp+176,((((0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                       | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
                                      | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))));
            tracep->chgBit(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg));
            tracep->chgBit(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg));
            tracep->chgBit(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing));
            tracep->chgWData(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand),132);
            tracep->chgWData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier),67);
            tracep->chgCData(oldp+188,((7U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])),3);
            tracep->chgBit(oldp+189,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative))));
            if (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative) {
                __Vtemp521[1U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                                   << 1U)));
                __Vtemp521[2U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                                   << 1U)));
                __Vtemp521[3U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[2U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                                   << 1U)));
                __Vtemp521[4U] = (~ ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[3U] 
                                      >> 0x1fU) | (0xeU 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[4U] 
                                                      << 1U))));
                __Vtemp522[0U] = (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand[0U] 
                                     << 1U));
            } else {
                __Vtemp521[1U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
                __Vtemp521[2U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
                __Vtemp521[3U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
                __Vtemp521[4U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
                __Vtemp522[0U] = ((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
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
            __Vtemp522[1U] = __Vtemp521[1U];
            __Vtemp522[2U] = __Vtemp521[2U];
            __Vtemp522[3U] = __Vtemp521[3U];
            __Vtemp522[4U] = (0xfU & __Vtemp521[4U]);
            tracep->chgWData(oldp+190,(__Vtemp522),132);
            tracep->chgWData(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp),132);
            tracep->chgBit(oldp+200,((0xfU == (0xfU 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[4U]))));
            tracep->chgBit(oldp+201,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+202,((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+203,((1U & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
            tracep->chgBit(oldp+204,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative));
            tracep->chgBit(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative));
            tracep->chgBit(oldp+206,((1U & ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))))));
            tracep->chgBit(oldp+207,((1U & (((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
            tracep->chgBit(oldp+208,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing));
            tracep->chgWData(oldp+209,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend),128);
            tracep->chgCData(oldp+213,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt),7);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q),64);
            tracep->chgBit(oldp+216,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_exls5__DOT__flush));
            tracep->chgBit(oldp+217,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok));
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i),64);
            tracep->chgCData(oldp+220,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
            tracep->chgCData(oldp+221,((3U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+222,((1U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                    >> 2U)))));
            tracep->chgIData(oldp+223,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data),64);
            tracep->chgQData(oldp+226,((((((- (QData)((IData)(
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
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data),64);
            tracep->chgQData(oldp+230,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                                         ? 0xbULL : 
                                        ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
                                          ? 0x8000000000000007ULL
                                          : 0ULL))),64);
            tracep->chgQData(oldp+232,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                        | vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata)),64);
            tracep->chgQData(oldp+234,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata))),64);
            tracep->chgBit(oldp+236,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump));
            tracep->chgBit(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__delay));
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_delay),64);
            tracep->chgBit(oldp+240,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
            tracep->chgCData(oldp+241,((0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))),4);
            tracep->chgBit(oldp+242,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+243,(((0xb00U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle),64);
            tracep->chgBit(oldp+246,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+247,(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgBit(oldp+248,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie));
            tracep->chgQData(oldp+249,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+251,(((0x344U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+252,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip));
            tracep->chgQData(oldp+253,(((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                        << 7U)),64);
            tracep->chgBit(oldp+255,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+256,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+257,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+258,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+259,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgBit(oldp+262,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+263,((1U & ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
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
            tracep->chgBit(oldp+264,((1U & ((1U & (
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
            tracep->chgCData(oldp+265,(((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
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
            tracep->chgBit(oldp+266,((1U & ((((0x305U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
            tracep->chgBit(oldp+267,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+270,((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+272,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 2U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))));
            tracep->chgBit(oldp+273,((1U & ((((0x341U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 3U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))));
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc),64);
            tracep->chgBit(oldp+276,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+277,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
            tracep->chgQData(oldp+330,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
            tracep->chgQData(oldp+334,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
            tracep->chgQData(oldp+336,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
            tracep->chgCData(oldp+344,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state),2);
            tracep->chgCData(oldp+345,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state),2);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+350,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                       ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                       : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
            tracep->chgCData(oldp+351,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
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
            tracep->chgBit(oldp+352,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                       ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                       : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
            tracep->chgBit(oldp+353,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
            tracep->chgCData(oldp+354,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                             ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         : 0U)),5);
            tracep->chgBit(oldp+355,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
            tracep->chgCData(oldp+356,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                         ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                             : 0U) : 0U)),5);
            tracep->chgQData(oldp+357,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                         ? ((0x200bff8ULL 
                                             == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                             : ((0x2004000ULL 
                                                 == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                                 : 0ULL))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+359,((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+361,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                       : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                           : ((0x20U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena))))));
            tracep->chgBit(oldp+362,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                             ? (1U 
                                                != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state_next))
                                             : ((4U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                                 ? 
                                                (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we))))))));
            tracep->chgBit(oldp+363,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                                       : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                          & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
            tracep->chgBit(oldp+364,(((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state))
                                       ? ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)))
                                       : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                                           : ((0x21U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena))))));
            tracep->chgQData(oldp+365,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                         ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way1)
                                             ? (((QData)((IData)(
                                                                 vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_way2)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U])))
                                                 : 0ULL))
                                         : ((0x10U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                                             : ((0x21U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+367,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                         ? (((0x42U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                              ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                              : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc) 
                                            + ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                                ? 4ULL
                                                : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+369,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgCData(oldp+370,(((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_fencei))
                                         ? 2U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+371,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_fencei))
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
            tracep->chgSData(oldp+372,(((0U != (0xfU 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)))
                                         ? (0xfffU 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                         : 0U)),12);
            tracep->chgBit(oldp+373,((((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                        ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                        : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
                                      & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)))));
            tracep->chgBit(oldp+374,(((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))));
            tracep->chgIData(oldp+375,((0x7fffffU & 
                                        (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready)))
                                          ? (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                     >> 9U))
                                          : vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag))),23);
            tracep->chgBit(oldp+376,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei) 
                                      | ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                         & (0U == (
                                                   (((~ 
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]) 
                                                     | (~ 
                                                        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U])) 
                                                    | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]) 
                                                   | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]))))));
            tracep->chgBit(oldp+377,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei) 
                                      | ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                         & (0U == (
                                                   ((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
                                                     | vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]) 
                                                    | (~ 
                                                       vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U])) 
                                                   | (~ 
                                                      vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U])))))));
            tracep->chgBit(oldp+378,(((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))] 
                                       & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                          >> 3U)))]) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))));
            tracep->chgBit(oldp+379,(((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                       : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                           : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))))));
            tracep->chgBit(oldp+380,((1U & (~ ((8U 
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
            tracep->chgQData(oldp+381,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+383,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+385,(((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
            tracep->chgQData(oldp+387,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                         ? 4ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)),64);
            tracep->chgBit(oldp+389,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+390,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+391,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+392,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+393,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+394,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+395,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+396,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgQData(oldp+397,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo
                                         : 0ULL)),64);
            tracep->chgQData(oldp+399,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem
                                         : 0ULL)),64);
            tracep->chgQData(oldp+401,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                                         : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                                             : 0ULL))),64);
            tracep->chgQData(oldp+403,(((((QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                          << 0x21U) 
                                         | (((QData)((IData)(
                                                             vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                               >> 0x1fU))) 
                                        - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs)),64);
            tracep->chgBit(oldp+405,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                      & (2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U)))));
            tracep->chgBit(oldp+406,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                                      & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                         & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))));
            tracep->chgBit(oldp+407,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                      & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))));
            tracep->chgQData(oldp+408,(((0x200bff8ULL 
                                         == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                                         : ((0x2004000ULL 
                                             == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                                             : 0ULL))),64);
            tracep->chgQData(oldp+410,(((0x200bff8ULL 
                                         == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                         ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                            | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))
                                         : (1ULL + vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))),64);
            tracep->chgQData(oldp+412,(((0x2004000ULL 
                                         == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
                                         ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
                                            | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp))
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+414,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                         ? 2U : 1U)),5);
            tracep->chgQData(oldp+415,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc),64);
            tracep->chgBit(oldp+417,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
            tracep->chgBit(oldp+418,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                       : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
            tracep->chgCData(oldp+419,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size),3);
            tracep->chgQData(oldp+420,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o),64);
            tracep->chgCData(oldp+422,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask),8);
            tracep->chgBit(oldp+423,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
            tracep->chgBit(oldp+424,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
            tracep->chgBit(oldp+425,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U))
                                       ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                       : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
            tracep->chgCData(oldp+426,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
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
            tracep->chgBit(oldp+427,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid));
            tracep->chgCData(oldp+428,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id),5);
            tracep->chgQData(oldp+429,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+431,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size),3);
            tracep->chgQData(oldp+432,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data),64);
            tracep->chgCData(oldp+434,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                  ? 2U
                                                  : 1U))),5);
            tracep->chgQData(oldp+435,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc)),64);
            tracep->chgBit(oldp+437,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid));
            tracep->chgBit(oldp+438,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready));
            tracep->chgCData(oldp+439,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : 1U)),8);
            tracep->chgCData(oldp+440,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size))),3);
            tracep->chgCData(oldp+441,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : 1U)),2);
            tracep->chgQData(oldp+442,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o)),64);
            tracep->chgCData(oldp+444,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask))),8);
            tracep->chgBit(oldp+445,(((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+446,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
            tracep->chgBit(oldp+447,(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready));
            tracep->chgBit(oldp+448,((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))));
            tracep->chgCData(oldp+449,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))),5);
            tracep->chgQData(oldp+450,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr)),64);
            tracep->chgCData(oldp+452,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : 1U)),8);
            tracep->chgCData(oldp+453,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size))),3);
            tracep->chgCData(oldp+454,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 0U : 1U)),2);
            tracep->chgBit(oldp+455,((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
            tracep->chgCData(oldp+456,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                             ? 2U : 1U)
                                         : 0U)),5);
            tracep->chgQData(oldp+457,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr),64);
            tracep->chgBit(oldp+459,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid));
            tracep->chgBit(oldp+460,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready));
            tracep->chgCData(oldp+461,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 1U : 0U)),8);
            tracep->chgCData(oldp+462,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size)
                                         : 0U)),3);
            tracep->chgCData(oldp+463,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? 1U : 0U)),2);
            tracep->chgQData(oldp+464,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data),64);
            tracep->chgCData(oldp+466,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb),8);
            tracep->chgBit(oldp+467,(((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                               ? 2U
                                               : 1U)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+468,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
            tracep->chgBit(oldp+469,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready));
            tracep->chgBit(oldp+470,((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U))));
            tracep->chgCData(oldp+471,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)
                                         : 0U)),5);
            tracep->chgQData(oldp+472,(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr),64);
            tracep->chgCData(oldp+474,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 1U : 0U)),8);
            tracep->chgCData(oldp+475,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size)
                                         : 0U)),3);
            tracep->chgCData(oldp+476,(((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
                                         ? 1U : 0U)),2);
            tracep->chgBit(oldp+477,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))));
            tracep->chgBit(oldp+478,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid));
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc),64);
            tracep->chgBit(oldp+481,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena));
            tracep->chgBit(oldp+482,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid));
            tracep->chgIData(oldp+483,(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst),32);
            tracep->chgQData(oldp+484,(vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc),64);
            tracep->chgBit(oldp+486,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
            tracep->chgBit(oldp+487,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
            tracep->chgCData(oldp+488,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask),8);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc),64);
            tracep->chgQData(oldp+491,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data)),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data),64);
            tracep->chgBit(oldp+495,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid));
            tracep->chgBit(oldp+496,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint));
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i),64);
            tracep->chgBit(oldp+499,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
            tracep->chgBit(oldp+500,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
            tracep->chgBit(oldp+501,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
            tracep->chgCData(oldp+502,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask),8);
            tracep->chgQData(oldp+503,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                         ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data)),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc),64);
            tracep->chgBit(oldp+509,(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready));
            tracep->chgQData(oldp+510,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data),64);
            tracep->chgBit(oldp+512,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid));
            tracep->chgBit(oldp+513,(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready));
            tracep->chgCData(oldp+514,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
            tracep->chgCData(oldp+515,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
            tracep->chgBit(oldp+516,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+517,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+518,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
            tracep->chgBit(oldp+519,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 1U))));
            tracep->chgQData(oldp+520,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
            tracep->chgQData(oldp+522,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
            tracep->chgQData(oldp+524,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
            tracep->chgBit(oldp+526,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
            tracep->chgCData(oldp+527,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
            tracep->chgCData(oldp+528,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
            tracep->chgCData(oldp+529,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
            tracep->chgQData(oldp+530,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
            tracep->chgCData(oldp+532,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl),7);
            tracep->chgQData(oldp+533,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
            tracep->chgQData(oldp+535,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+537,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)))));
            tracep->chgBit(oldp+538,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid));
            tracep->chgBit(oldp+539,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
            tracep->chgBit(oldp+540,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready));
            tracep->chgBit(oldp+541,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready));
            tracep->chgBit(oldp+542,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
            tracep->chgBit(oldp+543,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read));
            tracep->chgBit(oldp+544,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read));
            tracep->chgBit(oldp+545,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read))));
            tracep->chgBit(oldp+546,((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                ? 2U
                                                : 1U))
                                        ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)
                                        : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid))));
            tracep->chgBit(oldp+547,(((((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                                 ? 2U
                                                 : 1U))
                                         ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)
                                         : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))));
            tracep->chgBit(oldp+548,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh));
            tracep->chgCData(oldp+549,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next),2);
            tracep->chgBit(oldp+550,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready))));
            tracep->chgBit(oldp+551,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready))));
            tracep->chgBit(oldp+552,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand));
            tracep->chgBit(oldp+553,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
            tracep->chgCData(oldp+554,(((6U == ((2U 
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
            tracep->chgBit(oldp+555,(((7U == ((2U == 
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
            tracep->chgIData(oldp+556,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+557,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+558,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
            tracep->chgBit(oldp+559,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__inst_valid));
            tracep->chgWData(oldp+560,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__miss_data),128);
            tracep->chgWData(oldp+564,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb),128);
            tracep->chgBit(oldp+568,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena));
            tracep->chgBit(oldp+569,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid));
            tracep->chgIData(oldp+570,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_with_valid),24);
            tracep->chgCData(oldp+571,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index),6);
            tracep->chgBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena)))));
            __Vtemp525[0U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U]);
            __Vtemp525[1U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U]);
            __Vtemp525[2U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U]);
            __Vtemp525[3U] = (~ vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U]);
            tracep->chgWData(oldp+573,(__Vtemp525),128);
            tracep->chgBit(oldp+577,(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena));
            tracep->chgIData(oldp+578,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+579,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+580,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next),6);
            tracep->chgBit(oldp+581,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit));
            tracep->chgBit(oldp+582,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit));
            tracep->chgBit(oldp+583,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty));
            tracep->chgBit(oldp+584,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready));
            tracep->chgBit(oldp+585,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid));
            tracep->chgBit(oldp+586,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid));
            tracep->chgQData(oldp+587,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc),64);
            tracep->chgBit(oldp+589,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena));
            tracep->chgWData(oldp+590,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data),128);
            tracep->chgBit(oldp+594,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid));
            tracep->chgBit(oldp+595,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena));
            tracep->chgQData(oldp+596,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data),64);
            tracep->chgCData(oldp+598,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next),6);
            tracep->chgBit(oldp+599,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit));
            tracep->chgBit(oldp+600,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit));
            tracep->chgBit(oldp+601,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty));
            tracep->chgBit(oldp+602,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready));
            tracep->chgBit(oldp+603,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid));
            tracep->chgWData(oldp+604,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb),128);
            tracep->chgQData(oldp+608,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64),64);
            tracep->chgBit(oldp+610,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid));
            tracep->chgQData(oldp+611,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc),64);
            tracep->chgBit(oldp+613,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena));
            tracep->chgWData(oldp+614,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data),128);
            tracep->chgBit(oldp+618,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid));
            tracep->chgBit(oldp+619,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena));
            tracep->chgQData(oldp+620,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data),64);
            tracep->chgCData(oldp+622,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state_next),6);
            tracep->chgIData(oldp+623,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_with_valid),24);
            tracep->chgCData(oldp+624,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_index),6);
            tracep->chgCData(oldp+625,(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__ram_index),6);
            tracep->chgIData(oldp+626,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
            tracep->chgSData(oldp+627,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
            tracep->chgCData(oldp+628,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)),7);
            tracep->chgBit(oldp+629,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
            tracep->chgBit(oldp+630,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_ifid1__DOT__flush));
            tracep->chgBit(oldp+631,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_ifid1__DOT__stall));
            tracep->chgBit(oldp+632,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+633,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward));
            tracep->chgBit(oldp+634,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward));
            tracep->chgBit(oldp+635,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward));
            tracep->chgBit(oldp+636,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward));
            tracep->chgBit(oldp+637,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward));
            tracep->chgBit(oldp+638,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward));
            tracep->chgBit(oldp+639,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward))));
            tracep->chgBit(oldp+640,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward))));
            tracep->chgQData(oldp+641,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+643,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
            tracep->chgCData(oldp+644,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+645,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+646,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+647,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+648,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+649,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+650,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+651,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+652,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+653,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+654,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+655,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+656,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+657,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+658,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+659,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+660,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+661,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+662,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+663,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+664,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+665,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+666,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+667,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+668,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+669,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+670,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+671,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+672,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+673,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+674,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+675,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+676,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+677,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+678,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+679,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+680,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+681,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+682,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+683,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+684,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+685,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+686,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+687,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+688,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+689,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+690,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+691,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+692,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+693,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+694,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+695,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+696,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+697,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+698,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+699,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+700,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+701,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+702,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+703,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+704,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+705,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+706,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+707,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+708,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+709,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump));
            tracep->chgBit(oldp+710,((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb3U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
            tracep->chgBit(oldp+711,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_idex3__DOT__flush));
            tracep->chgBit(oldp+712,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_idex3__DOT__stall));
            tracep->chgQData(oldp+713,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
            tracep->chgBit(oldp+715,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul));
            tracep->chgCData(oldp+716,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed),2);
            tracep->chgBit(oldp+717,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw));
            tracep->chgBit(oldp+718,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid));
            tracep->chgBit(oldp+719,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div));
            tracep->chgBit(oldp+720,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed));
            tracep->chgBit(oldp+721,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw));
            tracep->chgBit(oldp+722,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid));
            tracep->chgQData(oldp+723,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res),64);
            tracep->chgBit(oldp+725,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena));
            tracep->chgBit(oldp+726,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena));
            tracep->chgBit(oldp+727,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena));
            tracep->chgBit(oldp+728,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena));
            tracep->chgBit(oldp+729,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena));
            tracep->chgBit(oldp+730,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena));
            tracep->chgBit(oldp+731,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena));
            tracep->chgBit(oldp+732,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall));
            tracep->chgBit(oldp+733,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
            tracep->chgBit(oldp+734,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div))));
            tracep->chgQData(oldp+735,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp),64);
            tracep->chgQData(oldp+737,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp),64);
            VL_EXTEND_WQ(66,64, __Vtemp527, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
            if ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
                __Vtemp529[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp);
                __Vtemp529[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                          >> 0x20U));
                __Vtemp529[2U] = (3U & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
                                                              >> 0x3fU))))));
            } else {
                __Vtemp529[0U] = __Vtemp527[0U];
                __Vtemp529[1U] = __Vtemp527[1U];
                __Vtemp529[2U] = __Vtemp527[2U];
            }
            tracep->chgWData(oldp+739,(__Vtemp529),66);
            VL_EXTEND_WQ(66,64, __Vtemp531, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
            if ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed))) {
                __Vtemp533[0U] = (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp);
                __Vtemp533[1U] = (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                          >> 0x20U));
                __Vtemp533[2U] = (3U & (- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
                                                              >> 0x3fU))))));
            } else {
                __Vtemp533[0U] = __Vtemp531[0U];
                __Vtemp533[1U] = __Vtemp531[1U];
                __Vtemp533[2U] = __Vtemp531[2U];
            }
            tracep->chgWData(oldp+742,(__Vtemp533),66);
            tracep->chgQData(oldp+745,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp),64);
            tracep->chgQData(oldp+747,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp),64);
            tracep->chgBit(oldp+749,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign));
            tracep->chgBit(oldp+750,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign));
            tracep->chgQData(oldp+751,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp))
                                         : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp)),64);
            tracep->chgQData(oldp+753,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs),64);
            VL_EXTEND_WQ(65,64, __Vtemp534, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
            tracep->chgWData(oldp+755,(__Vtemp534),65);
            tracep->chgBit(oldp+758,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign));
            tracep->chgQData(oldp+759,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo),64);
            tracep->chgQData(oldp+761,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem),64);
            tracep->chgBit(oldp+763,(vlSelf->ysyx_22051013_rvcpu__DOT__reg_exls5__DOT__stall));
            tracep->chgQData(oldp+764,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
            tracep->chgCData(oldp+766,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
            tracep->chgSData(oldp+767,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
            tracep->chgBit(oldp+768,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid));
            tracep->chgBit(oldp+769,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready))));
            tracep->chgBit(oldp+770,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready))));
            tracep->chgBit(oldp+771,((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
            tracep->chgBit(oldp+772,((0x200bff8ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
            tracep->chgBit(oldp+773,((0x2004000ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)));
            tracep->chgBit(oldp+774,((0x2004000ULL 
                                      == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)));
            tracep->chgQData(oldp+775,(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask),64);
        }
        tracep->chgBit(oldp+777,(vlSelf->clk));
        tracep->chgBit(oldp+778,(vlSelf->rst));
        tracep->chgQData(oldp+779,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
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
        tracep->chgBit(oldp+781,(((~ (IData)(vlSelf->rst)) 
                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                        >> 0xbU)))));
        tracep->chgQData(oldp+782,((((IData)(vlSelf->rst) 
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
        tracep->chgIData(oldp+784,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->chgQData(oldp+785,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->chgQData(oldp+787,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                     : 0ULL)),64);
        tracep->chgQData(oldp+789,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                     : 0ULL)),64);
        tracep->chgCData(oldp+791,(((IData)(vlSelf->rst)
                                     ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                              ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
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
        tracep->chgCData(oldp+792,(((IData)(vlSelf->rst)
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
        tracep->chgBit(oldp+793,(((~ (IData)(vlSelf->rst)) 
                                  & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready)))));
        tracep->chgBit(oldp+794,(((~ (IData)(vlSelf->rst)) 
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
        tracep->chgBit(oldp+795,(((~ (IData)(vlSelf->rst)) 
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
            __Vtemp549[0U] = 0U;
            __Vtemp549[1U] = 0U;
            __Vtemp549[2U] = 0U;
            __Vtemp549[3U] = 0U;
        } else {
            __Vtemp549[0U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp549[1U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp549[2U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp549[3U] = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
        tracep->chgWData(oldp+796,(__Vtemp549),128);
        tracep->chgQData(oldp+800,(((IData)(vlSelf->rst)
                                     ? 0ULL : (((0x10U 
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
                                                : 0ULL))),64);
        tracep->chgBit(oldp+802,(((~ (IData)(vlSelf->rst)) 
                                  & ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready)))));
        if (vlSelf->rst) {
            __Vtemp555[0U] = 0U;
            __Vtemp555[1U] = 0U;
            __Vtemp555[2U] = 0U;
            __Vtemp555[3U] = 0U;
        } else {
            __Vtemp555[0U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                               : 0U);
            __Vtemp555[1U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                          >> 0x20U))
                               : 0U);
            __Vtemp555[2U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                           ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data))
                               : 0U);
            __Vtemp555[3U] = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                               ? (IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data) 
                                          >> 0x20U))
                               : 0U);
        }
        tracep->chgWData(oldp+803,(__Vtemp555),128);
        tracep->chgBit(oldp+807,(((~ (IData)(vlSelf->rst)) 
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
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                              >> 3U)))]))))))));
        tracep->chgBit(oldp+808,(((~ (IData)(vlSelf->rst)) 
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
            __Vtemp574[0U] = 0U;
            __Vtemp574[1U] = 0U;
            __Vtemp574[2U] = 0U;
            __Vtemp574[3U] = 0U;
        } else {
            __Vtemp574[0U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            __Vtemp574[1U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            __Vtemp574[2U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
            __Vtemp574[3U] = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
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
        tracep->chgWData(oldp+809,(__Vtemp574),128);
        tracep->chgQData(oldp+813,(((IData)(vlSelf->rst)
                                     ? 0ULL : (((0x21U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
                                                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
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
        tracep->chgBit(oldp+815,(((~ (IData)(vlSelf->rst)) 
                                  & ((~ ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)))) 
                                     & ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf))))));
        tracep->chgBit(oldp+816,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
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
        tracep->chgBit(oldp+817,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_fencei)
                                   ? (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_state)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayf)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__fencei_index) 
                                         >> 6U)) : 
                                  ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                    ? ((~ (IData)(vlSelf->rst)) 
                                       & ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
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
            __Vtemp615[0U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp615[1U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp615[2U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp615[3U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp615[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp615[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp615[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp615[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
        tracep->chgWData(oldp+818,(__Vtemp615),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp628[0U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U];
            __Vtemp628[1U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U];
            __Vtemp628[2U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U];
            __Vtemp628[3U] = vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U];
        } else {
            __Vtemp628[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp628[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp628[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp628[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
        tracep->chgWData(oldp+822,(__Vtemp628),128);
        if ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
            __Vtemp669[0U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp669[1U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp669[2U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp669[3U] = ((IData)(vlSelf->rst) ? 0U
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
            __Vtemp669[0U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp669[1U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp669[2U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
            __Vtemp669[3U] = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
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
        __Vtemp670[0U] = (~ __Vtemp669[0U]);
        __Vtemp670[1U] = (~ __Vtemp669[1U]);
        __Vtemp670[2U] = (~ __Vtemp669[2U]);
        __Vtemp670[3U] = (~ __Vtemp669[3U]);
        tracep->chgWData(oldp+826,(__Vtemp670),128);
        tracep->chgBit(oldp+830,(((IData)(vlSelf->rst)
                                   ? 0U : (IData)((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))));
        tracep->chgQData(oldp+831,((((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+833,((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
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
        tracep->chgBit(oldp+835,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+836,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+837,(((~ (IData)(vlSelf->rst)) 
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
        tracep->chgQData(oldp+838,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
                                                ? (
                                                   (0x58U 
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
        tracep->chgQData(oldp+840,(((IData)(vlSelf->rst)
                                     ? 0ULL : (0xfffffffffffffff8ULL 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->chgQData(oldp+842,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->chgCData(oldp+844,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+845,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+846,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
        tracep->chgQData(oldp+847,(((IData)(vlSelf->rst)
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
        tracep->chgQData(oldp+849,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                           >> 2U)))
                                                ? ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                   << 0x20U)
                                                : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))),64);
        tracep->chgQData(oldp+851,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+853,(((IData)(vlSelf->rst)
                                     ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                                              ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
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
        tracep->chgCData(oldp+854,(((IData)(vlSelf->rst)
                                     ? 1U : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                                              ? (((1U 
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
