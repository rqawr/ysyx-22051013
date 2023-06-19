// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22051013_rvcpu.h for the primary calling header

#include "Vysyx_22051013_rvcpu___024root.h"
#include "Vysyx_22051013_rvcpu__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22051013_rvcpu___024root___ctor_var_reset(Vysyx_22051013_rvcpu___024root* vlSelf);

Vysyx_22051013_rvcpu___024root::Vysyx_22051013_rvcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22051013_rvcpu___024root___ctor_var_reset(this);
}

void Vysyx_22051013_rvcpu___024root::__Vconfigure(Vysyx_22051013_rvcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22051013_rvcpu___024root::~Vysyx_22051013_rvcpu___024root() {
}

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_a4acb236_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_17e5fd70_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_b039c422_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_8c6fee76_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_f638cf1c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_8f16a4f5_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_22051013_rvcpu__ConstPool__TABLE_ed99e91e_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_22051013_rvcpu__ConstPool__TABLE_2d9d85ed_0;

void Vysyx_22051013_rvcpu___024root___settle__TOP__2(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___settle__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx5;
    CData/*7:0*/ __Vtableidx6;
    CData/*7:0*/ __Vtableidx7;
    SData/*9:0*/ __Vtableidx4;
    VlWide<3>/*95:0*/ __Vtemp228;
    VlWide<3>/*95:0*/ __Vtemp229;
    VlWide<3>/*95:0*/ __Vtemp230;
    VlWide<4>/*127:0*/ __Vtemp232;
    // Body
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                           ? 0ULL : 
                                          ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                                                                 >> 2U)))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data)) 
                                                      << 0x20U)
                                                      : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data))))))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((0U 
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
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 
                                                   ((IData)(vlSelf->rst)
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
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
                                                    : 0ULL)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
              >> 3U));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm 
        = ((0x80000U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                            >> 0x15U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm 
        = ((0xfe0U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                             >> 7U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                  >> 8U)))));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal = 0U;
    } else {
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
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                         >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                       >> 2U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                          >> 2U))));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag 
            == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2 
        = ((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag 
            == vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild));
    __Vtableidx6 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_a4acb236_0
        [__Vtableidx6];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_17e5fd70_0
        [__Vtableidx6];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_b039c422_0
        [__Vtableidx6];
    __Vtableidx7 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_8c6fee76_0
        [__Vtableidx7];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_f638cf1c_0
        [__Vtableidx7];
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_8f16a4f5_0
        [__Vtableidx7];
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata 
                          >> 2U))) ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte = 0U;
        vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half = 0U;
    } else {
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
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena 
                        = (0x54U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel));
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena = 0U;
    if ((0x2aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena = 1U;
    } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                         | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena = 1U;
        } else if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                             | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                 | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
                vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena = 1U;
            } else if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                                 | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                      | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                          | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))))) {
                if (((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                     | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena = 1U;
                } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
                    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena = 1U;
        } else if (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena 
                = (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr));
        } else if (((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena 
                = (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr));
        } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena = 0U;
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
        if (((0xa8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena 
                = (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr));
        } else if (((0x25U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 1U;
        } else if (((0x4aU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
                    | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 1U;
        } else if ((0x54U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) {
            vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = 0U;
        }
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus 
        = (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)) 
            << 0xbU) | (QData)((IData)((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie) 
                                         << 7U) | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie) 
                                                   << 3U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr 
        = ((IData)(vlSelf->rst) ? 0U : (IData)((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                    >> 2U)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
            : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc
                : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2
            : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel))
                ? 4ULL : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel))
                           ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm
                           : 0ULL)));
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
                                                        : (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                                                                        >> 2U))))))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                    >> 3U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we 
        = (1U & ((~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))) 
                 & (~ ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl) 
                       >> 3U))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_ready 
        = (1U & (~ (IData)((0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                    | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                   | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                  >> 2U) & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                              >> 1U) & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])) 
                            | ((~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                   >> 1U)) & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U]))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                   >> 2U) & (~ (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                >> 1U))) & (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U])));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing) 
           & (~ (IData)((0U != ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[0U] 
                                 | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[1U]) 
                                | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier[2U])))));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing) 
           & (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid 
        = ((~ ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)))) 
           & ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid 
        = ((~ ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)))) 
           & ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena 
        = ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena 
        = ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw)));
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                           >> 2U))) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                                        & (~ (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                                      >> 2U)))) 
                                       | (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2))));
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst 
            = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                           >> 2U))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[1U]
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                    & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                  >> 2U)))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[0U]
                    : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2) 
                        & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                   >> 2U))) ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[3U]
                        : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2) 
                            & (~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                          >> 2U))))
                            ? vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data[2U]
                            : 0U))));
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid 
            = (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state));
        vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst = 0U;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg)));
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data 
        = ((IData)(vlSelf->rst) ? 0ULL : ((8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                           ? ((4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word))
                                                    : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte))
                                                    : vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i))
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word)))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half) 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte) 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte)))
                                                    : 0ULL)))
                                           : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena) 
            << 6U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena) 
                       << 5U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena) 
                                  << 4U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena) 
                                             << 3U) 
                                            | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena) 
                                                << 2U) 
                                               | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump 
        = ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie) 
             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
            & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus 
                       >> 3U))) & (0ULL != vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal) 
           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1)))
            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1))
            : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))
            : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed))
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
                : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1, 
                         (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1) 
           << (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1) 
           >> (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1), 
                         (0x1fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
           + vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm = 
        ((1U & ((IData)((0U != (0xb2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
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
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd 
        = (1U & (IData)(((1U == (1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu 
        = (1U & (IData)(((2U == (2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu 
        = (1U & (IData)(((4U == (4U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x30000000U == (0x30007000U 
                                            & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
           & (1U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                    & (0U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))) 
           & (0U == (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                     >> 0x14U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst)))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid)
            ? (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp[0U])))
            : 0ULL);
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
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid = (1U 
                                                  & (((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid)) 
                                                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data
            : vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena 
        = (1U & ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr) 
                   | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                      >> 1U)) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel 
        = (1U & ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                   >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)));
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
            ? 0U : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
        = ((((((((- (QData)((IData)(((0x300U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                        >> 2U))))) 
                 & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus) 
                | ((- (QData)((IData)((1U & (((0x341U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))))) 
                   & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc)) 
               | ((- (QData)((IData)((1U & ((((0x305U 
                                               == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))))) 
                  & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base 
                     << 2U))) | ((- (QData)((IData)(
                                                    ((0x342U 
                                                      == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                        >> 2U))))) 
                                 & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause)) 
             | ((- (QData)((IData)(((0x304U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                       >> 2U))))) & 
                ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie)) 
                 << 7U))) | ((- (QData)((IData)(((0xb00U 
                                                  == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                                 & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                                    >> 2U))))) 
                             & vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle)) 
           | ((- (QData)((IData)(((0x344U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr)) 
                                  & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                     >> 2U))))) & ((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip)) 
                                                   << 7U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl 
        = ((2U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))
            ? 1U : ((1U & ((((IData)((0U != (0xf8U 
                                             & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui)) 
                            | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc)) 
                           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump)))
                     ? 2U : 0U));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed) 
           & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp 
                      >> 0x3fU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed) 
           & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp 
                      >> 0x3fU)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2 
        = (((QData)((IData)((- (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)));
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0x14U)) : 0U);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel 
        = ((((IData)(vlSelf->rst) ? 0U : (1U & ((((
                                                   (((((((((((((((1U 
                                                                  & (IData)(
                                                                            ((0x10U 
                                                                              == 
                                                                              (0x10U 
                                                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                             & (0x5000U 
                                                                                == 
                                                                                (0x40007000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
                                                 & (IData)(
                                                           ((0x10U 
                                                             == 
                                                             (0x10U 
                                                              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                            & (0x1000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
                                                                      & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
                                                                          & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
                                                                            & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x4000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
                                                                                & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
                                                                                & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
                                                                            & (IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x10U 
                                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type))) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst))))) 
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
        = (1U & ((((IData)((0U != (0x7fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type)))) 
                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr)) 
                  | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw) 
                      | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs)) 
                     | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc))) 
                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready) 
                                                   | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall)) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall));
    vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena 
        = (((((((0xa00003f8ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                & (0xa00003ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)) 
               | ((0x2000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                  & (0x200ffffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
              | ((0xa0000048ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                 & (0xa000004fULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
             | ((0xa0000100ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
                & (0xa0000107ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
            | ((0xa1000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
               & (0xa10752ffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc))) 
           | ((0xa0000060ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
              & (0xa0000063ULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc)));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint 
        = ((0x2000000ULL <= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc) 
           & (0x200ffffULL >= vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc));
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid) 
                                                  | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok) 
                                                     & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re) 
                                                        | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc
            : (((((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                            >> 6U))))) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                              >> 5U))))) 
                    & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                       | vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                             >> 4U))))) 
                   & (vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data 
                      & (~ vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata)))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                                            >> 1U))))) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc)));
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data 
        = ((0U != (0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl)))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
            : ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata
                : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata
                    : 0ULL)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena 
        = ((0U != (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                            >> 7U))) & (0U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem = 0ULL;
    } else {
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
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign)
            ? (1ULL + (~ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp))
            : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res 
        = ((IData)(vlSelf->rst) ? 0ULL : ((0x80U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 0ULL
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
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
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
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
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
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
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
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
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
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
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
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
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)))
                                                     : 
                                                    ((4U 
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
                                                        : (QData)((IData)(
                                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                                           < vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
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
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
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
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        & vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2)))
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        | vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 0ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 0ULL
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                                        : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2
                                                        : 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        ^ vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? 
                                                       (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))
                                                        : (QData)((IData)(
                                                                          (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 
                                                                           < vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2
                                                        : (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))
                                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2
                                                        : 0ULL)))))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward 
        = ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr)));
    __Vtableidx5 = vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel;
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_3685cfcf_0
        [__Vtableidx5];
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
            ? (0x1fU & (vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst 
                        >> 0xfU)) : 0U);
    if (vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) {
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size 
            = ((((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                 | (9U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                | (0xdU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                ? 3U : ((((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                          | (0xaU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                         | (0xeU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                         ? 4U : ((((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                   | (0xbU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl))) 
                                  | (0xfU == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                  ? 5U : (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)) 
                                           | (0xcU 
                                              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl)))
                                           ? 6U : 0U))));
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask = 0U;
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size = 6U;
        vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask 
            = vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask;
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask)
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                ? 0U : 0xffU));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
                 & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))));
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we 
        = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we)
            : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena)
                : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand 
        = ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state)) 
           & (2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                      ? 2U : 1U)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid = 
        ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                  ? 2U : 1U)) ? (3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
          : (3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id = (
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
                                                    & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint))
                                                    ? 2U
                                                    : 1U);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpp_set 
        = ((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                   >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
            ? 3U : ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                     ? 0U : (3U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                                    ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                               >> 0xbU))
                                    : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mie_set 
        = (1U & ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                      >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump))) 
                 & ((1U & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl))
                     ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)
                     : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                         ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                    >> 3U)) : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)))));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpie_set 
        = (1U & ((1U & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                         >> 1U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump)))
                  ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie)
                  : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl) 
                     | ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr)
                         ? (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data 
                                    >> 7U)) : (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie)))));
    __Vtemp228[0U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                       << 1U) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U] 
                                 >> 0x1fU));
    __Vtemp228[1U] = ((vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                       << 1U) | (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U] 
                                 >> 0x1fU));
    __Vtemp228[2U] = (vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U] 
                      >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp229, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
    VL_SUB_W(3, __Vtemp230, __Vtemp228, __Vtemp229);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign 
        = (1U & __Vtemp230[2U]);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend 
        = ((((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[3U])) 
             << 0x21U) | (((QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[2U])) 
                           << 1U) | ((QData)((IData)(
                                                     vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend[1U])) 
                                     >> 0x1fU))) - vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata 
        = ((((0x94U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)) 
             | (0xc8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel))) 
            | (0xa4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel)))
            ? (QData)((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr))
            : ((0U != (0xfU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl)))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1
                : (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul) 
                    | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div))
                    ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul)
                        ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp
                        : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div)
                            ? vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp
                            : 0ULL)) : vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res)));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward 
        = ((~ ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward 
        = ((~ (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena) 
                | (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))) 
               | (0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)))) 
           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr) 
              == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size = 
        ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
          ? 6U : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
                   ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size)
                   : 0U));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask)
            : 0U);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re));
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid 
        = ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid = 
        ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state)) 
         & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we));
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
            ? (((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)) 
                & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                   & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))))
                ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                               ? (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state)))
                                   ? 1U : 2U) : 1U));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ar_sh 
        = (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
             ? (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
             : (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
           & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state)));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)) 
           & ((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
              & (4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh 
        = (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
             ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
             : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))) 
           & ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))
               ? (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
               : (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 = 
        (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena) 
          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward) 
              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)) 
             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)))
          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward)
              ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward)
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                  : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward)
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                      : 0ULL))) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena)
                                    ? (((~ (IData)(vlSelf->rst)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                       [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr]
                                        : 0ULL) : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ready = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready) 
                                                  | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid) 
           | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena));
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 = 
        (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena) 
          & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward) 
              | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)) 
             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)))
          ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward)
              ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata
              : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward)
                  ? vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward
                  : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward)
                      ? vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data
                      : 0ULL))) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena)
                                    ? (((~ (IData)(vlSelf->rst)) 
                                        & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena))
                                        ? vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs
                                       [vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr]
                                        : 0ULL) : 0ULL));
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb)))))))))));
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
    VL_EXTEND_WQ(128,64, __Vtemp232, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64);
    if ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[0U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp232[0U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[1U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp232[1U] : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[2U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp232[2U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
                                     ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64)
                                     : 0U));
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb[3U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit)
                ? __Vtemp232[3U] : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit)
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
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid 
        = ((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid 
        = ((2U != ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand)
                ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                               ? (((2U != (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id)) 
                                   & (2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state)))
                                   ? 1U : 2U) : 1U));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid 
        = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
            ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh)
            : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we) 
               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid)));
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 
        = (vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 
           - vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data
            : ((0x10U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data
                : ((0x21U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data
                    : 0ULL)));
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena 
        = ((~ (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) 
           & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
              & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid)));
    if ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
          & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0U : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                                [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                                 ? 0xffffffffU : 0U))
                    : 0U) : 0xffffffffU);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0U : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use
                                [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                                 ? 0xffffffffU : 0U))
                    : 0U) : 0xffffffffU);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0xffffffffU : 0U) : 0xffffffffU)
                : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U] 
            = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild)
                ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild)
                    ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                       [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                        ? 0xffffffffU : 0U) : 0xffffffffU)
                : 0U);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[0U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0U : 0xffffffffU) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[1U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0U : 0xffffffffU) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[2U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0xffffffffU : 0U) : 0U);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb[3U] 
            = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))
                ? (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use
                   [vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index]
                    ? 0xffffffffU : 0U) : 0U);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid 
        = ((~ (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
               & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))) 
           & ((~ ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                  & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
              & ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1))));
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena 
        = (((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
           & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)));
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc 
        = ((((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
             & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid))) 
            & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1)))
            ? (0xfffffffffffffff8ULL & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc)
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid 
        = (1U & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
                  ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid))
                  : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                      ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid))
                      : ((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state))
                          ? (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid))
                          : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re) 
                             | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid 
        = ((~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
            ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready)) 
                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready)))
                ? 3U : 1U) : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state))
                               ? (((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state)) 
                                   & (2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                                              ? 2U : 1U)))
                                   ? 1U : 3U) : 1U));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next 
        = ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
            ? ((((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid) 
                 & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready)) 
                & ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid) 
                   & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready)))
                ? 3U : 1U) : ((3U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state))
                               ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand)
                                   ? 1U : 3U) : 1U));
    __Vtableidx4 = (((IData)(vlSelf->rst) << 9U) | 
                    (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2) 
                      << 8U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1) 
                                 << 7U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)))))));
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_ed99e91e_0
        [__Vtableidx4];
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read 
        = ((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
           & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read 
        = ((0U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
           & (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena) 
               & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok))
               ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re)
               : ((8U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state))
                   ? (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena)
                   : ((0x20U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state)) 
                      & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena)))));
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
    vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel)
                ? vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data
                : 0ULL) : ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                            ? ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel)
                                ? (((0x42U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel))
                                     ? vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1
                                     : vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc) 
                                   + ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump)
                                       ? 4ULL : vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm))
                                : 0ULL) : (((IData)(vlSelf->rst) 
                                            | (1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)))
                                            ? 0x80000000ULL
                                            : (vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc 
                                               + (((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst))))
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
                                                     : 4ULL)))))));
    __Vtableidx3 = (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh) 
                     << 4U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read) 
                                << 3U) | (((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read) 
                                           << 2U) | (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))));
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next 
        = Vysyx_22051013_rvcpu__ConstPool__TABLE_2d9d85ed_0
        [__Vtableidx3];
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr 
        = ((2U == ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint)
                    ? 2U : 1U)) ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr = 
        ((1U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
          ? vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc
          : ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state))
              ? vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc
              : 0ULL));
    if (((4U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state)) 
         & (~ (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__id_ready)))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag 
            = (0x7fffffU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                    >> 9U)));
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index 
            = (0x3fU & (IData)((vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc 
                                >> 3U)));
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag 
            = (0x7fffffU & vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag);
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index 
            = (0x3fU & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index));
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtime_temp 
        = ((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
            ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
               | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime))
            : (1ULL + vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime));
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtimecmp_temp 
        = ((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr)
            ? ((vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask 
                & vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data) 
               | ((~ vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask) 
                  & vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp))
            : vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp);
    if ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id))) {
        vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr 
            = vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data 
            = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state))
                ? ((0x200bff8ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                    ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime
                    : ((0x2004000ULL == vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr)
                        ? vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp
                        : 0ULL)) : 0ULL);
    } else {
        vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr = 0ULL;
        vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data 
            = ((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state))
                ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data
                : 0ULL);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i 
        = (((2U == (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state)) 
            & (IData)(vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh))
            ? vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data
            : 0ULL);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data 
        = ((IData)(vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena)
            ? 0ULL : vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i);
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
}

