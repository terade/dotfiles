#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    DE_CIRC,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           RGB_VAD,                                        RGB_VAI,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_0),    
    KC_ESCAPE,      KC_X,           KC_V,           KC_L,           KC_C,           KC_W,           RGB_SAD,                                        RGB_SAI,        KC_K,           KC_H,           KC_G,           KC_F,           KC_Q,           DE_SS,          
    KC_ESCAPE,      KC_U,           KC_I,           KC_A,           KC_E,           KC_O,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_S,           KC_N,           KC_R,           KC_T,           KC_D,           DE_Y,           
    KC_LEFT_SHIFT,  DE_UE,          DE_OE,          DE_AE,          KC_P,           DE_Z,                                           KC_B,           KC_M,           KC_COMMA,       KC_DOT,         KC_J,           KC_RIGHT_SHIFT, 
    OSL(3),         KC_TRANSPARENT, KC_LEFT_GUI,    TG(4),          MO(2),          KC_LEFT_ALT,                                                                                                    KC_RIGHT_ALT,   MO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_CTRL,  
    KC_SPACE,       KC_LEFT_CTRL,   KC_ESCAPE,                      KC_ENTER,       KC_BSPC,        KC_TAB
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_AT,          DE_UNDS,        DE_LBRC,        DE_RBRC,        KC_CIRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, DE_EXLM,        DE_LESS,        DE_MORE,        DE_EQL,         DE_AMPR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_BSLS,        DE_SLSH,        DE_LCBR,        DE_RCBR,        DE_ASTR,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, DE_QST,         DE_LPRN,        DE_RPRN,        DE_MINS,        DE_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_HASH,        DE_DLR,         DE_PIPE,        DE_TILD,        KC_GRAVE,                                       DE_PLUS,        DE_PERC,        DE_DQOT,        DE_QUOT,        DE_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_TRANSPARENT,                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3
  ),
};
const uint16_t PROGMEM combo0[] = { KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_TAB, KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_LEFT_SHIFT, KC_RIGHT_SHIFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(1)),
    COMBO(combo1, OSL(1)),
    COMBO(combo2, KC_ENTER),
    COMBO(combo3, KC_CAPS),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219}, {208,36,219} },

    [1] = { {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {53,255,255}, {51,205,161}, {51,205,161}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161}, {51,205,161} },

    [2] = { {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184}, {246,246,184} },

    [3] = { {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149}, {145,222,149} },

    [4] = { {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213}, {193,216,213} },

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
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_GRV);
        tap_code16(DE_GRV);
        tap_code16(DE_GRV);
    }
    if(state->count > 3) {
        tap_code16(DE_GRV);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(DE_GRV); break;
        case DOUBLE_TAP: register_code16(DE_ACUT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_GRV); register_code16(DE_GRV);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(DE_GRV); break;
        case DOUBLE_TAP: unregister_code16(DE_ACUT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_GRV); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
