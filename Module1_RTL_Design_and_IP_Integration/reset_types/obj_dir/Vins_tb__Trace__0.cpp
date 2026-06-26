// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vins_tb__Syms.h"


void Vins_tb___024root__trace_chg_sub_0(Vins_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vins_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vins_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vins_tb___024root*>(voidSelf);
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vins_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vins_tb___024root__trace_chg_sub_0(Vins_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->ins_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelf->ins_tb__DOT__async_reset));
    bufp->chgBit(oldp+2,(vlSelf->ins_tb__DOT__async_signal));
    bufp->chgBit(oldp+3,(vlSelf->ins_tb__DOT__synced_reset));
    bufp->chgBit(oldp+4,(vlSelf->ins_tb__DOT__synced_signal));
    bufp->chgBit(oldp+5,(vlSelf->ins_tb__DOT__dut__DOT__u_cdc_sync__DOT__stage1));
    bufp->chgBit(oldp+6,(vlSelf->ins_tb__DOT__dut__DOT__u_reset_sync__DOT__sync_ff1));
}

void Vins_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vins_tb___024root__trace_cleanup\n"); );
    // Init
    Vins_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vins_tb___024root*>(voidSelf);
    Vins_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
