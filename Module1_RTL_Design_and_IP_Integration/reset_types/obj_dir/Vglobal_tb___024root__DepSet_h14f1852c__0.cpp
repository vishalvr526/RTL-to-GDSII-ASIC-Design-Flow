// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vglobal_tb.h for the primary calling header

#include "verilated.h"

#include "Vglobal_tb__Syms.h"
#include "Vglobal_tb__Syms.h"
#include "Vglobal_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vglobal_tb___024root___eval_initial__TOP__0(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x62616c5fU;
    __Vtemp_1[3U] = 0x676c6fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "global_tb.v", 
                                       9);
    vlSelf->global_tb__DOT__gb_rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "global_tb.v", 
                                       10);
    vlSelf->global_tb__DOT__gb_rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "global_tb.v", 
                                       11);
    VL_FINISH_MT("global_tb.v", 11, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vglobal_tb___024root___dump_triggers__act(Vglobal_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vglobal_tb___024root___eval_triggers__act(Vglobal_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->global_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__global_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__global_tb__DOT__clk__0 
        = vlSelf->global_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vglobal_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
