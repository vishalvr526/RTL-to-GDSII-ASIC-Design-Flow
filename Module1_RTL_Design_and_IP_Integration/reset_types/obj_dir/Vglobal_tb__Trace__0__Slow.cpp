// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vglobal_tb__Syms.h"


VL_ATTR_COLD void Vglobal_tb___024root__trace_init_sub__TOP__0(Vglobal_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("global_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"gb_rst", false,-1);
    tracep->declBit(c+5,"d1", false,-1);
    tracep->declBit(c+5,"d2", false,-1);
    tracep->declBit(c+3,"q1", false,-1);
    tracep->declBit(c+4,"q2", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"gb_rst", false,-1);
    tracep->declBit(c+5,"d1", false,-1);
    tracep->declBit(c+5,"d2", false,-1);
    tracep->declBit(c+3,"q1", false,-1);
    tracep->declBit(c+4,"q2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vglobal_tb___024root__trace_init_top(Vglobal_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root__trace_init_top\n"); );
    // Body
    Vglobal_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vglobal_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vglobal_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vglobal_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vglobal_tb___024root__trace_register(Vglobal_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vglobal_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vglobal_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vglobal_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vglobal_tb___024root__trace_full_sub_0(Vglobal_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vglobal_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root__trace_full_top_0\n"); );
    // Init
    Vglobal_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vglobal_tb___024root*>(voidSelf);
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vglobal_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vglobal_tb___024root__trace_full_sub_0(Vglobal_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vglobal_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vglobal_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->global_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->global_tb__DOT__gb_rst));
    bufp->fullBit(oldp+3,(vlSelf->global_tb__DOT__q1));
    bufp->fullBit(oldp+4,(vlSelf->global_tb__DOT__q2));
    bufp->fullBit(oldp+5,(1U));
}
