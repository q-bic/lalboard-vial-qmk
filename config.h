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
// #define POINTING_DEVICE_MOTION_PIN true  // only read from sensor if pin is active - disabled because feature does not work with SPLIT_POINTING_ENABLE

// one trackball on each side
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE   // enable auto mouse feature
#define AUTO_MOUSE_DEFAULT_LAYER 5          // default mouse layer
#define AUTO_MOUSE_TIME 650                 // time layer remains active after activation
#define AUTO_MOUSE_DELAY 200                // lockout time after non-mouse key is pressed
#define AUTO_MOUSE_THRESHOLD 10             // amount of mouse movement required to switch layers
#define AUTO_MOUSE_DEBOUNCE 25              // time delay from last activation to next update

#define POINTING_DEVICE_ROTATION_90   // rotate XY data by 90 degrees
#define POINTING_DEVICE_INVERT_Y      // invert Y axis
#define POINTING_DEVICE_ROTATION_90_RIGHT
#define POINTING_DEVICE_INVERT_Y_RIGHT

