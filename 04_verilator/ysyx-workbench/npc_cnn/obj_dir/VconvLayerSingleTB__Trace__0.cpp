// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VconvLayerSingleTB__Syms.h"


void VconvLayerSingleTB___024root__trace_chg_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VconvLayerSingleTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_chg_0\n"); );
    // Init
    VconvLayerSingleTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerSingleTB___024root*>(voidSelf);
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VconvLayerSingleTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VconvLayerSingleTB___024root__trace_chg_0_sub_0(VconvLayerSingleTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->convLayerSingleTB__DOT__rst));
        bufp->chgWData(oldp+1,(vlSelf->convLayerSingleTB__DOT__img),400);
        bufp->chgWData(oldp+14,(vlSelf->convLayerSingleTB__DOT__fit),144);
        bufp->chgSData(oldp+19,(vlSelf->convLayerSingleTB__DOT__tmp),16);
        bufp->chgIData(oldp+20,(vlSelf->convLayerSingleTB__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+21,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__gRst));
        bufp->chgCData(oldp+22,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__rowNum),6);
        bufp->chgCData(oldp+23,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__colSel),6);
        bufp->chgIData(oldp+24,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__clkCnt),32);
        bufp->chgIData(oldp+25,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuCnt),32);
        bufp->chgIData(oldp+26,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgWData(oldp+27,(vlSelf->convLayerSingleTB__DOT__res),144);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgWData(oldp+32,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart),144);
        bufp->chgIData(oldp+37,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address),32);
        bufp->chgWData(oldp+38,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__imgPart),144);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+43,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes),16);
        bufp->chgSData(oldp+44,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__cuRes),16);
        bufp->chgSData(oldp+45,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA),16);
        bufp->chgSData(oldp+46,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB),16);
        bufp->chgIData(oldp+47,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i),32);
        bufp->chgSData(oldp+48,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC),16);
        bufp->chgSData(oldp+49,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC),16);
        bufp->chgSData(oldp+50,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed),16);
        bufp->chgSData(oldp+51,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed),16);
        bufp->chgSData(oldp+52,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed),16);
        bufp->chgSData(oldp+53,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed),16);
        bufp->chgSData(oldp+54,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed),16);
        bufp->chgSData(oldp+55,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed),16);
    }
    bufp->chgBit(oldp+56,(vlSelf->convLayerSingleTB__DOT__clk));
    bufp->chgIData(oldp+57,(vlSelf->convLayerSingleTB__DOT__clkCnt),32);
    bufp->chgIData(oldp+58,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k),32);
    bufp->chgIData(oldp+59,(vlSelf->convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i),32);
}

void VconvLayerSingleTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VconvLayerSingleTB___024root__trace_cleanup\n"); );
    // Init
    VconvLayerSingleTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VconvLayerSingleTB___024root*>(voidSelf);
    VconvLayerSingleTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
