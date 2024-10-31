// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_bold_20

#include "font.h"
#include "roboto_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,224,224,224,224,192,128,0,254,255,255,3,0,0,0,3,255,255,254};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,192,192,224,224,3,1,1,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,192,192,224,224,224,224,224,192,128,0,3,3,3,129,192,224,240,127,63,31,0};
// '3'
static const uint8_t bitmap_51[] = {128,192,192,224,224,224,224,224,192,128,0,1,1,1,57,56,56,56,127,239,239,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,224,224,224,0,0,192,224,248,190,143,131,255,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,192,224,224,224,224,224,224,224,224,0,0,31,63,63,28,28,28,60,248,248,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,224,224,224,224,0,0,248,254,255,63,29,29,28,60,252,248,224};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,224,224,224,224,224,224,0,0,0,0,192,240,252,63,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,192,224,224,224,224,224,192,192,0,128,239,239,127,56,56,56,127,239,239,128};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,224,224,224,224,224,192,128,0,31,127,127,241,224,224,224,243,255,255,124};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,4,14,14,4};

static const uint8_t char_width[] = {11,7,11,11,11,11,11,11,11,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
