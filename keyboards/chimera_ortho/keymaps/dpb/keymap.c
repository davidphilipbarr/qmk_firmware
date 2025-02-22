#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_CAPS, KC_RALT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 

	KC_GESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LGUI, KC_RGUI, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 


	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LALT, KC_APP, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SFTENT, MO(1), 

	KC_LCTL, KC_SPC, MO(2)),
	
	[1] = LAYOUT(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PGUP, KC_PGDN, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, KC_GESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_SCLN, KC_MINS, KC_EQL, KC_BSLS, KC_LBRC, KC_RBRC, KC_ENT, KC_LSFT, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_TRNS),
	
	[2] = LAYOUT(KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_PGUP, KC_VOLU, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, KC_GESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_VOLD, KC_UNDS, KC_PLUS, KC_NONUS_BSLASH, KC_LCBR, KC_RCBR, KC_ENT, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_END, KC_MUTE, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS, KC_NO, KC_NO, KC_NO)
};


void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    switch (layer) {
      case 0:
          set_led_green;
          break;
       
        case 1:
            set_led_blue;
            break;
        case 2:
            set_led_red;
            break;
    }
};
