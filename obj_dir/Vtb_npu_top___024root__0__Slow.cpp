// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_npu_top.h for the primary calling header

#include "Vtb_npu_top__pch.h"

VL_ATTR_COLD void Vtb_npu_top___024root___eval_static__TOP(Vtb_npu_top___024root* vlSelf);
void Vtb_npu_top___024root___timing_ready(Vtb_npu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_npu_top___024root___eval_static(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_static\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_npu_top___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_npu_top__DOT__rst_n__0 = 0U;
    Vtb_npu_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_npu_top___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_npu_top___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_npu_top___024root___stl_comb__TOP__0(Vtb_npu_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_npu_top___024root___eval_stl(Vtb_npu_top___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_stl\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_npu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_npu_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                Vtb_npu_top___024root___stl_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__stl(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_dump_triggers__stl\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_npu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_npu_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__ico(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_dump_triggers__ico\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_npu_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_npu_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__act(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_dump_triggers__act\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_npu_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__nba(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_dump_triggers__nba\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_npu_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__obs(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_dump_triggers__obs\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_npu_top___024root___eval_dump_triggers__react(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_dump_triggers__react\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_npu_top___024root___eval_final(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_final\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_npu_top___024root___eval_static__TOP(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___eval_static__TOP\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_npu_top__DOT__clk = 0U;
    vlSelfRef.tb_npu_top__DOT__rst_n = 0U;
    vlSelfRef.tb_npu_top__DOT__w_we = 0U;
    vlSelfRef.tb_npu_top__DOT__a_we = 0U;
    vlSelfRef.tb_npu_top__DOT__start = 0U;
    vlSelfRef.tb_npu_top__DOT__w_addr = 0U;
    vlSelfRef.tb_npu_top__DOT__w_data = 0U;
    vlSelfRef.tb_npu_top__DOT__a_addr = 0U;
    vlSelfRef.tb_npu_top__DOT__a_data = 0U;
    vlSelfRef.tb_npu_top__DOT__c_addr = 0U;
    vlSelfRef.tb_npu_top__DOT__got_done = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__0__KET____DOT__unnamedblk2__DOT__idx 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__1__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(1U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__2__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(2U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__3__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(3U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__4__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(4U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__5__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(5U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__6__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(6U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__7__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(7U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__8__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(8U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__9__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(9U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__10__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(0x0000000aU));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__11__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(0x0000000bU));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__12__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(0x0000000cU));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__13__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(0x0000000dU));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__14__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(0x0000000eU));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__15__KET____DOT__unnamedblk2__DOT__idx 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt) 
           - (::IData)(0x0000000fU));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__en = (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__wl = (1U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__t = 0U;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__t = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_npu_top___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_npu_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_npu_top___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___trigger_anySet__stl\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_npu_top___024root___stl_comb__TOP__0(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___stl_comb__TOP__0\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*3:0*/ tb_npu_top__DOT__dut__DOT__w_col_idx;
    tb_npu_top__DOT__dut__DOT__w_col_idx = 0;
    // Body
    vlSelfRef.tb_npu_top__DOT__dut__DOT__c_data = vlSelfRef.tb_npu_top__DOT__dut__DOT__c_mem
        [(0x0000000fU & ((::IData)(vlSelfRef.tb_npu_top__DOT__c_addr) 
                         >> 4U))][(0x0000000fU & (::IData)(vlSelfRef.tb_npu_top__DOT__c_addr))];
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[0U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[1U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out))) 
                     >> 0x00000020U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[4U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[5U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[6U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[7U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out))) 
                     >> 0x00000020U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[8U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[9U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[10U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[11U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out))) 
                     >> 0x00000020U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[12U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[13U] 
        = vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out;
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[14U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom[15U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out))) 
                     >> 0x00000020U));
    tb_npu_top__DOT__dut__DOT__w_col_idx = (0x0000000fU 
                                            & ((1U 
                                                == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state))
                                                ? (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl_col)
                                                : (::IData)(vlSelfRef.tb_npu_top__DOT__w_addr)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U] 
        = ((0xffff00ffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__1__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__1__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__1__KET____DOT__unnamedblk2__DOT__idx)][1U]
                : 0U) << 8U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U] 
        = ((0xff00ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__2__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__2__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__2__KET____DOT__unnamedblk2__DOT__idx)][2U]
                : 0U) << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U] 
        = ((0x00ffffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__3__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__3__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__3__KET____DOT__unnamedblk2__DOT__idx)][3U]
                : 0U) << 0x00000018U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U] 
        = ((0xffffff00U & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U]) 
           | (((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__4__KET____DOT__unnamedblk2__DOT__idx) 
                & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__4__KET____DOT__unnamedblk2__DOT__idx)) 
               & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
               ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
              [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__4__KET____DOT__unnamedblk2__DOT__idx)][4U]
               : 0U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U] 
        = ((0xffff00ffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__5__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__5__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__5__KET____DOT__unnamedblk2__DOT__idx)][5U]
                : 0U) << 8U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U] 
        = ((0xff00ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__6__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__6__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__6__KET____DOT__unnamedblk2__DOT__idx)][6U]
                : 0U) << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U] 
        = ((0x00ffffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__7__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__7__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__7__KET____DOT__unnamedblk2__DOT__idx)][7U]
                : 0U) << 0x00000018U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U] 
        = ((0xffffff00U & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U]) 
           | (((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__8__KET____DOT__unnamedblk2__DOT__idx) 
                & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__8__KET____DOT__unnamedblk2__DOT__idx)) 
               & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
               ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
              [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__8__KET____DOT__unnamedblk2__DOT__idx)][8U]
               : 0U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U] 
        = ((0xffff00ffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__9__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__9__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__9__KET____DOT__unnamedblk2__DOT__idx)][9U]
                : 0U) << 8U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U] 
        = ((0xff00ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__10__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__10__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__10__KET____DOT__unnamedblk2__DOT__idx)][10U]
                : 0U) << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U] 
        = ((0x00ffffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__11__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__11__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__11__KET____DOT__unnamedblk2__DOT__idx)][11U]
                : 0U) << 0x00000018U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U] 
        = ((0xffffff00U & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U]) 
           | (((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__12__KET____DOT__unnamedblk2__DOT__idx) 
                & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__12__KET____DOT__unnamedblk2__DOT__idx)) 
               & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
               ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
              [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__12__KET____DOT__unnamedblk2__DOT__idx)][12U]
               : 0U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U] 
        = ((0xffff00ffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__13__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__13__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__13__KET____DOT__unnamedblk2__DOT__idx)][13U]
                : 0U) << 8U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U] 
        = ((0xff00ffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__14__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__14__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__14__KET____DOT__unnamedblk2__DOT__idx)][14U]
                : 0U) << 0x00000010U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U] 
        = ((0x00ffffffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U]) 
           | ((((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__15__KET____DOT__unnamedblk2__DOT__idx) 
                 & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__15__KET____DOT__unnamedblk2__DOT__idx)) 
                & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
                ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
               [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__15__KET____DOT__unnamedblk2__DOT__idx)][15U]
                : 0U) << 0x00000018U));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U] 
        = ((0xffffff00U & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U]) 
           | (((VL_LTES_III(32, 0U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__0__KET____DOT__unnamedblk2__DOT__idx) 
                & VL_GTS_III(32, 0x00000010U, vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__0__KET____DOT__unnamedblk2__DOT__idx)) 
               & (2U == (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state)))
               ? vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem
              [(0x0000000fU & vlSelfRef.tb_npu_top__DOT__dut__DOT__g_feed__BRA__0__KET____DOT__unnamedblk2__DOT__idx)][0U]
               : 0U));
    if (VL_UNLIKELY(((4U > (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt))))) {
        VL_WRITEF_NX("[npu] FEED k0 cnt=%0d a_mem0=%0h a_row0=%0h state=%0d\n",4
                     , '#',7,vlSelfRef.tb_npu_top__DOT__dut__DOT__run_cnt
                     , '~',8,vlSelfRef.tb_npu_top__DOT__dut__DOT__a_mem[0U][0U]
                     , '#',8,(0x000000ffU & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U])
                     , '#',2,(::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__state));
    }
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod));
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
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (1U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (2U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (3U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (4U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (5U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (6U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (7U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (8U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (9U == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0aU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0bU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0cU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0dU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0eU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__wload 
        = ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__wl) 
           & (0x0fU == (::IData)(tb_npu_top__DOT__dut__DOT__w_col_idx)));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U] 
                                                           >> 0x00000018U))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U] 
                                                              >> 0x00000010U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U] 
                                                              >> 8U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[3U]))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U] 
                                                           >> 0x00000018U))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U] 
                                                              >> 0x00000010U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U] 
                                                              >> 8U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[2U]))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U] 
                                                           >> 0x00000018U))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U] 
                                                              >> 0x00000010U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U] 
                                                              >> 8U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[1U]))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U] 
                                                           >> 0x00000018U))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U] 
                                                              >> 0x00000010U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & (vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U] 
                                                              >> 8U)))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod 
        = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_npu_top__DOT__dut__DOT__a_row_in[0U]))), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q)))));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
    vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 
        = (((- (::IData)((1U & ((::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod) 
                                >> 0x0000000fU)))) 
            << 0x00000010U) | (::IData)(vlSelfRef.tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod));
}

