// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VconvLayerSingleTB.h for the primary calling header

#ifndef VERILATED_VCONVLAYERSINGLETB___024ROOT_H_
#define VERILATED_VCONVLAYERSINGLETB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VconvLayerSingleTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VconvLayerSingleTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ convLayerSingleTB__DOT__clk;
    CData/*0:0*/ convLayerSingleTB__DOT__rst;
    CData/*0:0*/ convLayerSingleTB__DOT__UUT__DOT__gRst;
    CData/*5:0*/ convLayerSingleTB__DOT__UUT__DOT__rowNum;
    CData/*5:0*/ convLayerSingleTB__DOT__UUT__DOT__colSel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convLayerSingleTB__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convLayerSingleTB__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convLayerSingleTB__DOT__UUT__DOT__gRst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ convLayerSingleTB__DOT__tmp;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__cuRes;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInA;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__selInB;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__mulC;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__addC;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__A_signed;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__B_signed;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iMul__DOT__C_signed;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__A_signed;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__B_signed;
    SData/*15:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__PE__DOT__float_mode__DOT__iAdd__DOT__C_signed;
    VlWide<13>/*399:0*/ convLayerSingleTB__DOT__img;
    VlWide<5>/*143:0*/ convLayerSingleTB__DOT__fit;
    VlWide<5>/*143:0*/ convLayerSingleTB__DOT__res;
    IData/*31:0*/ convLayerSingleTB__DOT__i;
    IData/*31:0*/ convLayerSingleTB__DOT__clkCnt;
    VlWide<5>/*143:0*/ convLayerSingleTB__DOT__UUT__DOT__imgPart;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__clkCnt;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__cuCnt;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__0;
    QData/*47:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_he8c4c52e__1;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VconvLayerSingleTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VconvLayerSingleTB___024root(VconvLayerSingleTB__Syms* symsp, const char* v__name);
    ~VconvLayerSingleTB___024root();
    VL_UNCOPYABLE(VconvLayerSingleTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
