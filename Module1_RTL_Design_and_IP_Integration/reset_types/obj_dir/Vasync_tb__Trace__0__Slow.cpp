// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasync_tb__Syms.h"


VL_ATTR_COLD void Vasync_tb___024root__trace_init_sub__TOP__0(Vasync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("async_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_n", false,-1);
    tracep->declBit(c+3,"d", false,-1);
    tracep->declBit(c+4,"q", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_n", false,-1);
    tracep->declBit(c+3,"d", false,-1);
    tracep->declBit(c+4,"q", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vasync_tb___024root__trace_init_top(Vasync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root__trace_init_top\n"); );
    // Body
    Vasync_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vasync_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasync_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasync_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vasync_tb___024root__trace_register(Vasync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vasync_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vasync_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vasync_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vasync_tb___024root__trace_full_sub_0(Vasync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasync_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root__trace_full_top_0\n"); );
    // Init
    Vasync_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasync_tb___024root*>(voidSelf);
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasync_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasync_tb___024root__trace_full_sub_0(Vasync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vasync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasync_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->async_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->async_tb__DOT__rst_n));
    bufp->fullBit(oldp+3,(vlSelf->async_tb__DOT__d));
    bufp->fullBit(oldp+4,(vlSelf->async_tb__DOT__q));
}
