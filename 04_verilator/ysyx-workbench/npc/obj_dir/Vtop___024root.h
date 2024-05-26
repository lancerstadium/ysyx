// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(led,7,0);
    CData/*0:0*/ top__DOT__div1__DOT__Cmp_reg;
    CData/*0:0*/ top__DOT__div2__DOT__Cmp_reg;
    CData/*0:0*/ top__DOT__div3__DOT__Cmp_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(A,15,0);
    VL_IN16(B,15,0);
    VL_OUT16(C,15,0);
    SData/*15:0*/ top__DOT__A_next1;
    SData/*15:0*/ top__DOT__B_next1;
    SData/*15:0*/ top__DOT__C_next1;
    SData/*15:0*/ top__DOT__Max_next1;
    SData/*15:0*/ top__DOT__Min_next1;
    SData/*15:0*/ top__DOT__A_next2;
    SData/*15:0*/ top__DOT__B_next2;
    SData/*15:0*/ top__DOT__C_next2;
    SData/*15:0*/ top__DOT__Max_next2;
    SData/*15:0*/ top__DOT__Min_next2;
    SData/*15:0*/ top__DOT__A_next3;
    SData/*15:0*/ top__DOT__B_next3;
    SData/*15:0*/ top__DOT__Max_next3;
    SData/*15:0*/ top__DOT__Min_next3;
    SData/*15:0*/ top__DOT__div1__DOT__A_reg;
    SData/*15:0*/ top__DOT__div1__DOT__B_reg;
    SData/*15:0*/ top__DOT__div1__DOT__C_reg;
    SData/*15:0*/ top__DOT__div1__DOT__Max_reg;
    SData/*15:0*/ top__DOT__div1__DOT__Min_reg;
    SData/*15:0*/ top__DOT__div1__DOT__half_max;
    SData/*15:0*/ top__DOT__div1__DOT__product;
    SData/*15:0*/ top__DOT__div2__DOT__A_reg;
    SData/*15:0*/ top__DOT__div2__DOT__B_reg;
    SData/*15:0*/ top__DOT__div2__DOT__C_reg;
    SData/*15:0*/ top__DOT__div2__DOT__Max_reg;
    SData/*15:0*/ top__DOT__div2__DOT__Min_reg;
    SData/*15:0*/ top__DOT__div2__DOT__half_max;
    SData/*15:0*/ top__DOT__div2__DOT__product;
    SData/*15:0*/ top__DOT__div3__DOT__A_reg;
    SData/*15:0*/ top__DOT__div3__DOT__B_reg;
    SData/*15:0*/ top__DOT__div3__DOT__C_reg;
    SData/*15:0*/ top__DOT__div3__DOT__Max_reg;
    SData/*15:0*/ top__DOT__div3__DOT__Min_reg;
    SData/*15:0*/ top__DOT__div3__DOT__half_max;
    SData/*15:0*/ top__DOT__div3__DOT__product;
    IData/*31:0*/ top__DOT__lt1__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
