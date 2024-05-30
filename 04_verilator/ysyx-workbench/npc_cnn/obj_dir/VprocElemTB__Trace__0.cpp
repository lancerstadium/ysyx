// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VprocElemTB__Syms.h"


void VprocElemTB___024root__trace_chg_0_sub_0(VprocElemTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VprocElemTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_chg_0\n"); );
    // Init
    VprocElemTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VprocElemTB___024root*>(voidSelf);
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VprocElemTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VprocElemTB___024root__trace_chg_0_sub_0(VprocElemTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->procElemTB__DOT__PE__DOT__mulC),32);
        bufp->chgBit(oldp+1,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign));
        bufp->chgCData(oldp+2,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent),8);
        bufp->chgIData(oldp+3,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa),23);
        bufp->chgQData(oldp+4,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction),48);
        bufp->chgIData(oldp+6,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA),24);
        bufp->chgIData(oldp+7,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB),24);
        bufp->chgBit(oldp+8,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout));
        bufp->chgIData(oldp+9,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+10,(vlSelf->procElemTB__DOT__PE__DOT__addC),32);
        bufp->chgBit(oldp+11,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign));
        bufp->chgCData(oldp+12,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent),8);
        bufp->chgIData(oldp+13,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa),23);
        bufp->chgIData(oldp+14,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction),24);
        bufp->chgCData(oldp+15,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA),8);
        bufp->chgCData(oldp+16,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB),8);
        bufp->chgIData(oldp+17,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA),24);
        bufp->chgIData(oldp+18,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB),24);
        bufp->chgSData(oldp+19,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount),9);
        bufp->chgBit(oldp+20,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout));
        bufp->chgBit(oldp+21,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout));
        bufp->chgIData(oldp+22,(vlSelf->procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+23,(vlSelf->procElemTB__DOT__clk));
    bufp->chgBit(oldp+24,(vlSelf->procElemTB__DOT__rst));
    bufp->chgIData(oldp+25,(vlSelf->procElemTB__DOT__A),32);
    bufp->chgIData(oldp+26,(vlSelf->procElemTB__DOT__B),32);
    bufp->chgIData(oldp+27,(vlSelf->procElemTB__DOT__R),32);
    bufp->chgIData(oldp+28,(vlSelf->procElemTB__DOT__C),32);
}

void VprocElemTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VprocElemTB___024root__trace_cleanup\n"); );
    // Init
    VprocElemTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VprocElemTB___024root*>(voidSelf);
    VprocElemTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
