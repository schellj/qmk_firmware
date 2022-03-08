#include QMK_KEYBOARD_H

#define QWERTY 0 // Base qwerty


/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | INS  | Left | Right|                                         | Up   | Down |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Gui  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[QWERTY] = LAYOUT(
           KC_ESC, KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8,
           KC_EQL, KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,
           KC_TAB, KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,
           KC_LGUI,KC_A   ,KC_S   ,LT(2, KC_D)   ,LT(1, KC_F)   ,KC_G   ,
           KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,
                   KC_GRV ,KC_INS ,KC_LEFT,KC_RGHT,
			   KC_LCTL,KC_LALT,
                                    KC_HOME,
                           KC_BSPC,KC_DEL ,KC_END ,
    KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_PSCR ,KC_SLCK  ,KC_PAUS, KC_NO, RESET,
	KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,
	KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSLS,
           KC_H   ,LT(3, KC_J)   ,LT(4, KC_K)   ,KC_L   ,KC_SCLN,KC_QUOT,
	KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
		KC_UP  ,KC_DOWN,KC_LBRC,KC_RBRC,
           KC_RGUI,KC_LALT,
           KC_PGUP,
           KC_PGDN,KC_ENTER ,KC_SPC
                  ),

/* Right-hand layers */

// Numbers
[1] = LAYOUT(
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, 
                  KC_NO,   KC_NO,   KC_NO,   KC_NO, 
			   KC_NO, KC_NO, 
                                    KC_NO, 
                           KC_KP_0, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_KP_7, KC_KP_8, KC_KP_9, KC_NO, KC_NO, 
	KC_NO, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_0, KC_NO, 
	KC_NO, KC_KP_1, KC_KP_2, KC_KP_3, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, 
           KC_NO, KC_NO, 
           KC_NO, 
           KC_NO, KC_NO, KC_NO
             ),
// Brackets
[2] = LAYOUT(
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
                  KC_NO,   KC_NO,   KC_NO,   KC_NO, 
			   KC_NO, KC_NO, 
                                    KC_NO, 
                           KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_NO, 
	KC_NO, KC_LT, KC_GT, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, 
           KC_NO, KC_NO, 
           KC_NO, 
           KC_NO, KC_NO, KC_NO
    )

/* Left-hand layers */

// Common symbols
[3] = LAYOUT(
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
           KC_NO, KC_NO,   KC_AMPR, KC_ASTR, KC_QUES, KC_NO,
           KC_NO, KC_UNDS, KC_DLR, KC_PERC, KC_CIRC, KC_NO,
           KC_NO, KC_NO,   KC_EXLM, KC_AT, KC_HASH, KC_NO, 
                  KC_NO,   KC_NO,   KC_NO,   KC_NO, 
			   KC_NO, KC_NO, 
                                    KC_NO, 
                           KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, 
           KC_NO, KC_NO, 
           KC_NO, 
           KC_NO, KC_NO, KC_NO
             ),
// Less common symbols
[4] = LAYOUT(
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
           KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
           KC_NO, KC_NO,   KC_PIPE, KC_BSLS, KC_PSLS, KC_NO,
           KC_NO, KC_COLN, KC_GRV, KC_QUOT, KC_DQUO, KC_TILD,
           KC_NO, KC_NO,   KC_PMNS, KC_PPLS, KC_PEQL, KC_NO, 
                  KC_NO,   KC_NO,   KC_NO,   KC_NO, 
			   KC_NO, KC_NO, 
                                    KC_NO, 
                           KC_NO, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, 
           KC_NO, KC_NO, 
           KC_NO, 
           KC_NO, KC_NO, KC_NO
             )
};
