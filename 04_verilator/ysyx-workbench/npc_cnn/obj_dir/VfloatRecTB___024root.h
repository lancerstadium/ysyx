// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VfloatRecTB.h for the primary calling header

#ifndef VERILATED_VFLOATRECTB___024ROOT_H_
#define VERILATED_VFLOATRECTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VfloatRecTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VfloatRecTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ floatRecTB__DOT__clk;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__exponent;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponent;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentA;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__exponentB;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__cout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h9ec70323__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h63e25442__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h704b029f__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__exponent;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__exponent;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentA;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__exponentB;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__cout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__exponent;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__exponent;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__exponent;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentA;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__exponentB;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__cout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__exponent;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__exponent;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__exponent;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentA;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__exponentB;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__cout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__eout;
    };
    struct {
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h5ec2525e__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT____Vconcswap_1_h87dcad21__0;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__sign;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__exponent;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__eout;
        CData/*0:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h2e833972__0;
        CData/*7:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT____Vconcswap_1_h3095d3f1__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__shiftAmount;
        SData/*8:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__shiftAmount;
        SData/*8:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__shiftAmount;
        SData/*8:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__shiftAmount;
        IData/*31:0*/ floatRecTB__DOT__X;
        IData/*31:0*/ floatRecTB__DOT__Y;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__P2D;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y1;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y1D;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y1S;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y2;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y2D;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y2S;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y3;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y3D;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y3S;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__y4;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__fraction;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__fractionB;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT____Vconcswap_1_h77554df9__0;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__yAdd1__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__fraction;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__ySub2__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__fraction;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__ySub3__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionA;
    };
    struct {
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__fraction;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__ySub4__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__mantissa;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionA;
        IData/*23:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__fractionB;
        IData/*31:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ floatRecTB__DOT__FA__DOT__yMul1__DOT__fraction;
        QData/*47:0*/ floatRecTB__DOT__FA__DOT__fMul2__DOT__fraction;
        QData/*47:0*/ floatRecTB__DOT__FA__DOT__yMul3__DOT__fraction;
        QData/*47:0*/ floatRecTB__DOT__FA__DOT__fMul3__DOT__fraction;
        QData/*47:0*/ floatRecTB__DOT__FA__DOT__yMul4__DOT__fraction;
        QData/*47:0*/ floatRecTB__DOT__FA__DOT__fMul4__DOT__fraction;
        QData/*47:0*/ floatRecTB__DOT__FA__DOT__yMul5__DOT__fraction;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VfloatRecTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VfloatRecTB___024root(VfloatRecTB__Syms* symsp, const char* v__name);
    ~VfloatRecTB___024root();
    VL_UNCOPYABLE(VfloatRecTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
