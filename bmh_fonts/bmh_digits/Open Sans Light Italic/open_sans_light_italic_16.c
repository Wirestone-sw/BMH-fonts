// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_light_italic_16

#include "font.h"
#include "open_sans_light_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,128,128,0,240,14,1,0,0,0,129,127};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,2,193,61,3};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,128,128,0,129,128,64,32,25,7};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,128,0,17,16,16,40,201,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,128,128,192,160,144,140,130,225,159,128};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,128,128,128,128,24,23,16,16,16,224,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,192,60,18,17,16,16,224,0};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,0,0,128,96,24,4,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,128,128,128,0,192,32,47,16,16,48,200,7};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,0,62,65,64,64,32,209,62};
// ':'
static const uint8_t bitmap_58[] = {0,12};

static const uint8_t char_width[] = {8,4,6,6,9,7,8,8,8,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_light_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
