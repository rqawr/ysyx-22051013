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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_cache_inst),64);
            tracep->chgBit(oldp+3,(vlSelf->ysyx_22051013_rvcpu__DOT__data_not_ready));
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_read_data),64);
            tracep->chgBit(oldp+6,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))));
            tracep->chgBit(oldp+7,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                    & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))));
            tracep->chgBit(oldp+8,((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
            tracep->chgCData(oldp+9,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                       ? 1U : ((2U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                                ? 2U
                                                : 0U))),5);
            tracep->chgBit(oldp+10,((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
            tracep->chgCData(oldp+11,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_id),5);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data),64);
            tracep->chgBit(oldp+14,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
            tracep->chgQData(oldp+15,((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                                        ? (0xfffffffffffffff8ULL 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)
                                        : 0ULL)),64);
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22051013_rvcpu__DOT__cache_axi_ena));
            tracep->chgBit(oldp+18,(vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_valid));
            tracep->chgIData(oldp+19,(vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst),32);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc),64);
            tracep->chgIData(oldp+22,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst),32);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc),64);
            tracep->chgBit(oldp+25,(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump));
            tracep->chgIData(oldp+26,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst),32);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm),64);
            tracep->chgBit(oldp+35,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena));
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr),5);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl),4);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl),2);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl),4);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel),8);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena));
            tracep->chgIData(oldp+42,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst),32);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data),64);
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena));
            tracep->chgCData(oldp+50,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr),5);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl),4);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl),2);
            tracep->chgBit(oldp+53,(vlSelf->ysyx_22051013_rvcpu__DOT__data_ok));
            tracep->chgIData(oldp+54,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst),32);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc),64);
            tracep->chgCData(oldp+57,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl),2);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata),64);
            tracep->chgBit(oldp+62,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena));
            tracep->chgCData(oldp+63,(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr),5);
            tracep->chgBit(oldp+64,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_valid)))));
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid));
            tracep->chgCData(oldp+66,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state),3);
            tracep->chgBit(oldp+67,((3U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))));
            tracep->chgBit(oldp+68,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand));
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__data_temp),64);
            tracep->chgBit(oldp+71,((1U & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand)))));
            tracep->chgBit(oldp+72,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                     & ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                        & (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))))));
            tracep->chgCData(oldp+73,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state),2);
            tracep->chgCData(oldp+74,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                        ? ((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                             & ((1U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                                & (1U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))) 
                                            & ((1U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                               & ((1U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))))
                                            ? 3U : 1U)
                                        : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                            ? ((3U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                                                ? 1U
                                                : 3U)
                                            : 1U))),2);
            tracep->chgCData(oldp+75,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state),2);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data),64);
            tracep->chgIData(oldp+78,((0xffffffU & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                            >> 8U)))),24);
            tracep->chgCData(oldp+79,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                        >> 3U)))),5);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state),4);
            tracep->chgBit(oldp+81,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update));
            tracep->chgBit(oldp+82,((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))));
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__miss_data),64);
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_ena));
            tracep->chgBit(oldp+86,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_ena));
            tracep->chgBit(oldp+87,(((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
                                     & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))));
            tracep->chgIData(oldp+88,((0x1000000U | 
                                       (0xffffffU & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                             >> 8U))))),25);
            tracep->chgIData(oldp+89,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data),24);
            tracep->chgBit(oldp+90,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
            tracep->chgIData(oldp+91,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data),24);
            tracep->chgBit(oldp+92,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__out_data),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__out_data),64);
            tracep->chgBit(oldp+97,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[0]));
            tracep->chgBit(oldp+98,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[1]));
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[2]));
            tracep->chgBit(oldp+100,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[3]));
            tracep->chgBit(oldp+101,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[4]));
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[5]));
            tracep->chgBit(oldp+103,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[6]));
            tracep->chgBit(oldp+104,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[7]));
            tracep->chgBit(oldp+105,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[8]));
            tracep->chgBit(oldp+106,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[9]));
            tracep->chgBit(oldp+107,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[10]));
            tracep->chgBit(oldp+108,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[11]));
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[12]));
            tracep->chgBit(oldp+110,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[13]));
            tracep->chgBit(oldp+111,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[14]));
            tracep->chgBit(oldp+112,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[15]));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[16]));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[17]));
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[18]));
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[19]));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[20]));
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[21]));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[22]));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[23]));
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[24]));
            tracep->chgBit(oldp+122,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[25]));
            tracep->chgBit(oldp+123,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[26]));
            tracep->chgBit(oldp+124,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[27]));
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[28]));
            tracep->chgBit(oldp+126,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[29]));
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[30]));
            tracep->chgBit(oldp+128,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[31]));
            tracep->chgBit(oldp+129,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[0]));
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[1]));
            tracep->chgBit(oldp+131,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[2]));
            tracep->chgBit(oldp+132,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[3]));
            tracep->chgBit(oldp+133,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[4]));
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[5]));
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[6]));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[7]));
            tracep->chgBit(oldp+137,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[8]));
            tracep->chgBit(oldp+138,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[9]));
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[10]));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[11]));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[12]));
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[13]));
            tracep->chgBit(oldp+143,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[14]));
            tracep->chgBit(oldp+144,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[15]));
            tracep->chgBit(oldp+145,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[16]));
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[17]));
            tracep->chgBit(oldp+147,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[18]));
            tracep->chgBit(oldp+148,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[19]));
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[20]));
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[21]));
            tracep->chgBit(oldp+151,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[22]));
            tracep->chgBit(oldp+152,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[23]));
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[24]));
            tracep->chgBit(oldp+154,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[25]));
            tracep->chgBit(oldp+155,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[26]));
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[27]));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[28]));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[29]));
            tracep->chgBit(oldp+159,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[30]));
            tracep->chgBit(oldp+160,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[31]));
            tracep->chgIData(oldp+161,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[0]),25);
            tracep->chgIData(oldp+162,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[1]),25);
            tracep->chgIData(oldp+163,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[2]),25);
            tracep->chgIData(oldp+164,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[3]),25);
            tracep->chgIData(oldp+165,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[4]),25);
            tracep->chgIData(oldp+166,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[5]),25);
            tracep->chgIData(oldp+167,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[6]),25);
            tracep->chgIData(oldp+168,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[7]),25);
            tracep->chgIData(oldp+169,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[8]),25);
            tracep->chgIData(oldp+170,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[9]),25);
            tracep->chgIData(oldp+171,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[10]),25);
            tracep->chgIData(oldp+172,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[11]),25);
            tracep->chgIData(oldp+173,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[12]),25);
            tracep->chgIData(oldp+174,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[13]),25);
            tracep->chgIData(oldp+175,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[14]),25);
            tracep->chgIData(oldp+176,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[15]),25);
            tracep->chgIData(oldp+177,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[16]),25);
            tracep->chgIData(oldp+178,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[17]),25);
            tracep->chgIData(oldp+179,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[18]),25);
            tracep->chgIData(oldp+180,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[19]),25);
            tracep->chgIData(oldp+181,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[20]),25);
            tracep->chgIData(oldp+182,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[21]),25);
            tracep->chgIData(oldp+183,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[22]),25);
            tracep->chgIData(oldp+184,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[23]),25);
            tracep->chgIData(oldp+185,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[24]),25);
            tracep->chgIData(oldp+186,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[25]),25);
            tracep->chgIData(oldp+187,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[26]),25);
            tracep->chgIData(oldp+188,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[27]),25);
            tracep->chgIData(oldp+189,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[28]),25);
            tracep->chgIData(oldp+190,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[29]),25);
            tracep->chgIData(oldp+191,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[30]),25);
            tracep->chgIData(oldp+192,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[31]),25);
            tracep->chgIData(oldp+193,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[0]),25);
            tracep->chgIData(oldp+194,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[1]),25);
            tracep->chgIData(oldp+195,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[2]),25);
            tracep->chgIData(oldp+196,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[3]),25);
            tracep->chgIData(oldp+197,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[4]),25);
            tracep->chgIData(oldp+198,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[5]),25);
            tracep->chgIData(oldp+199,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[6]),25);
            tracep->chgIData(oldp+200,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[7]),25);
            tracep->chgIData(oldp+201,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[8]),25);
            tracep->chgIData(oldp+202,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[9]),25);
            tracep->chgIData(oldp+203,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[10]),25);
            tracep->chgIData(oldp+204,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[11]),25);
            tracep->chgIData(oldp+205,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[12]),25);
            tracep->chgIData(oldp+206,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[13]),25);
            tracep->chgIData(oldp+207,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[14]),25);
            tracep->chgIData(oldp+208,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[15]),25);
            tracep->chgIData(oldp+209,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[16]),25);
            tracep->chgIData(oldp+210,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[17]),25);
            tracep->chgIData(oldp+211,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[18]),25);
            tracep->chgIData(oldp+212,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[19]),25);
            tracep->chgIData(oldp+213,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[20]),25);
            tracep->chgIData(oldp+214,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[21]),25);
            tracep->chgIData(oldp+215,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[22]),25);
            tracep->chgIData(oldp+216,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[23]),25);
            tracep->chgIData(oldp+217,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[24]),25);
            tracep->chgIData(oldp+218,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[25]),25);
            tracep->chgIData(oldp+219,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[26]),25);
            tracep->chgIData(oldp+220,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[27]),25);
            tracep->chgIData(oldp+221,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[28]),25);
            tracep->chgIData(oldp+222,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[29]),25);
            tracep->chgIData(oldp+223,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[30]),25);
            tracep->chgIData(oldp+224,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[31]),25);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[0]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[1]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[2]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[3]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[4]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[5]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[6]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[7]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[8]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[9]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[10]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[11]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[12]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[13]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[14]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[15]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[16]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[17]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[18]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[19]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[20]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[21]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[22]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[23]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[24]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[25]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[26]),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[27]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[28]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[29]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[30]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[31]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[0]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[1]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[2]),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[3]),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[4]),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[5]),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[6]),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[7]),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[8]),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[9]),64);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[10]),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[11]),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[12]),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[13]),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[14]),64);
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[15]),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[16]),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[17]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[18]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[19]),64);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[20]),64);
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[21]),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[22]),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[23]),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[24]),64);
            tracep->chgQData(oldp+339,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[25]),64);
            tracep->chgQData(oldp+341,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[26]),64);
            tracep->chgQData(oldp+343,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[27]),64);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[28]),64);
            tracep->chgQData(oldp+347,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[29]),64);
            tracep->chgQData(oldp+349,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[30]),64);
            tracep->chgQData(oldp+351,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram1__DOT__ram[31]),64);
            tracep->chgIData(oldp+353,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm),20);
            tracep->chgSData(oldp+354,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm),12);
            tracep->chgCData(oldp+355,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst)),7);
            tracep->chgCData(oldp+356,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+357,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+358,((0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+359,((0x7fU & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),7);
            tracep->chgCData(oldp+360,((7U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+361,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0x19U)),7);
            tracep->chgSData(oldp+362,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+363,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm),20);
            tracep->chgIData(oldp+364,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                        >> 0xcU)),20);
            tracep->chgSData(oldp+365,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm),12);
            tracep->chgSData(oldp+366,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm),12);
            tracep->chgQData(oldp+367,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2),64);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2),64);
            tracep->chgQData(oldp+371,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2),64);
            tracep->chgQData(oldp+373,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))),64);
            tracep->chgBit(oldp+375,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2));
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2),64);
            tracep->chgIData(oldp+378,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw),32);
            tracep->chgQData(oldp+379,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2),64);
            tracep->chgIData(oldp+381,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw),32);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2),64);
            tracep->chgIData(oldp+384,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw),32);
            tracep->chgQData(oldp+385,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2),64);
            tracep->chgWData(oldp+387,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul),128);
            tracep->chgQData(oldp+391,((((QData)((IData)(
                                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+393,((((QData)((IData)(
                                                         vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[2U])))),64);
            tracep->chgQData(oldp+395,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U] 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul[0U])))),64);
            tracep->chgQData(oldp+397,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div),64);
            tracep->chgIData(oldp+399,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw),32);
            tracep->chgQData(oldp+400,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw)))),64);
            tracep->chgQData(oldp+402,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)))),64);
            tracep->chgQData(oldp+404,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem),64);
            tracep->chgIData(oldp+406,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw),32);
            tracep->chgQData(oldp+407,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__remw)))),64);
            tracep->chgQData(oldp+409,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__rem)))),64);
            tracep->chgSData(oldp+411,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr),12);
            tracep->chgQData(oldp+412,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data),64);
            tracep->chgQData(oldp+414,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data),64);
            tracep->chgQData(oldp+416,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mcause_value),64);
            tracep->chgQData(oldp+418,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                        | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1)),64);
            tracep->chgQData(oldp+420,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data 
                                        & (~ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))),64);
            tracep->chgBit(oldp+422,(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+423,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr));
            tracep->chgBit(oldp+424,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie));
            tracep->chgBit(oldp+425,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie));
            tracep->chgCData(oldp+426,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp),2);
            tracep->chgQData(oldp+427,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus),64);
            tracep->chgBit(oldp+429,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_ie_ena));
            tracep->chgBit(oldp+430,((1U & ((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 1U)) 
                                            & ((1U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)
                                                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                               >> 3U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)))))));
            tracep->chgBit(oldp+431,((1U & ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                             ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mie)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                               >> 7U))
                                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpie)))))));
            tracep->chgCData(oldp+432,(((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                         ? 3U : ((1U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_wr)
                                                      ? (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__write_csr_data 
                                                                 >> 0xdU))
                                                      : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
            tracep->chgBit(oldp+433,((1U & (((0x305U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 2U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgBit(oldp+434,(((0x305U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+435,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base),62);
            tracep->chgQData(oldp+437,((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mtvec_base 
                                        << 2U)),64);
            tracep->chgBit(oldp+439,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 2U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl)))));
            tracep->chgBit(oldp+440,((1U & (((0x341U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                                >> 3U)) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                               >> 1U)))));
            tracep->chgQData(oldp+441,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mepc),64);
            tracep->chgBit(oldp+443,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 2U))));
            tracep->chgBit(oldp+444,(((0x342U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_addr)) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                         >> 3U))));
            tracep->chgQData(oldp+445,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_operate__DOT__mcause),64);
            tracep->chgCData(oldp+447,((7U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),3);
            tracep->chgCData(oldp+448,((3U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+449,((1U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                    >> 2U)))));
            tracep->chgIData(oldp+450,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word),32);
            tracep->chgBit(oldp+451,((0x100073U == vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst)));
            tracep->chgBit(oldp+452,(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__flag));
            tracep->chgQData(oldp+453,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[0]),64);
            tracep->chgQData(oldp+455,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[1]),64);
            tracep->chgQData(oldp+457,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[2]),64);
            tracep->chgQData(oldp+459,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[3]),64);
            tracep->chgQData(oldp+461,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[4]),64);
            tracep->chgQData(oldp+463,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[5]),64);
            tracep->chgQData(oldp+465,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[6]),64);
            tracep->chgQData(oldp+467,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[7]),64);
            tracep->chgQData(oldp+469,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[8]),64);
            tracep->chgQData(oldp+471,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[9]),64);
            tracep->chgQData(oldp+473,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[10]),64);
            tracep->chgQData(oldp+475,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[11]),64);
            tracep->chgQData(oldp+477,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[12]),64);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[13]),64);
            tracep->chgQData(oldp+481,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[14]),64);
            tracep->chgQData(oldp+483,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[15]),64);
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[16]),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[17]),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[18]),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[19]),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[20]),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[21]),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[22]),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[23]),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[24]),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[25]),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[26]),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[27]),64);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[28]),64);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[29]),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[30]),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[31]),64);
            tracep->chgIData(oldp+517,(vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+518,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                         ? (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))
                                             ? (0xfffffffffffffff8ULL 
                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc)
                                             : 0ULL)
                                         : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_datapc
                                             : 0ULL))),64);
            tracep->chgBit(oldp+520,(((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                      | ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re)))));
            tracep->chgQData(oldp+521,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                         ? ((0x42U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                             ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)
                                             : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                                 ? 
                                                (4ULL 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)
                                                 : 
                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc 
                                                 + vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm)))
                                         : 0ULL)),64);
            tracep->chgCData(oldp+523,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgQData(oldp+524,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re) 
                                         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__data_not_ready)))
                                         ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+526,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__cache_axi_ena)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__data_ok))));
            tracep->chgBit(oldp+527,((((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__cache_axi_ena)) 
                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_we)) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__data_ok))));
            tracep->chgCData(oldp+528,(((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                         ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                                             ? 2U : 1U)
                                         : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                             ? ((2U 
                                                 == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                                 ? 1U
                                                 : 2U)
                                             : 1U))),2);
            tracep->chgBit(oldp+529,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                           | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+530,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+531,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))));
            tracep->chgBit(oldp+532,(((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                           | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+533,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+534,(((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                          | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))));
            tracep->chgBit(oldp+535,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+536,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x2000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+537,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x3000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+538,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x4000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+539,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x6000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+540,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+541,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
            tracep->chgBit(oldp+542,((1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x5000U 
                                                       == 
                                                       (0x40007000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+543,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_we));
            tracep->chgBit(oldp+544,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_re));
            tracep->chgCData(oldp+545,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_wmask),8);
            tracep->chgQData(oldp+546,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_datapc),64);
            tracep->chgQData(oldp+548,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_axi_write_data),64);
            tracep->chgCData(oldp+550,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr),5);
            tracep->chgCData(oldp+551,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr),5);
            tracep->chgBit(oldp+552,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena));
            tracep->chgBit(oldp+553,(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena));
            tracep->chgBit(oldp+554,(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel));
            tracep->chgBit(oldp+555,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 1U))));
            tracep->chgBit(oldp+556,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
            tracep->chgQData(oldp+557,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1),64);
            tracep->chgQData(oldp+559,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2),64);
            tracep->chgQData(oldp+561,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm),64);
            tracep->chgBit(oldp+563,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena));
            tracep->chgCData(oldp+564,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl),4);
            tracep->chgCData(oldp+565,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl),2);
            tracep->chgCData(oldp+566,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena))))),4);
            tracep->chgCData(oldp+567,(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel),8);
            tracep->chgQData(oldp+568,(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata),64);
            tracep->chgBit(oldp+570,(vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel));
            tracep->chgQData(oldp+571,(vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward),64);
            tracep->chgQData(oldp+573,(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data),64);
            tracep->chgCData(oldp+575,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next),3);
            tracep->chgBit(oldp+576,(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand));
            tracep->chgCData(oldp+577,(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next),4);
            tracep->chgBit(oldp+578,(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx));
            tracep->chgBit(oldp+579,((1U & (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb3U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))));
            tracep->chgBit(oldp+580,((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                                            >> 2U))));
            tracep->chgBit(oldp+581,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
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
            tracep->chgQData(oldp+582,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2),64);
            tracep->chgBit(oldp+584,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2));
            tracep->chgBit(oldp+585,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena));
            tracep->chgBit(oldp+586,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena));
            tracep->chgBit(oldp+587,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena));
            tracep->chgBit(oldp+588,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena));
            tracep->chgCData(oldp+589,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type),8);
            tracep->chgBit(oldp+590,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui));
            tracep->chgBit(oldp+591,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc));
            tracep->chgBit(oldp+592,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal));
            tracep->chgBit(oldp+593,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
            tracep->chgBit(oldp+594,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb));
            tracep->chgBit(oldp+595,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh));
            tracep->chgBit(oldp+596,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw));
            tracep->chgBit(oldp+597,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd));
            tracep->chgBit(oldp+598,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb));
            tracep->chgBit(oldp+599,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh));
            tracep->chgBit(oldp+600,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw));
            tracep->chgBit(oldp+601,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld));
            tracep->chgBit(oldp+602,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu));
            tracep->chgBit(oldp+603,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu));
            tracep->chgBit(oldp+604,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu));
            tracep->chgBit(oldp+605,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq));
            tracep->chgBit(oldp+606,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne));
            tracep->chgBit(oldp+607,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt));
            tracep->chgBit(oldp+608,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge));
            tracep->chgBit(oldp+609,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu));
            tracep->chgBit(oldp+610,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+611,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add));
            tracep->chgBit(oldp+612,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub));
            tracep->chgBit(oldp+613,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll));
            tracep->chgBit(oldp+614,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt));
            tracep->chgBit(oldp+615,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu));
            tracep->chgBit(oldp+616,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor));
            tracep->chgBit(oldp+617,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl));
            tracep->chgBit(oldp+618,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra));
            tracep->chgBit(oldp+619,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or));
            tracep->chgBit(oldp+620,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and));
            tracep->chgBit(oldp+621,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div));
            tracep->chgBit(oldp+622,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu));
            tracep->chgBit(oldp+623,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul));
            tracep->chgBit(oldp+624,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh));
            tracep->chgBit(oldp+625,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+626,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+627,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem));
            tracep->chgBit(oldp+628,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu));
            tracep->chgBit(oldp+629,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai));
            tracep->chgBit(oldp+630,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw));
            tracep->chgBit(oldp+631,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw));
            tracep->chgBit(oldp+632,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw));
            tracep->chgBit(oldp+633,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+634,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw));
            tracep->chgBit(oldp+635,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw));
            tracep->chgBit(oldp+636,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw));
            tracep->chgBit(oldp+637,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw));
            tracep->chgBit(oldp+638,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw));
            tracep->chgBit(oldp+639,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw));
            tracep->chgBit(oldp+640,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw));
            tracep->chgBit(oldp+641,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw));
            tracep->chgBit(oldp+642,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw));
            tracep->chgBit(oldp+643,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw));
            tracep->chgBit(oldp+644,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall));
            tracep->chgBit(oldp+645,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret));
            tracep->chgBit(oldp+646,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+647,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+648,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+649,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+650,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+651,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+652,(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+653,((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+654,(((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))));
            tracep->chgQData(oldp+655,(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res),64);
            tracep->chgQData(oldp+657,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data),64);
            tracep->chgCData(oldp+659,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte),8);
            tracep->chgSData(oldp+660,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half),16);
            tracep->chgCData(oldp+661,(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__sb_mask),8);
        }
        tracep->chgBit(oldp+662,(vlSelf->clk));
        tracep->chgBit(oldp+663,(vlSelf->rst));
        tracep->chgBit(oldp+664,(((~ (IData)(vlSelf->rst)) 
                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                        >> 0xbU)))));
        tracep->chgQData(oldp+665,(((IData)(vlSelf->rst)
                                     ? 0ULL : (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                               + (((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                                           >> 0x13U))))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (0xfffffU 
                                                                      & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                                         << 1U)))))
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
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
        tracep->chgIData(oldp+667,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)),32);
        tracep->chgQData(oldp+668,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc)),64);
        tracep->chgQData(oldp+670,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data)),64);
        tracep->chgQData(oldp+672,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                     : 0ULL)),64);
        tracep->chgQData(oldp+674,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                    [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                     : 0ULL)),64);
        tracep->chgBit(oldp+676,(((IData)(vlSelf->rst)
                                   ? 0U : (IData)((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))));
        tracep->chgQData(oldp+677,((((IData)(vlSelf->rst)
                                      ? 0U : (IData)(
                                                     (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))
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
        tracep->chgQData(oldp+679,((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    + (((IData)(vlSelf->rst)
                                         ? 0U : (IData)(
                                                        (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_22051013_rvcpu__DOT__cache_if_inst))))
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
        tracep->chgBit(oldp+681,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgBit(oldp+682,(((~ (IData)(vlSelf->rst)) 
                                  & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                        == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
        tracep->chgQData(oldp+683,(((IData)(vlSelf->rst)
                                     ? 0ULL : (0xfffffffffffffff8ULL 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))),64);
        tracep->chgQData(oldp+685,(((IData)(vlSelf->rst)
                                     ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)),64);
        tracep->chgCData(oldp+687,(((IData)(vlSelf->rst)
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
        tracep->chgCData(oldp+688,(((IData)(vlSelf->rst)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                            >> 2U)))
                                              ? 0xf0U
                                              : 0xfU))),8);
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
