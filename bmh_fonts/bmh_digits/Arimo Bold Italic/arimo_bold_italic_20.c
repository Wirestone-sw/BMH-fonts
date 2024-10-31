// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_italic_20

#include "font.h"
#include "arimo_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,224,96,96,224,224,192,0,248,255,255,7,0,0,0,224,255,255,15};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,192,192,224,224,224,96,0,0,0,2,1,1,240,255,255,15,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,192,224,96,96,224,224,192,128,0,129,193,193,224,112,56,60,31,15,3};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,192,192,224,96,96,224,224,192,128,0,0,1,1,1,24,56,56,252,239,199,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,224,224,224,224,0,224,240,188,158,135,131,249,255,255,131,128};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,224,224,96,96,96,96,96,96,0,16,31,31,31,28,12,28,252,248,240,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,224,96,96,224,224,192,248,255,255,11,4,6,14,254,254,252,0};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,224,224,96,0,128,224,240,248,60,15,7,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,192,224,96,96,224,224,192,128,128,224,231,127,63,28,24,56,252,255,231,3};
// '9'
static const uint8_t bitmap_57[] = {0,0,192,192,224,96,96,224,224,192,0,0,63,127,127,96,96,32,208,255,255,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,7,7,7};

static const uint8_t char_width[] = {11,11,11,12,11,12,11,11,12,11,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
