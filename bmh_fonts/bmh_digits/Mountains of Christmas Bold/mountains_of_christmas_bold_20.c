// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_bold_20

#include "font.h"
#include "mountains_of_christmas_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,112,252,132,4,4,140,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,8,8,8,4,254,254};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,30,17,1,129,255,254,16};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,97,49,61,239,195};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,192,240,60,252,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,252,252,132,132,134,130,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,192,240,112,24,4,4,4,8};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,4,4,68,68,196,244,188,140};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,128,192,60,36,38,100,220,128};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,120,254,130,130,70,252,240};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,96,96,64};

static const uint8_t char_width[] = {7,6,7,6,9,8,8,8,8,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
