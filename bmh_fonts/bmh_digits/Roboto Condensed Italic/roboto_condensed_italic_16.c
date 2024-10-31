// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_italic_16

#include "font.h"
#include "roboto_condensed_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,24,8,8,248,224,63,65,64,64,56,31,0};
// '1'
static const uint8_t bitmap_49[] = {64,32,160,240,0,240,127,1};
// '2'
static const uint8_t bitmap_50[] = {0,96,112,24,8,8,248,96,64,96,88,76,70,67,65,0};
// '3'
static const uint8_t bitmap_51[] = {0,64,48,24,8,136,240,16,48,64,65,97,63,12};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,224,240,28,22,19,240,127,19};
// '5'
static const uint8_t bitmap_53[] = {0,192,112,16,16,16,16,96,195,129,129,99,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,48,16,16,127,195,129,129,99,62};
// '7'
static const uint8_t bitmap_55[] = {0,16,16,16,144,208,48,16,128,224,56,14,3,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,240,24,8,8,248,96,62,66,65,65,63,30,0};
// '9'
static const uint8_t bitmap_57[] = {192,240,24,8,8,240,65,71,68,36,30,15};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,192,193,1};

static const uint8_t char_width[] = {7,4,8,7,6,7,6,8,7,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
