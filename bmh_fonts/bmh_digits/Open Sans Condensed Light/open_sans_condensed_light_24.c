// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_light_24

#include "font.h"
#include "open_sans_condensed_light_24.h"

// '0'
static const uint8_t bitmap_48[] = {128,240,24,8,8,24,240,128,255,1,0,0,0,0,131,255,3,31,48,32,32,48,15,3};
// '1'
static const uint8_t bitmap_49[] = {64,32,16,248,0,0,0,255,0,0,0,63};
// '2'
static const uint8_t bitmap_50[] = {16,24,8,8,8,24,240,128,0,0,0,128,224,56,15,0,48,60,38,33,32,32,32,32};
// '3'
static const uint8_t bitmap_51[] = {16,24,8,8,8,24,240,0,0,0,16,16,24,44,231,128,48,32,32,32,32,16,31,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,24,248,0,0,0,128,112,28,3,0,0,255,0,0,2,3,2,2,2,2,2,63,2,2};
// '5'
static const uint8_t bitmap_53[] = {0,248,8,8,8,8,8,0,15,11,8,8,8,24,112,192,16,32,32,32,32,16,14,7};
// '6'
static const uint8_t bitmap_54[] = {0,192,48,24,8,8,8,0,254,255,8,4,4,12,56,224,3,15,48,32,32,48,28,7};
// '7'
static const uint8_t bitmap_55[] = {8,8,8,8,8,8,232,56,0,0,0,128,240,31,1,0,0,0,60,7,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,240,24,8,8,24,240,224,129,103,60,24,24,44,231,129,15,24,32,32,32,32,24,15};
// '9'
static const uint8_t bitmap_57[] = {192,112,24,8,8,24,224,0,15,48,64,64,64,32,255,127,0,32,32,32,16,28,7,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,7,2,56,16};

static const uint8_t char_width[] = {8,4,8,8,10,8,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_light_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
