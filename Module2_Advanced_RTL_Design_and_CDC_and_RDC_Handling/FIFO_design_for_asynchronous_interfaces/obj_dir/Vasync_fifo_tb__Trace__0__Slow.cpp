// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasync_fifo_tb__Syms.h"


VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_init_sub__TOP__0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("async_fifo_tb ");
    tracep->declBit(c+15,"wr_clk", false,-1);
    tracep->declBit(c+16,"rd_clk", false,-1);
    tracep->declBit(c+1,"wr_rst", false,-1);
    tracep->declBit(c+2,"rd_rst", false,-1);
    tracep->declBit(c+3,"wr_en", false,-1);
    tracep->declBit(c+4,"rd_en", false,-1);
    tracep->declBus(c+5,"wr_data", false,-1, 7,0);
    tracep->declBus(c+17,"rd_data", false,-1, 7,0);
    tracep->declBit(c+18,"wr_full", false,-1);
    tracep->declBit(c+19,"rd_empty", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+15,"wr_clk", false,-1);
    tracep->declBit(c+16,"rd_clk", false,-1);
    tracep->declBit(c+1,"wr_rst", false,-1);
    tracep->declBit(c+2,"rd_rst", false,-1);
    tracep->declBit(c+3,"wr_en", false,-1);
    tracep->declBit(c+4,"rd_en", false,-1);
    tracep->declBus(c+5,"wr_data", false,-1, 7,0);
    tracep->declBus(c+17,"rd_data", false,-1, 7,0);
    tracep->declBit(c+18,"wr_full", false,-1);
    tracep->declBit(c+19,"rd_empty", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+6+i*1,"mem", true,(i+0), 7,0);
    }
    tracep->declBus(c+14,"wr_ptr", false,-1, 2,0);
    tracep->declBus(c+20,"rd_ptr", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_init_top(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_init_top\n"); );
    // Body
    Vasync_fifo_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasync_fifo_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasync_fifo_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_register(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vasync_fifo_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vasync_fifo_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vasync_fifo_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_full_top_0\n"); );
    // Init
    Vasync_fifo_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_fifo_tb___024root*>(voidSelf);
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasync_fifo_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasync_fifo_tb___024root__trace_full_sub_0(Vasync_fifo_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_fifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_fifo_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->async_fifo_tb__DOT__wr_rst));
    bufp->fullBit(oldp+2,(vlSelf->async_fifo_tb__DOT__rd_rst));
    bufp->fullBit(oldp+3,(vlSelf->async_fifo_tb__DOT__wr_en));
    bufp->fullBit(oldp+4,(vlSelf->async_fifo_tb__DOT__rd_en));
    bufp->fullCData(oldp+5,(vlSelf->async_fifo_tb__DOT__wr_data),8);
    bufp->fullCData(oldp+6,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[0]),8);
    bufp->fullCData(oldp+7,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[1]),8);
    bufp->fullCData(oldp+8,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[2]),8);
    bufp->fullCData(oldp+9,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[3]),8);
    bufp->fullCData(oldp+10,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[4]),8);
    bufp->fullCData(oldp+11,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[5]),8);
    bufp->fullCData(oldp+12,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[6]),8);
    bufp->fullCData(oldp+13,(vlSelf->async_fifo_tb__DOT__uut__DOT__mem[7]),8);
    bufp->fullCData(oldp+14,(vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr),3);
    bufp->fullBit(oldp+15,(vlSelf->async_fifo_tb__DOT__wr_clk));
    bufp->fullBit(oldp+16,(vlSelf->async_fifo_tb__DOT__rd_clk));
    bufp->fullCData(oldp+17,(vlSelf->async_fifo_tb__DOT__rd_data),8);
    bufp->fullBit(oldp+18,(((7U & ((IData)(1U) + (IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr))) 
                            == (IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr))));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__wr_ptr) 
                            == (IData)(vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr))));
    bufp->fullCData(oldp+20,(vlSelf->async_fifo_tb__DOT__uut__DOT__rd_ptr),3);
}
