#include QMK_KEYBOARD_H

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
#define LT_DEL LT(_FUNC, KC_DEL)

#define CTLTAB LCTL(KC_TAB)
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define COPYB LCTL(KC_B)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split_3x5_3( \
  //-------------------------------------------.                    ,--------------------------------------------.
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  \
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,                         KC_H,    SFT_J,  CTL_K,    ALT_L, GUI_QT, \
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, \
  //-------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                             LT_ESC,   LT_BSPC,  LT_ENT,     LT_TAB,  LT_SPC,  LT_DEL \
                           //`--------------------------'  `--------------------------'

  ),

  [_NUM] = LAYOUT_split_3x5_3( \
  //-------------------------------------------.                    ,-------------------------------------------
     KC_LBRC,    KC_7,    KC_8,  KC_9,  KC_RBRC,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_SCLN,   KC_4,   KC_5,   KC_6,   KC_EQL,                      XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI,\
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
     KC_GRV,    KC_1,   KC_2,  KC_3,    KC_BSLS,                     XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //-------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                               KC_DOT,   KC_0,  KC_MINS,      KC_TAB,  LT_SPC,  KC_DEL            \
                           //`--------------------------'  `--------------------------'

  ),

  [_SYM] = LAYOUT_split_3x5_3( \
  //-------------------------------------------.                    ,--------------------------------------------
     KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+|
     KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                    XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, \
  //-------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+|
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //-------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+|
                               KC_GT,   KC_RPRN, KC_UNDS,    LT_TAB,  KC_SPC,  KC_DEL \
                           //`--------------------------'  `--------------------------'

  ),

    [_FUNC] = LAYOUT_split_3x5_3( \
  //---------------------------------------------.                    ,----------------------------------------------
     KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                      XXXXXXX, TG(_DIAB), XXXXXXX, XXXXXXX, QK_BOOT, \
  //+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
     KC_F11,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX,                      XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, \
  //+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
     KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX,                      XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  \
  //+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--|
                               KC_ESC,   KC_BSPC,  KC_ENT,     KC_TAB,  KC_SPC,  LT_DEL \
                             //`--------------------------'  `--------------------------'

  ),

    [_NAV] = LAYOUT_split_3x5_3( \
  //----------------------------------------------.                    ,----------------------------------------------
      XXXXXXX, XXXXXXX, CTLTAB, XXXXXXX,  XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, \
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+
     XXXXXXX,      CUT,    COPY,  PASTE,    COPYB,                        KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, \
  //-+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+
                                KC_ESC,   LT_BSPC,  KC_ENT,     KC_TAB,  KC_SPC,  KC_DEL \
                              //`--------------------------'  `--------------------------'

  ),


    [_MEDIA] = LAYOUT_split_3x5_3( \
  //----------------------------------------------.                    ,----------------------------------------------
     QK_BOOT, XXXXXXX, XXXXXXX, TG(_RPG),  XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, \
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  \
  //-+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--|
                                LT_ESC,   KC_BSPC,  KC_ENT,     KC_TAB,  KC_SPC,  KC_DEL \
                              //`--------------------------'  `--------------------------'
      ),

    [_MOUSE] = LAYOUT_split_3x5_3( \
  //----------------------------------------------.                    ,-----------------------------------------------
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  \
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, \
  //-+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                        XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, \
  //-+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+-
                                KC_ESC,   KC_BSPC,  LT_ENT,     KC_BTN3, KC_BTN1, KC_BTN2 \
                              //`--------------------------'  `--------------------------'

  ),

  [_RPG] = LAYOUT_split_3x5_3( \
  //-------------------------------------------.                     ,----------------------------------------------
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         XXXXXXX, XXXXXXX, QK_LOCK, XXXXXXX, XXXXXXX, \
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                             XXXXXXX, KC_LEFT,  KC_DOWN, KC_UP, KC_RIGHT, \
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         XXXXXXX, XXXXXXX, KC_RCTL ,KC_RSFT, XXXXXXX, \
  //-------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+-
                             LT_ESC,   KC_BSPC,  KC_SPC,     KC_ENT,  KC_SPC,  KC_ESC \
                           //`--------------------------'   `--------------------------'

  ),

  [_DIAB] = LAYOUT_split_3x5_3( \
  //-------------------------------------------.                     ,----------------------------------------------
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  \
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,  KC_QUOT, \
  //-------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+-
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                           KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   \
  //-------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------+-
                              KC_ESC,   KC_SPC,  KC_ENT,       KC_TAB,  KC_SPC,  LT_DEL \
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
