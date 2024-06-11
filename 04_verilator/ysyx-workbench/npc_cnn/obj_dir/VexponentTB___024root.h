// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VexponentTB.h for the primary calling header

#ifndef VERILATED_VEXPONENTTB___024ROOT_H_
#define VERILATED_VEXPONENTTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VexponentTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VexponentTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ exponentTB__DOT__clk;
    CData/*0:0*/ exponentTB__DOT__enb;
    CData/*0:0*/ exponentTB__DOT__ack;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__sign;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__exponent;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__eout;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT____Vconcswap_1_h2e833972__0;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT____Vconcswap_1_h3095d3f1__0;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__sign;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__exponent;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__eout;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__sign;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__exponent;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentA;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__exponentB;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__cout;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__eout;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h9ec70323__0;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h63e25442__0;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h704b029f__0;
    CData/*0:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
    CData/*7:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h87dcad21__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exponentTB__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__shiftAmount;
    IData/*31:0*/ exponentTB__DOT__X;
    IData/*31:0*/ exponentTB__DOT__Y;
    VlWide<7>/*223:0*/ exponentTB__DOT__exp__DOT__divisors;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__mulA;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__oneOrX;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__outM1;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__outM2;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__outA1;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__outReg;
    IData/*22:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__mantissa;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__fractionA;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__fractionB;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__unnamedblk1__DOT__i;
    IData/*22:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__mantissa;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__fractionA;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__fractionB;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__unnamedblk1__DOT__i;
    IData/*22:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__mantissa;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__fraction;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionA;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__fractionB;
    IData/*23:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT____Vconcswap_1_h77554df9__0;
    IData/*31:0*/ exponentTB__DOT__exp__DOT__fAdd1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ exponentTB__DOT__exp__DOT__fMul1__DOT__fraction;
    QData/*47:0*/ exponentTB__DOT__exp__DOT__fMul2__DOT__fraction;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VexponentTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VexponentTB___024root(VexponentTB__Syms* symsp, const char* v__name);
    ~VexponentTB___024root();
    VL_UNCOPYABLE(VexponentTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
