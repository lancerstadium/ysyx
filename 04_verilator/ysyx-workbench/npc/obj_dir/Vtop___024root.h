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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(led,7,0);
        CData/*0:0*/ top__DOT__div1__DOT__Cmp_reg;
        CData/*0:0*/ top__DOT__div2__DOT__Cmp_reg;
        CData/*0:0*/ top__DOT__div3__DOT__Cmp_reg;
        CData/*0:0*/ top__DOT__div4__DOT__Cmp_reg;
        CData/*0:0*/ top__DOT__div5__DOT__Cmp_reg;
        CData/*0:0*/ top__DOT__div6__DOT__Cmp_reg;
        CData/*0:0*/ top__DOT__div7__DOT__Cmp_reg;
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
        SData/*15:0*/ top__DOT__C_next3;
        SData/*15:0*/ top__DOT__Max_next3;
        SData/*15:0*/ top__DOT__Min_next3;
        SData/*15:0*/ top__DOT__A_next4;
        SData/*15:0*/ top__DOT__B_next4;
        SData/*15:0*/ top__DOT__C_next4;
        SData/*15:0*/ top__DOT__Max_next4;
        SData/*15:0*/ top__DOT__Min_next4;
        SData/*15:0*/ top__DOT__A_next5;
        SData/*15:0*/ top__DOT__B_next5;
        SData/*15:0*/ top__DOT__C_next5;
        SData/*15:0*/ top__DOT__Max_next5;
        SData/*15:0*/ top__DOT__Min_next5;
        SData/*15:0*/ top__DOT__A_next6;
        SData/*15:0*/ top__DOT__B_next6;
        SData/*15:0*/ top__DOT__C_next6;
        SData/*15:0*/ top__DOT__Max_next6;
        SData/*15:0*/ top__DOT__Min_next6;
        SData/*15:0*/ top__DOT__A_next7;
        SData/*15:0*/ top__DOT__B_next7;
        SData/*15:0*/ top__DOT__C_next7;
        SData/*15:0*/ top__DOT__Max_next7;
        SData/*15:0*/ top__DOT__Min_next7;
        SData/*15:0*/ top__DOT__div1__DOT__A_reg;
        SData/*15:0*/ top__DOT__div1__DOT__B_reg;
        SData/*15:0*/ top__DOT__div1__DOT__C_reg;
        SData/*15:0*/ top__DOT__div1__DOT__Max_reg;
        SData/*15:0*/ top__DOT__div1__DOT__Min_reg;
        SData/*15:0*/ top__DOT__div1__DOT__Add_reg;
        SData/*15:0*/ top__DOT__div1__DOT__Mid_reg;
        SData/*15:0*/ top__DOT__div1__DOT__product;
        SData/*15:0*/ top__DOT__div2__DOT__A_reg;
        SData/*15:0*/ top__DOT__div2__DOT__B_reg;
        SData/*15:0*/ top__DOT__div2__DOT__C_reg;
        SData/*15:0*/ top__DOT__div2__DOT__Max_reg;
        SData/*15:0*/ top__DOT__div2__DOT__Min_reg;
    };
    struct {
        SData/*15:0*/ top__DOT__div2__DOT__Add_reg;
        SData/*15:0*/ top__DOT__div2__DOT__Mid_reg;
        SData/*15:0*/ top__DOT__div2__DOT__product;
        SData/*15:0*/ top__DOT__div3__DOT__A_reg;
        SData/*15:0*/ top__DOT__div3__DOT__B_reg;
        SData/*15:0*/ top__DOT__div3__DOT__C_reg;
        SData/*15:0*/ top__DOT__div3__DOT__Max_reg;
        SData/*15:0*/ top__DOT__div3__DOT__Min_reg;
        SData/*15:0*/ top__DOT__div3__DOT__Add_reg;
        SData/*15:0*/ top__DOT__div3__DOT__Mid_reg;
        SData/*15:0*/ top__DOT__div3__DOT__product;
        SData/*15:0*/ top__DOT__div4__DOT__A_reg;
        SData/*15:0*/ top__DOT__div4__DOT__B_reg;
        SData/*15:0*/ top__DOT__div4__DOT__C_reg;
        SData/*15:0*/ top__DOT__div4__DOT__Max_reg;
        SData/*15:0*/ top__DOT__div4__DOT__Min_reg;
        SData/*15:0*/ top__DOT__div4__DOT__Add_reg;
        SData/*15:0*/ top__DOT__div4__DOT__Mid_reg;
        SData/*15:0*/ top__DOT__div4__DOT__product;
        SData/*15:0*/ top__DOT__div5__DOT__A_reg;
        SData/*15:0*/ top__DOT__div5__DOT__B_reg;
        SData/*15:0*/ top__DOT__div5__DOT__C_reg;
        SData/*15:0*/ top__DOT__div5__DOT__Max_reg;
        SData/*15:0*/ top__DOT__div5__DOT__Min_reg;
        SData/*15:0*/ top__DOT__div5__DOT__Add_reg;
        SData/*15:0*/ top__DOT__div5__DOT__Mid_reg;
        SData/*15:0*/ top__DOT__div5__DOT__product;
        SData/*15:0*/ top__DOT__div6__DOT__A_reg;
        SData/*15:0*/ top__DOT__div6__DOT__B_reg;
        SData/*15:0*/ top__DOT__div6__DOT__C_reg;
        SData/*15:0*/ top__DOT__div6__DOT__Max_reg;
        SData/*15:0*/ top__DOT__div6__DOT__Min_reg;
        SData/*15:0*/ top__DOT__div6__DOT__Add_reg;
        SData/*15:0*/ top__DOT__div6__DOT__Mid_reg;
        SData/*15:0*/ top__DOT__div6__DOT__product;
        SData/*15:0*/ top__DOT__div7__DOT__A_reg;
        SData/*15:0*/ top__DOT__div7__DOT__B_reg;
        SData/*15:0*/ top__DOT__div7__DOT__C_reg;
        SData/*15:0*/ top__DOT__div7__DOT__Max_reg;
        SData/*15:0*/ top__DOT__div7__DOT__Min_reg;
        SData/*15:0*/ top__DOT__div7__DOT__Add_reg;
        SData/*15:0*/ top__DOT__div7__DOT__Mid_reg;
        SData/*15:0*/ top__DOT__div7__DOT__product;
        IData/*31:0*/ top__DOT__lt1__DOT__count;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
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
