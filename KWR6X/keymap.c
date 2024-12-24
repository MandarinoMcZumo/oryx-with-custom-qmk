#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#include "features/achordion.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_CAPS,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,
    KC_EQUAL,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           OSL(5),
    ALL_T(KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),MEH_T(KC_G),                                    MEH_T(KC_H),    MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_QUOTE,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MINUS,
                                                    MT(MOD_LSFT, KC_TAB),LT(3,KC_ENTER),                                 LT(2,KC_SPACE), LT(1,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_LBRC,        KC_RBRC,                                        KC_LBRC,        KC_RBRC,        KC_7,           KC_8,           KC_9,           KC_F12,
    KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_SCLN,        KC_EQUAL,                                       MEH_T(KC_EQUAL),MT(MOD_RSFT, KC_SCLN),MT(MOD_RGUI, KC_4),MT(MOD_RALT, KC_5),MT(MOD_RCTL, KC_6),KC_BSPC,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_GRAVE,       KC_BSLS,                                        KC_BSLS,        KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_TRANSPARENT,
                                                    KC_0,           KC_TRANSPARENT,                                 KC_0,           KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_LCBR,        KC_RCBR,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DLR,         KC_PERC,        KC_CIRC,        KC_COLN,        KC_PLUS,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_TILD,        KC_PIPE,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_LPRN,        KC_RPRN,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_END,         LGUI(KC_LBRC),  LGUI(KC_RBRC),  LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),                                KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_INSERT,      KC_TRANSPARENT,
    KC_HYPR,        KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_MEH,                                         KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   ST_MACRO_0,                                     ST_MACRO_1,     KC_MAC_PASTE,   KC_MAC_COPY,    KC_MAC_CUT,     KC_MAC_UNDO,    KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    OSL(6),         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_9,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_13,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_V, KC_B, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_BSPC),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_A):
            return TAPPING_TERM + 120;
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 120;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -10;
        case MT(MOD_LSFT, KC_TAB):
            return TAPPING_TERM -25;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM -10;
        case MT(MOD_RALT, KC_L):
            return TAPPING_TERM + 120;
        case MT(MOD_RCTL, KC_SCLN):
            return TAPPING_TERM + 120;
        case KC_QUOTE:
            return TAPPING_TERM -40;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {41,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,245,245}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {0,0,255}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {41,255,255}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {0,0,255}, {169,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {0,245,245}, {205,218,204}, {205,218,204}, {205,218,204}, {205,218,204}, {0,245,245}, {0,245,245}, {205,218,204}, {205,218,204}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,255,255}, {74,255,255} },

    [1] = { {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {74,255,255}, {74,255,255}, {74,255,255}, {0,245,245}, {0,245,245}, {41,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,245,245}, {0,245,245}, {41,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,245,245}, {0,245,245}, {74,255,255}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {0,245,245}, {74,255,255}, {74,255,255}, {74,255,255}, {131,255,255}, {0,245,245}, {0,245,245}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {0,245,245}, {0,245,245}, {74,255,255}, {74,255,255}, {74,255,255}, {0,245,245}, {74,255,255}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,255,255}, {169,255,255}, {28,218,204}, {28,218,204}, {28,218,204}, {28,218,204}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,255,255}, {28,218,204}, {28,218,204}, {28,218,204}, {28,218,204}, {0,0,255}, {0,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,255,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) { return false; }
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LEFT_GUI)) SS_DELAY(100) SS_TAP(X_Z));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LEFT_GUI)) SS_DELAY(100) SS_TAP(X_Z));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_N)) SS_DELAY(100) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_LSFT(SS_TAP(X_E)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_LSFT(SS_TAP(X_A)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_LSFT(SS_TAP(X_U)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_LSFT(SS_TAP(X_I)));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)) SS_DELAY(100) SS_LSFT(SS_TAP(X_O)));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_N)) SS_DELAY(100) SS_LSFT(SS_TAP(X_N)));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}

void matrix_scan_user(void) { achordion_task(); }

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {

  // Esto evita la regla de las manos opuestas para los clusters
  if (other_record->event.key.row == 4 || other_record->event.key.row == 9) {
    return true;
  }
  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}
