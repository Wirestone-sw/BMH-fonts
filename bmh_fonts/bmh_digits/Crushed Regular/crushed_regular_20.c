// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crushed_regular_20

#include "font.h"
#include "crushed_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,48,16,16,112,192,0,255,255,0,0,0,0,255,127};
// '1'
static const uint8_t bitmap_49[] = {16,16,240,240,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {96,48,16,16,48,224,192,0,0,128,192,112,31,7};
// '3'
static const uint8_t bitmap_51[] = {0,48,16,16,48,240,224,0,0,12,12,12,59,241};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,224,0,0,128,224,184,134,129,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {224,96,96,96,96,96,0,31,8,8,8,24,240,192};
// '6'
static const uint8_t bitmap_54[] = {128,224,96,16,16,16,48,255,255,4,4,4,28,248};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,224,96,0,0,128,240,62,3,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,48,16,48,224,192,243,63,12,12,12,63,243};
// '9'
static const uint8_t bitmap_57[] = {224,112,16,16,48,224,192,15,28,16,16,16,243,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,12};

static const uint8_t char_width[] = {8,4,7,7,9,7,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crushed_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
