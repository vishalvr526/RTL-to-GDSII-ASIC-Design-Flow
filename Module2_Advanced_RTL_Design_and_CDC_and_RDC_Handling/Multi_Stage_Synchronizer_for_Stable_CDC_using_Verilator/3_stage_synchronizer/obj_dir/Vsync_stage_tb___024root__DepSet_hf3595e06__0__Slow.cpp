// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_stage_tb.h for the primary calling header

#include "verilated.h"

#include "Vsync_stage_tb__Syms.h"
#include "Vsync_stage_tb___024root.h"

VL_ATTR_COLD void Vsync_stage_tb___024root___eval_static(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsync_stage_tb___024root___eval_final(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsync_stage_tb___024root___eval_settle(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_stage_tb___024root___dump_triggers__act(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sync_stage_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_stage_tb___024root___dump_triggers__nba(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sync_stage_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsync_stage_tb___024root___ctor_var_reset(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sync_stage_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sync_stage_tb__DOT__async_in = VL_RAND_RESET_I(1);
    vlSelf->sync_stage_tb__DOT__sync_out = VL_RAND_RESET_I(1);
    vlSelf->sync_stage_tb__DOT__dut__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->sync_stage_tb__DOT__dut__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__sync_stage_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__sync_stage_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sync_stage_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
