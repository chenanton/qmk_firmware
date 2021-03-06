#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_SC LGUI_T(KC_SCLN)
#define HOME_Q LALT_T(KC_Q)
#define HOME_J LSFT_T(KC_J)
#define HOME_K LCTL_T(KC_K)

// Right-hand home row mods
#define HOME_M RCTL_T(KC_M)
#define HOME_W RSFT_T(KC_W)
#define HOME_V LALT_T(KC_V)
#define HOME_Z RGUI_T(KC_Z)

#define MOD_SPC LT(2, KC_SPC)
#define TMUX_T LCTL(KC_B)
#define STK_SFT OSM(MOD_LSFT)

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
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    TMUX_T,
        KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
        KC_BSLS, HOME_SC, HOME_Q,  HOME_J,  HOME_K,  KC_X,    KC_B,    HOME_M,  HOME_W,  HOME_V,  HOME_Z,  KC_SLSH,
        KC_NO,   KC_NO,   KC_NO,   KC_CAPS, STK_SFT, TT(1),   MOD_SPC, KC_BSPC, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
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
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_LCBR, KC_RCBR, KC_1,    KC_2,    KC_3,    KC_4,    _______,
        KC_UNDS, KC_GRV,  KC_TILD, KC_PIPE, KC_PLUS, KC_LPRN, KC_RPRN, KC_9,    KC_0,    KC_QUES, KC_EQL,  KC_MINS,
        _______, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, KC_5,    KC_6,    KC_7,    KC_8,    _______,
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
        _______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,    _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, _______, _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,    _______,
        _______, BL_TOGG, BL_STEP, _______, _______, _______, _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______,
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
