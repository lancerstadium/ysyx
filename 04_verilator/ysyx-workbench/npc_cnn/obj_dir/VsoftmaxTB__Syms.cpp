// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VsoftmaxTB__pch.h"
#include "VsoftmaxTB.h"
#include "VsoftmaxTB___024root.h"
#include "VsoftmaxTB_exponent.h"

// FUNCTIONS
VsoftmaxTB__Syms::~VsoftmaxTB__Syms()
{
}

VsoftmaxTB__Syms::VsoftmaxTB__Syms(VerilatedContext* contextp, const char* namep, VsoftmaxTB* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[0].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[1].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[2].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[3].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[4].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[5].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[6].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[7].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[8].exp")}
    , TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp{this, Verilated::catName(namep, "softmaxTB.soft1.genblk1[9].exp")}
{
        // Check resources
        Verilated::stackCheck(738);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp;
    TOP.__PVT__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp = &TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp.__Vconfigure(true);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp.__Vconfigure(false);
    TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp.__Vconfigure(false);
}
