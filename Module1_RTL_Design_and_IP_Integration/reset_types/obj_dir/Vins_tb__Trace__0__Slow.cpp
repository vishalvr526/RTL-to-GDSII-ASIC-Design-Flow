// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vins_tb__Syms.h"


VL_ATTR_COLD void Vins_tb___024root__trace_init_sub__TOP__0(Vins_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ins_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"async_reset", false,-1);
    tracep->declBit(c+3,"async_signal", false,-1);
    tracep->declBit(c+4,"synced_reset", false,-1);
    tracep->declBit(c+5,"synced_signal", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"async_reset", false,-1);
    tracep->declBit(c+3,"async_signal", false,-1);
    tracep->declBit(c+4,"synced_reset", false,-1);
    tracep->declBit(c+5,"synced_signal", false,-1);
    tracep->pushNamePrefix("u_cdc_sync ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+3,"async_in", false,-1);
    tracep->declBit(c+5,"sync_out", false,-1);
    tracep->declBit(c+6,"stage1", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_reset_sync ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"async_reset", false,-1);
    tracep->declBit(c+4,"sync_reset", false,-1);
    tracep->declBit(c+7,"sync_ff1", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vins_tb___024root__trace_init_top(Vins_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_init_top\n"); );
    // Body
    Vins_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vins_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vins_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vins_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vins_tb___024root__trace_register(Vins_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vins_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vins_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vins_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vins_tb___024root__trace_full_sub_0(Vins_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vins_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_full_top_0\n"); );
    // Init
    Vins_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vins_tb___024root*>(voidSelf);
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vins_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vins_tb___024root__trace_full_sub_0(Vins_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ins_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->ins_tb__DOT__async_reset));
    bufp->fullBit(oldp+3,(vlSelf->ins_tb__DOT__async_signal));
    bufp->fullBit(oldp+4,(vlSelf->ins_tb__DOT__synced_reset));
    bufp->fullBit(oldp+5,(vlSelf->ins_tb__DOT__synced_signal));
    bufp->fullBit(oldp+6,(vlSelf->ins_tb__DOT__dut__DOT__u_cdc_sync__DOT__stage1));
    bufp->fullBit(oldp+7,(vlSelf->ins_tb__DOT__dut__DOT__u_reset_sync__DOT__sync_ff1));
}
