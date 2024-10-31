// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_light_italic_16

#include "font.h"
#include "roboto_condensed_light_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,112,24,8,8,184,64,63,64,64,64,48,15,0};
// '1'
static const uint8_t bitmap_49[] = {32,32,16,240,0,224,31,0};
// '2'
static const uint8_t bitmap_50[] = {0,64,48,8,8,8,240,64,96,80,72,68,67,64};
// '3'
static const uint8_t bitmap_51[] = {0,0,48,8,8,8,248,16,32,64,65,65,35,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,32,240,16,24,22,17,144,126,17};
// '5'
static const uint8_t bitmap_53[] = {0,192,48,16,16,16,16,96,131,129,129,65,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,32,16,16,127,130,129,129,65,62};
// '7'
static const uint8_t bitmap_55[] = {0,16,16,16,16,208,48,128,192,48,12,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,240,24,8,8,216,32,8,54,66,65,65,35,28,0};
// '9'
static const uint8_t bitmap_57[] = {192,48,8,8,8,240,65,70,68,36,26,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,64,64,64,0};

static const uint8_t char_width[] = {7,4,7,7,7,7,6,7,8,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_light_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
