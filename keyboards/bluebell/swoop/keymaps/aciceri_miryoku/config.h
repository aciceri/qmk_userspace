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

// Vial
#define VIAL_KEYBOARD_UID {0xB5, 0x72, 0x76, 0x84, 0x84, 0xAA, 0x1E, 0xF7}
// Hold Q + P while plugging/unlocking in Vial
#define VIAL_UNLOCK_COMBO_ROWS {0, 4}
#define VIAL_UNLOCK_COMBO_COLS {0, 0}

// VIA defaults to 4 dynamic layers; the keymap has 8
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
