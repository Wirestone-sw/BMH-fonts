// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_italic_16

#include "font.h"
#include "open_sans_hebrew_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,64,64,192,128,252,159,1,0,0,128,240,63};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,192,1,224,126,3};
// '2'
static const uint8_t bitmap_50[] = {128,192,64,64,64,192,128,128,64,96,48,24,15,3};
// '3'
static const uint8_t bitmap_51[] = {64,192,64,64,64,192,128,0,8,8,24,252,231,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,192,64,96,88,76,70,67,248,95,64};
// '5'
static const uint8_t bitmap_53[] = {0,192,64,64,64,64,64,12,15,8,8,152,240,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,128,64,64,64,64,248,190,11,8,12,12,248,0};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,64,64,192,64,0,192,96,56,14,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,64,64,64,192,192,224,48,23,12,8,24,228,3};
// '9'
static const uint8_t bitmap_57[] = {128,192,64,64,64,192,128,31,16,16,16,208,127,15};
// ':'
static const uint8_t bitmap_58[] = {0,0,6,2};

static const uint8_t char_width[] = {8,4,7,7,9,7,8,8,8,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
