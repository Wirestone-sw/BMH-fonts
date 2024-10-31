// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_italic_20

#include "font.h"
#include "arimo_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,96,96,96,96,224,192,0,248,255,7,0,0,0,0,0,224,255,31};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,192,96,224,224,0,0,0,1,0,192,254,63,1,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,192,192,96,96,96,96,224,192,128,0,1,129,192,192,96,48,48,28,15,3};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,192,96,96,96,96,224,192,128,0,1,1,0,48,48,48,120,236,207,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,192,224,224,128,192,224,184,156,134,131,193,254,191,129};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,224,96,96,96,96,96,96,96,0,0,30,31,9,12,12,12,28,248,240,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,64,96,96,96,96,192,128,240,254,23,9,12,12,12,12,248,240,0};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,96,224,224,32,0,0,128,224,120,28,6,3,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,192,96,32,32,96,224,192,128,224,243,23,28,24,24,24,56,254,231,3};
// '9'
static const uint8_t bitmap_57[] = {0,0,192,192,96,96,96,96,192,192,0,0,31,63,96,96,96,96,32,248,127,6};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,3,3};

static const uint8_t char_width[] = {11,9,11,11,11,12,11,11,11,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
