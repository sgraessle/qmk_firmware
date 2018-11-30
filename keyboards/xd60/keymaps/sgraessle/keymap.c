#include QMK_KEYBOARD_H
#include "action_layer.h"

#define _B 0
#define _F 1
#define ESC_F LT(_F, KC_ESC)
#define VOL_UP KC__VOLUP
#define VOL_DN KC__VOLDOWN
#define MUTE   KC__MUTE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // _B: Base Layer
  LAYOUT_all(
      KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_GRV,    \
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_BSLS,   \
      ESC_F,    KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,             KC_ENT,    \
      KC_LSFT,  KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_NO,   KC_RSFT,  KC_DEL,    \
      KC_LCTL,  KC_LALT, KC_LGUI,                          KC_SPC,                          KC_RGUI, KC_RALT,  KC_NO,   KC_RCTL,  MO(_F)),

  // _F: Function Layer
  LAYOUT_all(
      RESET,    KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_F13,    KC_F14,    \
      KC_NO,    KC_WH_U, KC_UP,   KC_WH_D, KC_BSPC,KC_HOME,KC_CALC,KC_NO,  KC_INS, KC_NO,   KC_PSCR, KC_SLCK,  KC_PAUS,            KC_DEL,    \
      KC_NO,    KC_LEFT, KC_DOWN, KC_RIGHT,KC_DEL, KC_END, KC_LEFT,KC_DOWN,KC_UP,  KC_RIGHT,KC_HOME, KC_PGUP,  KC_NO,              KC_ENT,    \
      KC_LSFT,  KC_NO,   KC_NO,   RGB_MOD, BL_STEP,KC_NO,  KC_NO,  VOL_DN, VOL_UP, MUTE,    KC_MRWD, KC_MFFD,  KC_NO,   KC_MPLY,   KC_INS,    \
      KC_TRNS,  KC_TRNS, KC_TRNS,                          KC_TRNS,                         KC_TRNS, MO(0),    KC_NO,   KC_PGDOWN, KC_END),

};
