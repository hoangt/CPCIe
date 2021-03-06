// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2013.3
// Copyright (C) 2013 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XMATRIXMUL_ACCEL_CORE_H
#define XMATRIXMUL_ACCEL_CORE_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#include "xmatrixmul_accel_core_CONTROL_BUS.h"

/**************************** Type Definitions ******************************/
typedef struct {
    u16 DeviceId; // currently not used
    u32 Control_bus_BaseAddress;
} XMatrixmul_accel_core_Config;

typedef struct {
    u32 Control_bus_BaseAddress;
    u32 IsReady;
} XMatrixmul_accel_core;

/***************** Macros (Inline Functions) Definitions *********************/
#define XMatrixmul_accel_core_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

#define XMatrixmul_accel_core_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

/************************** Function Prototypes *****************************/
int XMatrixmul_accel_core_Initialize(XMatrixmul_accel_core *InstancePtr, XMatrixmul_accel_core_Config *ConfigPtr);

void XMatrixmul_accel_core_Start(XMatrixmul_accel_core *InstancePtr);
u32 XMatrixmul_accel_core_IsDone(XMatrixmul_accel_core *InstancePtr);
u32 XMatrixmul_accel_core_IsIdle(XMatrixmul_accel_core *InstancePtr);
u32 XMatrixmul_accel_core_IsReady(XMatrixmul_accel_core *InstancePtr);
void XMatrixmul_accel_core_EnableAutoRestart(XMatrixmul_accel_core *InstancePtr);
void XMatrixmul_accel_core_DisableAutoRestart(XMatrixmul_accel_core *InstancePtr);


void XMatrixmul_accel_core_InterruptGlobalEnable(XMatrixmul_accel_core *InstancePtr);
void XMatrixmul_accel_core_InterruptGlobalDisable(XMatrixmul_accel_core *InstancePtr);
void XMatrixmul_accel_core_InterruptEnable(XMatrixmul_accel_core *InstancePtr, u32 Mask);
void XMatrixmul_accel_core_InterruptDisable(XMatrixmul_accel_core *InstancePtr, u32 Mask);
void XMatrixmul_accel_core_InterruptClear(XMatrixmul_accel_core *InstancePtr, u32 Mask);
u32 XMatrixmul_accel_core_InterruptGetEnabled(XMatrixmul_accel_core *InstancePtr);
u32 XMatrixmul_accel_core_InterruptGetStatus(XMatrixmul_accel_core *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
