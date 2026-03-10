/****************
 *** LALBOARD ***
 ****************/

#pragma once

#define MATRIX_ROWS 10
#define MATRIX_COLS 5

// invert pin logic for "down" keys on all clusters
 #define MATRIX_COL_PUSHED_STATES { 0, 0, 1, 0, 0 }

#define DEBOUNCE 0 // reduces chatter (unintended double-presses) - set 0 if debouncing is not needed

#define EE_HANDS // split handness via eeprom
#define MASTER_RIGHT

#define SERIAL_DEBUG
#define SERIAL_USART_FULL_DUPLEX    // Enable full duplex
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_USART_PIN_SWAP       // swap TX/RX pins if keyboard is master

/* RP2040 Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500 // Timeout window in ms in which the double tap can occur.

// vial things
#define DYNAMIC_KEYMAP_LAYER_COUNT 16


/************************
 *** Trackball config ***
 ************************/

#define SPI_MISO_PIN GP16
#define PMW33XX_CS_PIN GP17 // SPI CS pin
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19

#define PMW33XX_CPI 1600                    // The CPI range is 100-12000, in increments of 100. Defaults to 1600 CPI.
#define PMW33XX_CLOCK_SPEED 2000000         // Sets the clock speed that the sensor runs at. Defaults to 2000000
#define MOUSE_EXTENDED_REPORT               // Use -32767 to 32767, instead of just -127 to 127.
// #define POINTING_DEVICE_TASK_THROTTLE_MS 10
// #define POINTING_DEVICE_MOTION_PIN true  // only read from sensor if pin is active - disabled because feature does not with SPLIT_POINTING_ENABLE

// one trackball on each side
// TODO: enable scroll-only functionality for left device
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED

#define POINTING_DEVICE_ROTATION_90_RIGHT   // rotate XY data by 90 degrees
#define POINTING_DEVICE_INVERT_Y_RIGHT      // invert Y axis
// #define POINTING_DEVICE_ROTATION_90_LEFT
// #define POINTING_DEVICE_INVERT_Y_LEFT


// TODO: enable auto mouse buttons on device move

// is the following needed with vial - or can the scroll functionality configured with vial?
/*
void keyboard_post_init_user(void) {
    pointing_device_set_cpi_on_side(true, 1000); //Set cpi on left side to a low value for slower scrolling.
    pointing_device_set_cpi_on_side(false, 1600); //Set cpi on right side to a reasonable value for mousing.
}

report_mouse_t pointing_device_task_combined_user(report_mouse_t left_report, report_mouse_t right_report) {
    left_report.h = left_report.x;
    left_report.v = left_report.y;
    left_report.x = 0;
    left_report.y = 0;
    return pointing_device_combine_reports(left_report, right_report);
}
*/
