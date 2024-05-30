// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VexponentTB__Syms.h"


void VexponentTB___024root__trace_chg_0_sub_0(VexponentTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VexponentTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root__trace_chg_0\n"); );
    // Init
    VexponentTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VexponentTB___024root*>(voidSelf);
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VexponentTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VexponentTB___024root__trace_chg_0_sub_0(VexponentTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->exponentTB__DOT__Y),32);
        bufp->chgBit(oldp+1,(vlSelf->exponentTB__DOT__ack));
        bufp->chgWData(oldp+2,(vlSelf->exponentTB__DOT__exp__DOT__divisors),224);
        bufp->chgIData(oldp+9,(vlSelf->exponentTB__DOT__exp__DOT__mulA),32);
        bufp->chgIData(oldp+10,(vlSelf->exponentTB__DOT__exp__DOT__oneOrX),32);
        bufp->chgIData(oldp+11,(vlSelf->exponentTB__DOT__exp__DOT__outM1),32);
        bufp->chgIData(oldp+12,(vlSelf->exponentTB__DOT__exp__DOT__outM2),32);
        bufp->chgIData(oldp+13,(vlSelf->exponentTB__DOT__exp__DOT__outA1),32);
        bufp->chgIData(oldp+14,(vlSelf->exponentTB__DOT__exp__DOT__outReg),32);
        bufp->chgBit(oldp+15,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__sign));
        bufp->chgCData(oldp+16,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent),8);
        bufp->chgIData(oldp+17,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__mantissa),23);
        bufp->chgIData(oldp+18,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction),24);
        bufp->chgCData(oldp+19,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA),8);
        bufp->chgCData(oldp+20,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB),8);
        bufp->chgIData(oldp+21,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA),24);
        bufp->chgIData(oldp+22,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB),24);
        bufp->chgSData(oldp+23,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__shiftAmount),9);
        bufp->chgBit(oldp+24,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__cout));
        bufp->chgBit(oldp+25,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__eout));
        bufp->chgIData(oldp+26,(vlSelf->exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+27,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__sign));
        bufp->chgCData(oldp+28,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__exponent),8);
        bufp->chgIData(oldp+29,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__mantissa),23);
        bufp->chgQData(oldp+30,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fraction),48);
        bufp->chgIData(oldp+32,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fractionA),24);
        bufp->chgIData(oldp+33,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__fractionB),24);
        bufp->chgBit(oldp+34,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__eout));
        bufp->chgIData(oldp+35,(vlSelf->exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+36,(vlSelf->exponentTB__DOT__exp__DOT__divisors[0U]),32);
        bufp->chgBit(oldp+37,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__sign));
        bufp->chgCData(oldp+38,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__exponent),8);
        bufp->chgIData(oldp+39,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__mantissa),23);
        bufp->chgQData(oldp+40,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fraction),48);
        bufp->chgIData(oldp+42,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fractionA),24);
        bufp->chgIData(oldp+43,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__fractionB),24);
        bufp->chgBit(oldp+44,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__eout));
        bufp->chgIData(oldp+45,(vlSelf->exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgIData(oldp+46,(vlSelf->exponentTB__DOT__X),32);
    bufp->chgBit(oldp+47,(vlSelf->exponentTB__DOT__clk));
    bufp->chgBit(oldp+48,(vlSelf->exponentTB__DOT__enb));
}

void VexponentTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VexponentTB___024root__trace_cleanup\n"); );
    // Init
    VexponentTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VexponentTB___024root*>(voidSelf);
    VexponentTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
