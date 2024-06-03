// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfloatDivTB__Syms.h"


void VfloatDivTB___024root__trace_chg_0_sub_0(VfloatDivTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VfloatDivTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root__trace_chg_0\n"); );
    // Init
    VfloatDivTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatDivTB___024root*>(voidSelf);
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VfloatDivTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VfloatDivTB___024root__trace_chg_0_sub_0(VfloatDivTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->floatDivTB__DOT__FA__DOT__P2D),32);
        bufp->chgIData(oldp+1,(vlSelf->floatDivTB__DOT__FA__DOT__D1),32);
        bufp->chgIData(oldp+2,(vlSelf->floatDivTB__DOT__FA__DOT__a2),32);
        bufp->chgIData(oldp+3,(vlSelf->floatDivTB__DOT__FA__DOT__D2),32);
        bufp->chgIData(oldp+4,(vlSelf->floatDivTB__DOT__FA__DOT__a3),32);
        bufp->chgIData(oldp+5,(vlSelf->floatDivTB__DOT__FA__DOT__D3),32);
        bufp->chgIData(oldp+6,(vlSelf->floatDivTB__DOT__FA__DOT__a4),32);
        bufp->chgIData(oldp+7,(vlSelf->floatDivTB__DOT__FA__DOT__D4),32);
        bufp->chgIData(oldp+8,(vlSelf->floatDivTB__DOT__FA__DOT__aFinal),32);
        bufp->chgBit(oldp+9,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__sign));
        bufp->chgCData(oldp+10,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent),8);
        bufp->chgIData(oldp+11,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__mantissa),23);
        bufp->chgQData(oldp+12,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction),48);
        bufp->chgIData(oldp+14,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionA),24);
        bufp->chgIData(oldp+15,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionB),24);
        bufp->chgBit(oldp+16,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__eout));
        bufp->chgIData(oldp+17,(vlSelf->floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+18,(vlSelf->floatDivTB__DOT__FA__DOT__a1),32);
        bufp->chgIData(oldp+19,(vlSelf->floatDivTB__DOT__FA__DOT__b1),32);
        bufp->chgIData(oldp+20,(vlSelf->floatDivTB__DOT__FA__DOT__c1Out),32);
        bufp->chgIData(oldp+21,(vlSelf->floatDivTB__DOT__FA__DOT__b2),32);
        bufp->chgIData(oldp+22,(vlSelf->floatDivTB__DOT__FA__DOT__b3),32);
        bufp->chgIData(oldp+23,(vlSelf->floatDivTB__DOT__FA__DOT__b4),32);
        bufp->chgIData(oldp+24,(vlSelf->floatDivTB__DOT__FA__DOT__bFinal),32);
        bufp->chgBit(oldp+25,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign));
        bufp->chgCData(oldp+26,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent),8);
        bufp->chgIData(oldp+27,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__mantissa),23);
        bufp->chgIData(oldp+28,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction),24);
        bufp->chgCData(oldp+29,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA),8);
        bufp->chgCData(oldp+30,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB),8);
        bufp->chgIData(oldp+31,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA),24);
        bufp->chgIData(oldp+32,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB),24);
        bufp->chgSData(oldp+33,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount),9);
        bufp->chgBit(oldp+34,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout));
        bufp->chgBit(oldp+35,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__eout));
        bufp->chgIData(oldp+36,(vlSelf->floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+37,(vlSelf->floatDivTB__DOT__C),32);
        bufp->chgBit(oldp+38,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__sign));
        bufp->chgCData(oldp+39,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent),8);
        bufp->chgIData(oldp+40,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__mantissa),23);
        bufp->chgQData(oldp+41,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction),48);
        bufp->chgIData(oldp+43,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionA),24);
        bufp->chgIData(oldp+44,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionB),24);
        bufp->chgBit(oldp+45,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__eout));
        bufp->chgIData(oldp+46,(vlSelf->floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+47,(vlSelf->floatDivTB__DOT__FA__DOT__c2D),32);
        bufp->chgIData(oldp+48,(vlSelf->floatDivTB__DOT__FA__DOT__c2S),32);
        bufp->chgIData(oldp+49,(vlSelf->floatDivTB__DOT__FA__DOT__c3Out),32);
        bufp->chgBit(oldp+50,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__sign));
        bufp->chgCData(oldp+51,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent),8);
        bufp->chgIData(oldp+52,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__mantissa),23);
        bufp->chgQData(oldp+53,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction),48);
        bufp->chgIData(oldp+55,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionA),24);
        bufp->chgIData(oldp+56,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionB),24);
        bufp->chgBit(oldp+57,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__eout));
        bufp->chgIData(oldp+58,(vlSelf->floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+59,((0x80000000U | (0x7fffffffU 
                                                & vlSelf->floatDivTB__DOT__FA__DOT__c2D))),32);
        bufp->chgBit(oldp+60,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__sign));
        bufp->chgCData(oldp+61,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent),8);
        bufp->chgIData(oldp+62,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__mantissa),23);
        bufp->chgIData(oldp+63,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction),24);
        bufp->chgCData(oldp+64,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA),8);
        bufp->chgCData(oldp+65,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB),8);
        bufp->chgIData(oldp+66,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA),24);
        bufp->chgIData(oldp+67,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB),24);
        bufp->chgSData(oldp+68,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount),9);
        bufp->chgBit(oldp+69,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__cout));
        bufp->chgBit(oldp+70,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__eout));
        bufp->chgIData(oldp+71,(vlSelf->floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+72,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__sign));
        bufp->chgCData(oldp+73,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent),8);
        bufp->chgIData(oldp+74,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__mantissa),23);
        bufp->chgQData(oldp+75,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction),48);
        bufp->chgIData(oldp+77,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionA),24);
        bufp->chgIData(oldp+78,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionB),24);
        bufp->chgBit(oldp+79,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__eout));
        bufp->chgIData(oldp+80,(vlSelf->floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+81,(vlSelf->floatDivTB__DOT__FA__DOT__c3D),32);
        bufp->chgIData(oldp+82,(vlSelf->floatDivTB__DOT__FA__DOT__c3S),32);
        bufp->chgIData(oldp+83,(vlSelf->floatDivTB__DOT__FA__DOT__c4Out),32);
        bufp->chgBit(oldp+84,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__sign));
        bufp->chgCData(oldp+85,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent),8);
        bufp->chgIData(oldp+86,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__mantissa),23);
        bufp->chgQData(oldp+87,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction),48);
        bufp->chgIData(oldp+89,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionA),24);
        bufp->chgIData(oldp+90,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionB),24);
        bufp->chgBit(oldp+91,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__eout));
        bufp->chgIData(oldp+92,(vlSelf->floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+93,((0x80000000U | (0x7fffffffU 
                                                & vlSelf->floatDivTB__DOT__FA__DOT__c3D))),32);
        bufp->chgBit(oldp+94,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__sign));
        bufp->chgCData(oldp+95,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent),8);
        bufp->chgIData(oldp+96,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__mantissa),23);
        bufp->chgIData(oldp+97,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction),24);
        bufp->chgCData(oldp+98,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA),8);
        bufp->chgCData(oldp+99,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB),8);
        bufp->chgIData(oldp+100,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA),24);
        bufp->chgIData(oldp+101,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB),24);
        bufp->chgSData(oldp+102,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount),9);
        bufp->chgBit(oldp+103,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__cout));
        bufp->chgBit(oldp+104,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__eout));
        bufp->chgIData(oldp+105,(vlSelf->floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+106,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__sign));
        bufp->chgCData(oldp+107,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent),8);
        bufp->chgIData(oldp+108,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__mantissa),23);
        bufp->chgQData(oldp+109,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction),48);
        bufp->chgIData(oldp+111,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionA),24);
        bufp->chgIData(oldp+112,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionB),24);
        bufp->chgBit(oldp+113,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__eout));
        bufp->chgIData(oldp+114,(vlSelf->floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+115,(vlSelf->floatDivTB__DOT__FA__DOT__c1D),32);
        bufp->chgIData(oldp+116,(vlSelf->floatDivTB__DOT__FA__DOT__c1S),32);
        bufp->chgIData(oldp+117,(vlSelf->floatDivTB__DOT__FA__DOT__c2Out),32);
        bufp->chgBit(oldp+118,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__sign));
        bufp->chgCData(oldp+119,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent),8);
        bufp->chgIData(oldp+120,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__mantissa),23);
        bufp->chgQData(oldp+121,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction),48);
        bufp->chgIData(oldp+123,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionA),24);
        bufp->chgIData(oldp+124,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionB),24);
        bufp->chgBit(oldp+125,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__eout));
        bufp->chgIData(oldp+126,(vlSelf->floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+127,((0x80000000U | (0x7fffffffU 
                                                 & vlSelf->floatDivTB__DOT__FA__DOT__c1D))),32);
        bufp->chgBit(oldp+128,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__sign));
        bufp->chgCData(oldp+129,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent),8);
        bufp->chgIData(oldp+130,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__mantissa),23);
        bufp->chgIData(oldp+131,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction),24);
        bufp->chgCData(oldp+132,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA),8);
        bufp->chgCData(oldp+133,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB),8);
        bufp->chgIData(oldp+134,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA),24);
        bufp->chgIData(oldp+135,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB),24);
        bufp->chgSData(oldp+136,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount),9);
        bufp->chgBit(oldp+137,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__cout));
        bufp->chgBit(oldp+138,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__eout));
        bufp->chgIData(oldp+139,(vlSelf->floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+140,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__sign));
        bufp->chgCData(oldp+141,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent),8);
        bufp->chgIData(oldp+142,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__mantissa),23);
        bufp->chgQData(oldp+143,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction),48);
        bufp->chgIData(oldp+145,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionA),24);
        bufp->chgIData(oldp+146,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionB),24);
        bufp->chgBit(oldp+147,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__eout));
        bufp->chgIData(oldp+148,(vlSelf->floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+149,(vlSelf->floatDivTB__DOT__clk));
    bufp->chgIData(oldp+150,(vlSelf->floatDivTB__DOT__A),32);
    bufp->chgIData(oldp+151,(vlSelf->floatDivTB__DOT__B),32);
    bufp->chgIData(oldp+152,(vlSelf->floatDivTB__DOT__FA__DOT__c1),32);
    bufp->chgIData(oldp+153,(vlSelf->floatDivTB__DOT__FA__DOT__c2),32);
    bufp->chgIData(oldp+154,(vlSelf->floatDivTB__DOT__FA__DOT__c3),32);
    bufp->chgIData(oldp+155,(vlSelf->floatDivTB__DOT__FA__DOT__c4),32);
    bufp->chgIData(oldp+156,(vlSelf->floatDivTB__DOT__FA__DOT__cFinal),32);
}

void VfloatDivTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatDivTB___024root__trace_cleanup\n"); );
    // Init
    VfloatDivTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatDivTB___024root*>(voidSelf);
    VfloatDivTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
