// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_npu_top.h for the primary calling header

#include "Vtb_npu_top__pch.h"

void Vtb_npu_top___024root___nba_comb__TOP__1(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___nba_comb__TOP__1\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*3:0*/ tb_npu_top__DOT__dut__DOT__w_col_idx;
    tb_npu_top__DOT__dut__DOT__w_col_idx = 0;
    // Body
    vlSelfRef.tb_npu_top__DOT__dut__DOT__c_data = vlSelfRef.tb_npu_top__DOT__dut__DOT__c_mem
        [(0x0000000fU & ((::IData)(vlSelfRef.tb_npu_top__DOT__c_addr) 
                         >> 4U))][(0x0000000fU & (::IData)(vlSelfRef.tb_npu_top__DOT__c_addr))];
    tb_npu_top__DOT__dut__DOT__w_col_idx = (0x0000000fU 
                                            & ((1U 
                                                == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state))
                                                ? (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl_col)
                                                : (::IData)(vlSelfRef.tb_npu_top__DOT__w_addr)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0fU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0eU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0dU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0cU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0bU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0aU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (9U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (8U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (7U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (6U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (5U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (4U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (3U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (2U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (1U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[0U] 
        = ((0xffff0000U & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[0U]) 
           | (((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[1U]
                         [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
               << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[0U]
              [tb_npu_top__DOT__dut__DOT__w_col_idx]));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[0U] 
        = ((0x0000ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[0U]) 
           | ((((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[3U]
                          [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
                << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[2U]
               [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
              << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[1U] 
        = ((0xffff0000U & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[1U]) 
           | (((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[5U]
                         [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
               << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[4U]
              [tb_npu_top__DOT__dut__DOT__w_col_idx]));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[1U] 
        = ((0x0000ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[1U]) 
           | ((((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[7U]
                          [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
                << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[6U]
               [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
              << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[2U] 
        = ((0xffff0000U & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[2U]) 
           | (((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[9U]
                         [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
               << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[8U]
              [tb_npu_top__DOT__dut__DOT__w_col_idx]));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[2U] 
        = ((0x0000ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[2U]) 
           | ((((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[11U]
                          [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
                << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[10U]
               [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
              << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[3U] 
        = ((0xffff0000U & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[3U]) 
           | (((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[13U]
                         [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
               << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[12U]
              [tb_npu_top__DOT__dut__DOT__w_col_idx]));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[3U] 
        = ((0x0000ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__w_col_data[3U]) 
           | ((((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[15U]
                          [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
                << 8U) | vlSelfRef.tb_npu_top__DOT__dut__DOT__b_mem[14U]
               [tb_npu_top__DOT__dut__DOT__w_col_idx]) 
              << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
}

void Vtb_npu_top___024root___timing_ready(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___timing_ready\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h24dce469__0.ready(
                                                              "@(posedge tb_npu_top.clk)");
    }
    if ((((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h24dc8f30__0.ready(
                                                              "@(negedge tb_npu_top.clk)");
    }
}

void Vtb_npu_top___024root___timing_resume(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___timing_resume\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnontrivs.__VtrigSched_h24dce469__0.moveToResumeQueue(
                                                                      "@(posedge tb_npu_top.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h24dc8f30__0.moveToResumeQueue(
                                                                      "@(negedge tb_npu_top.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h24dce469__0.resume(
                                                           "@(posedge tb_npu_top.clk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_h24dc8f30__0.resume(
                                                           "@(negedge tb_npu_top.clk)");
    if ((((8ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VdlySched.resume();
    }
}

void Vtb_npu_top___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_npu_top___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_npu_top___024root____VbeforeTrig_h24dce469__0(Vtb_npu_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root____VbeforeTrig_h24dce469__0\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((((~ (::IData)(vlSelfRef.tb_npu_top__DOT__clk)) 
                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0)) 
                                       << 4U) | ((::IData)(vlSelfRef.tb_npu_top__DOT__clk) 
                                                 & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0 
        = vlSelfRef.tb_npu_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h24dce469__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h24dc8f30__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_npu_top___024root____VbeforeTrig_h24dc8f30__0(Vtb_npu_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root____VbeforeTrig_h24dc8f30__0\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((((~ (::IData)(vlSelfRef.tb_npu_top__DOT__clk)) 
                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0)) 
                                       << 4U) | ((::IData)(vlSelfRef.tb_npu_top__DOT__clk) 
                                                 & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0 
        = vlSelfRef.tb_npu_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h24dce469__0.ready(__VeventDescription);
    }
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_h24dc8f30__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_npu_top___024root___eval_debug_assertions(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_debug_assertions\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
