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
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convUnitTB__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convUnitTB__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ convUnitTB__DOT__res;
    SData/*15:0*/ convUnitTB__DOT__tmp;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__selInA;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__selInB;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__mulC;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__addC;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed;
    SData/*15:0*/ convUnitTB__DOT__UUT__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed;
    VlWide<13>/*399:0*/ convUnitTB__DOT__img;
    VlWide<13>/*399:0*/ convUnitTB__DOT__fit;
    IData/*31:0*/ convUnitTB__DOT__i;
    IData/*31:0*/ convUnitTB__DOT__UUT__DOT__i;
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
