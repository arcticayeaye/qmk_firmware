/* Copyright 2023 Brian Low
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
#include "keymap_us_international.h"


/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | LGUI | LCMD | LALT | / Enter /       \Space \  | RALT | RCMD | RGUI | RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        XXXXXXX , KC_1 , KC_2       , KC_3      , KC_4         , KC_5 ,                        KC_6   , KC_7        , KC_8       , KC_9       , KC_0    , XXXXXXX,
        KC_ESC  , KC_Q , KC_W       , KC_E      , KC_R         , KC_T ,                        KC_Y   , KC_U        , KC_I       , KC_O       , KC_P    , XXXXXXX,
        KC_LSFT , KC_A , LT(2,KC_S) , LT(1,KC_D), LSFT_T(KC_F) , KC_G ,                        KC_H , LSFT_T(KC_J), LT(3,KC_K) , LT(4,KC_L)     , KC_SCLN , KC_RSFT,
        KC_CAPS , KC_Z , KC_X       , KC_C      , LT(5,KC_V)         , KC_B ,   KC_MUTE,    KC_MPLY, LT(5,KC_N)   , KC_M        , KC_COMM    , KC_DOT     , KC_QUOT , XXXXXXX,
        XXXXXXX , XXXXXXX  , LCTL_T(KC_BSPC) ,LALT_T(KC_ENT) , LGUI_T(KC_TAB) ,                    KC_RGUI, RALT_T(KC_SPC), RCTL_T(KC_DEL) , XXXXXXX , XXXXXXX
    ),

	[1] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______       , _______ , _______        , _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______ , LALT(KC_LEFT) , KC_UP   , LALT(KC_RIGHT) , KC_PSCR, _______,
        _______, _______, _______, _______, _______, _______,                      KC_HOME, KC_LEFT       , KC_DOWN , KC_RIGHT       , KC_END , _______,
        _______, _______, _______, _______, _______, _______, _______,    _______, _______, LCTL(KC_LEFT) , _______ , LCTL(KC_RIGHT) , _______, _______,
             _______, _______, _______, _______, _______,                             _______ , _______, _______, _______, _______
    ),

	[2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______ , _______,
        _______, _______, _______, _______, _______, _______,                       KC_MINS, KC_7   , KC_8   , KC_9   , KC_SLSH , _______,
        _______, _______, _______, _______, _______, _______,                       KC_PLUS, KC_4   , KC_5   , KC_6   , KC_ASTR , _______,
        _______, _______, _______, _______, _______, _______, _______,     _______, KC_0   , KC_1   , KC_2   , KC_3   , KC_COMM , _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______     , _______    , _______   ,_______     , _______  ,                      _______, _______, _______, _______, _______, _______,
        _______, KC_GRV     , KC_UNDS    , KC_LBRC   , KC_RBRC    , KC_PIPE ,                      _______, _______, _______, _______, _______, _______,
        _______, KC_PLUS    , KC_MINS    , KC_LPRN   , KC_RPRN    , KC_SLSH ,                      _______, _______, _______, _______, _______, _______,
        _______, KC_ASTR    , KC_EQL     , KC_LCBR   , KC_RCBR    , KC_BSLS , _______,    _______, _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______, _______,                                  _______ , _______, _______, _______, _______
    ),

    [4] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, _______, KC_HASH, KC_CIRC, KC_QUES, _______,                    _______, _______, _______, _______, _______, _______,
        _______, _______, KC_AT  , KC_PERC, KC_EXLM, _______,                    _______, _______, _______, _______, _______, _______,
        _______, _______, KC_TILD, KC_DLR , KC_AMPR, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    ),

    [5] = LAYOUT(
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11  ,
        _______, _______, _______, _______, _______, _______,                    _______, US_UDIA, _______, US_ODIA, _______, KC_F12  ,
        _______, US_ADIA, US_SS  , _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
};
#endif

// ############## MACROS ################



// ########## RGB STUFF ############

//turn off rgb matrix effects
void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(15, 255, 255); //dark orange
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);
        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED &&
                    keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, RGB_TEAL);
                }
            }
        }
    }

    if (is_caps_word_on() == true) {
        rgb_matrix_set_color(8, RGB_RED);
        rgb_matrix_set_color(50, RGB_RED);
    }
    return false;
}

