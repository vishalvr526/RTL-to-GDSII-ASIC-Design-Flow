// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vglobal_tb.h for the primary calling header

#include "verilated.h"

#include "Vglobal_tb__Syms.h"
#include "Vglobal_tb___024root.h"

VL_ATTR_COLD void Vglobal_tb___024root___eval_static(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vglobal_tb___024root___eval_final(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vglobal_tb___024root___eval_settle(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vglobal_tb___024root___dump_triggers__act(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge global_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vglobal_tb___024root___dump_triggers__nba(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge global_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vglobal_tb___024root___ctor_var_reset(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->global_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->global_tb__DOT__gb_rst = VL_RAND_RESET_I(1);
    vlSelf->global_tb__DOT__q1 = VL_RAND_RESET_I(1);
    vlSelf->global_tb__DOT__q2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__global_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__global_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__global_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
