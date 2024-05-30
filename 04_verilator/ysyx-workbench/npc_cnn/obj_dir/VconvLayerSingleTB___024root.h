// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VconvLayerSingleTB.h for the primary calling header

#ifndef VERILATED_VCONVLAYERSINGLETB___024ROOT_H_
#define VERILATED_VCONVLAYERSINGLETB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VconvLayerSingleTB_convUnit__D10;


class VconvLayerSingleTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VconvLayerSingleTB___024root final : public VerilatedModule {
  public:
    // CELLS
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU;

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
    VlWide<512>/*16383:0*/ convLayerSingleTB__DOT__img;
    VlWide<13>/*399:0*/ convLayerSingleTB__DOT__fit;
    VlWide<392>/*12543:0*/ convLayerSingleTB__DOT__res;
    IData/*31:0*/ convLayerSingleTB__DOT__i;
    IData/*31:0*/ convLayerSingleTB__DOT__clkCnt;
    VlWide<7>/*223:0*/ convLayerSingleTB__DOT__UUT__DOT__cuRes;
    VlWide<175>/*5599:0*/ convLayerSingleTB__DOT__UUT__DOT__imgPart;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__clkCnt;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__cuCnt;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__address;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__c;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__k;
    IData/*31:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT__i;
    VlWide<3>/*79:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__0;
    VlWide<3>/*79:0*/ convLayerSingleTB__DOT__UUT__DOT__RF__DOT____Vlvbound_hf8708011__1;
    IData/*31:0*/ __VactIterCount;
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
