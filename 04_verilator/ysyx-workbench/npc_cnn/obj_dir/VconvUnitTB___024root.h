// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VconvUnitTB.h for the primary calling header

#ifndef VERILATED_VCONVUNITTB___024ROOT_H_
#define VERILATED_VCONVUNITTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VconvUnitTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VconvUnitTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ convUnitTB__DOT__clk;
    CData/*0:0*/ convUnitTB__DOT__rst;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__sign;
    CData/*4:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__eout;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
    CData/*4:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign;
    CData/*4:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent;
    CData/*4:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    CData/*4:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
    CData/*5:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
    CData/*4:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
    CData/*0:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
    CData/*4:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convUnitTB__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convUnitTB__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ convUnitTB__DOT__res;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__selInA;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__selInB;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__mulC;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__addC;
    SData/*9:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa;
    SData/*10:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA;
    SData/*10:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB;
    SData/*9:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa;
    SData/*10:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction;
    SData/*10:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA;
    SData/*10:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB;
    SData/*10:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
    VlWide<13>/*399:0*/ convUnitTB__DOT__img;
    VlWide<13>/*399:0*/ convUnitTB__DOT__fit;
    IData/*31:0*/ convUnitTB__DOT__UUT__DOT__i;
    IData/*21:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction;
    IData/*31:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VconvUnitTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VconvUnitTB___024root(VconvUnitTB__Syms* symsp, const char* v__name);
    ~VconvUnitTB___024root();
    VL_UNCOPYABLE(VconvUnitTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
