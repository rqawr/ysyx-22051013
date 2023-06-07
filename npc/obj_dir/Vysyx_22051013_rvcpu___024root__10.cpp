// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vysyx_22051013_rvcpu__ConstPool__TABLE_401647e8_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_22051013_rvcpu__ConstPool__TABLE_86ae1b77_0;

VL_INLINE_OPT void Vysyx_22051013_rvcpu___024root___combo__TOP__30(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___combo__TOP__30\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx3;
    SData/*8:0*/ __Vtableidx1;
    SData/*10:0*/ __Vtableidx2;
    VlWide<4>/*127:0*/ __Vtemp2274;
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_if_pc_sel 
        = (1U & ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl) 
                                              >> 1U) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data 
            = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
                    : 0ULL));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                       >> 2U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                     ? (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                                >> 0x38U))
                                                     : (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                                >> 0x30U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                                     ? (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                                >> 0x28U))
                                                     : (IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                                                >> 0x20U))))
                         : ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                 ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                            >> 0x18U))
                                 : (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                            >> 0x10U)))
                             : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
                                 ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                            >> 8U))
                                 : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i)))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half 
            = (0xffffU & ((0U == (3U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                >> 1U))))
                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i)
                           : ((1U == (3U & (IData)(
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                    >> 1U))))
                               ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                          >> 0x10U))
                               : ((2U == (3U & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                        >> 1U))))
                                   ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x20U))
                                   : (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x30U))))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                ? 0U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                         ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                             ? 0U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                      ? 0xffU : ((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                              >> 2U)))
                                                   ? 0xf0U
                                                   : 0xfU))))
                         : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                             ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                 ? 0U : ((IData)(vlSelf->rst)
                                          ? 0U : ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                               >> 1U))))
                                                   ? 3U
                                                   : 
                                                  ((1U 
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
                                                     : 0xc0U)))))
                             : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                 ? ((IData)(vlSelf->rst)
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
                                                   : 1U))))
                                 : 0U))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                       >> 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                    >> 3U)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                         >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 2U))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type 
        = ((((IData)(vlSelf->rst) ? 0U : (IData)((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                      >> 2U))))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : (IData)(
                                                            (0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                 >> 2U))))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (IData)(
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                        >> 2U))))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (IData)(
                                                         (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                              >> 2U))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                 >> 2U))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                    >> 2U))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : 
                                                       (3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                        >> 2U))))))))))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                           ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                               ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                          ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                          : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                             >> 2U)))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                  << 0x20U)
                                                  : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))
                           : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                               ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                   ? 0ULL : ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0U 
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
                                                    << 0x30U))))))
                               : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                   ? ((IData)(vlSelf->rst)
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
                                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))))
                                   : 0ULL))));
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res 
            = ((0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                ? ((0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? 0ULL : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                   ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                    + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)))))
                                   : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                    ^ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                            + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))))))
                : ((0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                    ? ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                       ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))))
                                       : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : (QData)((IData)(
                                                               (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                                < vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                             ? 0ULL
                                             : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           (4ULL + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                        ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)))
                                           : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2))))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                   & vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (4ULL 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc)
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               & vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                            ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? 0ULL : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                   + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                   << 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                            + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                            | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               | vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))
                            : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               ^ vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2))))
                                : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               + vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm)
                                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))
                                            : (QData)((IData)(
                                                              (vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 
                                                               < vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2)))))
                                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2
                                            : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2)))
                                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                            : 0ULL))))))));
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q
                    : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)))
                        ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q))
                        : (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)) 
                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                            ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q))
                            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q);
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid)
                ? (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))))
                    : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign) 
                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)))
                        ? (1ULL + (~ (((QData)((IData)(
                                                       vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))))
                        : (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign)) 
                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign))
                            ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])))
                            : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U]))))))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U]))));
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data 
            = ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                    ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word))
                            : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half)))
                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte))
                            : vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i))
                    : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                        ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word)))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half) 
                                                       >> 0xfU))))) 
                                << 0x10U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half))))
                        : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte) 
                                                       >> 7U))))) 
                                << 8U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte)))
                            : 0ULL))) : 0ULL);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            ? ((IData)(vlSelf->rst) ? 0ULL : (0xfffffffffffffff8ULL 
                                              & vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata))
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)
                ? ((IData)(vlSelf->rst) ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata)
                : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
            ? 1U : ((1U & ((((0U != (0xf8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                           | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr))))
                     ? 2U : 0U));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm = 
        ((1U & ((0U != (0xb2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)))
          ? (((- (QData)((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                  >> 0x1fU)))) << 0xcU) 
             | (QData)((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                >> 0x14U)))) : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))
                                                 : 
                                                ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal)
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm 
                                                                          >> 0x13U))))) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    (0xfffffU 
                                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm 
                                                                        << 1U)))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm) 
                                                                           >> 0xbU))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm) 
                                                                         << 1U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm)))
                                                    : 0ULL)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb 
        = ((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh 
        = ((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw 
        = ((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd 
        = ((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb 
        = ((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh 
        = ((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw 
        = ((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld 
        = ((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu 
        = ((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu 
        = ((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu 
        = ((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq 
        = ((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne 
        = ((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt 
        = ((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge 
        = ((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu 
        = ((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu 
        = ((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x40000000U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x1000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x3000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x4000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x5000U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x40005000U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x6000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x7000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2004000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2005000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2000000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2001000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2002000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2003000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2006000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu 
        = ((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2007000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai 
        = ((0x10U == (0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x40005000U == (0x40007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw 
        = ((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw 
        = ((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw 
        = ((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x5000U == (0x40007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw 
        = ((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x40005000U == (0x40007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x40000000U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x5000U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x40005000U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2005000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2004000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2000000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2007000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw 
        = ((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2006000U == (0x2007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret 
        = ((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x30000000U == (0x30007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi 
        = ((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi 
        = ((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci 
        = ((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak 
        = (((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
            & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))) 
           & (1U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall 
        = (((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
            & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))) 
           & (0U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw 
        = ((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs 
        = ((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc 
        = ((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
           & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata 
        = ((0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_csrctl))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__read_csr_data
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                    : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
            : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata);
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
    vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena 
        = ((((((0xa00003f8ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
               & (0xa00003ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)) 
              | ((0xa0000048ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                 & (0xa000004fULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
             | ((0xa0000100ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                & (0xa0000107ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
            | ((0xa1000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
               & (0xa10752ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
           | ((0xa0000060ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
              & (0xa0000063ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena 
        = ((0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                            >> 7U))) & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl)));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0x14U)) : 0U);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel 
        = ((((IData)(vlSelf->rst) ? 0U : (1U & ((((
                                                   (((((((((((((((1U 
                                                                  & ((0x10U 
                                                                      == 
                                                                      (0x10U 
                                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                     & (0x5000U 
                                                                        == 
                                                                        (0x40007000U 
                                                                         & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu)) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi)) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi)) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci)))) 
            << 7U) | ((((IData)(vlSelf->rst) ? 0U : 
                        (1U & (((((((((((((((((((1U 
                                                 & ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    & (0x1000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu)) 
                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor)) 
                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw)) 
                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb)) 
                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge)) 
                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu)) 
                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw)) 
                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld)) 
                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul)) 
                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw)) 
                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw)) 
                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem)) 
                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret)) 
                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc)) 
                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi)))) 
                       << 6U) | ((((IData)(vlSelf->rst)
                                    ? 0U : (1U & ((
                                                   (((((((((((((((((((1U 
                                                                      & ((0x10U 
                                                                          == 
                                                                          (0x10U 
                                                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                         & (0x7000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci)))) 
                                  << 5U) | ((((IData)(vlSelf->rst)
                                               ? 0U
                                               : (1U 
                                                  & ((((((((((((((((((((((1U 
                                                                          & ((0x10U 
                                                                              == 
                                                                              (0x10U 
                                                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                             & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi)))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & ((((((((((((((((((((((((1U 
                                                                            & ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                               & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)) 
                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi)))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->rst)
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (((((((((((((((((((((((((1U 
                                                                                & ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add)) 
                                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub)) 
                                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl)) 
                                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or)) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret)) 
                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi)) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci)))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->rst)
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & ((((((((((((((((((((((1U 
                                                                                & ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai)) 
                                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add)) 
                                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra)) 
                                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw)) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)) 
                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : 
                                                        (1U 
                                                         & (((((((((((((((((1U 
                                                                            & ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                               & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai)) 
                                                                          | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl)) 
                                                                         | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw)) 
                                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw)) 
                                                                       | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal)) 
                                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb)) 
                                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw)) 
                                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd)) 
                                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu)) 
                                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu)) 
                                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu)) 
                                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu)) 
                                                               | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem)) 
                                                              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw)) 
                                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw)) 
                                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)))))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena 
        = (1U & ((((0U != (0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                  | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)));
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
           & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)) 
              & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                  & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                             >> 2U))) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                                          & (~ (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                        >> 2U)))) 
                                         | ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)) 
                                             & (IData)(
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                        >> 2U))) 
                                            | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                               & (~ (IData)(
                                                            (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                             >> 2U)))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready)
                ? 0U : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                         & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                    >> 2U))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[1U]
                         : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                             & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                           >> 2U))))
                             ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[0U]
                             : ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)) 
                                 & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                            >> 2U)))
                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[3U]
                                 : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                                     & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
                                                   >> 2U))))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[2U]
                                     : 0U))))) : 0U);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)
            : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena))));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))));
    if (vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) {
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data = 0ULL;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
            = vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 = 
        ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                         ? (((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                                  | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
                                                 | (0U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                             : (((~ 
                                                  ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                                   | (0U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                                 : 
                                                (((~ 
                                                   ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                  : 
                                                 (((~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                                   ? 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                  [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                                   : 0ULL))))
                                         : ((1U & (
                                                   ((0U 
                                                     != 
                                                     (0xb3U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm
                                             : 0ULL)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((0x54U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                          | (0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                if ((1U & (~ ((0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__mret_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena = 0U;
    if ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena = 1U;
    } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                          | (0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                if ((1U & (~ ((0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ecall_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_rd_ena 
                = (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                    | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                    ? (0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 7U))) : (
                                                   ((0x25U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                                    | (0x4aU 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                                                   | ((0xc8U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                                      | (0xa4U 
                                                         == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))));
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
        if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__csr_wr_ena 
                = (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                    | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                   | (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                       | (0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                       ? (0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 0xfU)))
                       : (((0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                           | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                          & (0ULL != vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))));
        }
    }
    __Vtableidx3 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0
        [__Vtableidx3];
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0xfU)) : 0U);
    __Vtableidx2 = (((IData)(vlSelf->rst) << 0xaU) 
                    | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_hit) 
                        << 9U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_hit) 
                                   << 8U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_update) 
                                              << 7U) 
                                             | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid) 
                                                    << 5U) 
                                                   | ((((~ 
                                                         ((8U 
                                                           == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                                          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
                                                        & ((8U 
                                                            == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                                           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand))) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_401647e8_0
        [__Vtableidx2];
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid = (1U 
                                                  & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall)));
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
        = ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                            >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                  >> 8U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x18U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
                                                    >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask)))))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))] & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))]) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))] & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use
            [(0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                               >> 3U)))]) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit 
        = (((0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                  >> 9U))) == vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild));
    if (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U] = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[0U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[1U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[2U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data[3U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
    }
    if (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U] = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[0U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[1U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[2U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data[3U] 
            = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid))
                ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
                           >> 0x20U)) : 0U);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc 
        = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc)
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc 
        = (((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc)
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid 
        = ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
           & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid 
        = ((~ ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)))) 
           & ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena 
        = ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena 
        = ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena 
        = ((~ (IData)(vlSelf->rst)) & (((~ (IData)(vlSelf->rst)) 
                                        & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
                                            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr) 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr)))) 
                                       | ((~ (IData)(vlSelf->rst)) 
                                          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena)) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr) 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 = 
        ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                         ? (((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                                                  | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
                                                 | (0U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                             & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
                                             : (((~ 
                                                  ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                                   | (0U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))
                                                 ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                                                 : 
                                                (((~ 
                                                   ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
                                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr) 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))
                                                  ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                                                  : 
                                                 (((~ (IData)(vlSelf->rst)) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                                   ? 
                                                  vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                                  [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                                   : 0ULL))))
                                         : (((0xa0U 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                             | (0x21U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                                             ? vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc
                                             : ((((0x94U 
                                                   == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                                  | (0xc8U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))) 
                                                 | (0xa4U 
                                                    == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)))
                                                 ? (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                       >> 0xfU))))
                                                 : 0ULL))));
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                                  | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok) 
                                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we))));
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__pr_pc 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_if_pc 
           + (((IData)(vlSelf->rst) ? 0U : (0x6fU == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst)))
               ? (((- (QData)((IData)((1U & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                             >> 0x13U))))) 
                   << 0x14U) | (QData)((IData)((0xfffffU 
                                                & (vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm 
                                                   << 1U)))))
               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx) 
                   & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                      >> 0xbU)) ? (((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                           >> 0xbU))))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (0xfffU 
                                                                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm) 
                                                                   << 1U)))))
                   : ((IData)(vlSelf->rst) ? 0ULL : 4ULL))));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data 
        = (((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U]))))
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data 
        = (((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U]))))
            : 0ULL);
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit)
                ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[0U])))
                : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)
                    ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data[2U])))
                    : 0ULL));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)) 
               & 1U);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid = 0U;
    }
    VL_EXTEND_WQ(128,64, __Vtemp2274, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64);
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp2274[0U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp2274[1U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp2274[2U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
                                      ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64)
                                      : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp2274[3U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
                                      ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64 
                                                 >> 0x20U))
                                      : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit) 
                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)) 
               & 1U);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U] = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid = 0U;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc
            : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc
                : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                    ? (((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
                        & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))
                        ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty)
                            ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                << 9U) | (QData)((IData)(
                                                         (0x1f8U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                      >> 3U)) 
                                                             << 3U)))))
                            : (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                << 9U) | (QData)((IData)(
                                                         (0x1f8U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                      >> 3U)) 
                                                             << 3U))))))
                        : 0ULL) : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc
                                    : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                        ? (((0x21U 
                                             == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                                            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))
                                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty)
                                                ? (
                                                   ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data)) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (0x1f8U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                         << 3U)))))
                                                : (
                                                   ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data)) 
                                                    << 9U) 
                                                   | (QData)((IData)(
                                                                     (0x1f8U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                                >> 3U)) 
                                                                         << 3U))))))
                                            : 0ULL)
                                        : 0ULL)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next 
        = ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
            ? 1U : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                     ? ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                         ? 1U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                  ? 1U : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid)
                                                     ? 8U
                                                     : 0x10U)))))
                     : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                         ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                             ? 1U : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                      ? 1U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                               ? 1U
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid)
                                                   ? 4U
                                                   : 8U))))
                         : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                             ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                 ? 1U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                          ? 1U : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid)
                                                   ? 2U
                                                   : 4U)))
                             : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                 ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                     ? 1U : ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit)))
                                              ? 4U : 
                                             ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update)) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty) 
                                                  | ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))] 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]) 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))))
                                               ? 0x10U
                                               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update))
                                                   ? 8U
                                                   : 2U))))
                                 : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                                     ? ((IData)(vlSelf->rst)
                                         ? 1U : 2U)
                                     : 1U))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid 
        = (1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                  ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid))
                  : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                      ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next 
        = ((0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
            ? ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                ? 1U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                         ? 1U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                  ? 1U : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                           ? 1U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid)
                                                     ? 0x20U
                                                     : 0x21U)
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid)
                                                     ? 4U
                                                     : 0x20U))))))
            : ((0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                ? 1U : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                         ? 1U : ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                  ? ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                      ? 1U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                               ? 1U
                                               : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid)
                                                   ? 3U
                                                   : 4U)))
                                  : ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                      ? ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                          ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready) 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)))
                                              ? 4U : 
                                             ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready) 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update)) 
                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty) 
                                                  | ((vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))] 
                                                      & vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use
                                                      [
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
                                                                  >> 3U)))]) 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild))))
                                               ? 0x21U
                                               : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready) 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update))
                                                   ? 0x20U
                                                   : 3U)))
                                          : 1U) : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 1U
                                                     : 3U)
                                                    : 1U))))));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re) 
                     << 8U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we) 
                                << 7U) | ((((~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re) 
                                                | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we))) 
                                            & ((8U 
                                                == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                                               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand)))) 
                                           << 6U) | 
                                          (((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state)) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__dread_shakehand) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__iread_shakehand) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_86ae1b77_0
        [__Vtableidx1];
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)) 
           & ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
              | ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_re))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                               ? ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                                   ? 1U : 2U) : 1U));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel 
        = ((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
           | ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type) 
                >> 2U) & ((0xeU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                           ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                              == vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                           : ((0x1cU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                               ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                  != vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                               : ((0xe0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                   ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                      < vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                   : ((0xdU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                       ? (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
                                          >= vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2)
                                       : ((0x38U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                           ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2)
                                           : ((0x70U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel)) 
                                              & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2))))))))) 
              ^ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)));
}

void Vysyx_22051013_rvcpu___024root___sequent__TOP__1(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__2(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__3(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__4(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__5(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__6(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__7(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__8(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__9(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__10(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__11(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__12(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__13(Vysyx_22051013_rvcpu___024root* vlSelf);
void Vysyx_22051013_rvcpu___024root___sequent__TOP__14(Vysyx_22051013_rvcpu___024root* vlSelf);

void Vysyx_22051013_rvcpu___024root___eval(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22051013_rvcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22051013_rvcpu___024root___sequent__TOP__2(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__3(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__4(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__5(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__6(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__7(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__8(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__9(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__10(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__11(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__12(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__13(vlSelf);
        Vysyx_22051013_rvcpu___024root___sequent__TOP__14(vlSelf);
    }
    Vysyx_22051013_rvcpu___024root___combo__TOP__30(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22051013_rvcpu___024root___change_request_1(Vysyx_22051013_rvcpu___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22051013_rvcpu___024root___change_request(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___change_request\n"); );
    // Body
    return (Vysyx_22051013_rvcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22051013_rvcpu___024root___change_request_1(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22051013_rvcpu___024root___eval_debug_assertions(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
