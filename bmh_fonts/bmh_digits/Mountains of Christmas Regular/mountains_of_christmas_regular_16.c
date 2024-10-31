// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_regular_16

#include "font.h"
#include "mountains_of_christmas_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,15,17,17,17,14};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,2,2,1,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,64,64,128,3,4,134,96,31};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,128,200,68,10,249,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,0,0,192,176,78,65,254,64};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,0,255,72,8,240,96};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,248,132,194,65,129,1};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,0,0,228,60,7,8};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,128,0,240,15,4,4,251};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,0,0,199,132,132,67,62};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,8};

static const uint8_t char_width[] = {5,4,5,5,6,5,6,6,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
