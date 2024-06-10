// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsoftmaxTB.h for the primary calling header

#ifndef VERILATED_VSOFTMAXTB_EXPONENT_H_
#define VERILATED_VSOFTMAXTB_EXPONENT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VsoftmaxTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsoftmaxTB_exponent final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(enb,0,0);
    VL_OUT8(ack,0,0);
    CData/*0:0*/ __PVT__fMul1__DOT__sign;
    CData/*7:0*/ __PVT__fMul1__DOT__exponent;
    CData/*0:0*/ __PVT__fMul1__DOT__eout;
    CData/*0:0*/ fMul1__DOT____Vconcswap_1_h2e833972__0;
    CData/*7:0*/ fMul1__DOT____Vconcswap_1_h3095d3f1__0;
    CData/*0:0*/ __PVT__fMul2__DOT__sign;
    CData/*7:0*/ __PVT__fMul2__DOT__exponent;
    CData/*0:0*/ __PVT__fMul2__DOT__eout;
    CData/*0:0*/ fMul2__DOT____Vconcswap_1_h2e833972__0;
    CData/*7:0*/ fMul2__DOT____Vconcswap_1_h3095d3f1__0;
    CData/*0:0*/ __PVT__fAdd1__DOT__sign;
    CData/*7:0*/ __PVT__fAdd1__DOT__exponent;
    CData/*7:0*/ __PVT__fAdd1__DOT__exponentA;
    CData/*7:0*/ __PVT__fAdd1__DOT__exponentB;
    CData/*0:0*/ __PVT__fAdd1__DOT__cout;
    CData/*0:0*/ __PVT__fAdd1__DOT__eout;
    CData/*0:0*/ fAdd1__DOT____Vconcswap_1_h9ec70323__0;
    CData/*0:0*/ fAdd1__DOT____Vconcswap_1_h63e25442__0;
    CData/*7:0*/ fAdd1__DOT____Vconcswap_1_h704b029f__0;
    CData/*0:0*/ fAdd1__DOT____Vconcswap_1_h5ec2525e__0;
    CData/*7:0*/ fAdd1__DOT____Vconcswap_1_h87dcad21__0;
    SData/*8:0*/ __PVT__fAdd1__DOT__shiftAmount;
    VL_IN(X,31,0);
    VL_OUT(Y,31,0);
    VlWide<7>/*223:0*/ __PVT__divisors;
    IData/*31:0*/ __PVT__mulA;
    IData/*31:0*/ __PVT__oneOrX;
    IData/*31:0*/ __PVT__outM1;
    IData/*31:0*/ __PVT__outM2;
    IData/*31:0*/ __PVT__outA1;
    IData/*31:0*/ __PVT__outReg;
    IData/*22:0*/ __PVT__fMul1__DOT__mantissa;
    IData/*23:0*/ __PVT__fMul1__DOT__fractionA;
    IData/*23:0*/ __PVT__fMul1__DOT__fractionB;
    IData/*31:0*/ __PVT__fMul1__DOT__unnamedblk1__DOT__i;
    IData/*22:0*/ __PVT__fMul2__DOT__mantissa;
    IData/*23:0*/ __PVT__fMul2__DOT__fractionA;
    IData/*23:0*/ __PVT__fMul2__DOT__fractionB;
    IData/*31:0*/ __PVT__fMul2__DOT__unnamedblk1__DOT__i;
    IData/*22:0*/ __PVT__fAdd1__DOT__mantissa;
    IData/*23:0*/ __PVT__fAdd1__DOT__fraction;
    IData/*23:0*/ __PVT__fAdd1__DOT__fractionA;
    IData/*23:0*/ __PVT__fAdd1__DOT__fractionB;
    IData/*23:0*/ fAdd1__DOT____Vconcswap_1_h77554df9__0;
    IData/*31:0*/ __PVT__fAdd1__DOT__unnamedblk1__DOT__i;
    QData/*47:0*/ __PVT__fMul1__DOT__fraction;
    QData/*47:0*/ __PVT__fMul2__DOT__fraction;

    // INTERNAL VARIABLES
    VsoftmaxTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsoftmaxTB_exponent(VsoftmaxTB__Syms* symsp, const char* v__name);
    ~VsoftmaxTB_exponent();
    VL_UNCOPYABLE(VsoftmaxTB_exponent);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
