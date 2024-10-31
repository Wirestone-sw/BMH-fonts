// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_light_italic_20

#include "font.h"
#include "roboto_condensed_light_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,96,48,16,16,16,224,0,248,15,0,0,0,0,128,255,1};
// '1'
static const uint8_t bitmap_49[] = {128,64,64,192,224,0,0,240,63,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,192,96,16,16,16,48,224,0,0,1,128,192,96,16,12,7};
// '3'
static const uint8_t bitmap_51[] = {0,192,96,48,16,16,16,224,0,0,0,8,8,24,244,195};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,224,32,0,128,96,48,12,6,1,252,7,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,96,32,32,32,32,32,0,24,31,8,8,8,24,224,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,192,64,32,32,32,240,30,11,4,4,4,24,240};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,32,32,32,32,224,32,0,0,128,224,56,12,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,96,48,16,16,16,224,192,224,19,20,8,8,8,244,195,1};
// '9'
static const uint8_t bitmap_57[] = {0,192,96,48,16,16,48,224,4,63,96,64,64,32,208,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,3,3};

static const uint8_t char_width[] = {9,5,9,8,10,9,8,9,9,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_light_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
