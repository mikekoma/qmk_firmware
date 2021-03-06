#include QMK_KEYBOARD_H
#include "keymap_jp.h"
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_number {
  _QWERTY = 0,
  _FN,
  _ADJUST,
  _L3,
};

#define _____ KC_NONE

enum custom_keycodes {
  RGB_RST = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //,-----------------------------------------------------------------------|                     |------------------------------------------------------------------------.
      XXXXXXX , KC_ESC, XXXXXXX ,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
  KC_PGUP, MO(_ADJUST),KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_PGDN,          KC_TAB ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_HOME,          KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,           KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
      KC_END ,          KC_LSFT ,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_ENT ,     KC_BSPC,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,   KC_UP,  KC_APP,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
               MO(_FN),      KC_LCTRL,    KC_LGUI, KC_LALT, KC_BSPC, KC_SPC,  KC_LSFT,     KC_RSFT,  KC_ENT,KC_RCTRL,  KC_RALT     ,KC_RCTRL   ,KC_LEFT , KC_DOWN,  KC_RIGHT
  //`-----------------------------------------------------------------------+--------|   |--------+-------------------------------------------------------------------------'
  ),
  [_FN] = LAYOUT(
  //,-----------------------------------------------------------------------|                     |------------------------------------------------------------------------.
      XXXXXXX , KC_ESC, XXXXXXX ,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
  KC_PGUP, MO(_ADJUST),KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_PGDN,          KC_TAB ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_HOME,          KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,           KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
      KC_END ,          KC_LSFT ,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_ENT ,     KC_BSPC,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, KC_PGUP,  KC_APP,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
               MO(_FN),      KC_LCTRL,    KC_LGUI, KC_LALT, KC_BSPC, KC_SPC,  KC_LSFT,     KC_RSFT,  KC_ENT,KC_RCTRL,  KC_RALT     ,KC_RCTRL   ,KC_HOME , KC_PGDN,  KC_END
  //`-----------------------------------------------------------------------+--------|   |--------+-------------------------------------------------------------------------'
  ),
  [_ADJUST] = LAYOUT(
  //,-----------------------------------------------------------------------|                     |------------------------------------------------------------------------.
      XXXXXXX , KC_ESC, XXXXXXX ,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
  KC_PGUP, MO(_ADJUST),KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_PGDN,          KC_TAB ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_HOME,          KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,           KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
      KC_END ,          KC_LSFT ,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_ENT ,     KC_BSPC,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,   KC_UP,  KC_APP,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
               MO(_FN),      KC_LCTRL,    KC_LGUI, KC_LALT, KC_BSPC, KC_SPC,  KC_LSFT,     KC_RSFT,  KC_ENT,KC_RCTRL,  KC_RALT     ,KC_RCTRL   ,KC_LEFT , KC_DOWN,  KC_RIGHT
  //`-----------------------------------------------------------------------+--------|   |--------+-------------------------------------------------------------------------'
  ),
  [_L3] = LAYOUT(
  //,-----------------------------------------------------------------------|                     |------------------------------------------------------------------------.
      XXXXXXX , KC_ESC, XXXXXXX ,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
  KC_PGUP, MO(_ADJUST),KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_PGDN,          KC_TAB ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------+----------|
      KC_HOME,          KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,           KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
      KC_END ,          KC_LSFT ,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_ENT ,     KC_BSPC,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,   KC_UP,  KC_APP,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+--------+--------+----------|
               MO(_FN),      KC_LCTRL,    KC_LGUI, KC_LALT, KC_BSPC, KC_SPC,  KC_LSFT,     KC_RSFT,  KC_ENT,KC_RCTRL,  KC_RALT     ,KC_RCTRL   ,KC_LEFT , KC_DOWN,  KC_RIGHT
  //`-----------------------------------------------------------------------+--------|   |--------+-------------------------------------------------------------------------'
  )
};

void keyboard_pre_init_user(void) {
	setPinInputHigh(SPLIT_HAND_PIN);
}

int RGB_current_mode;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool result = false;
  switch (keycode) {
    #ifdef RGBLIGHT_ENABLE
      case RGB_MOD:
          if (record->event.pressed) {
            rgblight_mode(RGB_current_mode);
            rgblight_step();
            RGB_current_mode = rgblight_get_mode();
          }
        break;
      case RGB_RST:
          if (record->event.pressed) {
            eeconfig_update_rgblight_default();
            rgblight_enable();
            RGB_current_mode = rgblight_get_mode();
          }
        break;
    #endif
    default:
      result = true;
      break;
  }

  return result;
}

