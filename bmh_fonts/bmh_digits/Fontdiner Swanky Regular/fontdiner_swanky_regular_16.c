// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font fontdiner_swanky_regular_16

#include "font.h"
#include "fontdiner_swanky_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,128,128,128,128,0,0,0,0,56,254,255,199,3,1,1,1,131,255,254,124};
// '1'
static const uint8_t bitmap_49[] = {64,96,224,224,224,0,0,127,255,255};
// '2'
static const uint8_t bitmap_50[] = {224,192,224,96,96,96,96,192,192,207,225,240,176,152,152,140,207,255};
// '3'
static const uint8_t bitmap_51[] = {192,192,96,96,96,96,192,192,128,243,128,20,8,8,156,255,255,243};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,224,240,0,0,32,56,60,46,39,255,255,255,32,252};
// '5'
static const uint8_t bitmap_53[] = {128,128,192,192,192,192,192,192,192,96,3,223,15,12,12,12,156,248,255,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,192,224,96,96,192,248,0,124,255,255,15,6,6,6,142,253,250};
// '7'
static const uint8_t bitmap_55[] = {32,224,224,96,96,96,96,224,224,224,96,0,7,0,0,0,224,254,63,15,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,224,96,32,96,224,192,128,0,224,247,255,63,24,8,24,63,255,247,224};
// '9'
static const uint8_t bitmap_57[] = {128,192,224,96,32,32,96,224,192,128,39,223,159,184,48,48,152,255,255,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,96,112,112,32};

static const uint8_t char_width[] = {12,5,9,9,10,10,10,11,11,10,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t fontdiner_swanky_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
