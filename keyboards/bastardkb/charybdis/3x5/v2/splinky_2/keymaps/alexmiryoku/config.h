/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS
// #define FORCE_NKRO

// I'm sometimes missing shift+alphas, try this out to help
#define PERMISSIVE_HOLD

#define TAPPING_TERM 250
#define TAPPING_TERM_PER_KEY
#define QUICK_TAP_TERM 0

#define CHORDAL_HOLD

#        define CHARYBDIS_MINIMUM_DEFAULT_DPI 600

//#define RGB_MATRIX_ENABLE
#        define ENABLE_RGB_MATRIX_ALPHAS_MODS
#        define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#        define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#        define ENABLE_RGB_MATRIX_BREATHING
#        define ENABLE_RGB_MATRIX_BAND_SAT
#        define ENABLE_RGB_MATRIX_BAND_VAL
#        define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#        define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#        define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#        define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#        define ENABLE_RGB_MATRIX_CYCLE_ALL
#        define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#        define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#        define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#        define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#        define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#        define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#        define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#        define ENABLE_RGB_MATRIX_DUAL_BEACON
#        define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#        define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#        define ENABLE_RGB_MATRIX_RAINDROPS
#        define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#        define ENABLE_RGB_MATRIX_HUE_BREATHING
#        define ENABLE_RGB_MATRIX_HUE_PENDULUM
#        define ENABLE_RGB_MATRIX_HUE_WAVE
#        define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#        define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#        define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#        define ENABLE_RGB_MATRIX_SPLASH
#        define ENABLE_RGB_MATRIX_MULTISPLASH
#        define ENABLE_RGB_MATRIX_SOLID_SPLASH
#        define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

// Limit maximum brightness to keep power consumption reasonable, and avoid
// disconnects.
#    undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 64

// Rainbow swirl as startup mode.
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT

// Slow swirl at startup.
#    define RGB_MATRIX_STARTUP_SPD 32

// Startup values.
#    define RGB_MATRIX_STARTUP_HUE 0
#    define RGB_MATRIX_STARTUP_SAT 255
#    undef RGB_MATRIX_STARTUP_VAL
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_STARTUP_HSV RGB_MATRIX_STARTUP_HUE, RGB_MATRIX_STARTUP_SAT, RGB_MATRIX_STARTUP_VAL
