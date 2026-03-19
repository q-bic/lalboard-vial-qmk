
#pragma once

#define VIAL_KEYBOARD_UID \
    {0x4C, 0x34, 0x93, 0xC9, 0xA5, 0xDA, 0x54, 0xC3}

// Vial unlock combo
// TODO: use correct key nums
#define VIAL_UNLOCK_COMBO_ROWS \
    { }
#define VIAL_UNLOCK_COMBO_COLS \
    { }

/*
// both thumb locks
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 0, 5, 5 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 2, 5, 2, 5 }
*/

// Shorten the unlock timeout (needs mod in `quantum/vial.c`; without
// it the override doesn't work)
//#define VIAL_UNLOCK_COUNTER_MAX 12
