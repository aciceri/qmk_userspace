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

// LED layer indicator (keymap.c): shown even with the LEDs toggled off, at
// the current brightness
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LAYERS_RETAIN_VAL

// All underglow effects (the Swoop definition only enables breathing,
// rainbow mood/swirl and static gradient)
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE

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
