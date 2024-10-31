// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_light_italic_16

#include "font.h"
#include "open_sans_hebrew_light_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,64,64,64,64,128,252,3,0,0,0,0,192,63};
// '1'
static const uint8_t bitmap_49[] = {0,128,64,192,1,224,30,1};
// '2'
static const uint8_t bitmap_50[] = {0,192,64,64,64,64,128,128,64,64,32,16,12,3};
// '3'
static const uint8_t bitmap_51[] = {64,64,64,64,64,64,128,0,8,8,8,56,196,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,64,64,96,80,76,66,65,240,79,64};
// '5'
static const uint8_t bitmap_53[] = {0,128,64,64,64,64,64,12,11,8,8,8,240,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,64,64,64,64,224,30,9,4,4,4,216,32};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,64,64,192,64,0,128,64,48,12,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,64,64,64,64,128,224,16,23,8,8,24,228,3};
// '9'
static const uint8_t bitmap_57[] = {128,64,64,64,64,64,128,31,16,32,32,144,104,31};
// ':'
static const uint8_t bitmap_58[] = {0,2};

static const uint8_t char_width[] = {8,4,7,7,9,7,8,8,8,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_light_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
