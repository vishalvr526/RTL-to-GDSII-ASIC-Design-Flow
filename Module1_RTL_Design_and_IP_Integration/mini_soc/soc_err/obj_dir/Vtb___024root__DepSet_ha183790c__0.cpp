// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__0(vlSelf);
    Vtb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelf->tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb.v", 
                                           9);
        vlSelf->__Vdlyvval__tb__DOT__clk__v0 = (1U 
                                                & (~ (IData)(vlSelf->tb__DOT__clk)));
        vlSelf->__Vdlyvset__tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb__DOT__sel) {
        if (vlSelf->tb__DOT__sel) {
            vlSelf->tb__DOT__tut__DOT__result = (0xfU 
                                                 & ((IData)(vlSelf->tb__DOT__in1) 
                                                    - (IData)(vlSelf->tb__DOT__in2)));
        }
    } else {
        vlSelf->tb__DOT__tut__DOT__result = (0xfU & 
                                             ((IData)(vlSelf->tb__DOT__in1) 
                                              + (IData)(vlSelf->tb__DOT__in2)));
    }
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb__DOT__sel) {
        if (vlSelf->tb__DOT__sel) {
            vlSelf->tb__DOT__tut__DOT__result = (0xfU 
                                                 & ((IData)(vlSelf->tb__DOT__in1) 
                                                    - (IData)(vlSelf->tb__DOT__in2)));
        }
    } else {
        vlSelf->tb__DOT__tut__DOT__result = (0xfU & 
                                             ((IData)(vlSelf->tb__DOT__in1) 
                                              + (IData)(vlSelf->tb__DOT__in2)));
    }
    if (vlSelf->__Vdlyvset__tb__DOT__clk__v0) {
        vlSelf->tb__DOT__clk = vlSelf->__Vdlyvval__tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb__DOT__tx_done = ((IData)(vlSelf->tb__DOT__rst) 
                                & (IData)(vlSelf->tb__DOT__tx_en));
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb___024root___timing_resume(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
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
            Vtb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb___024root___timing_resume(vlSelf);
                Vtb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
