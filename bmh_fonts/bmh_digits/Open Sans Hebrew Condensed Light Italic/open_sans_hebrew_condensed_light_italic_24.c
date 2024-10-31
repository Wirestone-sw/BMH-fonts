// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_italic_24

#include "font.h"
#include "open_sans_hebrew_condensed_light_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,224,48,24,8,24,240,192,252,7,0,0,0,128,252,31,31,57,32,32,48,28,7,1,0};
// '1'
static const uint8_t bitmap_49[] = {192,96,48,240,24,0,224,63,3,0,60,7,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,16,24,8,8,24,240,0,0,0,128,192,96,24,14,3,56,44,34,33,32,32,16,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,16,16,24,8,8,16,240,0,0,0,0,16,16,56,232,6,3,48,32,32,32,32,48,24,15,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,96,208,120,0,128,96,48,12,3,129,248,15,0,2,3,2,2,2,50,31,2,2,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,128,240,24,24,24,24,24,0,0,8,15,8,8,24,112,224,0,48,32,32,32,32,48,24,14,3,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,192,32,16,16,8,24,8,128,252,23,8,8,8,8,240,0,0,15,63,32,32,32,16,14,3,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,24,24,24,24,24,152,248,56,0,0,0,192,56,14,3,0,0,48,28,7,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,224,48,16,8,8,24,240,0,128,64,35,30,24,56,236,6,3,6,31,48,32,32,32,48,31,7,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,192,48,16,8,8,48,224,0,31,49,64,64,32,48,252,15,32,32,32,48,16,12,7,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,6,7,48,56,0,0};

static const uint8_t char_width[] = {9,5,9,10,10,10,10,9,10,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
