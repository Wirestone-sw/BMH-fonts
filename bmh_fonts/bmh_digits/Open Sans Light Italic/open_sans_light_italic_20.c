// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_light_italic_20

#include "font.h"
#include "open_sans_light_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,224,24,6,2,1,1,1,3,254,48};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,8,4,130,251,7};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,2,2,1,1,1,1,195,126};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,2,130,129,129,129,65,99,62};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,192,96,16,8,4,251,7,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,112,78,65,65,65,193,129,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,128,112,136,68,66,67,65,129,1,1};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,1,1,1,1,129,193,49,13,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,194,129,129,65,65,50,28};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,240,140,2,1,1,1,1,131,254};
// ':'
static const uint8_t bitmap_58[] = {0,48};

static const uint8_t char_width[] = {11,5,8,8,12,8,10,9,11,9,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_light_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
