// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_20

#include "font.h"
#include "roboto_condensed_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,96,96,96,192,128,0,254,255,1,0,0,0,1,255,252};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,224,224,1,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,192,224,96,96,96,224,192,0,3,3,0,128,192,112,61,15,0};
// '3'
static const uint8_t bitmap_51[] = {0,192,224,96,96,96,192,128,3,3,0,48,48,48,255,207};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,224,224,0,128,224,120,30,3,0,255,255,0};
// '5'
static const uint8_t bitmap_53[] = {128,224,96,96,96,96,96,96,31,31,12,12,12,28,248,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,224,96,96,0,0,64,255,55,8,12,12,28,248,224};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,96,0,0,0,0,224,248,31,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,192,96,96,96,192,192,0,128,207,127,48,48,48,127,207,128};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,96,96,224,192,128,31,127,224,192,192,64,179,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,8,12,12};

static const uint8_t char_width[] = {9,5,9,8,9,8,9,9,9,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
