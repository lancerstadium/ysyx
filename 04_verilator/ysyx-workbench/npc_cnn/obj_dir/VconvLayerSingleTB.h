// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCONVLAYERSINGLETB_H_
#define VERILATED_VCONVLAYERSINGLETB_H_  // guard

#include "verilated.h"

class VconvLayerSingleTB__Syms;
class VconvLayerSingleTB___024root;
class VerilatedVcdC;
class VconvLayerSingleTB_convUnit__D10;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VconvLayerSingleTB VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VconvLayerSingleTB__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__0__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__1__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__2__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__3__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__4__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__5__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__6__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__7__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__8__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__9__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__10__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__11__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__12__KET____DOT__CU;
    VconvLayerSingleTB_convUnit__D10* const __PVT__convLayerSingleTB__DOT__UUT__DOT__genblk1__BRA__13__KET____DOT__CU;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VconvLayerSingleTB___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VconvLayerSingleTB(VerilatedContext* contextp, const char* name = "TOP");
    explicit VconvLayerSingleTB(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VconvLayerSingleTB();
  private:
    VL_UNCOPYABLE(VconvLayerSingleTB);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
