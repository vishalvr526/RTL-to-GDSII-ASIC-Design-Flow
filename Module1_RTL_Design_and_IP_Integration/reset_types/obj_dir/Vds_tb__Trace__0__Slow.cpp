// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vds_tb__Syms.h"


VL_ATTR_COLD void Vds_tb___024root__trace_init_sub__TOP__0(Vds_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ds_tb ");
    tracep->declBit(c+1,"clk1", false,-1);
    tracep->declBit(c+2,"clk2", false,-1);
    tracep->declBit(c+3,"rst1", false,-1);
    tracep->declBit(c+4,"rst2", false,-1);
    tracep->declBit(c+7,"d1", false,-1);
    tracep->declBit(c+7,"d2", false,-1);
    tracep->declBit(c+5,"q1", false,-1);
    tracep->declBit(c+6,"q2", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"clk1", false,-1);
    tracep->declBit(c+2,"clk2", false,-1);
    tracep->declBit(c+3,"rst1", false,-1);
    tracep->declBit(c+4,"rst2", false,-1);
    tracep->declBit(c+7,"d1", false,-1);
    tracep->declBit(c+7,"d2", false,-1);
    tracep->declBit(c+5,"q1", false,-1);
    tracep->declBit(c+6,"q2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vds_tb___024root__trace_init_top(Vds_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root__trace_init_top\n"); );
    // Body
    Vds_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vds_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vds_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vds_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vds_tb___024root__trace_register(Vds_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vds_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vds_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vds_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vds_tb___024root__trace_full_sub_0(Vds_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vds_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root__trace_full_top_0\n"); );
    // Init
    Vds_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vds_tb___024root*>(voidSelf);
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vds_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vds_tb___024root__trace_full_sub_0(Vds_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vds_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vds_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ds_tb__DOT__clk1));
    bufp->fullBit(oldp+2,(vlSelf->ds_tb__DOT__clk2));
    bufp->fullBit(oldp+3,(vlSelf->ds_tb__DOT__rst1));
    bufp->fullBit(oldp+4,(vlSelf->ds_tb__DOT__rst2));
    bufp->fullBit(oldp+5,(vlSelf->ds_tb__DOT__q1));
    bufp->fullBit(oldp+6,(vlSelf->ds_tb__DOT__q2));
    bufp->fullBit(oldp+7,(1U));
}
