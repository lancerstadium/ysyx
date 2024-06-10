// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOFTMAXTB__SYMS_H_
#define VERILATED_VSOFTMAXTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VsoftmaxTB.h"

// INCLUDE MODULE CLASSES
#include "VsoftmaxTB___024root.h"
#include "VsoftmaxTB_exponent.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VsoftmaxTB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VsoftmaxTB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VsoftmaxTB___024root           TOP;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__0__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__1__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__2__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__3__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__4__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__5__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__6__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__7__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__8__KET____DOT__exp;
    VsoftmaxTB_exponent            TOP__softmaxTB__DOT__soft1__DOT__genblk1__BRA__9__KET____DOT__exp;

    // CONSTRUCTORS
    VsoftmaxTB__Syms(VerilatedContext* contextp, const char* namep, VsoftmaxTB* modelp);
    ~VsoftmaxTB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
