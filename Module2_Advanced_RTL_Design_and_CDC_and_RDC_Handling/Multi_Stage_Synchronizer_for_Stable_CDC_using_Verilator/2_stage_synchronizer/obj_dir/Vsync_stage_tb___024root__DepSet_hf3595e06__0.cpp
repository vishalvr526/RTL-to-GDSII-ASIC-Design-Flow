// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsync_stage_tb.h for the primary calling header

#include "verilated.h"

#include "Vsync_stage_tb__Syms.h"
#include "Vsync_stage_tb___024root.h"

VlCoroutine Vsync_stage_tb___024root___eval_initial__TOP__0(Vsync_stage_tb___024root* vlSelf);
VlCoroutine Vsync_stage_tb___024root___eval_initial__TOP__1(Vsync_stage_tb___024root* vlSelf);

void Vsync_stage_tb___024root___eval_initial(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_initial\n"); );
    // Body
    Vsync_stage_tb___024root___eval_initial__TOP__0(vlSelf);
    Vsync_stage_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__sync_stage_tb__DOT__clk__0 
        = vlSelf->sync_stage_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vsync_stage_tb___024root___eval_initial__TOP__1(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "sync_stage_tb.v", 
                                           6);
        vlSelf->__Vdlyvval__sync_stage_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->sync_stage_tb__DOT__clk)));
        vlSelf->__Vdlyvset__sync_stage_tb__DOT__clk__v0 = 1U;
    }
}

void Vsync_stage_tb___024root___eval_act(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsync_stage_tb___024root___nba_sequent__TOP__0(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__sync_stage_tb__DOT__clk__v0) {
        vlSelf->sync_stage_tb__DOT__clk = vlSelf->__Vdlyvval__sync_stage_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__sync_stage_tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vsync_stage_tb___024root___nba_sequent__TOP__1(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->sync_stage_tb__DOT__sync_out = vlSelf->sync_stage_tb__DOT__dut__DOT__sync_ff1;
    vlSelf->sync_stage_tb__DOT__dut__DOT__sync_ff1 
        = vlSelf->sync_stage_tb__DOT__async_in;
}

void Vsync_stage_tb___024root___eval_nba(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsync_stage_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsync_stage_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vsync_stage_tb___024root___eval_triggers__act(Vsync_stage_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_stage_tb___024root___dump_triggers__act(Vsync_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsync_stage_tb___024root___timing_resume(Vsync_stage_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsync_stage_tb___024root___dump_triggers__nba(Vsync_stage_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsync_stage_tb___024root___eval(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval\n"); );
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
            Vsync_stage_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsync_stage_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("sync_stage_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsync_stage_tb___024root___timing_resume(vlSelf);
                Vsync_stage_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsync_stage_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("sync_stage_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsync_stage_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vsync_stage_tb___024root___timing_resume(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vsync_stage_tb___024root___eval_debug_assertions(Vsync_stage_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
