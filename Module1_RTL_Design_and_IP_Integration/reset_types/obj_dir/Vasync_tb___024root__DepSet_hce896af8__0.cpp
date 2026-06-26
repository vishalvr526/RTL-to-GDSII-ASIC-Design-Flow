// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_tb.h for the primary calling header

#include "verilated.h"

#include "Vasync_tb__Syms.h"
#include "Vasync_tb__Syms.h"
#include "Vasync_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vasync_tb___024root___eval_initial__TOP__0(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x796e635fU;
    __Vtemp_1[3U] = 0x6173U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->async_tb__DOT__rst_n = 0U;
    vlSelf->async_tb__DOT__d = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "async_tb.v", 
                                       9);
    vlSelf->async_tb__DOT__rst_n = 1U;
    vlSelf->async_tb__DOT__d = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "async_tb.v", 
                                       10);
    vlSelf->async_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "async_tb.v", 
                                       10);
    VL_FINISH_MT("async_tb.v", 11, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_tb___024root___dump_triggers__act(Vasync_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vasync_tb___024root___eval_triggers__act(Vasync_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->async_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->async_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__clk__0 
        = vlSelf->async_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__async_tb__DOT__rst_n__0 
        = vlSelf->async_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasync_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
