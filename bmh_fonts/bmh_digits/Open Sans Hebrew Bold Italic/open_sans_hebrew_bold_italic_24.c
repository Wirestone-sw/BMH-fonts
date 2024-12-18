// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_bold_italic_24

#include "font.h"
#include "open_sans_hebrew_bold_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,192,224,240,240,120,56,120,248,240,240,192,252,255,255,255,7,0,0,0,192,255,255,255,127,15,31,63,63,56,56,56,62,31,15,7,3,0};
// '1'
static const uint8_t bitmap_49[] = {128,128,128,192,224,224,240,248,248,248,8,0,3,7,3,193,252,255,255,63,1,0,0,0,0,56,63,63,63,3,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,32,96,240,112,120,120,120,120,248,240,240,192,0,0,0,0,128,192,224,240,248,124,63,31,15,3,56,60,62,63,63,59,57,57,56,56,56,56,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,32,240,112,120,56,56,120,248,240,240,224,0,0,0,0,48,56,56,56,120,252,239,239,135,3,28,60,56,56,56,56,56,56,60,31,31,15,3,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,224,240,248,248,248,56,192,224,248,188,158,143,135,243,255,255,255,135,128,3,3,3,3,3,35,63,63,63,15,3,3,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,240,248,248,120,120,120,120,120,120,120,0,0,24,63,63,31,31,60,60,252,248,240,224,0,28,60,56,56,56,56,56,60,62,31,31,15,3,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,224,240,240,112,120,56,56,56,120,8,240,254,255,255,55,25,28,28,60,252,248,248,0,0,7,31,63,63,56,56,56,60,63,31,15,7,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,64,120,120,120,120,120,120,120,248,248,248,248,120,0,0,0,0,128,224,248,252,127,31,15,3,0,0,32,48,60,63,63,15,3,1,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,240,240,56,56,56,120,240,240,224,128,192,227,255,127,63,60,120,252,254,239,199,3,15,31,63,61,56,56,56,56,63,31,31,7,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,224,240,240,120,56,56,120,248,240,224,128,0,63,127,127,121,112,112,112,248,255,255,255,31,56,56,56,56,56,56,60,30,31,15,3,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128,128,128,128,0,0,0,3,7,7,3,12,30,30,30,12,0,0};

static const uint8_t char_width[] = {13,11,14,14,13,14,14,14,13,13,7};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_bold_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