bool Vtb_npu_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_npu_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_npu_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_npu_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_npu_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_npu_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_npu_top.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_npu_top.rst_n)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(edge tb_npu_top.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge tb_npu_top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_npu_top___024root___ctor_var_reset(Vtb_npu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_npu_top___024root___ctor_var_reset\n"); );
    Vtb_npu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_npu_top__DOT__a_mem[0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15440503525719199501ull);
    VL_UNPACKED_FILL(vlSelf->tb_npu_top__DOT__a_mem.data(), sizeof(vlSelf->tb_npu_top__DOT__a_mem[0]), 256);
    vlSelf->tb_npu_top__DOT__b_mem[0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1946715635143712676ull);
    VL_UNPACKED_FILL(vlSelf->tb_npu_top__DOT__b_mem.data(), sizeof(vlSelf->tb_npu_top__DOT__b_mem[0]), 256);
    vlSelf->tb_npu_top__DOT__expected[0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15331823660385910726ull);
    VL_UNPACKED_FILL(vlSelf->tb_npu_top__DOT__expected.data(), sizeof(vlSelf->tb_npu_top__DOT__expected[0]), 256);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_npu_top__DOT__vecdir, __VscopeHash, 8794887697701773475ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17210849867381826871ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__c_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 753765699483845011ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16776183143255957375ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__run_cnt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3073102104443041099ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__wl_col = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15174154042440781145ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_npu_top__DOT__dut__DOT__b_mem[__Vi0][0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6195713344255747631ull);
        VL_UNPACKED_FILL(vlSelf->tb_npu_top__DOT__dut__DOT__b_mem[__Vi0].data(), sizeof(vlSelf->tb_npu_top__DOT__dut__DOT__b_mem[__Vi0][0]), 16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_npu_top__DOT__dut__DOT__a_mem[__Vi0][0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 919183450228943664ull);
        VL_UNPACKED_FILL(vlSelf->tb_npu_top__DOT__dut__DOT__a_mem[__Vi0].data(), sizeof(vlSelf->tb_npu_top__DOT__dut__DOT__a_mem[__Vi0][0]), 16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_npu_top__DOT__dut__DOT__c_mem[__Vi0][0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14692973989994761849ull);
        VL_UNPACKED_FILL(vlSelf->tb_npu_top__DOT__dut__DOT__c_mem[__Vi0].data(), sizeof(vlSelf->tb_npu_top__DOT__dut__DOT__c_mem[__Vi0][0]), 16);
    }
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_npu_top__DOT__dut__DOT__w_col_data, __VscopeHash, 1451484789819148885ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_npu_top__DOT__dut__DOT__a_row_in, __VscopeHash, 10970763737640176513ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__psum_bottom, __VscopeHash, 7079051711946097379ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT____Vcellinp__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__wload = 0;
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5941103979047721916ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10600282156327358754ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8761072586061041263ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14155650847233500768ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7821476941392189405ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11280017320656603275ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9936986066576463627ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1912409114440584399ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12804996610045424119ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15291647638037511277ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7557569939063356731ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8148636532755400890ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14375383398747789351ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13372197910875403737ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16675587538949652908ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16611367081143764494ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13326736621953747391ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14109552084867593907ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7582903559596670448ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 970717239562798210ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1793954160460120498ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1471569973293603755ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10058969703642160693ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4156827566490709042ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3071221307635318124ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5374496761352311087ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15114287118598587210ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1274476785596727925ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1219704643592573957ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12000832165047548262ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12191721715974411009ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9116371663524473665ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9166644208662615786ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8553713707870211021ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6368963422503966363ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5791689196932954127ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5940166689640606985ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8926356982653737143ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1317626047002860444ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787353986973108916ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16216502395497344509ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13148399053601400897ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5819986447550003854ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14919692590590869844ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3052608369501545621ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11800993694716007782ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14313822769029746059ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12072286916297549862ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12224186578323777768ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18145712942020130409ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15508945809329617603ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14173930680110849911ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10458504665967431906ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1468630196654213939ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18045237173144469813ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11673096182433329090ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9215570184438748381ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5635747132460368254ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9819896158213340107ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15391467415978842575ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12799403856568251772ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10108538864685677229ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13854657420276348748ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5454659411497126201ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14024973324007091093ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15170893414193989846ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10507970654521228834ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1542568660384939153ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4715185971025409321ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17292960865881348621ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3801375277240997516ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10790622276872176631ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2321476454228150464ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12671981733804192572ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12181971316132727158ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16293898280999761512ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3767253268363161490ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13590016074950408329ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__15__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8818182651866928074ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18003317498220459732ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5693641091966216110ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10142496998639170075ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14980425217346148894ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18039794361485102083ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5081959158952884710ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15387348134711987094ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13357448680005742781ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17382829881743015070ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8046695630445418629ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9591720847038908046ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16098108333817344065ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2896846304907660285ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5587382226519540735ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10810286618482549201ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10109095467886645462ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4288541680530620586ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14112278056885414926ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14069230772617830550ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14379551158809580683ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8935023808461031091ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4736588689089065275ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8921340594912896766ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14256393684255806395ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12755958301381883131ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3080802867260651297ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13354170250561233547ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11607089356347773833ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4199625995181344327ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14770476851637028783ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6658935763940027807ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3376761501926814500ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3655375044119748593ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15871637033492272465ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16432907970999632594ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6025590801099820695ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10549024208790146304ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7771193491889769341ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1109113439926713782ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4658109021676333716ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1968714864230073749ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5545961299788013327ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17353693712727378813ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1360057284628624769ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12846787665714001527ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6308739921355514344ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16049424920439335777ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16730104322921263862ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10766969385526540580ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7757849378381761012ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2285286084043541814ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2930307226156078393ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3364923437616702707ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 820758732545650875ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16085019555112704306ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12607871567750996126ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10493493817981971696ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17265602908383575543ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18446391433160707063ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5940283653265159031ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9194813912795343295ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 929014749854142065ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13820865494322403219ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5251746317325896520ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16519186132260251650ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3682125544277363725ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1951728745433200694ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10913531326748517010ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4736351081801981083ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18201074822567162504ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17065585388415476321ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 967380965249841629ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9532688398119141700ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15824582033429019133ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11308752858975887745ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18174227321645963262ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13021906694804292381ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14161859404481633373ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__14__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13210314177401573648ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13548372597221082013ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6124116974703877182ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11397637978247088936ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11564750438932823722ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1851355677486445845ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 189212361876815833ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1627531237876057211ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11520846195935457186ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17880677380118149995ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18132184796455095452ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11986531881226059057ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12017652934854930103ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15536686237583081118ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7805665303696902519ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17358799207700319038ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 215666911098188752ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3187874102618703403ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2765811219367027482ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12145182887098822637ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4347917388001213699ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13638491661999725612ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17168184690032967563ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14634178204319717897ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16728625831709730685ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6810443157802138730ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1205716280479283727ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2485940252289136826ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15594138134135573186ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3600344818919054117ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18251863236998281666ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5394368964088309148ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16847536039660520656ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2672232909232059446ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9743117415578587676ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4199554172127123021ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13476351737866568115ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13377377913722907901ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6520437879319907846ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4214400805480663343ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17546352235804407717ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4934774493697119244ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14142555685378897930ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16881624188270118417ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17317444036069271844ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8918527701893686507ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3792388881725564728ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4768721281364810010ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1937990795380196795ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13865478384298355609ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1793574877385336603ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3732679361474195053ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11780319711582305786ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7846678626117099433ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17993427468473419680ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9039947837120384803ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16774582120782008042ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2409752970793628291ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2693153313819601036ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3745668415620985511ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7608349436992618998ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6112920380902105318ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9532816011946086022ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11233918354389468498ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9785924427990300699ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5999458451295738389ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7424434565622469387ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9967333533888579329ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15424974069893304948ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3611982612660105689ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12757118051524556996ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11350810230904864874ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16308097614360656883ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7131810412149360837ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9177641453798508301ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7664945885891340012ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18030645180047815880ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11407082691440692627ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 619454271799274431ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__13__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12431364349137788038ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9065858118332795314ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5808932172510357491ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15317908406316318017ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17508789770420575948ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13921691452646699750ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17460913038817304386ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11253763870106730824ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4965797257435192207ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12873467982596327715ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3530565470780398633ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6116319852393155048ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11789724367791934666ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3451863913512148074ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12036007922645956930ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8382709584299692296ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14842977622083175903ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10913630033828480180ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15181600752522774427ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12545006837793393858ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12779683671033534843ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6934451786130274378ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17905662804396623817ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3006147561382577385ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8660463781888464327ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4028415548001269971ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15591181442922996244ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6435433723211603055ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9261705821546129752ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14723432600685216183ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18225693552287505309ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11626213598343563978ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14489190911900749757ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4203408821385175329ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5873938772596134583ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3709843626508111532ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8143546306327715340ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11770092018617313982ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15093214294056384973ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12108048019996072211ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9433577993940064978ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 213713897177197530ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17578949825619047125ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4042439830128727129ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15762053284925259730ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2682949587321420066ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6846522501323074001ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13485850995766110556ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14859267602186627013ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1355690276236743052ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16404061319302897294ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18425463349189253389ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17230219752955572357ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4256529978913781335ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2379436490178887342ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3575274174461788480ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12513379278366032668ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4026553950709147792ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17414329089901363409ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4187211215916513388ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3356203884869269855ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11060517442548641549ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 847911474851904216ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11713453593589333696ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 131898957597396632ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16445985380581186548ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10037848682843055734ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10869893464249315826ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5057871415206666203ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12603591447502521796ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5892123309890513240ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8485562608124099871ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2084512437931331570ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18323878424228981314ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4336275348901497055ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8430313895495337704ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10300292029749176529ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9389554278296718166ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6143780859024409928ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__12__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12275232451328043025ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7061847520490682191ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2725457223109124482ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3616727320157748258ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8284778938439939300ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5585137401353174874ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4045336973142865099ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11599136858706512887ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8513929698497089770ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14812822963806514873ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14089025961396628797ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8156523610608721281ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3899016103334426352ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16055506416564684413ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17627326241140351481ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14454621215186261497ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12118074647593989327ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14950706736061547665ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2436520042398499407ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 489642200362513637ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14321308460979472099ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10332724653544650703ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10807377752600596953ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11440858090939882494ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14183048827588308961ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6088138369284423452ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14869092190922954000ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7784995665729978706ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18140830418861729130ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4991841603780915796ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17456736656995339688ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14410680172625970959ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17905966658467619646ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2826986450601298610ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4906758003435408113ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12665693085184606754ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16787867290242831185ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12591930367517885271ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3042627810338196043ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3808643591610305963ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 762886636566697994ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15560029606129445414ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2193521298500080007ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17299553017235792003ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10386275254248182360ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 537400995803844858ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9504918704886483768ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16485028724544061339ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16541029602356806565ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6668934672231546002ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7651227503679864901ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11121461490723133562ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6115533096770699384ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17699495895607561028ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14374607849223327190ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14231131555559844139ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18078526890419235328ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6139525254841804196ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18268804454427509885ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17558192557146583889ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17127513503382345829ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 356874557266613287ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16954036316395583141ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15446219247266951225ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12500046312940878897ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9550320728614808237ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12025608506464686165ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8943242996671329730ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4628819018595441714ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2475784419519843714ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7697835465823769476ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1466105711102400221ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1526392669977748972ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12289759850698710768ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8113892425798107905ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1342917004669072857ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14509561417723751249ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6118299003285402852ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11964587810732527092ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__11__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17283880908164958704ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2273467213646177367ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14384857406374457435ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7972877776523548111ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13462401759131981683ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2583902582496694537ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 120377915975779592ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6079625322462299644ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11954758831076330755ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17694684397314049984ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9264158334091284357ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17367193694054050602ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11022062473743335095ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8773321560133228472ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12195035594892323595ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13605387404729271969ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16789768134037343656ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6135296176984645784ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15323743395944484127ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9884187585632845888ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3953646626747840878ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1527841656044487988ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10257139026757790319ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 829270699008754785ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8427477647299501420ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4466838612760053817ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8833527338922462238ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7021497887125646612ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 699852339757473089ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18137300528677160660ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11143491193790172227ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7598261843233653210ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13533695470254636146ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8721662659868528785ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7818370898774349396ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8873862345459716670ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16409006364396143446ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1862718133975331782ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10559914052959345465ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12038926587631490942ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18036836368747877417ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4541730065982664773ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11574378051861233402ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7408854234915430087ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13896873563651175274ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16293899555873609404ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17841138811232954632ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10998102547877671927ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10155367291094433398ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6977464725069962635ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1669888785610172155ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 299802154426571701ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4951807432342550473ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14436324575223107103ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6435783205951426196ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6064501205253420064ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16315786638105267512ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6311314463556146476ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1851381150499293635ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12237721141235732477ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8029184927622358789ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13017554119449425006ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14439087890210135640ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12570302854947598992ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6368915625350761338ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7648083762514242135ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4911259841717422456ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9013842695377444797ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16214068690517727972ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3764835301919048354ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10448493258684565368ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9678877814247560965ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7849510081250904456ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 415242034808263337ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9080186324014929982ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10106722843521502246ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10587912250096180112ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7879505100768680668ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 624212011925084629ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__10__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6032749442747935826ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15299664273964842185ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11722723554138914328ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8820148331007880345ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6848421393336558909ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11177401899611413521ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1226419417170626416ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12366235649192180645ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8922642231374575249ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10054046150496064976ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 713002559229909005ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2491167280272874704ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14744678411022886374ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5836486122578383712ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15516595606587876948ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6916924823309900424ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9881910613871943873ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8157998237837700120ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7626927494605814054ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8519985418800585974ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3671629313472923405ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13365789078632691803ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15247735297530200122ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11841743649936183283ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13665139650855989855ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3230060091185797511ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7936714844429664174ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7561558696300124899ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13750056648382023263ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4827438713101200124ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16982821898573959337ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14617788206693904397ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16215346005479643187ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4249954792726463455ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 552311697422631430ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11325959660427948094ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7198437334514022383ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11255573715626371335ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7616335019245041317ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18225702736194676246ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16223708056310468052ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16869693076970240010ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15663806312850891951ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3312646719876391114ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16357988215772522153ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11050776503994961571ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7953774675671903811ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15574613063082536746ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14619018855275866356ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12236351213076786038ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7722896346421282125ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13222166580371199086ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13119008650329651602ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18152735620476008320ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8005720677672090957ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3190299961757996890ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8774628860673798365ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4987338459319136774ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17303132083864822196ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15630444617313338246ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8639667207375230435ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12190780614504245664ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2358626952601022161ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13192081600248635620ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8732820767204993075ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1746727293022439195ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15002971219115243285ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6852270809069602998ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11127666561041570149ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4125247060405279437ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12744598750853375059ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5698129111675217475ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10957200007405942827ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6816936913852459027ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14590080400182000845ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2714870082491899629ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15054840393587838045ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15443063324778651191ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15266600243879594703ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__9__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15129352883901726591ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 71856764516590554ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6123373056470307364ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 120298675578882777ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10038158441129818071ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14047265485638370930ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5078658530712508076ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4950607521056845692ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1168598823676091828ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9427741364943476459ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10561207885593819394ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2913617906484062839ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13336912866272774310ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17135617437998718530ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4697243324276401447ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16532671526592043193ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 78701563695161821ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14761919189888038944ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3422029980598737371ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14878002172454231010ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7879217599811808550ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9919833869444653825ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1268480531435206248ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18228148455166342409ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 621846212319548378ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3457175327823321650ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8239260317498730242ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9993275571057395738ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4444552881575438934ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11993809899065646154ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9934219058107201526ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2551947359260540063ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6498805583997464860ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7274167485399739910ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2142258521284002881ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5704697663595074342ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1291783868071798964ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8326953579581471726ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7261021687617020068ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9722415350389143609ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1051235317647117344ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1079804839578690083ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15985835210288603560ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11349942232737102481ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16617596135298998425ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16534556250310979849ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 419536738909798310ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12783464614774804835ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4200415835836189090ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6272659158063335592ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16258115791795348290ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7765242736007089960ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10999614781472427526ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2903908223341758153ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15805252064450955242ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6098171486776382766ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3655573352602546876ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6076150098202605076ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13541060063502859753ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6499870777431898354ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8190966704641330651ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3312863989488925801ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14210424736844763814ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16079704058565970773ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 630270182036174232ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8629166820748509790ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10870479434560246642ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16669678931853549655ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3839739712850214533ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6131163422690496210ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16515277790586138378ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11587178027289735953ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13357280423035232277ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9698034367419331562ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5920843447273203849ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9890946851255181591ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18412213930362248946ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4434258888860886687ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1891220485988232925ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__8__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1730110287318888246ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1839636710624587114ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4848797548568279288ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10650507154145017659ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5221328235897683987ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10874034280797120713ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7302282127823561288ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2132600144184974446ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8106510881550229874ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3764755145157691967ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5370453263070719954ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10735271606421545725ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7839755948212053112ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15360472805120978810ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2757157098098371427ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10580521627980805005ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13022975600052817115ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8204328426651610357ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16226762022389058021ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3614501268224372684ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 853540045437881260ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2616796228879685728ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15698127529595440735ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6102942019471847177ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6246961574402868100ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14133616128676914239ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1060498304594921186ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13231392394255438546ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10203552597941671456ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12513339430669267056ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12398457500843800683ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9618559915143187056ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2511983017244701037ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2582978898721289268ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14173991326425662178ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 617679725272484250ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8772243068998750887ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17650238087075697098ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12073363975547010458ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2200243019998156189ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 111495967998190479ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4202453473689073997ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17903630399293491360ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1868761415759507689ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14838170238443250743ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9844460831291088795ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18160643780488180261ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2242931957580836651ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14364630435931200647ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12604231719196064823ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9203680590984176468ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9722693359665219142ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2253458881889168053ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1548674705860724625ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17173620855348468568ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12258166353217034278ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14588363431694426354ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6378949774840653191ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13592053349487771137ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1172855081514057112ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15647653754885357083ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12341232652135163658ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4171523350216389791ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2466618073481319850ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5195664401342977645ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1829519166473397157ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13509086314398470025ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16316101021327427220ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10304926276086739192ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8909768887690768961ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5882850493427672551ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13920059544093674299ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4417113172334855712ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1723189566262531346ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11760775695230399553ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13670885784290658479ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3997359287296154004ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5154207655502157449ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15931956892582497357ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1153321702991001083ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 487869910087285288ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9699468483639975605ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8999462876904355568ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16362288903278628758ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4933985197089971359ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7052828512742428986ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7526173369109093341ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12260969075901661831ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3642324216311520775ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6011433019887626182ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15565615423763305813ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8645964764827043540ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1298940900321396572ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14560485438573204716ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13461406202106246787ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 503358191956264858ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1905581675393934087ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2480846766024960456ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13078988278435769623ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9907637595185126883ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13447447451826915542ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6451028129793010107ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8073773054588078891ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7141598476210571128ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8306290531774381799ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6202935989048825216ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 100959551634098043ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5468804406297540226ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7818352325588764481ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6919557658357982751ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10072255975940988223ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9071295019501918597ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5668979134477103466ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17663926981358959946ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2403501748778704741ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4667932324318923914ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14569372755197388058ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12586483363228533461ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3488644647943568400ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2573298699541054377ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17373885475046717022ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2150652195832403765ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16351788308471883027ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9655600729333788199ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9459843929247750664ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13634494329319431223ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10135592967358299694ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 607883181903111842ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6720899516864881357ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18304645271168575619ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8759611236708692148ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2552571037064913821ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9165542507635536737ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12430786164924815844ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6064190806578219301ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8184939248261709609ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16543628445966211525ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18368602272385421640ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10988859894517344131ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 657501130840823637ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7437142366887724873ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15917153679967772338ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17520070474482358957ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17985146674698192206ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11200767481252990605ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15131793328342145819ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4691374995898481026ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7308793054224374212ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3132327739573649002ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10057860660776938626ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6579591502833921762ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1972144966040835899ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2243096487723999431ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 687565077247832803ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10701224617801092698ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8345049591873566100ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1624018769391339646ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3688961505662302089ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2041647718274096706ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12810546105726406015ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10185331866466495882ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9018853041107331750ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1309648376819605336ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18428865485958300397ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12631334946060231704ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 782505638213779855ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12201334278188886105ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11531239407143035390ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4053808176420342046ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9981363457993500448ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9382478010463241876ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13824059370362323749ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7581881720551121236ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10731924867767721504ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3715161308940194759ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3919866610299674866ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3456766038921691420ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4696115663833960797ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18420359585205283866ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17218491511867229595ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15963040893136773179ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5759431502256818268ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8170342738063977655ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15701653582927234878ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14729065034303246762ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2321270661891138809ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11088988435761960282ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4017233652639420000ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1261967429104091795ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7945141972177003756ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5611385146090591009ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2503191525532226245ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2518217732647081455ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13451856902903089073ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17585556906669044219ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16353874028803617486ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8730407902195669725ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3205608923061785068ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14838578280559617628ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2626001177016043787ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5484299573063047399ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5749533597730174345ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9750386634164437770ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10101359583211070762ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6963620764136518839ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18243023854750586871ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8080444735187152585ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10234429926477706683ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17921105198265702256ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10309709831217687270ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11997857917452559659ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1159675556129085286ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17020420793446887748ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2917303736511561073ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3064457312198911054ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4189429964230624645ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10270058018066248377ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3970172015702005958ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8454885761875290408ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13661824111349455516ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 272141998096780792ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4367327131484651926ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16776455523880077258ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8006850603867969538ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 145770694412224905ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2208746854365521990ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5886536329758236191ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12415713218586709079ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9574630733422154144ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9946745066487830542ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18145823182003943717ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15850540632972645774ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12488538300496619015ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7353092648040012458ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12885154303307407399ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 243745440432995142ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5373716312373641072ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12181194896799561781ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4794057923911216559ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9947639914797410119ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1420874857337377479ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12731313964601971452ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9730756753595883415ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13522727780354384251ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9109074480114558570ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7813567574220159223ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3701544621975296272ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10672589595316868111ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14894778931980670058ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15298616591785792839ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6458224076668812985ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15148911965496886469ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5419883155600373050ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16586905924009603824ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9778488310570654159ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8333069320640240388ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3063642636871342535ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7793004144074964745ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15507757451478309684ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17864983996793759460ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8989695383674234468ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14746562831667274153ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12677696730851482071ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13235100456800866482ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3418903890369243004ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12613159164386476442ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15467594393715165690ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9120205982108139390ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5434944661327992454ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6054178142810724409ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14430065635569010965ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14459225540857885290ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11273393160775676539ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6590803338510472855ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8202888066676374382ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14208755587430729588ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17760761704838842219ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11086240387016638730ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6619004918978125260ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17655065168612553850ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12194865959783897189ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3833721816083445281ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12715727772618543001ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15946494738933555787ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6897224186014322501ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16762233747463753178ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 401526265243974497ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6003986474477211212ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9735140477870808280ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14401330249846717656ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4427821620281701713ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8167799174283185817ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13565200816090976117ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1314013096999232084ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2737840754328445373ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4166407334228690181ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11320257254929796133ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15945123556038455127ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18381202750497966291ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 627996392481108272ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10139649066987238312ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6577787540208466035ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17175390930572404211ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6436367449469831965ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15119491401069307759ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16087691562571466167ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4574254319746100295ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14891604563686985465ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14162444592429517427ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4866470166205272212ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4768205257656008445ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14241726632780903116ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1162427969803270688ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6663187027897641262ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14074073463013166487ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7755408433673800826ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15070589772860723278ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11212360070513232637ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10749856010456794821ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12336589131294404918ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9858039909564681268ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3342896882814263624ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17456068479758952924ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17893472080690519061ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3613457562986142187ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6605973822770772815ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12180875694762094550ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13315116778581030457ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7374958047068318001ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17684038422588625397ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10459985749553126881ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18341556545841572105ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12319327820760716362ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5860312365677280972ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9730682716200587273ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15315694677684698990ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15540888233525885668ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3975622392346154419ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6518256373040298030ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4711729318703273532ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10287311170838250878ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9994154567712868839ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1910188809274065272ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7747832866387937013ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4300115220201229513ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13242409652922609133ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11528765503486129325ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12726243884553146819ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11786857610917263239ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17669736055145406488ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1970737595331661829ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 757842248648608824ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8904164342827318731ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8764166122247071319ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14205382310747196182ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9067713845976555210ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6335301080659799900ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1558449682253931810ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12151009406522986237ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10258576245676456844ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8809006602750067064ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14187742450901765785ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 45237161746801306ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9982638949308120478ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12794683424008632936ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11154312204534499350ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9334716829075349233ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11164169123896951293ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10829114204326846537ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7924978671446724382ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16193823151425016519ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9678804642972670813ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7520768222971268348ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6154436485974334086ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5672053650279848444ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5696173500334821934ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13436024414429188071ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14634155002325005663ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15799180892136210197ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10935529794973813754ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7528610540660127008ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5378566941429832344ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3844350856636256061ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4520961173871203920ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15735359654759322623ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5818042552675601878ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2941137348302355624ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12926768149810373039ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5992206152498215574ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1511711120160957375ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3300925710376422791ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11500290797910076112ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1569911216241274935ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13989729962954037539ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4003322767073123583ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14011595528427774049ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13735632212752296015ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9864633124409738438ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1190113066289214765ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12343180707766679699ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8628996314282550921ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14006096296097151782ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9554972678045801154ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15339429272523129673ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14316301067550078344ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9924788582426089939ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6942152782657070763ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4294485336897079117ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18330149853075080284ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16151996436436170200ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3355229545065060861ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9351719135268396946ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10191443331899651663ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1246684339743308991ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11683380445877124660ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8963023204186514048ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2405718330005281703ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3845288781448457436ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 339412066717882736ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14217661753935581959ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8966615234547733499ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15995026889262205059ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8923131583508036453ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14033923303729769849ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12525085005968624435ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1589579185693061117ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9414536389031613156ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11785217548072657111ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13386165907653461758ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4056301324611916161ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10405488832874019158ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11635264959188852262ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3491696841989623227ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17219249916119937036ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1554163497826681458ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4231050228774521414ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10873533984682923861ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5645282823644755703ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 403218959629956708ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1452808566785556401ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3582727826874145839ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3959793394870434749ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3427057621190224092ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12214926458087231493ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6884779543575301911ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9137579545101441074ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18307289986167860479ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10170794328373791270ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15786012068341579984ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14954556457321647287ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13413564566697682173ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5096197486355438406ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5078052035598939343ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16243448271317003929ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 508397598069820672ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7532436924549434756ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3899227523182683926ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15515147533293896371ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14659940793484147962ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4707851306010680950ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 943086337025938415ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11607516051360245032ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11191813422025998913ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 266094720453913155ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15563286865944957176ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7854562967538871558ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12134032870883752737ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11219050585499457398ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8677460887095978459ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3864271436669141910ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7616225067864212107ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18010977785632783687ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4157927873930929992ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17840138420564145032ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9284316405100078157ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3833470115843419753ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5650376818492834348ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16820285404098369900ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17721333855787308955ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5401065158822910014ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4599911859046389007ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11844163345810472900ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14696815822596039006ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4658120429263381113ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7820181303175554590ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7325964567461221543ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10966655156685654364ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14847856322211139204ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8520002572977718201ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 294322809118026544ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10098316091427686754ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 677611544516929971ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1029361685796366677ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7778455747360597270ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6070319965606333892ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6636188047248512902ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2127641843630772827ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13184032904608961ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8158191416506170456ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4654013056615142961ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3342166706185543928ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5487252240581441038ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13621249689960640392ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9661679989034951638ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8498521154578410331ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7836147179389145364ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12452811804529306015ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8943413778920959250ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12771291641042763041ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9028310379051432490ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16416418455073639310ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2775651020435219000ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8213013460985188095ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6107532228469176385ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4952223147155127136ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14621784831884590027ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8473365459005178930ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3052279572774374261ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10433723173582394171ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5354905074900598897ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5305571751566023817ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13740166549433271763ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9885632102681138661ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15483950248708185635ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14263706032361582114ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8095750635903247227ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17654791314199004803ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1728058198736646607ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14768876015374806659ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17466644175836975852ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14077687727542632336ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7989697140656983098ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9716306304219220423ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10616848991963173621ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16291084093880463987ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17055415075024460662ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17636083748909025086ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15828363540283639948ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7363296709570719492ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6745074496697391456ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5627548158249356268ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14571046398216769920ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17136893029899411834ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8117347631952374808ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4663161086151654415ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11022491715942923730ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9814583636305783737ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15846298957120593868ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1907066729369027552ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 493846943649843957ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9190203604156750434ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13332855016500801858ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17736579816935964120ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16249628615929324612ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9173427879535400632ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5105428036807729806ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6859240893938284556ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__15__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13652876938391993802ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9847596965203166668ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3836603682815215703ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16635796612273920330ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13277308733134757410ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__14__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7663986609460309261ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3389722354083063419ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14404375716542687644ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6279073726444999789ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 480761532321829103ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__13__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14882451900495690990ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9051410241735684386ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17468867392174081788ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5554229002447234606ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2078338506265595083ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__12__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4502613234057828382ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10035362399244587083ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6787087539517624950ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5144803379369075682ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15240665703772760509ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__11__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1597331032129415239ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12817630046844065936ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14048408217997087731ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12147932308048762194ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8382212052516156983ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__10__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1170634287216739978ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2142815422776415210ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1058733881829650035ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4888350717238101800ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3954819665554323086ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__9__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13257261030318357801ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8061702695484157016ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7012610328451543456ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15313932738841540858ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14736142835970905396ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__8__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5410852399306297148ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1241180577363627165ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12804095765223070965ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7057309142084284178ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2919496516396207897ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8886876743192034917ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2528096520782848545ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6806501829321197087ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2699785829155387594ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4392312890440798592ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14311207560148448408ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12016957098390357214ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5737936590659508072ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10883784162555885683ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4071351300149215599ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8966872034901159331ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5972823750685369902ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16160752606031788086ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5930133189422188250ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15751858948114343925ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9192148037783255860ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9560994191495594377ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13253096681417960328ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10686592939977706778ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16929931116403775201ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 123823719869533523ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7818806533675298033ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6047692575666888725ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12019037186263028097ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12677408317534339084ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17123965108740792235ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3964005225492085961ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1563850155889809413ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6196566866152412686ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9746390941332846064ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9737279551781865942ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__a_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15083223555179076560ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 579505296417284933ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__w_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15196019555955504755ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3731526254615066598ull);
    vlSelf->tb_npu_top__DOT__dut__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__pe_u__DOT__prod32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18278126105973918867ull);
    vlSelf->__Vdly_Set__tb_npu_top__DOT__rst_n_1012 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__w_we_1013 = 0;
    vlSelf->__Vdly_Val__tb_npu_top__DOT__w_addr_1014 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__w_addr_1015 = 0;
    vlSelf->__Vdly_Val__tb_npu_top__DOT__w_data_1016 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__w_data_1017 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__w_we_1018 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__a_we_1019 = 0;
    vlSelf->__Vdly_Val__tb_npu_top__DOT__a_addr_1020 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__a_addr_1021 = 0;
    vlSelf->__Vdly_Val__tb_npu_top__DOT__a_data_1022 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__a_data_1023 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__a_we_1024 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__start_1025 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__start_1026 = 0;
    vlSelf->__Vdly_Val__tb_npu_top__DOT__c_addr_1027 = 0;
    vlSelf->__Vdly_Set__tb_npu_top__DOT__c_addr_1028 = 0;
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__tb_npu_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_npu_top__DOT__rst_n__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
}
