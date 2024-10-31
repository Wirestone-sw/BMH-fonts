// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font slackey_regular_20

#include "font.h"
#include "slackey_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,128,128,128,128,128,128,128,128,0,0,252,255,255,255,3,1,1,1,1,255,255,255,255,252};
// '1'
static const uint8_t bitmap_49[] = {0,128,128,128,128,128,4,7,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,128,128,128,128,128,128,0,0,31,31,31,7,7,131,131,231,255,255,127,60};
// '3'
static const uint8_t bitmap_51[] = {128,128,128,128,128,128,128,128,128,128,128,128,0,7,7,199,199,231,231,247,247,191,159,159,159,0};
// '4'
static const uint8_t bitmap_52[] = {128,128,128,0,0,0,0,128,128,128,128,128,0,255,255,255,252,224,224,224,255,255,255,255,255,224};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,128,128,128,128,128,128,128,128,128,128,0,255,255,255,255,231,231,195,195,195,195,131,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,192,252,254,255,15,7,7,7,63,63,63,63,62};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,128,128,128,128,15,15,15,15,3,131,227,251,255,127,31,7};
// '8'
static const uint8_t bitmap_56[] = {0,128,128,128,128,128,128,128,128,128,128,0,0,0,127,255,247,193,193,193,193,193,255,255,127,62};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,128,128,128,128,128,128,0,0,254,255,255,255,131,3,1,1,129,131,255,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128,128,128};

static const uint8_t char_width[] = {14,6,12,13,13,13,13,12,13,13,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t slackey_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
