// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasync_fifo_tb__Syms.h"


void Vasync_fifo_tb___024root__trace_chg_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vasync_fifo_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vasync_fifo_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vasync_fifo_tb___024root__trace_chg_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->async_fifo_tb__DOT__wr_rst));
        bufp->chgBit(oldp+1,(vlSelf->async_fifo_tb__DOT__rd_rst));
        bufp->chgBit(oldp+2,(vlSelf->async_fifo_tb__DOT__wr_en));
        bufp->chgBit(oldp+3,(vlSelf->async_fifo_tb__DOT__rd_en));
        bufp->chgCData(oldp+4,(vlSelf->async_fifo_tb__DOT__wr_data),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+5,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[0]),8);
        bufp->chgCData(oldp+6,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[1]),8);
        bufp->chgCData(oldp+7,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[2]),8);
        bufp->chgCData(oldp+8,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[3]),8);
        bufp->chgCData(oldp+9,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[4]),8);
        bufp->chgCData(oldp+10,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[5]),8);
        bufp->chgCData(oldp+11,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[6]),8);
        bufp->chgCData(oldp+12,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[7]),8);
        bufp->chgCData(oldp+13,(vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr),3);
    }
    bufp->chgBit(oldp+14,(vlSelf->async_fifo_tb__DOT__wr_clk));
    bufp->chgBit(oldp+15,(vlSelf->async_fifo_tb__DOT__rd_clk));
    bufp->chgCData(oldp+16,(vlSelf->async_fifo_tb__DOT__rd_data),8);
    bufp->chgBit(oldp+17,(((7U & ((IData)(1U) + (IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr))) 
                           == (IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr))));
    bufp->chgBit(oldp+18,(((IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                           == (IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr))));
    bufp->chgCData(oldp+19,(vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr),3);
}

void Vasync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_cleanup\n"); );
    // Init
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
