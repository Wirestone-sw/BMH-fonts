// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_bold_italic_16

#include "font.h"
#include "cousine_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,112,48,48,240,224,192,63,127,99,98,99,48,63,15,1};
// '1'
static const uint8_t bitmap_49[] = {0,0,192,64,96,240,240,112,0,64,96,96,96,124,127,111,96,96};
// '2'
static const uint8_t bitmap_50[] = {0,0,64,96,112,48,48,240,240,224,96,112,120,124,108,102,103,99,33,0};
// '3'
static const uint8_t bitmap_51[] = {0,64,96,48,48,48,240,240,96,48,112,96,99,99,115,63,28,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,112,240,240,0,24,28,30,27,25,120,127,63,25,8};
// '5'
static const uint8_t bitmap_53[] = {0,224,240,176,176,176,176,48,48,50,115,99,97,97,49,63,31,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,112,48,48,112,112,96,31,127,103,99,99,115,63,30,0};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,176,240,240,48,96,120,60,15,3,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,224,48,48,48,240,240,96,60,126,99,99,99,115,63,30,0};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,48,48,48,240,224,192,49,119,103,102,102,58,31,15,1};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192,112,113,113,1};

static const uint8_t char_width[] = {9,9,10,9,10,9,9,8,9,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
