// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONVLAYERSINGLETB__SYMS_H_
#define VERILATED_VCONVLAYERSINGLETB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VconvLayerSingleTB.h"

// INCLUDE MODULE CLASSES
#include "VconvLayerSingleTB___024root.h"
#include "VconvLayerSingleTB_convUnit__D10.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VconvLayerSingleTB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VconvLayerSingleTB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VconvLayerSingleTB___024root   TOP;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10 TOP__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU;

    // CONSTRUCTORS
    VconvLayerSingleTB__Syms(VerilatedContext* contextp, const char* namep, VconvLayerSingleTB* modelp);
    ~VconvLayerSingleTB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
