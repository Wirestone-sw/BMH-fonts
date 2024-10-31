// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font chewy_regular_12

#include "font.h"
#include "chewy_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,224,96,48,48,112,224,192};
// '1'
static const uint8_t bitmap_49[] = {32,240,240};
// '2'
static const uint8_t bitmap_50[] = {96,112,48,48,240,224};
// '3'
static const uint8_t bitmap_51[] = {96,112,48,176,240,224};
// '4'
static const uint8_t bitmap_52[] = {240,240,128,240,240,128,128};
// '5'
static const uint8_t bitmap_53[] = {240,240,176,176,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,240,176,144,0};
// '7'
static const uint8_t bitmap_55[] = {32,48,48,48,176,240,48};
// '8'
static const uint8_t bitmap_56[] = {0,224,240,176,176,240,96};
// '9'
static const uint8_t bitmap_57[] = {224,224,48,48,48,240,224};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {8,3,6,6,7,5,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t chewy_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
