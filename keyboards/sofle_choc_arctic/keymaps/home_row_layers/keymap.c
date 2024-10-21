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
#include "keymap_german_mac_iso.h"


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
        XXXXXXX , DE_1 , DE_2       , DE_3      , DE_4         , DE_5 ,                        DE_6   , DE_7        , DE_8       , DE_9       , DE_0    , XXXXXXX,
        KC_ESC  , DE_Q , DE_W       , DE_E      , DE_R         , DE_T ,                        DE_Y   , DE_U        , DE_I       , DE_O       , DE_P    , XXXXXXX,
        KC_LSFT , DE_A , LT(2,DE_S) , LT(1,DE_D), LSFT_T(DE_F) , DE_G ,                        DE_H , LSFT_T(DE_J), LT(3,DE_K) , LT(4,DE_L)     , DE_SCLN , KC_RSFT,
        KC_CAPS , DE_Z , DE_X       , DE_C      , LT(5,DE_V)         , DE_B ,   KC_MUTE,    KC_MPLY, LT(5,DE_N)   , DE_M        , DE_COMM    , DE_DOT     , DE_QUOT , XXXXXXX,
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
        _______, _______, _______, _______, _______, _______,                       DE_MINS, DE_7   , DE_8   , DE_9   , DE_SLSH , _______,
        _______, _______, _______, _______, _______, _______,                       DE_PLUS, DE_4   , DE_5   , DE_6   , DE_ASTR , _______,
        _______, _______, _______, _______, _______, _______, _______,     _______, DE_0   , DE_1   , DE_2   , DE_3   , DE_COMM , _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______     , _______    , _______   ,_______     , _______  ,                      _______, _______, _______, _______, _______, _______,
        _______, DE_GRV     , DE_UNDS    , DE_LBRC   , DE_RBRC    , DE_PIPE ,                      _______, _______, _______, _______, _______, _______,
        _______, DE_PLUS    , DE_MINS    , DE_LPRN   , DE_RPRN    , DE_SLSH ,                      _______, _______, _______, _______, _______, _______,
        _______, DE_ASTR    , DE_EQL     , DE_LCBR   , DE_RCBR    , DE_BSLS , _______,    _______, _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______, _______,                                  _______ , _______, _______, _______, _______
    ),

    [4] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, _______, DE_HASH, DE_CIRC, DE_QUES, _______,                    _______, _______, _______, _______, _______, _______,
        _______, _______, DE_AT  , DE_PERC, DE_EXLM, _______,                    _______, _______, _______, _______, _______, _______,
        _______, _______, DE_TILD, DE_DLR , DE_AMPR, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    ),

    [5] = LAYOUT(
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11  ,
        _______, _______, _______, _______, _______, _______,                    _______, DE_UDIA, _______, DE_ODIA, _______, KC_F12  ,
        _______, DE_ADIA, DE_SS  , _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
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

