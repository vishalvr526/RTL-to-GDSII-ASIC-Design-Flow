// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vins_tb.h for the primary calling header

#include "verilated.h"

#include "Vins_tb__Syms.h"
#include "Vins_tb___024root.h"

VlCoroutine Vins_tb___024root___eval_initial__TOP__0(Vins_tb___024root* vlSelf);
VlCoroutine Vins_tb___024root___eval_initial__TOP__1(Vins_tb___024root* vlSelf);

void Vins_tb___024root___eval_initial(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval_initial\n"); );
    // Body
    Vins_tb___024root___eval_initial__TOP__0(vlSelf);
    Vins_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ins_tb__DOT__async_reset__0 
        = vlSelf->ins_tb__DOT__async_reset;
    vlSelf->__Vtrigprevexpr___TOP__ins_tb__DOT__clk__0 
        = vlSelf->ins_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vins_tb___024root___eval_initial__TOP__1(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "ins_tb.v", 
                                           8);
        vlSelf->__Vdlyvval__ins_tb__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->ins_tb__DOT__clk)));
        vlSelf->__Vdlyvset__ins_tb__DOT__clk__v0 = 1U;
    }
}

void Vins_tb___024root___eval_act(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vins_tb___024root___nba_sequent__TOP__0(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ins_tb__DOT__clk__v0) {
        vlSelf->ins_tb__DOT__clk = vlSelf->__Vdlyvval__ins_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__ins_tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vins_tb___024root___nba_sequent__TOP__1(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ins_tb__DOT__synced_signal = vlSelf->ins_tb__DOT__dut__DOT__u_cdc_sync__DOT__stage1;
    vlSelf->ins_tb__DOT__dut__DOT__u_cdc_sync__DOT__stage1 
        = vlSelf->ins_tb__DOT__async_signal;
}

VL_INLINE_OPT void Vins_tb___024root___nba_sequent__TOP__2(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ins_tb__DOT__synced_reset = ((IData)(vlSelf->ins_tb__DOT__async_reset) 
                                         | (IData)(vlSelf->ins_tb__DOT__dut__DOT__u_reset_sync__DOT__sync_ff1));
    vlSelf->ins_tb__DOT__dut__DOT__u_reset_sync__DOT__sync_ff1 
        = vlSelf->ins_tb__DOT__async_reset;
}

void Vins_tb___024root___eval_nba(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vins_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vins_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vins_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vins_tb___024root___eval_triggers__act(Vins_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vins_tb___024root___dump_triggers__act(Vins_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vins_tb___024root___timing_resume(Vins_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vins_tb___024root___dump_triggers__nba(Vins_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vins_tb___024root___eval(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval\n"); );
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
            Vins_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vins_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ins_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vins_tb___024root___timing_resume(vlSelf);
                Vins_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vins_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ins_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vins_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vins_tb___024root___timing_resume(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vins_tb___024root___eval_debug_assertions(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
