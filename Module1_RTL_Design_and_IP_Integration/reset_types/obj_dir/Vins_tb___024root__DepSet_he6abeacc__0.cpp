// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vins_tb.h for the primary calling header

#include "verilated.h"

#include "Vins_tb__Syms.h"
#include "Vins_tb__Syms.h"
#include "Vins_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vins_tb___024root___eval_initial__TOP__0(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x696e735fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xcULL, nullptr, 
                                       "ins_tb.v", 
                                       21);
    vlSelf->ins_tb__DOT__async_reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "ins_tb.v", 
                                       23);
    vlSelf->ins_tb__DOT__async_signal = 1U;
    co_await vlSelf->__VdlySched.delay(3ULL, nullptr, 
                                       "ins_tb.v", 
                                       24);
    vlSelf->ins_tb__DOT__async_signal = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "ins_tb.v", 
                                       25);
    vlSelf->ins_tb__DOT__async_signal = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "ins_tb.v", 
                                       26);
    vlSelf->ins_tb__DOT__async_signal = 0U;
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "ins_tb.v", 
                                       27);
    VL_FINISH_MT("ins_tb.v", 27, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vins_tb___024root___dump_triggers__act(Vins_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vins_tb___024root___eval_triggers__act(Vins_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->ins_tb__DOT__async_reset) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ins_tb__DOT__async_reset__0))) 
                                     | ((IData)(vlSelf->ins_tb__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ins_tb__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->ins_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ins_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__ins_tb__DOT__async_reset__0 
        = vlSelf->ins_tb__DOT__async_reset;
    vlSelf->__Vtrigprevexpr___TOP__ins_tb__DOT__clk__0 
        = vlSelf->ins_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vins_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
