// Copyright 2023 Colin Kinloch (@ColinKinloch)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_F11,  KC_NO,   KC_MSTP,
        KC_NO,   KC_NO,   KC_MRWD, KC_MFFD,
        KC_NO,   KC_MPLY, KC_MPLY, KC_MNXT,
        KC_MUTE, KC_NO,   KC_NO,   RM_TOGG
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // Encoders: knob 0 (volume), knob 1 (hue), knob 2 (brightness), knob 3 (RGB effect)
    [0] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        ENCODER_CCW_CW(RM_HUED, RM_HUEU),
        ENCODER_CCW_CW(RM_VALD, RM_VALU),
        ENCODER_CCW_CW(RM_PREV, RM_NEXT)
    },
};
#endif

#ifndef MAGIC_ENABLE
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}

uint8_t mod_config(uint8_t mod) {
    return mod;
}
#endif
