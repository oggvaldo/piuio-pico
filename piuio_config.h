#ifndef PIUIO_PICO_PIUIO_CONFIG_H
#define PIUIO_PICO_PIUIO_CONFIG_H
#include "piuio_ws2812_helpers.h"

// Uncomment these defines to enable WS2812 LED support.
//#define ENABLE_WS2812_SUPPORT
//#define WS2812_IS_RGBW false
//#define WS2812_PIN 22

// Modify these to edit the colors of the cabinet lamps.
static uint32_t ws2812_color[5] = {
        urgb_u32(0, 255, 0),    // Lower left
        urgb_u32(255, 0, 0),    // Upper left
        urgb_u32(0, 0, 255),    // Bass / neon
        urgb_u32(255, 0, 0),    // Upper right
        urgb_u32(0, 255, 0)     // Lower right
};

// Modify these arrays to edit the pin out.
// Map these according to your button pins.
static const uint8_t pinSwitch[12] = {
        1,     // P1 DL
        2,     // P1 UL
        3,     // P1 CN
        4,      // P1 UR
        5,      // P1 DR
        6,     // P2 DL
        7,     // P2 UL
        8,      // P2 CN
        9,      // P2 UR
        10,      // P2 DR
        14,    // Service
        15     // Test
};

// Map these according to your LED pins.
static const uint8_t pinLED[10] = {
        28,     // P1 DL
        27,     // P1 UL
        26,     // P1 CN
        22,      // P1 UR
        21,      // P1 DR
        20,     // P2 DL
        19,     // P2 UL
        18,      // P2 CN
        17,      // P2 UR
        16       // P2 DR
};

#endif //PIUIO_PICO_PIUIO_CONFIG_H
