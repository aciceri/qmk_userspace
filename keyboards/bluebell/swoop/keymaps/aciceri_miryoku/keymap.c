/* Copyright 2022 James White <jamesmnw@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "transactions.h"

enum layers {
  _BASE,
  _NAV,
  _MOUSE,
  _BUTTON,
  _MEDIA,
  _NUM,
  _SYM,
  _FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_split_3x5_3(
  KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
  LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              RSFT_T(KC_J),      RCTL_T(KC_K),      RALT_T(KC_L),      RGUI_T(KC_QUOT),
  LT(_BUTTON,KC_Z),  ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(_BUTTON,KC_SLSH),
                                        LT(_MEDIA,KC_ESC), LT(_NAV,KC_TAB),   LT(_MOUSE,KC_SPC), LT(_SYM,KC_ENT),   LT(_NUM,KC_BSPC),  LT(_FUN,KC_DEL)
),

[_NAV] = LAYOUT_split_3x5_3(
  XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_AGIN,           KC_PSTE,           KC_COPY,           KC_CUT,            KC_UNDO,
  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CW_TOGG,
  XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,
                                        XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_ENT,            KC_BSPC,           KC_DEL
),

[_MOUSE] = LAYOUT_split_3x5_3(
  XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_AGAIN,          KC_PASTE,          KC_COPY,           KC_CUT,            KC_UNDO,
  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,           MS_LEFT,           MS_DOWN,           MS_UP,             MS_RGHT,           XXXXXXX,
  XXXXXXX,           KC_ALGR,           XXXXXXX,           XXXXXXX,           XXXXXXX,           MS_WHLL,           MS_WHLD,           MS_WHLU,           MS_WHLR,           XXXXXXX,
                                        XXXXXXX,           XXXXXXX,           XXXXXXX,           MS_BTN2,           MS_BTN1,           MS_BTN3
),

[_BUTTON] = LAYOUT_split_3x5_3(
  KC_UNDO,           KC_CUT,            KC_COPY,           KC_PASTE,          KC_AGAIN,          KC_AGAIN,          KC_PASTE,          KC_COPY,           KC_CUT,            KC_UNDO,
  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,           XXXXXXX,           KC_RSFT,           KC_RCTL,           KC_RALT,           KC_RGUI,
  KC_UNDO,           KC_CUT,            KC_COPY,           KC_PASTE,          KC_AGAIN,          KC_AGAIN,          KC_PASTE,          KC_COPY,           KC_CUT,            KC_UNDO,
					MS_BTN3,           MS_BTN1,           MS_BTN2,           MS_BTN2,           MS_BTN1,           MS_BTN3
),

[_MEDIA] = LAYOUT_split_3x5_3(
  XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           RM_NEXT,           RM_HUEU,           RM_SATU,           RM_VALU,           RM_TOGG,
  KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           XXXXXXX,           KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           XXXXXXX,
  XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,             
		                        XXXXXXX,           XXXXXXX,           XXXXXXX,           KC_MSTP,           KC_MPLY,           KC_MUTE
),

[_NUM] = LAYOUT_split_3x5_3(
  KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
  KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            XXXXXXX,           KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
  KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
                                        KC_DOT,            KC_0,              KC_MINS,           XXXXXXX,           XXXXXXX,           XXXXXXX
),

[_SYM] = LAYOUT_split_3x5_3(
  KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
  KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,           XXXXXXX,           KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
  KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
					KC_LPRN,           KC_RPRN,           KC_UNDS,           XXXXXXX,           XXXXXXX,           XXXXXXX
),

[_FUN] = LAYOUT_split_3x5_3(
  KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
  KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           XXXXXXX,           KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
  KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,
                                        KC_APP,            KC_SPC,            KC_TAB,            XXXXXXX,           XXXXXXX,           XXXXXXX	    
)
};

led_config_t g_led_config = { {
    // Matrix position -> LED index (chain order, from the swoop-mx PCB)
    {     16,     11,     10,      4,      3 },
    {     15,     12,      9,      5,      2 },
    {     14,     13,      8,      6,      1 },
    { NO_LED, NO_LED,     17,      7,      0 },
    {     34,     29,     28,     22,     21 },
    {     33,     30,     27,     23,     20 },
    {     32,     31,     26,     24,     19 },
    { NO_LED, NO_LED,     35,     25,     18 }
}, {
    // LED index -> physical position (0..224 x 0..64)
    { 96, 64}, { 75, 40}, { 75, 22}, { 75,  4}, { 56,  2}, { 56, 20},
    { 56, 38}, { 75, 60}, { 37, 35}, { 37, 18}, { 37,  0}, { 19,  2},
    { 19, 20}, { 19, 38}, {  0, 42}, {  0, 24}, {  0,  7}, { 54, 57},
    {128, 64}, {149, 40}, {149, 22}, {149,  4}, {168,  2}, {168, 20},
    {168, 38}, {149, 60}, {187, 35}, {187, 18}, {187,  0}, {205,  2},
    {205, 20}, {205, 38}, {224, 42}, {224, 24}, {224,  7}, {170, 57}
}, {
    // Thumbs are LED_FLAG_MODIFIER (1), the rest LED_FLAG_KEYLIGHT (4)
    1, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1
} };

// Caps Word only runs on the master: mirror it to the slave so both halves
// show the indicator. Resent periodically in case the slave rebooted.
static bool slave_caps_word;

static void caps_word_sync(uint8_t in_len, const void *in_data, uint8_t out_len, void *out_data) {
  slave_caps_word = *(const bool *)in_data;
}

void keyboard_post_init_user(void) {
  transaction_register_rpc(CAPS_WORD_SYNC, caps_word_sync);
}

void housekeeping_task_user(void) {
  if (!is_keyboard_master()) return;
  static bool     synced;
  static uint32_t last_sync;
  bool            active = is_caps_word_on();
  if (active != synced || timer_elapsed32(last_sync) > 500) {
    if (transaction_rpc_send(CAPS_WORD_SYNC, sizeof(active), &active)) {
      synced    = active;
      last_sync = timer_read32();
    }
  }
}

static bool caps_word_active(void) {
  return is_keyboard_master() ? is_caps_word_on() : slave_caps_word;
}

// LED layer indicator: the whole board turns one colour, at the current
// brightness, while a layer is active. _BASE's colour is used for Caps Word.
static const hsv_t layer_colors[] = {
  [_BASE] = {HSV_WHITE},  [_NAV] = {HSV_CYAN}, [_MOUSE] = {HSV_YELLOW},
  [_BUTTON] = {HSV_MAGENTA}, [_MEDIA] = {HSV_PURPLE}, [_NUM] = {HSV_BLUE},
  [_SYM] = {HSV_GREEN},   [_FUN] = {HSV_RED},
};

bool rgb_matrix_indicators_user(void) {
  uint8_t layer = get_highest_layer(layer_state);
  if (layer == _BASE && !caps_word_active()) return false;
  hsv_t hsv = layer_colors[layer];
  hsv.v     = rgb_matrix_get_val();
  rgb_t rgb = hsv_to_rgb(hsv);
  rgb_matrix_set_color_all(rgb.r, rgb.g, rgb.b);
  return false;
}

// Chordal Hold handedness: thumbs ('*') can be held with keys of either hand,
// so thumb layers keep working with same-hand modifiers.
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_split_3x5_3(
  'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*',  '*', '*', '*'
);

// Flow Tap, except for the Shift home row mods: Shift is usually pressed right
// after a letter ("word?" is ...d, F held, /), so it must be able to hold
// immediately. Chordal and permissive hold still guard it against rolls.
uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t *record, uint16_t prev_keycode) {
  switch (keycode) {
    case LSFT_T(KC_F):
    case RSFT_T(KC_J):
      return 0;
  }
  return is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode) ? FLOW_TAP_TERM : 0;
}

// VIA forces BOOTMAGIC_ENABLE. Booting with Q held would wipe the EEPROM
// (handedness and Vial changes) and jump to the bootloader: never do that.
void bootmagic_scan(void) {}
