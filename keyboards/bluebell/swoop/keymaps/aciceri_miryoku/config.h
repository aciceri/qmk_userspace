#pragma once

// Tap-hold (home row mods, thumb layers). Vial's runtime QMK Settings are
// disabled in rules.mk, so these values are the ones in effect.
#define TAPPING_TERM 180
// Tap-then-hold within this window auto-repeats the tap key
#define QUICK_TAP_TERM 120
// Another key tapped while a tap-hold key is held selects the hold
#define PERMISSIVE_HOLD
// ...but only with the opposite hand (see chordal_hold_layout in keymap.c)
#define CHORDAL_HOLD
// Tap-hold keys pressed within 100 ms of the previous letter are always taps
#define FLOW_TAP_TERM 100

// Per-key LEDs via RGB Matrix (LED map in keymap.c): 18 SK6812 Mini-E per half
#define RGB_MATRIX_LED_COUNT 36
#define RGB_MATRIX_SPLIT {18, 18}
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // same cap as the Swoop's RGBlight
#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP
// The slave half needs the master's matrix (reactive effects, heatmap), the
// layer state (layer indicator) and Caps Word (custom transaction)
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_TRANSACTION_IDS_USER CAPS_WORD_SYNC

// All RGB Matrix effects
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_FLOWER_BLOOMING
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_STARLIGHT
#define ENABLE_RGB_MATRIX_STARLIGHT_SMOOTH
#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
#define ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT
#define ENABLE_RGB_MATRIX_RIVERFLOW
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH

// Mouse keys in inertia mode: a tap moves 1 px, holding accelerates
// quadratically up to MAX_SPEED px per 16 ms frame (~2500 px/s, a 1440p
// screen width in about a second), releasing glides to a stop.
#define MOUSEKEY_INERTIA
#define MOUSEKEY_MAX_SPEED 40
// Wheel: start sooner and ramp faster than the defaults (80 ms, 8, 40)
#define MOUSEKEY_WHEEL_INTERVAL 50
#define MOUSEKEY_WHEEL_MAX_SPEED 6
#define MOUSEKEY_WHEEL_TIME_TO_MAX 30

// Vial
#define VIAL_KEYBOARD_UID {0xB5, 0x72, 0x76, 0x84, 0x84, 0xAA, 0x1E, 0xF7}
// Hold Q + P while plugging/unlocking in Vial
#define VIAL_UNLOCK_COMBO_ROWS {0, 4}
#define VIAL_UNLOCK_COMBO_COLS {0, 0}

// VIA defaults to 4 dynamic layers; the keymap has 8
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
