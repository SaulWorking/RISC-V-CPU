// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"

void Vtb_memory___024unit___ctor_var_reset(Vtb_memory___024unit* vlSelf);

Vtb_memory___024unit::Vtb_memory___024unit() = default;
Vtb_memory___024unit::~Vtb_memory___024unit() = default;

void Vtb_memory___024unit::ctor(Vtb_memory__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_memory___024unit___ctor_var_reset(this);
}

void Vtb_memory___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_memory___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
