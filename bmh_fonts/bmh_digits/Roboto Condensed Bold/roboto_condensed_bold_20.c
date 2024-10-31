// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_bold_20

#include "font.h"
#include "roboto_condensed_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,224,224,224,224,192,0,255,255,255,1,0,1,255,255,255};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,192,224,224,3,1,1,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,192,224,224,224,224,224,192,128,3,3,131,192,224,249,127,31,7};
// '3'
static const uint8_t bitmap_51[] = {128,192,224,224,224,224,224,192,128,1,1,1,56,56,125,255,239,199};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,224,224,224,0,192,240,252,159,135,255,255,255,128};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,224,224,224,224,224,224,28,31,31,24,28,60,252,248,240};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,224,224,224,0,0,252,255,255,27,29,28,252,248,240};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,224,224,224,224,0,0,0,128,240,254,127,15,1};
// '8'
static const uint8_t bitmap_56[] = {0,192,224,224,224,224,224,192,0,199,239,255,61,56,61,255,239,199};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,224,224,224,192,192,0,63,127,255,224,224,97,255,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,4,14,14,4};

static const uint8_t char_width[] = {9,6,9,9,9,9,9,9,9,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
