// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_tb.h for the primary calling header

#include "verilated.h"

#include "Vasync_tb__Syms.h"
#include "Vasync_tb___024root.h"

VlCoroutine Vasync_tb___024root___eval_initial__TOP__0(Vasync_tb___024root* vlSelf);
VlCoroutine Vasync_tb___024root___eval_initial__TOP__1(Vasync_tb___024root* vlSelf);

void Vasync_tb___024root___eval_initial(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_initial\n"); );
    // Body
    Vasync_tb___024root___eval_initial__TOP__0(vlSelf);
    Vasync_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__clk__0 
        = vlSelf->async_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__rst_n__0 
        = vlSelf->async_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vasync_tb___024root___eval_initial__TOP__1(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "async_tb.v", 
                                           5);
        vlSelf->__Vdlyvval__async_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->async_tb__DOT__clk)));
        vlSelf->__Vdlyvset__async_tb__DOT__clk__v0 = 1U;
    }
}

void Vasync_tb___024root___eval_act(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vasync_tb___024root___nba_sequent__TOP__0(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__async_tb__DOT__clk__v0) {
        vlSelf->async_tb__DOT__clk = vlSelf->__Vdlyvval__async_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__async_tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vasync_tb___024root___nba_sequent__TOP__1(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->async_tb__DOT__q = ((IData)(vlSelf->async_tb__DOT__rst_n) 
                                & (IData)(vlSelf->async_tb__DOT__d));
}

void Vasync_tb___024root___eval_nba(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vasync_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vasync_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vasync_tb___024root___eval_triggers__act(Vasync_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_tb___024root___dump_triggers__act(Vasync_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vasync_tb___024root___timing_resume(Vasync_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_tb___024root___dump_triggers__nba(Vasync_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vasync_tb___024root___eval(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vasync_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vasync_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("async_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vasync_tb___024root___timing_resume(vlSelf);
                Vasync_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vasync_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("async_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vasync_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vasync_tb___024root___timing_resume(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vasync_tb___024root___eval_debug_assertions(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
