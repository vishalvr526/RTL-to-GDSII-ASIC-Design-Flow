// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb.v", 24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb__DOT__rst = 1U;
    vlSelf->tb__DOT__in1 = 4U;
    vlSelf->tb__DOT__in2 = 3U;
    vlSelf->tb__DOT__sel = 0U;
    vlSelf->tb__DOT__tx_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb.v", 27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb__DOT__tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb.v", 29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb__DOT__in1 = 6U;
    vlSelf->tb__DOT__in2 = 5U;
    vlSelf->tb__DOT__sel = 1U;
    vlSelf->tb__DOT__tx_en = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb.v", 30);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb__DOT__tx_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "tb.v", 31);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb.v", 31, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb__DOT__rst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelf->tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
