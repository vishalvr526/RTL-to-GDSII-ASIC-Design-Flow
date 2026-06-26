// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vds_tb.h for the primary calling header

#include "verilated.h"

#include "Vds_tb__Syms.h"
#include "Vds_tb___024root.h"

VlCoroutine Vds_tb___024root___eval_initial__TOP__0(Vds_tb___024root* vlSelf);
VlCoroutine Vds_tb___024root___eval_initial__TOP__1(Vds_tb___024root* vlSelf);
VlCoroutine Vds_tb___024root___eval_initial__TOP__2(Vds_tb___024root* vlSelf);

void Vds_tb___024root___eval_initial(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_initial\n"); );
    // Body
    Vds_tb___024root___eval_initial__TOP__0(vlSelf);
    Vds_tb___024root___eval_initial__TOP__1(vlSelf);
    Vds_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk1__0 
        = vlSelf->ds_tb__DOT__clk1;
    vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk2__0 
        = vlSelf->ds_tb__DOT__clk2;
}

VL_INLINE_OPT VlCoroutine Vds_tb___024root___eval_initial__TOP__1(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(7ULL, nullptr, 
                                           "ds_tb.v", 
                                           6);
        vlSelf->__Vdlyvval__ds_tb__DOT__clk2__v0 = 
            (1U & (~ (IData)(vlSelf->ds_tb__DOT__clk2)));
        vlSelf->__Vdlyvset__ds_tb__DOT__clk2__v0 = 1U;
    }
}

VL_INLINE_OPT VlCoroutine Vds_tb___024root___eval_initial__TOP__2(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "ds_tb.v", 
                                           5);
        vlSelf->__Vdlyvval__ds_tb__DOT__clk1__v0 = 
            (1U & (~ (IData)(vlSelf->ds_tb__DOT__clk1)));
        vlSelf->__Vdlyvset__ds_tb__DOT__clk1__v0 = 1U;
    }
}

void Vds_tb___024root___eval_act(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vds_tb___024root___nba_sequent__TOP__0(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ds_tb__DOT__clk2__v0) {
        vlSelf->ds_tb__DOT__clk2 = vlSelf->__Vdlyvval__ds_tb__DOT__clk2__v0;
        vlSelf->__Vdlyvset__ds_tb__DOT__clk2__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__ds_tb__DOT__clk1__v0) {
        vlSelf->ds_tb__DOT__clk1 = vlSelf->__Vdlyvval__ds_tb__DOT__clk1__v0;
        vlSelf->__Vdlyvset__ds_tb__DOT__clk1__v0 = 0U;
    }
}

VL_INLINE_OPT void Vds_tb___024root___nba_sequent__TOP__1(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ds_tb__DOT__q1 = (1U & (~ (IData)(vlSelf->ds_tb__DOT__rst1)));
}

VL_INLINE_OPT void Vds_tb___024root___nba_sequent__TOP__2(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ds_tb__DOT__q2 = (1U & (~ (IData)(vlSelf->ds_tb__DOT__rst2)));
}

void Vds_tb___024root___eval_nba(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vds_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vds_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vds_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vds_tb___024root___eval_triggers__act(Vds_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vds_tb___024root___dump_triggers__act(Vds_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vds_tb___024root___timing_resume(Vds_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vds_tb___024root___dump_triggers__nba(Vds_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vds_tb___024root___eval(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            Vds_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vds_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ds_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vds_tb___024root___timing_resume(vlSelf);
                Vds_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vds_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ds_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vds_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vds_tb___024root___timing_resume(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vds_tb___024root___eval_debug_assertions(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
