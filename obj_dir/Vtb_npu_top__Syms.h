// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_NPU_TOP__SYMS_H_
#define VERILATED_VTB_NPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_npu_top.h"

// INCLUDE MODULE CLASSES
#include "Vtb_npu_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_npu_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_npu_top* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vtb_npu_top___024root          TOP;
        } vlInst;
    };

    // CONSTRUCTORS
    Vtb_npu_top__Syms(VerilatedContext* contextp, Vtb_npu_top* modelp, const char* namep, bool isRoot);
    ~Vtb_npu_top__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
};

#endif  // guard
