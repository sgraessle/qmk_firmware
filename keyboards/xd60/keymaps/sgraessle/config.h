#pragma once

#include QMK_KEYBOARD_CONFIG_H

// Turn off RGB when computer goes to sleep
#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_SLEEP
#endif // RGBLIGHT_ENABLE
