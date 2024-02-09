#include QMK_KEYBOARD_H
#include "features/achordion.h"

enum crkbd_layers {
    _QWERTY,
    _RPG,
    _DIAB,
    _NUM,
    _SYM,
    _FUNC,
    _NAV,
    _MEDIA,
    _MOUSE
};

#define SFT_F LSFT_T(KC_F)
#define SFT_J RSFT_T(KC_J)
#define CTL_D LCTL_T(KC_D)
#define CTL_K LCTL_T(KC_K)
#define ALT_S LALT_T(KC_S)
#define ALT_L LALT_T(KC_L)
#define GUI_A LGUI_T(KC_A)
#define GUI_QT LGUI_T(KC_QUOT)

#define LT_ESC LT(_MEDIA, KC_ESC)
#define LT_BSPC LT(_NAV, KC_BSPC)
#define LT_ENT LT(_MOUSE, KC_ENT)
#define LT_TAB LT(_SYM, KC_TAB)
#define LT_SPC LT(_NUM, KC_SPC)

#define CTLTAB LCTL(KC_TAB)
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define COPYB LCTL(KC_B)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_charybdis_3x5(
  //-------------------------------------------.                    ,--------------------------------------------.
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,                         KC_H,    SFT_J,  CTL_K,    ALT_L, GUI_QT,
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //-------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                             LT_ESC,   LT_BSPC,  LT_ENT,     LT_TAB,  LT_SPC
                           //`--------------------------'  `--------------------------'

  ),

  [_NUM] = LAYOUT_charybdis_3x5(
  //-------------------------------------------.                    ,-------------------------------------------
    KC_LBRC,    KC_7,    KC_8,  KC_9,  KC_RBRC,                     XXXXXXX, TG(_DIAB), TG(_MOUSE), XXXXXXX, XXXXXXX,
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_SCLN,   KC_4,   KC_5,   KC_6,   KC_EQL,                      XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI,
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_GRV,    KC_1,   KC_2,  KC_3,    KC_BSLS,                     XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //-------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                               KC_DOT,   KC_0,  KC_MINS,      LT_TAB,  LT_SPC
                           //`--------------------------'  `--------------------------'

  ),

  [_SYM] = LAYOUT_charybdis_3x5(
  //-------------------------------------------.                    ,--------------------------------------------
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                    XXXXXXX, TG(_DIAB), TG(_MOUSE), XXXXXXX, XXXXXXX,
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+|
     KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                    XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI,
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+|
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //-------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+|
                               KC_GT,   KC_RPRN, KC_UNDS,    LT_TAB,  LT_SPC
                           //`--------------------------'  `--------------------------'

  ),

    [_FUNC] = LAYOUT_charybdis_3x5(
  //---------------------------------------------.                    ,----------------------------------------------
      KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                      XXXXXXX, TG(_DIAB), TG(_MOUSE), XXXXXXX, QK_BOOT,
  //+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
     KC_F11,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX,                      XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI,
  //+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
     KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX,                      XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--|
                               KC_ESC,   KC_DEL,  KC_ENT,     LT_TAB,  LT_SPC
                             //`--------------------------'  `--------------------------'

  ),

    [_NAV] = LAYOUT_charybdis_3x5(
  //----------------------------------------------.                    ,----------------------------------------------
      XXXXXXX, XXXXXXX, CTLTAB, XXXXXXX,  XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+
     XXXXXXX,      CUT,    COPY,  PASTE,    COPYB,                        KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
  //-+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+
                                KC_ESC,   LT_BSPC,  KC_ENT,     KC_TAB,  KC_SPC
                              //`--------------------------'  `--------------------------'

  ),


    [_MEDIA] = LAYOUT_charybdis_3x5(
  //----------------------------------------------.                    ,----------------------------------------------
     QK_BOOT, XXXXXXX, TG(_MOUSE), TG(_RPG),  XXXXXXX,                       XXXXXXX, RGB_TOG, RGB_MODE_FORWARD, XXXXXXX, XXXXXXX,
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX,
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //-+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--|
                                LT_ESC,   KC_BSPC,  KC_ENT,     KC_TAB,  KC_SPC
                              //`--------------------------'  `--------------------------'
      ),

    [_MOUSE] = LAYOUT_charybdis_3x5(
  //----------------------------------------------.                    ,-----------------------------------------------
      XXXXXXX, XXXXXXX, TG(_MOUSE), XXXXXXX,  XXXXXXX,                    DPI_MOD, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        DPI_RMOD, KC_BTN1, KC_BTN2, KC_BTN3, KC_W,
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                    TG(_MOUSE), KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
  //-+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+-
                                KC_ESC,   KC_BSPC,  LT_ENT,     KC_TAB, KC_BTN1
                              //`--------------------------'  `--------------------------'

  ),

  [_RPG] = LAYOUT_charybdis_3x5(
  //-------------------------------------------.                     ,----------------------------------------------
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         XXXXXXX, XXXXXXX, QK_LOCK, XXXXXXX, XXXXXXX,
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                             XXXXXXX, KC_LEFT,  KC_DOWN, KC_UP, KC_RIGHT,
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         XXXXXXX, XXXXXXX, KC_RCTL ,KC_RSFT, XXXXXXX,
  //-------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+-
                             LT_ESC,   KC_BSPC,  KC_ENT,     KC_ESC,  KC_SPC
                           //`--------------------------'   `--------------------------'

  ),

  [_DIAB] = LAYOUT_charybdis_3x5(
  //-------------------------------------------.                     ,----------------------------------------------
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,  KC_QUOT,
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                           KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //-------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+-
                              KC_ESC,   KC_SPC,  KC_ENT,       KC_TAB,  LT_SPC
                           //`--------------------------'   `--------------------------'
    ),


};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_F:
        case SFT_J:
          return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SYM, _NUM, _FUNC);
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // Exceptionally consider the following chords as holds, even though they
  // are on the same hand in Dvorak.
  switch (other_keycode) {
    case KC_X:
    case KC_C:
    case KC_v:
    case KC_b:
      return true;
      break;
  }

  // Also allow same-hand holds when the other key is in the rows below the
  // alphas. I need the `% (MATRIX_ROWS / 2)` because my keyboard is split.
  if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 3) { return true; }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}
