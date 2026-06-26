// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsync_tb__Syms.h"


VL_ATTR_COLD void Vsync_tb___024root__trace_init_sub__TOP__0(Vsync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("sync_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"d", false,-1);
    tracep->declBit(c+4,"q", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"d", false,-1);
    tracep->declBit(c+4,"q", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsync_tb___024root__trace_init_top(Vsync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_init_top\n"); );
    // Body
    Vsync_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsync_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsync_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsync_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsync_tb___024root__trace_register(Vsync_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsync_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsync_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsync_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsync_tb___024root__trace_full_sub_0(Vsync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsync_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_full_top_0\n"); );
    // Init
    Vsync_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_tb___024root*>(voidSelf);
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsync_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsync_tb___024root__trace_full_sub_0(Vsync_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->sync_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->sync_tb__DOT__rst));
    bufp->fullBit(oldp+3,(vlSelf->sync_tb__DOT__d));
    bufp->fullBit(oldp+4,(vlSelf->sync_tb__DOT__q));
}
