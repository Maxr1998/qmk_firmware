#include "brokkolipad.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

	matrix_init_user();
}

bool led_update_kb(led_t led_state) {
    if (!led_state.num_lock) {
        tap_code(KC_NUMLOCK);
    }
    return true;
}
