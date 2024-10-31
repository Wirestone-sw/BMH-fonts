// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_italic_16

#include "font.h"
#include "open_sans_hebrew_condensed_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,64,192,128,224,254,3,0,192,124,15};
// '1'
static const uint8_t bitmap_49[] = {0,128,64,192,1,240,63,1};
// '2'
static const uint8_t bitmap_50[] = {0,192,64,64,192,192,128,64,48,24,14,3};
// '3'
static const uint8_t bitmap_51[] = {192,64,64,192,192,8,8,248,230,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,192,80,76,66,249,95,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,64,64,64,64,12,11,8,136,120,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,64,64,64,224,252,11,8,140,248,0};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,192,64,192,112,28,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,64,64,64,192,50,31,8,184,230,3};
// '9'
static const uint8_t bitmap_57[] = {0,128,64,64,192,128,31,17,16,208,60,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,6,2};

static const uint8_t char_width[] = {7,4,6,5,6,6,7,6,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
