// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font sunshiney_regular_20

#include "font.h"
#include "sunshiney_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,128,128,0,0,0,0,0,0,224,252,15,1,1,1,1,1,3,6,252,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,4,6,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,192,64,192,128,0,0,2,3,0,192,96,56,15,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,128,128,0,0,0,0,2,3,97,97,57,47,96,192,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,0,0,0,192,0,112,127,71,64,192,255,65,64};
// '5'
static const uint8_t bitmap_53[] = {192,192,64,64,64,192,0,0,0,127,96,32,48,16,16,48,112,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,192,64,64,0,0,0,192,248,28,199,241,48,16,16,48,240,192};
// '7'
static const uint8_t bitmap_55[] = {128,0,0,0,128,0,0,0,0,0,7,1,1,1,193,97,57,15,3,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,128,0,0,0,0,0,222,255,115,49,49,49,63,239,192};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,128,128,128,128,0,0,0,16,252,199,131,153,201,121,57,131,255,48};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,128};

static const uint8_t char_width[] = {12,4,9,9,8,9,11,10,10,11,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t sunshiney_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
