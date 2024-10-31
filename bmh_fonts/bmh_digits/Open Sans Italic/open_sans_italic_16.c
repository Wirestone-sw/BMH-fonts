// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_italic_16

#include "font.h"
#include "open_sans_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,128,128,0,248,62,3,1,0,0,225,127};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,2,195,253,15};
// '2'
static const uint8_t bitmap_50[] = {128,128,128,128,128,0,129,192,96,48,31,15};
// '3'
static const uint8_t bitmap_51[] = {128,128,128,128,128,0,17,16,16,232,207,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,128,128,192,160,152,140,134,243,191,129};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,128,128,128,128,24,31,16,16,48,224,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,224,124,54,17,17,16,224,0};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,0,128,192,112,28,6,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,128,128,128,0,192,96,47,25,16,56,201,7};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,0,31,33,32,32,176,255,30};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,12};

static const uint8_t char_width[] = {8,4,6,6,9,7,8,7,8,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