void Vysyx_22051013_rvcpu___024root___eval_initial(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22051013_rvcpu___024root___eval_settle(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___eval_settle\n"); );
    // Body
    Vysyx_22051013_rvcpu___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22051013_rvcpu___024root___final(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___final\n"); );
}

void Vysyx_22051013_rvcpu___024root___ctor_var_reset(Vysyx_22051013_rvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22051013_rvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22051013_rvcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_b_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_id = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ar_size = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_r_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__soc_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_strb = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__t_axi_ar_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_icache_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_axi_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__icache_if_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__if_icache_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_data_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_write_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu_ddsel_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_clint = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_mask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_data_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_axi_data_size = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_mask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__dcache_ddsel_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ddsel_dcache_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_ddsel_dcache_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ifid_id_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs1_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_reg_rs2_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_if_pc_sel = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ifid_jumpflush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_lsctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_wbctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_id_alu_sel = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_lsctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_wbctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_alu_sel = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op1sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_op2sel = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22051013_rvcpu__DOT__idex_ex_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_load_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_csr_ctl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ex_aludata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_aludata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_store_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_lsctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_wbctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_ctl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22051013_rvcpu__DOT__exls_ls_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_data_forward = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_ctl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_wbdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_aludata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__lswb_wb_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_ex_csr_update = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__wb_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22051013_rvcpu__DOT__ie_if_pc_sel = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__reg_bpu_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ex_flush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__ls_lswb_flush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__if_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ls_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__ar_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__r_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_w_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__arb_r_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_master_arbitrator0__DOT__read_state_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__bc_shakehand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_write_state_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__arc_shakehand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__s_read_state_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__axi_slave1__DOT__dpic_read_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__icache_state_next = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_index = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__hit_tag = VL_RAND_RESET_I(23);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_strb);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__write_in_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__delay2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag = VL_RAND_RESET_I(23);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__index = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__cache_data);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way1_recent_use[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__way2_recent_use[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_data = VL_RAND_RESET_I(23);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram0__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_data = VL_RAND_RESET_I(23);
    vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__tag_ram1__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__i_cache2__DOT__data_ram0__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__dcache_device_sel3__DOT__device_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dread_state_next = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_r_hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_r_dirty = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_re_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_update = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_ena = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missr_data);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dwrite_state_next = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_w_hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_w_dirty = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__core_wr_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_w_update = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way1_clean = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_way2_clean = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__hit_w_strb);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__strb_w_64 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__write_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_ena = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__missw_data);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__dirtyw_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__delayw = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_recent_use[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_recent_use[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way1_dirty[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__way2_dirty[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__cache_data);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_data = VL_RAND_RESET_I(23);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram0__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_data = VL_RAND_RESET_I(23);
    vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__tag_ram1__DOT__out_vaild = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__d_cache4__DOT__data_ram0__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__j_imm = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22051013_rvcpu__DOT__bpu_static__DOT__inst_bxx = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__id_stall_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op1_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op1_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op1_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ex_op2_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__ls_op2_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__wb_op2_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__op1_lt_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__j_imm = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__s_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_type = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__idu2__DOT__decode__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_addw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_lt_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sra_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sllw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sllw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__srlw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_srlw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__sraw = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__op1_sraw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_signed = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mulw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__result_lo = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_res_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__delay2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_out_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_res_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mul_stall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__div_stall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_wr_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csr_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__mret_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__ecall_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrw_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrs_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__csrrc_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__mul_doing = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op1_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__op2_temp = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(132, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplicand);
    VL_RAND_RESET_W(67, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__multiplier);
    VL_RAND_RESET_W(132, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__result_temp);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_negative = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__booth_mul0__DOT__booth10__DOT__sel_double_negative = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__div_doing = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op1_sign = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_sign = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__op2_abs = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__dividend);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__cnt = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__temp_q = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__sub_sign = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_dividend = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_quo = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__exu4__DOT__divide1__DOT__mod_rem = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__load_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_byte = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_half = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22051013_rvcpu__DOT__lsu6__DOT__data_word = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__read_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__w_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__time_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT____Vcellinp__csr_operate__core_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__pc_delay = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtip = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_wr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mstatus_ie_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mie_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpie_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mpp_set = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mtvec_base = VL_RAND_RESET_Q(62);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__wbu8__DOT__csr_operate__DOT__mcause = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22051013_rvcpu__DOT__reg9__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_write_state_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__clint_read_state_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__csr_mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtime_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22051013_rvcpu__DOT__clint10__DOT__mtimecmp_temp = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
