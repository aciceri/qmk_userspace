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
  XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           UG_NEXT,           UG_HUEU,           UG_SATU,           UG_VALU,           UG_TOGG,
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

// LED layer indicator: the whole board turns one colour while a layer is
// active. Indices match the layer enum; _BASE's slot is used for Caps Word.
#define WHOLE_BOARD(hsv) RGBLIGHT_LAYER_SEGMENTS({0, RGBLIGHT_LED_COUNT, hsv})
static const rgblight_segment_t PROGMEM caps_word_leds[] = WHOLE_BOARD(HSV_WHITE);
static const rgblight_segment_t PROGMEM nav_leds[]       = WHOLE_BOARD(HSV_CYAN);
static const rgblight_segment_t PROGMEM mouse_leds[]     = WHOLE_BOARD(HSV_YELLOW);
static const rgblight_segment_t PROGMEM button_leds[]    = WHOLE_BOARD(HSV_MAGENTA);
static const rgblight_segment_t PROGMEM media_leds[]     = WHOLE_BOARD(HSV_PURPLE);
static const rgblight_segment_t PROGMEM num_leds[]       = WHOLE_BOARD(HSV_BLUE);
static const rgblight_segment_t PROGMEM sym_leds[]       = WHOLE_BOARD(HSV_GREEN);
static const rgblight_segment_t PROGMEM fun_leds[]       = WHOLE_BOARD(HSV_RED);

static const rgblight_segment_t *const PROGMEM led_layers[] = RGBLIGHT_LAYERS_LIST(
  caps_word_leds, nav_leds, mouse_leds, button_leds, media_leds, num_leds, sym_leds, fun_leds
);

void keyboard_post_init_user(void) {
  rgblight_layers = led_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  for (uint8_t layer = _NAV; layer <= _FUN; layer++) {
    rgblight_set_layer_state(layer, layer_state_cmp(state, layer));
  }
  return state;
}

void caps_word_set_user(bool active) {
  rgblight_set_layer_state(_BASE, active);
}

// Chordal Hold handedness: thumbs ('*') can be held with keys of either hand,
// so thumb layers keep working with same-hand modifiers.
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_split_3x5_3(
  'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*',  '*', '*', '*'
);

// VIA forces BOOTMAGIC_ENABLE. Booting with Q held would wipe the EEPROM
// (handedness and Vial changes) and jump to the bootloader: never do that.
void bootmagic_scan(void) {}
