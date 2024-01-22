#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0A0A
#define PRODUCT_ID      0x0A0A
#define DEVICE_VER      0x0001
#define MANUFACTURER    BARBS
#define PRODUCT         VOID16 MACROPAD
#define DESCRIPTION     4x4 Macropad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D2, D3, F4, F5 },                          \
    { D1, D0, F6, F7 },                          \
    { D4, C6, B1, B3 },                          \
    { D7, E6, B2, B6 } \
}

// 0  1  A3 A2
// 2  3  A1 A0
// 4  5  15 14
// 6  7  16 10
