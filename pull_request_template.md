# Add CherryView Device Registration

This PR registers device ID 0x22B1 (Intel Braswell / CherryView) in DeviceInfoFactory and adds a minimal chvInfo skeleton (placeholder hardware values).

## Files added:
- media_driver/linux/gen8/ddi/media_sysinfo_chv.cpp: Adds chvInfo struct with placeholder EU/Slice/SubSlice values and registers the device ID 0x22B1 via DeviceInfoFactory.

## Notes:
- chvInfo uses placeholder values and InitShadowSku/InitShadowWa are zero; further hardware validation is required to populate accurate EU/Slice/SubSlice/WA settings.
- After merge, please build and test on the target machine (Device 8086:22B1) and provide dmesg/application logs so we can iterate on SKU/WA adjustments.