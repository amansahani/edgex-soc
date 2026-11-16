// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_npu_top.h for the primary calling header

#include "Vtb_npu_top__pch.h"

void Vtb_npu_top___024root___ctor_var_reset(Vtb_npu_top___024root* vlSelf);

void Vtb_npu_top___024root__ctor(Vtb_npu_top___024root* vlSelf, Vtb_npu_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h24dce469__0);
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h24dc8f30__0);
    // Reset structure values
    Vtb_npu_top___024root___ctor_var_reset(vlSelf);
}

Vtb_npu_top___024root::Vtb_npu_top___024root(Vtb_npu_top__Syms* symsp, const char* namep) {
    Vtb_npu_top___024root__ctor(this, symsp, namep);
}

void Vtb_npu_top___024root__dtor(Vtb_npu_top___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h24dc8f30__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VtrigSched_h24dce469__0);
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_npu_top___024root::~Vtb_npu_top___024root() {
    Vtb_npu_top___024root__dtor(this);
}
