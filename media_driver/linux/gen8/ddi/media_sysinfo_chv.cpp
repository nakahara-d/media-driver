/*
 * media_driver/linux/gen8/ddi/media_sysinfo_chv.cpp
 * Add initial CherryView (Braswell) GfxDeviceInfo skeleton and register device 0x22B1.
 * This is a minimal starter registration: further SKU/WA tuning will be required after HW testing.
 */

#include "media_driver/linux/gen8/ddi/media_sysinfo_g8.h"

// Minimal CherryView (Braswell) device info skeleton for initial registration.
static struct GfxDeviceInfo chvInfo = {
    .EUCount       = 24,   // placeholder; adjust to actual hardware
    .SliceCount    = 1,
    .SubSliceCount = 3,
    .MaxEuPerSubSlice = 8,
    .isLCIA        = 0,
    .hasLLC        = 1,
    .hasERAM       = 0,
    .InitMediaSysInfo = 0,
    .InitShadowSku    = 0,
    .InitShadowWa     = 0,
};

// Register CHV device (Intel Braswell) Device ID 0x22B1
static bool chvDevice22b1 = DeviceInfoFactory<GfxDeviceInfo>::
    RegisterDevice(0x22B1, &chvInfo);

// End of file
