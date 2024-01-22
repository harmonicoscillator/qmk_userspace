#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0A0A
#define PRODUCT_ID      0x0A09
#define DEVICE_VER      0x0001
#define MANUFACTURER    BARBS
#define PRODUCT         VOID9 MACROPAD
#define DESCRIPTION     3x3 Macropad

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { D2, F4, F5 }, \
    { D1, D4, F7 }, \
    { E6, B4, B2} \
}

// 0  A3 A2
// 2  4  A0
// 7  8  16
