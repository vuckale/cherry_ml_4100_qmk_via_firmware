/* Copyright 2021 Your Name (@yourgithub)
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

#define MATRIX_ROW_PINS \
    { A3, A4, A5, A6, A7, B0, A1, A2, B1, B10, B12, B13, B14, B15}

#define MATRIX_COL_PINS \
    { C14, C13, B9, B8, B7, B6, B5, C15} 

// B3, B4, A15 -> Numlock, Capslock, Layer LED 
// A8, A10 Data and Clock Pins for PS/2 Mouse

// free but not usable on STM32F0X QMK:
// B2, A9, A11, A12

// TG(1) B15 + A4
// Test with C15 + B10

// C13 LED on board
// A0 secret bootloader

#define LED_NUM_LOCK_PIN B3
#define LED_CAPS_LOCK_PIN B4
#define LAYER_LED A15
// #define LED_SCROLL_LOCK_PIN A15
    