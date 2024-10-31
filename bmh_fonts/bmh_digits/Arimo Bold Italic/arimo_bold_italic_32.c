// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_italic_32

#include "font.h"
#include "arimo_bold_italic_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,192,224,240,240,120,120,120,120,248,248,240,240,192,0,0,240,254,255,255,255,7,1,0,0,0,0,192,255,255,255,255,30,30,255,255,255,255,192,128,128,128,192,224,248,255,255,127,31,3,0,0,0,3,3,7,7,7,7,7,7,3,3,1,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,128,192,192,224,224,240,248,248,248,248,248,24,0,0,0,0,0,7,3,1,1,0,248,255,255,255,127,3,0,0,0,128,128,128,128,128,128,224,255,255,255,255,143,128,128,128,128,4,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,192,224,240,240,248,120,120,120,120,248,248,240,240,224,128,0,0,0,1,1,3,3,3,0,128,192,224,240,252,255,127,63,31,3,128,192,240,248,248,252,190,159,143,143,135,131,129,129,128,128,128,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,128,192,224,240,240,248,120,120,120,120,248,248,240,240,224,0,0,0,0,1,1,3,3,195,224,224,224,224,240,248,191,63,31,15,3,32,224,240,240,240,192,128,129,129,129,129,195,255,255,255,255,126,0,0,0,0,1,3,3,7,7,7,7,7,7,7,3,3,1,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,192,224,240,248,248,248,248,248,120,0,0,0,192,224,240,252,126,31,15,7,193,254,255,255,255,15,0,120,126,127,127,127,123,120,120,120,120,248,255,255,255,127,121,120,120,0,0,0,0,0,0,0,0,0,7,7,7,7,7,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,192,248,248,248,248,120,120,120,120,120,120,120,120,120,120,0,0,192,252,255,255,255,255,113,120,120,120,248,248,240,240,192,0,0,32,224,224,224,240,224,128,128,128,128,128,192,241,255,255,255,127,15,0,0,0,1,3,3,7,7,7,7,7,7,7,3,3,1,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,192,224,224,240,248,120,120,120,120,248,248,240,224,192,240,254,255,255,255,207,225,224,240,240,240,240,241,225,193,129,1,127,255,255,255,227,129,128,128,128,192,225,255,255,255,127,31,0,0,1,3,3,7,7,7,7,7,7,3,3,1,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {64,120,120,120,120,120,120,120,120,120,120,120,248,248,248,248,248,120,0,0,0,0,0,0,192,224,240,248,252,127,31,15,7,1,0,0,0,0,192,248,252,255,255,63,15,3,0,0,0,0,0,0,0,0,0,7,7,7,7,7,1,0,0,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,192,224,240,240,248,120,120,56,120,120,248,240,240,224,192,0,0,0,7,159,191,255,255,240,224,224,224,224,240,255,63,63,31,7,48,254,255,255,255,239,129,129,1,128,129,193,255,255,255,255,126,0,0,0,0,1,3,3,7,7,7,7,7,7,7,3,3,1,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,192,224,240,240,248,120,120,120,120,248,240,240,224,192,0,0,8,255,255,255,255,231,192,192,192,192,192,224,255,255,255,255,127,224,224,224,225,225,131,131,131,131,195,225,249,255,255,127,31,7,0,0,1,3,3,7,7,7,7,7,7,3,3,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,0,48,62,62,62,62,6,192,192,192,192,192,0,0,0,7,7,7,7,7,0,0,0};

static const uint8_t char_width[] = {18,17,19,19,18,19,17,18,19,18,8};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_bold_italic_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
