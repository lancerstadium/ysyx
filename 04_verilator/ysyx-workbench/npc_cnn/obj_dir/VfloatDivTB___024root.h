// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VfloatDivTB.h for the primary calling header

#ifndef VERILATED_VFLOATDIVTB___024ROOT_H_
#define VERILATED_VFLOATDIVTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VfloatDivTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VfloatDivTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ floatDivTB__DOT__clk;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponent;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentA;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__exponentB;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__cout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h9ec70323__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h63e25442__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h704b029f__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__exponent;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentA;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__exponentB;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__cout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__exponent;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentA;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__exponentB;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__cout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__exponent;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentA;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__exponentB;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__cout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__eout;
    };
    struct {
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__sign;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__exponent;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__eout;
        CData/*0:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__floatDivTB__DOT__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__shiftAmount;
        SData/*8:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__shiftAmount;
        SData/*8:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__shiftAmount;
        SData/*8:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__shiftAmount;
        IData/*31:0*/ floatDivTB__DOT__A;
        IData/*31:0*/ floatDivTB__DOT__B;
        IData/*31:0*/ floatDivTB__DOT__C;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__P2D;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c1;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__a1;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__b1;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c1Out;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__D1;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c1D;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c1S;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__a2;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__b2;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c2;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c2Out;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__D2;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c2D;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c2S;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__a3;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__b3;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c3;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c3Out;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__D3;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c3D;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c3S;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__a4;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__b4;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c4;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__c4Out;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__D4;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cFinal;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__aFinal;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__bFinal;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__fraction;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__fractionB;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT____Vconcswap_1_h77554df9__0;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cAdd1__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__mantissa;
    };
    struct {
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__fraction;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cSub2__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__fraction;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cSub3__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__fraction;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cSub4__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__mantissa;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionA;
        IData/*23:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__fractionB;
        IData/*31:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a1__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a2__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a3__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__a4__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__floatDivTB__DOT__FA__DOT__aFinal__0;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__cMul1__DOT__fraction;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__fMul2__DOT__fraction;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__cMul3__DOT__fraction;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__fMul3__DOT__fraction;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__cMul4__DOT__fraction;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__fMul4__DOT__fraction;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__cMul5__DOT__fraction;
        QData/*47:0*/ floatDivTB__DOT__FA__DOT__cMul6__DOT__fraction;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    VfloatDivTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VfloatDivTB___024root(VfloatDivTB__Syms* symsp, const char* v__name);
    ~VfloatDivTB___024root();
    VL_UNCOPYABLE(VfloatDivTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
