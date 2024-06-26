/* Copyright 2021 Jay Greco
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

#pragma once

/* space savers */
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define TAPPING_FORCE_HOLD

#define OLED_BRIGHTNESS 128
#define OLED_TIMEOUT 30000

// Selectively undefine to save space
// VIA support won't fit otherwise
#ifdef RGBLIGHT_ENABLE
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_TWINKLE
#endif //RGB LIGHT_ENABLE

// Split Options
#define SPLIT_TRANSPORT_MIRROR
