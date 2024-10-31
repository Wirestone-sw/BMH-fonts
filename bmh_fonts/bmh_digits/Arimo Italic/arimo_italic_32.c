// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_italic_32

#include "font.h"
#include "arimo_italic_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,192,224,240,112,56,56,56,56,56,120,240,224,192,0,0,240,254,255,15,3,0,0,0,0,0,0,0,0,193,255,255,63,14,255,255,247,128,0,0,0,0,0,128,192,224,252,127,31,7,0,0,0,1,3,7,7,7,7,7,7,3,3,1,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,128,192,192,224,112,48,248,248,248,8,0,0,0,0,0,3,1,0,0,224,255,255,63,1,0,0,0,0,0,0,0,0,0,248,255,255,7,0,0,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,192,224,240,112,56,56,56,56,56,120,240,224,192,0,0,0,3,3,3,0,0,0,0,128,192,224,240,127,63,31,128,192,224,112,56,60,28,14,7,7,3,1,1,0,0,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,3,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,128,192,224,240,112,56,56,56,56,56,120,240,240,224,128,0,0,2,3,3,3,128,192,192,192,192,192,96,112,63,63,31,7,96,240,240,192,128,0,1,1,1,1,1,129,199,255,254,124,0,0,0,0,1,3,3,7,7,7,7,7,7,3,3,1,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,192,224,240,248,248,248,24,0,0,0,0,128,224,240,120,60,14,7,3,193,254,255,127,3,0,16,28,30,31,27,25,24,24,24,24,24,248,255,255,31,24,24,24,0,0,0,0,0,0,0,0,0,0,6,7,7,1,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,240,248,248,56,56,56,56,56,56,56,56,56,56,56,0,0,240,255,255,111,96,112,112,112,112,112,240,224,192,128,0,0,224,224,224,128,0,0,0,0,0,0,0,128,192,255,255,127,4,0,0,1,3,3,7,7,7,7,7,7,7,3,3,1,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,224,112,112,56,56,56,56,56,120,240,224,192,192,248,255,191,199,97,112,48,48,112,112,240,224,192,128,0,0,127,255,255,129,0,0,0,0,0,0,128,192,255,255,63,0,0,0,0,3,3,7,7,7,7,7,7,3,3,1,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {56,56,56,56,56,56,56,56,56,56,56,184,248,248,120,56,0,0,0,0,0,192,224,240,124,30,15,7,1,0,0,0,0,192,240,252,127,15,3,0,0,0,0,0,0,0,0,0,6,7,7,3,0,0,0,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,192,224,240,112,56,56,24,24,24,56,120,240,240,224,128,0,0,128,143,223,255,240,224,96,224,224,224,240,184,191,31,15,3,252,255,255,131,1,0,0,0,0,0,0,128,193,255,255,126,0,0,0,1,3,3,7,7,7,6,6,7,7,3,3,1,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,192,224,240,112,56,56,56,56,56,56,112,240,224,128,0,0,255,255,255,129,0,0,0,0,0,0,128,192,255,255,255,128,192,192,129,3,3,7,7,6,7,135,195,241,126,63,15,1,0,1,3,7,7,7,7,7,7,3,3,1,1,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,16,30,30,30,128,128,128,0,0,0,7,7,7,0,0,0};

static const uint8_t char_width[] = {18,15,17,18,18,18,17,16,18,17,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_italic_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
