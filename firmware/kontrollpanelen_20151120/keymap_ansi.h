
static const uint8_t PROGMEM keymaps[][MATRIX_COLS][MATRIX_ROWS] =
  {
    {
      /*          0        1      2         3       4         5          6        7   */
      /*  0 */ {KC_P4,   KC_F5,  KC_N,    KC_NUBS, KC_RCTL, KC_MS_BTN3, KC_S,    KC_UP},
      /*  1 */ {KC_F,    KC_5,   KC_PPLS, KC_PSCR, KC_LBRC, KC_BSPC,    KC_LSFT, KC_MS_DOWN},
      /*  2 */ {KC_P3,   KC_F4,  KC_M,    KC_EQL,  KC_RSFT, KC_MS_BTN4, KC_T,    KC_RGHT},
      /*  3 */ {KC_E,    KC_4,   KC_PAST, KC_F12,  KC_QUOT, KC_NO,      KC_LCTL, KC_MS_RIGHT},
      /*  4 */ {KC_P6,   KC_F7,  KC_P,    KC_RBRC, KC_RGUI, KC_MS_BTN1, KC_Q,    KC_LEFT},
      /*  5 */ {KC_H,    KC_7,   KC_PDOT, KC_PAUS, KC_Y,    KC_INS,     KC_TAB,  KC_MS_LEFT},
      /*  6 */ {KC_P5,   KC_F6,  KC_O,    KC_BSLS, KC_MENU, KC_MS_BTN2, KC_R,    KC_DOWN},
      /*  7 */ {KC_G,    KC_6,   KC_PENT, KC_SLCK, KC_Z,    KC_DEL,     KC_CAPS, KC_MS_UP},
      /*  8 */ {KC_P0,   KC_F1,  KC_J,    KC_9,    KC_NO,   KC_NO,      KC_W,    KC_PGUP},
      /*  9 */ {KC_B,    KC_1,   KC_P8,   KC_F9,   KC_DOT,  KC_NO,      KC_SPC,  KC_MS_WH_UP},
      /*  A */ {KC_NLCK, KC_ESC, KC_I,    KC_8,    KC_NO,   KC_NO,      KC_X,    KC_END},
      /*  B */ {KC_A,    KC_GRV, KC_P7,   KC_F8,   KC_SLSH, KC_NO,      KC_RALT, KC_MS_WH_RIGHT},
      /*  C */ {KC_P2,   KC_F3,  KC_L,    KC_MINS, KC_ENT,  KC_MS_BTN5, KC_U,    KC_HOME},
      /*  D */ {KC_D,    KC_3,   KC_PSLS, KC_F11,  KC_SCLN, KC_NO,      KC_LGUI, KC_MS_WH_LEFT},
      /*  E */ {KC_P1,   KC_F2,  KC_K,    KC_0,    KC_NO,   KC_NO,      KC_V,    KC_PGDN},
      /*  F */ {KC_C,    KC_2,   KC_P9,   KC_F10,  KC_COMM, KC_NO,      KC_LALT, KC_MS_WH_DOWN}
    }
    ,
    {
      /*          0     1     2     3     4     5     6     7   */
      /* A  0 */ {KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0, KC_0},
      /* B  1 */ {KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1},
      /* C  2 */ {KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2, KC_2},
      /* D  3 */ {KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3, KC_3},
      /* E  4 */ {KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4, KC_4},
      /* F  5 */ {KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5, KC_5},
      /* G  6 */ {KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6, KC_6},
      /* H  7 */ {KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7, KC_7},
      /* I  8 */ {KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8, KC_8},
      /* J  9 */ {KC_9, KC_9, KC_9, KC_9, KC_9, KC_9, KC_9, KC_9},
      /* K 10 */ {KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, KC_A},
      /* L 11 */ {KC_B, KC_B, KC_B, KC_B, KC_B, KC_B, KC_B, KC_B},
      /* M 12 */ {KC_C, KC_C, KC_C, KC_C, KC_C, KC_C, KC_C, KC_C},
      /* N 13 */ {KC_D, KC_D, KC_D, KC_D, KC_D, KC_D, KC_D, KC_D},
      /* O 14 */ {KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E},
      /* P 15 */ {KC_F, KC_F, KC_F, KC_F, KC_F, KC_F, KC_F, KC_F}
    }
    ,
    {
      /*          0     1     2     3     4     5     6     7   */
      /* A  0 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* B  1 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* C  2 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* D  3 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* E  4 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* F  5 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* G  6 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* H  7 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* I  8 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* J  9 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* K 10 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* L 11 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* M 12 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* N 13 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* O 14 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7},
      /* P 15 */ {KC_0, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7}
    }
  };

// static const uint8_t PROGMEM keymaps[][MATRIX_COLS][MATRIX_ROWS] = {
//     /* Layer 0: Standard ANSI layer */
//     KEYMAP(\
//          ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,        PSCR,SLCK,PAUS,                         \
//          GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,   INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS, \
//          TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,   DEL, END, PGDN,    P7,  P8,  P9,  PPLS, \
//          CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,                      P4,  P5,  P6,        \
//          LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,        UP,           P1,  P2,  P3,  PENT, \
//          LCTL,LGUI,LALT,               SPC,                RALT,RGUI, FN0,RCTL,   LEFT,DOWN,RGHT,    P0,  PDOT),          \
//     /* Layer 1: Function layer */
//     KEYMAP(\
//          CALC,MYCM,WSCH,WHOM,MAIL,VOLD,VOLU,MSEL,MSTP,MPLY,MPRV,MNXT,TRNS,        WAKE, PWR,SLEP,                         \
//          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
//          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
//          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,                      TRNS,TRNS,TRNS,      \
//          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,        TRNS,         TRNS,TRNS,TRNS,TRNS, \
//          TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS)
// };

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
