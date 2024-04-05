#include "diy_macropad.h"

enum custom_keycodes {
    PASS = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_AUDIO_MUTE,     KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, 
		KC_AUDIO_VOL_UP,   KC_F13,              KC_F14,              KC_F15, 
		KC_AUDIO_VOL_DOWN, KC_F16,              KC_F17,              KC_F18, 
		KC_F19,            KC_F21,              KC_F22,              TT(1)),

	KEYMAP(
		QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, 
		RGB_HUI, RGB_VAI, KC_TRNS, RGB_MOD, 
		RGB_HUD, RGB_VAD, KC_TRNS, RGB_TOG, 
		PASS,    KC_TRNS, KC_TRNS, TT(1)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case PASS:
            if (record->event.pressed) {
                SEND_STRING("test");
            }
            return false;
    }

    return true;
}