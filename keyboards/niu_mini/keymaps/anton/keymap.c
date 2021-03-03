#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_O LALT_T(KC_O)
#define HOME_E LSFT_T(KC_E)
#define HOME_U LCTL_T(KC_U)

// Right-hand home row mods
#define HOME_H RCTL_T(KC_H)
#define HOME_T RSFT_T(KC_T)
#define HOME_N LALT_T(KC_N)
#define HOME_S RGUI_T(KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0: Dvorak
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   '  |   ,  |   .  |   p  |   y  |   f  |   g  |   c  |   r  |   l  | Bksp |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Tab  |a(gui)|o(alt)|e(sft)|u(ctl)|   i  |   d  |h(ctl)|t(sft)|n(alt)|s(gui)|  -   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * | Shift|   ;  |   q  |   j  |   k  |   x  |   b  |   m  |   w  |   v  |  z   |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl |  GUI | Caps |  Alt | Bksp |Layer1|Space |Layer2|  /   | Left | Down |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_ortho_4x12(
        KC_CAPS, KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,   KC_G,    KC_C,    KC_R,    KC_L,    KC_ENT,
        KC_TAB,  HOME_A,  HOME_O,  HOME_E,  HOME_U,  KC_I,    KC_D,   HOME_H,  HOME_T,  HOME_N,  HOME_S,  KC_MINS,
        KC_LPRN, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,   KC_M,    KC_W,    KC_V,    KC_Z,    KC_RPRN,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_ESC,  TT(1),   KC_SPC, KC_BSPC, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
    ),

    /* Layer 1: Numbers and Symbols
     * ,-----------------------------------------------------------------------------------.
     * |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      | Vol- | Vol+ | Mute |      |      |      |  F11 |  F12 |      |      |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Reset|      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_ortho_4x12(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_LBRC, KC_RBRC, KC_1,    KC_2,    KC_3,    KC_4,   _______,
        _______, KC_GRV,  KC_TILD, KC_PIPE, KC_PLUS, KC_BSLS, KC_SLSH, KC_9,    KC_0,    KC_QUES, KC_EQL,  _______,
        _______, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LCBR, KC_RCBR, KC_5,    KC_6,    KC_7,    KC_8,    _______,
        RESET,   _______, _______, _______, KC_ESC,  KC_TRNS, KC_SPC,  KC_BSPC, _______, _______, _______, RGB_TOG
    ),

    /* Layer 2 (r_ Indicates RGB Controls)
     * ,-----------------------------------------------------------------------------------.
     * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |r_TOG |r_Mode|r_Hue+|r_Hue-|      |      |   -  |   =  |   [  |   ]  |  \   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |BL_TOG|BL_STEP|     |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_ortho_4x12(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        _______, BL_TOGG, BL_STEP, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
