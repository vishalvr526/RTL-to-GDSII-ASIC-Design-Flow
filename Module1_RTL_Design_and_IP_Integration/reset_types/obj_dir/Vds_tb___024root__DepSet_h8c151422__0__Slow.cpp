// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vds_tb.h for the primary calling header

#include "verilated.h"

#include "Vds_tb__Syms.h"
#include "Vds_tb___024root.h"

VL_ATTR_COLD void Vds_tb___024root___eval_static(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vds_tb___024root___eval_final(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vds_tb___024root___eval_settle(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vds_tb___024root___dump_triggers__act(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ds_tb.clk1)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ds_tb.clk2)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vds_tb___024root___dump_triggers__nba(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ds_tb.clk1)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ds_tb.clk2)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vds_tb___024root___ctor_var_reset(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ds_tb__DOT__clk1 = VL_RAND_RESET_I(1);
    vlSelf->ds_tb__DOT__clk2 = VL_RAND_RESET_I(1);
    vlSelf->ds_tb__DOT__rst1 = VL_RAND_RESET_I(1);
    vlSelf->ds_tb__DOT__rst2 = VL_RAND_RESET_I(1);
    vlSelf->ds_tb__DOT__q1 = VL_RAND_RESET_I(1);
    vlSelf->ds_tb__DOT__q2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ds_tb__DOT__clk2__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ds_tb__DOT__clk2__v0 = 0;
    vlSelf->__Vdlyvval__ds_tb__DOT__clk1__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ds_tb__DOT__clk1__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk2__0 = VL_RAND_RESET_I(1);
}
