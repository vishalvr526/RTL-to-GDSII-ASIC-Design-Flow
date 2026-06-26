// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_tb.h for the primary calling header

#include "verilated.h"

#include "Vasync_tb__Syms.h"
#include "Vasync_tb___024root.h"

VL_ATTR_COLD void Vasync_tb___024root___eval_static(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vasync_tb___024root___eval_final(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vasync_tb___024root___eval_settle(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_tb___024root___dump_triggers__act(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge async_tb.clk or negedge async_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_tb___024root___dump_triggers__nba(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge async_tb.clk or negedge async_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasync_tb___024root___ctor_var_reset(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->async_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->async_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->async_tb__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->async_tb__DOT__q = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__async_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__async_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
