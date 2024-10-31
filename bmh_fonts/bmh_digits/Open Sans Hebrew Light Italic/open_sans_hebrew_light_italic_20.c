// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_light_italic_20

#include "font.h"
#include "open_sans_hebrew_light_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,224,24,6,2,1,1,1,3,254,48};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,8,4,134,250,7};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,2,2,1,1,1,1,195,126};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,2,130,129,129,129,129,67,62};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,96,16,8,4,250,7,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,224,158,129,129,129,129,1,1,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,128,112,152,132,66,66,193,129,1,1};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,1,1,1,1,1,193,49,13,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,194,129,129,129,65,38,28};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,240,140,2,1,1,1,1,2,252};
// ':'
static const uint8_t bitmap_58[] = {0,0,48,16};

static const uint8_t char_width[] = {11,5,8,8,12,9,10,9,11,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_light_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
