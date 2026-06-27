// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_fifo_tb.h for the primary calling header

#include "verilated.h"

#include "Vasync_fifo_tb__Syms.h"
#include "Vasync_fifo_tb___024root.h"

VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_static__TOP(Vasync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_static(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_static\n"); );
    // Body
    Vasync_fifo_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_static__TOP(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->async_fifo_tb__DOT__wr_clk = 0U;
    vlSelf->async_fifo_tb__DOT__rd_clk = 0U;
    vlSelf->async_fifo_tb__DOT__wr_rst = 1U;
    vlSelf->async_fifo_tb__DOT__rd_rst = 1U;
    vlSelf->async_fifo_tb__DOT__wr_en = 0U;
    vlSelf->async_fifo_tb__DOT__rd_en = 0U;
    vlSelf->async_fifo_tb__DOT__wr_data = 0U;
    vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr = 0U;
    vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr = 0U;
}

VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_final(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_triggers__stl(Vasync_fifo_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__stl(Vasync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_stl(Vasync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_settle(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vasync_fifo_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vasync_fifo_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("async_fifo_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vasync_fifo_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__stl(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vasync_fifo_tb___024root___nba_comb__TOP__0(Vasync_fifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vasync_fifo_tb___024root___eval_stl(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vasync_fifo_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__act(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge async_fifo_tb.wr_clk or posedge async_fifo_tb.wr_rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge async_fifo_tb.rd_clk or posedge async_fifo_tb.rd_rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge async_fifo_tb.wr_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge async_fifo_tb.rd_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__nba(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge async_fifo_tb.wr_clk or posedge async_fifo_tb.wr_rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge async_fifo_tb.rd_clk or posedge async_fifo_tb.rd_rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge async_fifo_tb.wr_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge async_fifo_tb.rd_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasync_fifo_tb___024root___ctor_var_reset(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->async_fifo_tb__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->async_fifo_tb__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->async_fifo_tb__DOT__wr_rst = VL_RAND_RESET_I(1);
    vlSelf->async_fifo_tb__DOT__rd_rst = VL_RAND_RESET_I(1);
    vlSelf->async_fifo_tb__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->async_fifo_tb__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->async_fifo_tb__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->async_fifo_tb__DOT__rd_data = VL_RAND_RESET_I(8);
    vlSelf->async_fifo_tb__DOT__wr_full = VL_RAND_RESET_I(1);
    vlSelf->async_fifo_tb__DOT__rd_empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->async_fifo_tb__DOT__uut__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr = VL_RAND_RESET_I(3);
    vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__async_fifo_tb__DOT__rd_clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__async_fifo_tb__DOT__rd_clk__v0 = 0;
    vlSelf->__Vdlyvval__async_fifo_tb__DOT__wr_clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__async_fifo_tb__DOT__wr_clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
