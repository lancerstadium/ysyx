// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfloatRecTB__Syms.h"


void VfloatRecTB___024root__trace_chg_0_sub_0(VfloatRecTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VfloatRecTB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_chg_0\n"); );
    // Init
    VfloatRecTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatRecTB___024root*>(voidSelf);
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VfloatRecTB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VfloatRecTB___024root__trace_chg_0_sub_0(VfloatRecTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->floatRecTB__DOT__FA__DOT__P2D),32);
        bufp->chgIData(oldp+1,(vlSelf->floatRecTB__DOT__FA__DOT__y1),32);
        bufp->chgIData(oldp+2,(vlSelf->floatRecTB__DOT__FA__DOT__y1D),32);
        bufp->chgIData(oldp+3,(vlSelf->floatRecTB__DOT__FA__DOT__y1S),32);
        bufp->chgIData(oldp+4,(vlSelf->floatRecTB__DOT__FA__DOT__y2),32);
        bufp->chgIData(oldp+5,(vlSelf->floatRecTB__DOT__FA__DOT__y2D),32);
        bufp->chgIData(oldp+6,(vlSelf->floatRecTB__DOT__FA__DOT__y2S),32);
        bufp->chgIData(oldp+7,(vlSelf->floatRecTB__DOT__FA__DOT__y3),32);
        bufp->chgIData(oldp+8,(vlSelf->floatRecTB__DOT__FA__DOT__y3D),32);
        bufp->chgIData(oldp+9,(vlSelf->floatRecTB__DOT__FA__DOT__y3S),32);
        bufp->chgIData(oldp+10,(vlSelf->floatRecTB__DOT__FA__DOT__y4),32);
        bufp->chgBit(oldp+11,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__sign));
        bufp->chgCData(oldp+12,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent),8);
        bufp->chgIData(oldp+13,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa),23);
        bufp->chgQData(oldp+14,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction),48);
        bufp->chgIData(oldp+16,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA),24);
        bufp->chgIData(oldp+17,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB),24);
        bufp->chgBit(oldp+18,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__eout));
        bufp->chgIData(oldp+19,(vlSelf->floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+20,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__sign));
        bufp->chgCData(oldp+21,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent),8);
        bufp->chgIData(oldp+22,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa),23);
        bufp->chgQData(oldp+23,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction),48);
        bufp->chgIData(oldp+25,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA),24);
        bufp->chgIData(oldp+26,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB),24);
        bufp->chgBit(oldp+27,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__eout));
        bufp->chgIData(oldp+28,(vlSelf->floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+29,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__sign));
        bufp->chgCData(oldp+30,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent),8);
        bufp->chgIData(oldp+31,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa),23);
        bufp->chgQData(oldp+32,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction),48);
        bufp->chgIData(oldp+34,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA),24);
        bufp->chgIData(oldp+35,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB),24);
        bufp->chgBit(oldp+36,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__eout));
        bufp->chgIData(oldp+37,(vlSelf->floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+38,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign));
        bufp->chgCData(oldp+39,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent),8);
        bufp->chgIData(oldp+40,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa),23);
        bufp->chgIData(oldp+41,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction),24);
        bufp->chgCData(oldp+42,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA),8);
        bufp->chgCData(oldp+43,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB),8);
        bufp->chgIData(oldp+44,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA),24);
        bufp->chgIData(oldp+45,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB),24);
        bufp->chgSData(oldp+46,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount),9);
        bufp->chgBit(oldp+47,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout));
        bufp->chgBit(oldp+48,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout));
        bufp->chgIData(oldp+49,(vlSelf->floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+50,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__sign));
        bufp->chgCData(oldp+51,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent),8);
        bufp->chgIData(oldp+52,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa),23);
        bufp->chgQData(oldp+53,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction),48);
        bufp->chgIData(oldp+55,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionA),24);
        bufp->chgIData(oldp+56,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB),24);
        bufp->chgBit(oldp+57,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__eout));
        bufp->chgIData(oldp+58,(vlSelf->floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+59,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__sign));
        bufp->chgCData(oldp+60,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent),8);
        bufp->chgIData(oldp+61,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa),23);
        bufp->chgQData(oldp+62,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction),48);
        bufp->chgIData(oldp+64,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionA),24);
        bufp->chgIData(oldp+65,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionB),24);
        bufp->chgBit(oldp+66,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__eout));
        bufp->chgIData(oldp+67,(vlSelf->floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+68,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__sign));
        bufp->chgCData(oldp+69,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent),8);
        bufp->chgIData(oldp+70,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa),23);
        bufp->chgQData(oldp+71,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction),48);
        bufp->chgIData(oldp+73,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionA),24);
        bufp->chgIData(oldp+74,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionB),24);
        bufp->chgBit(oldp+75,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__eout));
        bufp->chgIData(oldp+76,(vlSelf->floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+77,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__sign));
        bufp->chgCData(oldp+78,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent),8);
        bufp->chgIData(oldp+79,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa),23);
        bufp->chgQData(oldp+80,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction),48);
        bufp->chgIData(oldp+82,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionA),24);
        bufp->chgIData(oldp+83,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionB),24);
        bufp->chgBit(oldp+84,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__eout));
        bufp->chgIData(oldp+85,(vlSelf->floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+86,((0x80000000U | (0x7fffffffU 
                                                & vlSelf->floatRecTB__DOT__FA__DOT__y1D))),32);
        bufp->chgBit(oldp+87,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__sign));
        bufp->chgCData(oldp+88,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent),8);
        bufp->chgIData(oldp+89,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa),23);
        bufp->chgIData(oldp+90,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction),24);
        bufp->chgCData(oldp+91,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA),8);
        bufp->chgCData(oldp+92,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB),8);
        bufp->chgIData(oldp+93,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA),24);
        bufp->chgIData(oldp+94,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB),24);
        bufp->chgSData(oldp+95,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount),9);
        bufp->chgBit(oldp+96,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__cout));
        bufp->chgBit(oldp+97,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__eout));
        bufp->chgIData(oldp+98,(vlSelf->floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+99,((0x80000000U | (0x7fffffffU 
                                                & vlSelf->floatRecTB__DOT__FA__DOT__y2D))),32);
        bufp->chgBit(oldp+100,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__sign));
        bufp->chgCData(oldp+101,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent),8);
        bufp->chgIData(oldp+102,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa),23);
        bufp->chgIData(oldp+103,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction),24);
        bufp->chgCData(oldp+104,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA),8);
        bufp->chgCData(oldp+105,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB),8);
        bufp->chgIData(oldp+106,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA),24);
        bufp->chgIData(oldp+107,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB),24);
        bufp->chgSData(oldp+108,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount),9);
        bufp->chgBit(oldp+109,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__cout));
        bufp->chgBit(oldp+110,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__eout));
        bufp->chgIData(oldp+111,(vlSelf->floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+112,((0x80000000U | (0x7fffffffU 
                                                 & vlSelf->floatRecTB__DOT__FA__DOT__y3D))),32);
        bufp->chgBit(oldp+113,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__sign));
        bufp->chgCData(oldp+114,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent),8);
        bufp->chgIData(oldp+115,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa),23);
        bufp->chgIData(oldp+116,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction),24);
        bufp->chgCData(oldp+117,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA),8);
        bufp->chgCData(oldp+118,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB),8);
        bufp->chgIData(oldp+119,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA),24);
        bufp->chgIData(oldp+120,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB),24);
        bufp->chgSData(oldp+121,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount),9);
        bufp->chgBit(oldp+122,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__cout));
        bufp->chgBit(oldp+123,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__eout));
        bufp->chgIData(oldp+124,(vlSelf->floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+125,(vlSelf->floatRecTB__DOT__clk));
    bufp->chgIData(oldp+126,(vlSelf->floatRecTB__DOT__X),32);
    bufp->chgIData(oldp+127,(((0x80000000U & vlSelf->floatRecTB__DOT__X) 
                              | ((0x7f800000U & (((IData)(0xfdU) 
                                                  - 
                                                  (vlSelf->floatRecTB__DOT__X 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & vlSelf->floatRecTB__DOT__FA__DOT__y4)))),32);
    bufp->chgIData(oldp+128,((0x3f000000U | (0x7fffffU 
                                             & vlSelf->floatRecTB__DOT__X))),32);
}

void VfloatRecTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfloatRecTB___024root__trace_cleanup\n"); );
    // Init
    VfloatRecTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfloatRecTB___024root*>(voidSelf);
    VfloatRecTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
