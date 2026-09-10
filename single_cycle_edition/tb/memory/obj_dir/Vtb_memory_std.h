// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_memory.h for the primary calling header

#ifndef VERILATED_VTB_MEMORY_STD_H_
#define VERILATED_VTB_MEMORY_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_memory_std final {
  public:

    // INTERNAL VARIABLES
    Vtb_memory__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_memory_std();
    ~Vtb_memory_std();
    void ctor(Vtb_memory__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_memory_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
