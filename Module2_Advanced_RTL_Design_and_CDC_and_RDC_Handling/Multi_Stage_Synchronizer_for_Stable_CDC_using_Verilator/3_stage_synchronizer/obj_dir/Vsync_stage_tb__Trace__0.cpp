// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsync_stage_tb__Syms.h"


void Vsync_stage_tb___024root__trace_chg_sub_0(Vsync_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsync_stage_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vsync_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_stage_tb___024root*>(voidSelf);
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsync_stage_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsync_stage_tb___024root__trace_chg_sub_0(Vsync_stage_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->sync_stage_tb__DOT__sync_out));
        bufp->chgBit(oldp+1,(vlSelf->sync_stage_tb__DOT__dut__DOT__ff1));
        bufp->chgBit(oldp+2,(vlSelf->sync_stage_tb__DOT__dut__DOT__ff2));
    }
    bufp->chgBit(oldp+3,(vlSelf->sync_stage_tb__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->sync_stage_tb__DOT__async_in));
}

void Vsync_stage_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsync_stage_tb___024root__trace_cleanup\n"); );
    // Init
    Vsync_stage_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsync_stage_tb___024root*>(voidSelf);
    Vsync_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
