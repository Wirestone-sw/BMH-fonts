// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_extra_bold_italic_16

#include "font.h"
#include "open_sans_hebrew_extra_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,192,192,192,192,128,0,254,255,255,3,192,255,255,127,14};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,192,192,192,192,2,7,7,243,255,255,31,0};
// '2'
static const uint8_t bitmap_50[] = {128,128,192,192,192,192,192,128,192,195,225,241,184,159,143,7};
// '3'
static const uint8_t bitmap_51[] = {0,0,192,192,192,192,192,192,128,128,128,0,25,152,252,255,247,231};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,192,64,240,248,252,239,251,255,255,231,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,192,192,192,192,192,192,64,128,136,31,31,159,253,253,249,241,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,192,192,192,192,252,255,255,27,141,252,252,248,0};
// '7'
static const uint8_t bitmap_55[] = {0,192,192,192,192,192,192,192,192,64,1,129,225,249,253,63,15,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,192,192,192,192,192,0,192,224,247,191,31,188,254,247,231,1};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,192,192,192,192,128,159,63,63,185,216,255,255,127};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,28,30,12};

static const uint8_t char_width[] = {9,8,8,9,9,10,9,10,10,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_extra_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
