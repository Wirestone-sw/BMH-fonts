// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_italic_16

#include "font.h"
#include "arimo_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,48,48,112,240,192,127,255,192,192,224,126,31,7};
// '1'
static const uint8_t bitmap_49[] = {0,0,192,96,32,240,240,0,192,192,192,224,255,255,195,192};
// '2'
static const uint8_t bitmap_50[] = {0,96,112,48,48,240,240,224,240,248,216,204,206,199,195,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,96,112,48,48,240,240,224,32,96,224,198,198,230,127,57,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,112,240,240,16,60,55,51,240,254,127,51,16};
// '5'
static const uint8_t bitmap_53[] = {0,0,240,240,48,48,48,48,48,32,103,231,195,195,227,127,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,48,48,48,112,96,127,255,195,195,195,127,62,0};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,48,240,240,112,16,128,240,248,62,7,3,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,224,240,48,48,48,240,224,48,124,253,199,198,198,127,125,1};
// '9'
static const uint8_t bitmap_57[] = {0,128,224,240,48,48,112,224,192,32,99,239,207,204,236,126,63,7};
// ':'
static const uint8_t bitmap_58[] = {0,128,128,128,192,193,1,0};

static const uint8_t char_width[] = {8,8,8,9,8,9,8,9,9,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
