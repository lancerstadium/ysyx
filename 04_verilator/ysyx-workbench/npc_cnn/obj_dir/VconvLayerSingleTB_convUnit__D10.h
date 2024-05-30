// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VconvLayerSingleTB.h for the primary calling header

#ifndef VERILATED_VCONVLAYERSINGLETB_CONVUNIT__D10_H_
#define VERILATED_VCONVLAYERSINGLETB_CONVUNIT__D10_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VconvLayerSingleTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VconvLayerSingleTB_convUnit__D10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__sign;
    CData/*4:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__exponent;
    CData/*0:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__eout;
    CData/*0:0*/ PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_he65578d5__0;
    CData/*4:0*/ PE__DOT__sint_mode__DOT__fMul__DOT____Vconcswap_1_haafb414a__0;
    CData/*0:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__sign;
    CData/*4:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponent;
    CData/*4:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentA;
    CData/*4:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__exponentB;
    CData/*5:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__shiftAmount;
    CData/*0:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__cout;
    CData/*0:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__eout;
    CData/*0:0*/ PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h4835bea6__0;
    CData/*0:0*/ PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_hcc241f5a__0;
    CData/*4:0*/ PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a2d6b21__0;
    CData/*0:0*/ PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h15f9c69e__0;
    CData/*4:0*/ PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h7a3d2c75__0;
    VL_OUT16(res,15,0);
    SData/*15:0*/ __PVT__selInA;
    SData/*15:0*/ __PVT__selInB;
    SData/*15:0*/ __PVT__PE__DOT__mulC;
    SData/*15:0*/ __PVT__PE__DOT__addC;
    SData/*9:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__mantissa;
    SData/*10:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionA;
    SData/*10:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fractionB;
    SData/*9:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__mantissa;
    SData/*10:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fraction;
    SData/*10:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionA;
    SData/*10:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__fractionB;
    SData/*10:0*/ PE__DOT__sint_mode__DOT__fAdd__DOT____Vconcswap_1_h46bc33d4__0;
    VL_INW(img,399,0,13);
    VL_INW(fit,399,0,13);
    IData/*31:0*/ __PVT__i;
    IData/*21:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__fraction;
    IData/*31:0*/ __PVT__PE__DOT__sint_mode__DOT__fMul__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__PE__DOT__sint_mode__DOT__fAdd__DOT__unnamedblk1__DOT__i;

    // INTERNAL VARIABLES
    VconvLayerSingleTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VconvLayerSingleTB_convUnit__D10(VconvLayerSingleTB__Syms* symsp, const char* v__name);
    ~VconvLayerSingleTB_convUnit__D10();
    VL_UNCOPYABLE(VconvLayerSingleTB_convUnit__D10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
