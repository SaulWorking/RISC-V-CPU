// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"

void Vtb_memory_std__03a__03asemaphore__Vclpkg___ctor_var_reset(Vtb_memory_std__03a__03asemaphore__Vclpkg* vlSelf);

Vtb_memory_std__03a__03asemaphore__Vclpkg::Vtb_memory_std__03a__03asemaphore__Vclpkg() = default;
Vtb_memory_std__03a__03asemaphore__Vclpkg::~Vtb_memory_std__03a__03asemaphore__Vclpkg() = default;

void Vtb_memory_std__03a__03asemaphore__Vclpkg::ctor(Vtb_memory__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_memory_std__03a__03asemaphore__Vclpkg___ctor_var_reset(this);
}

void Vtb_memory_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_memory_std__03a__03asemaphore__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
