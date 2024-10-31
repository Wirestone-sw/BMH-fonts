// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font slackey_regular_12

#include "font.h"
#include "slackey_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,224,48,48,48,240,224,192};
// '1'
static const uint8_t bitmap_49[] = {112,240,240};
// '2'
static const uint8_t bitmap_50[] = {240,112,48,48,240,240,0};
// '3'
static const uint8_t bitmap_51[] = {96,96,96,224,240,240,0};
// '4'
static const uint8_t bitmap_52[] = {224,224,0,240,240,240,0};
// '5'
static const uint8_t bitmap_53[] = {224,224,224,96,96,32,32,48};
// '6'
static const uint8_t bitmap_54[] = {224,240,16,16,112,112,112,64};
// '7'
static const uint8_t bitmap_55[] = {224,224,32,32,240,240,64};
// '8'
static const uint8_t bitmap_56[] = {224,240,48,16,48,240,224};
// '9'
static const uint8_t bitmap_57[] = {248,248,24,8,8,248,248};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {8,3,7,7,7,8,8,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t slackey_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
