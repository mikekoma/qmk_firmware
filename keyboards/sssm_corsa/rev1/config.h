/*
Copyright 2020 Suns & Moon Laboratory

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x09B9 //CentLand Inc.
#define PRODUCT_ID      0x009F //Marugot
#define DEVICE_VER      0x0001
#define MANUFACTURER    Suns and Moon Laboratory
#define PRODUCT         SSSM.CORSA
#define DESCRIPTION     Split Column-Staggerd 45+48=93keys

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

#define ARD_D0	D2	//RXI
#define ARD_D1	D3	//TXO
#define ARD_D2	D1
#define ARD_D3	D0
#define ARD_D4	D4
#define ARD_D5	C6
#define ARD_D6	D7
#define ARD_D7	E6
#define ARD_D8	B4
#define ARD_D9	B5
#define ARD_D10	B6
#define ARD_D11	B7
#define ARD_D12	D6
#define ARD_D13	C7
#define ARD_D14	B3
#define ARD_D15	B1
#define ARD_D16	B2
#define ARD_D17	B0
#define ARD_A0	F7	//A0
#define ARD_A1	F6	//A1
#define ARD_A2	F5	//A2
#define ARD_A3	F4	//A3
#define ARD_RXI	D2
#define ARD_TXO	D3

// wiring of each half
#define MATRIX_ROW_PINS { ARD_D2, ARD_D3, ARD_D4, ARD_D5, ARD_D6, ARD_D7 }
#define MATRIX_COL_PINS { ARD_A2, ARD_A1, ARD_A0, ARD_D15, ARD_D14, ARD_D9, ARD_D10, ARD_D16 }
#define MATRIX_COL_PINS_RIGHT { ARD_D16, ARD_D10, ARD_D9, ARD_D14, ARD_D15, ARD_A0, ARD_A1, ARD_A2 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN ARD_RXI
#define SPLIT_HAND_PIN ARD_D8

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN ARD_A3

#ifndef RGBLED_NUM
  #define RGBLED_NUM 2
  #define RGBLED_SPLIT { 1, 1 }
#endif

#define RGBLIGHT_ANIMATIONS

#ifndef IOS_DEVICE_ENABLE
  #define RGBLIGHT_LIMIT_VAL 180
  #define RGBLIGHT_VAL_STEP 17
#else
  #define RGBLIGHT_LIMIT_VAL 50
  #define RGBLIGHT_VAL_STEP 4
#endif
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17

#if defined(RGBLIGHT_ENABLE) && !defined(IOS_DEVICE_ENABLE)
// USB_MAX_POWER_CONSUMPTION value for naked48 keyboard
//  120  RGBoff, OLEDoff
//  120  OLED
//  330  RGB 6
//  300  RGB 32
//  310  OLED & RGB 32
  #define USB_MAX_POWER_CONSUMPTION 400
#else
  // fix iPhone and iPad power adapter issue
  // iOS device need lessthan 100
  #define USB_MAX_POWER_CONSUMPTION 100
#endif
