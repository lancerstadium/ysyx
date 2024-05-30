// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VconvUnitTB__Syms.h"


void VconvUnitTB___024root__trace_chg_0_sub_0(VconvUnitTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VconvUnitTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_chg_0\n"); );
    // Init
    VconvUnitTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvUnitTB___024root*>(voidSelf);
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VconvUnitTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VconvUnitTB___024root__trace_chg_0_sub_0(VconvUnitTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->convUnitTB__DOT__rst));
        bufp->chgWData(oldp+1,(vlSelf->convUnitTB__DOT__img),400);
        bufp->chgWData(oldp+14,(vlSelf->convUnitTB__DOT__fit),400);
        bufp->chgSData(oldp+27,(vlSelf->convUnitTB__DOT__tmp),16);
        bufp->chgIData(oldp+28,(vlSelf->convUnitTB__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+29,(vlSelf->convUnitTB__DOT__res),16);
        bufp->chgSData(oldp+30,(vlSelf->convUnitTB__DOT__UUT__DOT__selInA),16);
        bufp->chgSData(oldp+31,(vlSelf->convUnitTB__DOT__UUT__DOT__selInB),16);
        bufp->chgIData(oldp+32,(vlSelf->convUnitTB__DOT__UUT__DOT__i),32);
        bufp->chgSData(oldp+33,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+34,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__addC),16);
        bufp->chgSData(oldp+35,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed),16);
        bufp->chgSData(oldp+36,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed),16);
        bufp->chgSData(oldp+37,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed),16);
        bufp->chgSData(oldp+38,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed),16);
        bufp->chgSData(oldp+39,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed),16);
        bufp->chgSData(oldp+40,(vlSelf->convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed),16);
    }
    bufp->chgBit(oldp+41,(vlSelf->convUnitTB__DOT__clk));
}

void VconvUnitTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvUnitTB___024root__trace_cleanup\n"); );
    // Init
    VconvUnitTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvUnitTB___024root*>(voidSelf);
    VconvUnitTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
