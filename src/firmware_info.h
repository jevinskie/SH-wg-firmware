#ifndef SH_WG_FIRMWARE_FIRMWARE_INFO_H_
#define SH_WG_FIRMWARE_FIRMWARE_INFO_H_

#include <cstdint>

/** Firmware name */
constexpr char const * kFirmwareName = "SH-wg/dev";

/** Firmware version string*/
constexpr char const * kFirmwareVersion = "0.4.1-alpha.1";

/** Firmware version encoded in an easily sortable uint32_t value */
constexpr uint32_t kFirmwareHexVersion = 0x00040101;

#endif
