// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vds_tb.h for the primary calling header

#include "verilated.h"

#include "Vds_tb__Syms.h"
#include "Vds_tb__Syms.h"
#include "Vds_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vds_tb___024root___eval_initial__TOP__0(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x64735fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ds_tb.v", 11);
    vlSelf->ds_tb__DOT__rst1 = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ds_tb.v", 11);
    vlSelf->ds_tb__DOT__rst1 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ds_tb.v", 12);
    vlSelf->ds_tb__DOT__rst2 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ds_tb.v", 12);
    vlSelf->ds_tb__DOT__rst2 = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "ds_tb.v", 12);
    VL_FINISH_MT("ds_tb.v", 13, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vds_tb___024root___dump_triggers__act(Vds_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vds_tb___024root___eval_triggers__act(Vds_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->ds_tb__DOT__clk1) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk1__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->ds_tb__DOT__clk2) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk2__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk1__0 
        = vlSelf->ds_tb__DOT__clk1;
    vlSelf->__Vtrigprevexpr___TOP__ds_tb__DOT__clk2__0 
        = vlSelf->ds_tb__DOT__clk2;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vds_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
