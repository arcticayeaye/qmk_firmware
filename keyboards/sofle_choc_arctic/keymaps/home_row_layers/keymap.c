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
#include "keycodes_german_pc.h"

#define OS_MAC false
#define OS_PC true

enum custom_keycodes {
    SWITCH_OS = SAFE_RANGE,
    MA_WRDR,
    MA_WRDL
};

bool os_mode = OS_PC;

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
        XXXXXXX , DE_1       , DE_2       , DE_3       , DE_4         , DE_5 ,                        DE_6 , DE_7           , DE_8       , DE_9       , DE_0    , XXXXXXX,
        KC_ESC  , DE_Q       , DE_W       , DE_E       , DE_R         , DE_T ,                        DE_Y , DE_U           , DE_I       , DE_O       , DE_P    , XXXXXXX,
        CW_TOGG , LT(6,DE_A) , LT(4,DE_S) , LSFT_T(DE_D) , LT(2,DE_F) , DE_G ,                        DE_H , LT(3,DE_J)   , LSFT_T(DE_K) , LT(5,DE_L) , LT(7,DE_PLUS) , CW_TOGG,
        XXXXXXX , DE_Z       , DE_X       , DE_C       , DE_V         , DE_B ,   KC_MUTE,    KC_MPLY, DE_N , DE_M , DE_COMM , DE_DOT     , DE_MINS    , XXXXXXX,
        SWITCH_OS , TG(1) , LCTL_T(KC_BSPC) ,LALT_T(KC_ENT) , LGUI_T(KC_TAB) ,                    KC_RGUI, RALT_T(KC_SPC) , RCTL_T(KC_DEL) , XXXXXXX , XXXXXXX
    ),

	[1] = LAYOUT(
        XXXXXXX , DE_1       , DE_2       , DE_3       , DE_4         , DE_5 ,                        DE_6 , DE_7           , DE_8       , DE_9       , DE_0    , XXXXXXX,
        KC_ESC  , DE_Q       , DE_W       , DE_F       , DE_P         , DE_G ,                        DE_J , DE_L           , DE_U       , DE_Y       , DE_PLUS    , XXXXXXX,
        CW_TOGG , LT(6,DE_A) , LT(4,DE_R) , LSFT_T(DE_S) , LT(2,DE_T) , DE_D ,                        DE_H , LT(3,DE_N)   , LSFT_T(DE_E) , LT(5,DE_I) , LT(7,DE_O) , CW_TOGG,
        XXXXXXX , DE_Z       , DE_X       , DE_C       , DE_V         , DE_B ,   KC_MUTE,    KC_MPLY, DE_K , DE_M , DE_COMM , DE_DOT     , DE_MINS    , XXXXXXX,
        SWITCH_OS , _______, LCTL_T(KC_BSPC) ,LALT_T(KC_ENT) , LGUI_T(KC_TAB) ,                    KC_RGUI, RALT_T(KC_SPC) , RCTL_T(KC_DEL) , XXXXXXX , XXXXXXX
    ),
    
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                      _______, _______  , _______ , _______  , _______, _______,
        _______, _______, _______, _______, _______, _______,                      KC_PSCR , MA_WRDL , KC_UP   , MA_WRDR  , _______, _______,
        _______, _______, _______, _______, _______, _______,                      KC_HOME, KC_LEFT  , KC_DOWN , KC_RIGHT , KC_END , _______,
        _______, _______, _______, _______, _______, _______, _______,    _______, KC_MPRV ,  KC_VOLD, KC_MPLY , KC_VOLU  , KC_MNXT, _______,
             _______, _______, _______, _______, _______,                             _______ , _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______     , _______    , _______   ,_______     , _______  ,                      _______, _______, _______, _______, _______, _______,
        _______, DE_GRV     , DE_UNDS    , DE_LBRC   , DE_RBRC    , DE_PIPE ,                      _______, _______, _______, _______, _______, _______,
        _______, DE_PLUS    , DE_MINS    , DE_LPRN   , DE_RPRN    , DE_SLSH ,                      _______, _______, _______, _______, _______, _______,
        _______, DE_ASTR    , DE_EQL     , DE_LCBR   , DE_RCBR    , DE_BSLS , _______,    _______, _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______, _______,                                  _______ , _______, _______, _______, _______
    ),

	[4] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______ , _______,
        _______, _______, _______, _______, _______, _______,                       DE_MINS, DE_7   , DE_8   , DE_9   , DE_SLSH , _______,
        _______, _______, _______, _______, _______, _______,                       DE_PLUS, DE_4   , DE_5   , DE_6   , DE_ASTR , _______,
        _______, _______, _______, _______, _______, _______, _______,     _______, DE_0   , DE_1   , DE_2   , DE_3   , DE_DOT  , _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    ),

    [5] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, DE_QUOT, DE_HASH, DE_TILD, DE_QUES, DE_RABK ,                    _______, _______, _______, _______, _______, _______,
        _______, DE_DQUO, DE_AT  , DE_PERC, DE_EXLM, DE_LABK,                    _______, _______, _______, _______, _______, _______,
        _______, DE_CIRC, DE_DEG, DE_DLR , DE_AMPR, DE_ACUT, _______,     _______, _______, _______, _______, _______, _______, _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    ),

    [6] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______ ,
        _______, _______, _______, _______, _______, _______,                    _______, DE_UDIA, _______, DE_ODIA, _______, KC_F12  ,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
          _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______
    ),

    [7] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______  ,
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
    [6] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [7] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif


