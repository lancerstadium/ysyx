// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VprocElemTB.h for the primary calling header

#ifndef VERILATED_VPROCELEMTB___024ROOT_H_
#define VERILATED_VPROCELEMTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VprocElemTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VprocElemTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ procElemTB__DOT__clk;
    CData/*0:0*/ procElemTB__DOT__rst;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign;
    CData/*7:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h2e833972__0;
    CData/*7:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_h3095d3f1__0;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign;
    CData/*7:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent;
    CData/*7:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    CData/*7:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h9ec70323__0;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h63e25442__0;
    CData/*7:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h704b029f__0;
    CData/*0:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h5ec2525e__0;
    CData/*7:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h87dcad21__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__procElemTB__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__procElemTB__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount;
    IData/*31:0*/ procElemTB__DOT__A;
    IData/*31:0*/ procElemTB__DOT__B;
    IData/*31:0*/ procElemTB__DOT__R;
    IData/*31:0*/ procElemTB__DOT__C;
    IData/*31:0*/ procElemTB__DOT__PE__DOT__mulC;
    IData/*31:0*/ procElemTB__DOT__PE__DOT__addC;
    IData/*22:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa;
    IData/*23:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA;
    IData/*23:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB;
    IData/*31:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i;
    IData/*22:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa;
    IData/*23:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction;
    IData/*23:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA;
    IData/*23:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB;
    IData/*23:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h77554df9__0;
    IData/*31:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ procElemTB__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VprocElemTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VprocElemTB___024root(VprocElemTB__Syms* symsp, const char* v__name);
    ~VprocElemTB___024root();
    VL_UNCOPYABLE(VprocElemTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
