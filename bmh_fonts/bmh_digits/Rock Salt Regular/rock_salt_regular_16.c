// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rock_salt_regular_16

#include "font.h"
#include "rock_salt_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,96,240,48,240,96,96,192,128};
// '1'
static const uint8_t bitmap_49[] = {0,0,252,124};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,128,192,64,96,32,240,240};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,192,224,224,48,56,24,184,240};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,224,96,0,0,0,0,240,124};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,224,240,48,24,24,12,12,6,6,6,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,192,224,48,24,8,28,12};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,128,192,192,96,32,48,16,24,8,200,124};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,128,192,96,48,48,24,216,248,60,28,14};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,128,128,192,64,96,96,48,48};
// ':'
static const uint8_t bitmap_58[] = {};

static const uint8_t char_width[] = {8,2,7,8,8,11,7,11,11,8,-12};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rock_salt_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