// ########## RGB STUFF ############

//turn off rgb matrix effects
void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(15, 255, 255); //dark orange
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state);

    if (layer > 1) {
        RGB rgb = hsv_to_rgb((HSV){128, 255, rgb_matrix_get_val()});
        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];
                if (index >= led_min && index < led_max && index != NO_LED &&
                    keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                }
            }
        }
    }

    if (is_caps_word_on() == true) {
        rgb_matrix_set_color(26, RGB_RED);
    }

    if (os_mode == OS_PC) {
        RGB rgb = hsv_to_rgb((HSV){0,0,rgb_matrix_get_val()}); //white
        rgb_matrix_set_color(16, rgb.r, rgb.g, rgb.b);
    }
    if (os_mode == OS_MAC) {
        RGB rgb = hsv_to_rgb((HSV){15, 255, rgb_matrix_get_val()}); // dark orange
        rgb_matrix_set_color(16, rgb.r, rgb.g, rgb.b);
    }

    if (layer == 1) {
        RGB rgb = hsv_to_rgb((HSV){0,0,rgb_matrix_get_val()}); //white
        rgb_matrix_set_color(15, rgb.r, rgb.g, rgb.b);
    }

    return false;
}


bool process_detected_host_os_kb(os_variant_t detected_os) {
    if (!process_detected_host_os_user(detected_os)) {
        return false;
    }
    switch (detected_os) {
        case OS_MACOS:
        case OS_IOS:
            os_mode = OS_MAC;
            break;
        case OS_WINDOWS:
        case OS_LINUX:
        case OS_UNSURE:
            os_mode = OS_PC;
            break;
    }
    
    return true;
}

// ############## MACROS ################

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case SWITCH_OS:
        if (record->event.pressed) {
            if (os_mode == OS_PC) {
                os_mode = OS_MAC;
            } 
            else {
                os_mode = OS_PC;
            }
        } 
        return true;
    case MA_WRDR:
        if (record->event.pressed){
            if(os_mode == OS_PC) tap_code16(LCTL(KC_RIGHT));
            else tap_code16(LALT(KC_RIGHT));
        }
        return true;
    case MA_WRDL:
        if (record->event.pressed) {
            if(os_mode == OS_PC) tap_code16(LCTL(KC_LEFT));
            else tap_code16(LALT(KC_LEFT));
        }
        return true;
    }

    // ##### map german MAC to german PC
    if (record->event.pressed && os_mode == OS_PC) {
        switch (keycode) {

            case DE_LCBR:
                tap_code16(PC_DE_LCBR);
                return false;
            case DE_LBRC:
                tap_code16(PC_DE_LBRC);
                return false;
            case DE_RBRC:
                tap_code16(PC_DE_RBRC);
                return false;
            case DE_RCBR:
                tap_code16(PC_DE_RCBR);
                return false;
            case DE_BSLS:
                tap_code16(PC_DE_BSLS);
                return false;
            case DE_AT:
                tap_code16(PC_DE_AT);
                return false;
            case DE_EURO:
                tap_code16(PC_DE_EURO);
                return false;
            case DE_TILD:
                tap_code16(PC_DE_TILD);
                return false;
            case DE_PIPE:
                tap_code16(PC_DE_PIPE);
                return false;
            case DE_MICR:
                tap_code16(PC_DE_MICR);
                return false;
        }
    }
    return true;
};

