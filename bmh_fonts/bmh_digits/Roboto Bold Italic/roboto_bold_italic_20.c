// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_bold_italic_20

#include "font.h"
#include "roboto_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,240,112,112,240,240,224,128,252,255,255,7,0,0,0,240,255,255,15};
// '1'
static const uint8_t bitmap_49[] = {0,192,192,224,224,224,240,48,2,1,0,240,255,255,15,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,224,224,240,112,112,240,240,224,192,0,2,3,131,195,224,112,56,30,15,7,1};
// '3'
static const uint8_t bitmap_51[] = {0,0,192,224,224,240,112,112,240,240,224,192,128,128,129,1,29,28,28,60,254,247,231,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,224,224,224,32,128,192,224,248,188,142,135,251,255,255,135,128};
// '5'
static const uint8_t bitmap_53[] = {0,0,192,224,224,224,224,224,224,224,224,0,28,31,31,29,28,28,252,248,240,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,192,224,224,224,96,240,252,255,63,27,29,28,252,248,248};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,224,224,224,224,224,96,0,0,0,192,240,248,62,15,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,224,224,240,112,112,112,240,224,192,224,243,255,63,28,28,28,254,247,231,1};
// '9'
static const uint8_t bitmap_57[] = {128,224,224,240,112,112,240,224,192,0,63,127,127,112,112,176,248,255,127,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,7,7,7};

static const uint8_t char_width[] = {11,8,12,12,12,11,10,11,11,10,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
