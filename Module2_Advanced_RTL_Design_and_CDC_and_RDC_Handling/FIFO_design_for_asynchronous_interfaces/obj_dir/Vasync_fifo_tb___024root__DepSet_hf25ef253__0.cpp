// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasync_fifo_tb.h for the primary calling header

#include "verilated.h"

#include "Vasync_fifo_tb__Syms.h"
#include "Vasync_fifo_tb__Syms.h"
#include "Vasync_fifo_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vasync_fifo_tb___024root___eval_initial__TOP__0(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "async_fifo_tb.v", 
                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__wr_rst = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "async_fifo_tb.v", 
                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__rd_rst = 0U;
    co_await vlSelf->__VtrigSched_hf1f82a7f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.wr_clk)", 
                                                       "async_fifo_tb.v", 
                                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__wr_en = 1U;
    vlSelf->async_fifo_tb__DOT__wr_data = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->async_fifo_tb__DOT__wr_data)));
    co_await vlSelf->__VtrigSched_hf1f82a7f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.wr_clk)", 
                                                       "async_fifo_tb.v", 
                                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__wr_en = 1U;
    vlSelf->async_fifo_tb__DOT__wr_data = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->async_fifo_tb__DOT__wr_data)));
    co_await vlSelf->__VtrigSched_hf1f82a7f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.wr_clk)", 
                                                       "async_fifo_tb.v", 
                                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__wr_en = 1U;
    vlSelf->async_fifo_tb__DOT__wr_data = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->async_fifo_tb__DOT__wr_data)));
    co_await vlSelf->__VtrigSched_hf1f82a7f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.wr_clk)", 
                                                       "async_fifo_tb.v", 
                                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__wr_en = 1U;
    vlSelf->async_fifo_tb__DOT__wr_data = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->async_fifo_tb__DOT__wr_data)));
    vlSelf->async_fifo_tb__DOT__wr_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "async_fifo_tb.v", 
                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h1fb9631a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.rd_clk)", 
                                                       "async_fifo_tb.v", 
                                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__rd_en = 1U;
    co_await vlSelf->__VtrigSched_h1fb9631a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.rd_clk)", 
                                                       "async_fifo_tb.v", 
                                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__rd_en = 1U;
    co_await vlSelf->__VtrigSched_h1fb9631a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.rd_clk)", 
                                                       "async_fifo_tb.v", 
                                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__rd_en = 1U;
    co_await vlSelf->__VtrigSched_h1fb9631a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge async_fifo_tb.rd_clk)", 
                                                       "async_fifo_tb.v", 
                                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->async_fifo_tb__DOT__rd_en = 1U;
    vlSelf->async_fifo_tb__DOT__rd_en = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "async_fifo_tb.v", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("async_fifo_tb.v", 38, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasync_fifo_tb___024root___dump_triggers__act(Vasync_fifo_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vasync_fifo_tb___024root___eval_triggers__act(Vasync_fifo_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->async_fifo_tb__DOT__wr_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_clk__0))) 
                                     | ((IData)(vlSelf->async_fifo_tb__DOT__wr_rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_rst__0)))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->async_fifo_tb__DOT__rd_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_clk__0))) 
                                     | ((IData)(vlSelf->async_fifo_tb__DOT__rd_rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_rst__0)))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->async_fifo_tb__DOT__wr_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_clk__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->async_fifo_tb__DOT__rd_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_clk__0 
        = vlSelf->async_fifo_tb__DOT__wr_clk;
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__wr_rst__0 
        = vlSelf->async_fifo_tb__DOT__wr_rst;
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_clk__0 
        = vlSelf->async_fifo_tb__DOT__rd_clk;
    vlSelf->__Vtrigprevexpr___TOP__async_fifo_tb__DOT__rd_rst__0 
        = vlSelf->async_fifo_tb__DOT__rd_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasync_fifo_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
