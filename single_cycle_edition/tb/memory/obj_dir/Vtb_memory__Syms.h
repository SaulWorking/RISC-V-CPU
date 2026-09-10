// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MEMORY__SYMS_H_
#define VERILATED_VTB_MEMORY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_memory.h"

// INCLUDE MODULE CLASSES
#include "Vtb_memory___024root.h"
#include "Vtb_memory___024unit.h"
#include "Vtb_memory_std.h"
#include "Vtb_memory_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_memory_std__03a__03aprocess__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_memory__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_memory* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_memory___024root           TOP;
    Vtb_memory_std                 TOP__std;
    Vtb_memory_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_memory_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vtb_memory__Syms(VerilatedContext* contextp, const char* namep, Vtb_memory* modelp);
    ~Vtb_memory__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
