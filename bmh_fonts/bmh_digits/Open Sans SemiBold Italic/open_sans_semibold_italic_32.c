// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_semibold_italic_32

#include "font.h"
#include "open_sans_semibold_italic_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,248,252,126,30,15,7,7,7,15,31,254,254,252,224,252,255,255,255,3,0,0,0,0,0,0,0,248,255,255,255,15,63,127,255,255,224,192,192,192,224,240,248,127,63,31,7,1,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,0,0,0,32,224,240,120,120,60,30,254,255,255,255,7,0,0,0,0,0,224,255,255,255,31,0,0,0,0,0,192,254,255,255,63,1,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,28,30,14,15,7,7,7,7,15,255,254,254,252,96,0,0,0,0,0,0,128,192,224,240,240,124,62,31,15,7,3,0,240,240,248,252,254,239,231,231,227,225,224,224,224,224,224,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,30,14,15,7,7,7,7,15,255,254,254,252,96,0,0,0,0,0,56,56,56,56,56,124,236,238,239,199,7,1,0,224,224,224,192,192,192,192,192,192,224,224,248,127,127,63,15,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,240,248,124,158,255,255,255,31,1,128,192,240,248,124,62,31,7,3,1,128,252,255,255,127,3,0,0,7,7,7,7,7,7,7,7,7,255,255,255,255,7,7,7,7,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,254,255,127,15,15,15,15,15,15,15,15,15,7,0,0,8,15,15,15,15,14,14,14,30,62,252,252,248,240,0,0,224,224,224,192,192,192,192,192,192,224,240,248,127,63,31,15,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,240,248,124,62,30,14,15,7,7,7,7,7,7,240,254,255,255,119,25,28,14,14,14,14,62,254,252,248,224,0,31,127,255,255,224,192,192,192,192,224,240,254,127,63,15,3,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,207,239,255,255,127,31,7,0,0,0,0,0,128,224,248,252,127,63,15,3,1,0,0,0,128,224,240,252,255,63,15,7,1,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,248,252,254,254,15,7,7,7,7,15,255,254,252,248,0,128,192,224,241,119,119,63,62,60,60,126,254,247,231,131,1,0,30,127,255,255,241,224,192,192,192,192,224,224,255,127,127,31,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,248,252,254,30,14,7,7,7,7,15,255,254,252,248,0,31,127,127,255,240,224,224,224,96,112,184,255,255,255,63,192,192,192,192,192,192,224,224,240,248,126,63,31,7,1,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,0,0,128,192,192,192,128,0,0,0,7,7,7,3,1,224,240,240,240,96,0,0,0};

static const uint8_t char_width[] = {17,12,18,18,18,18,17,17,18,16,8};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_semibold_italic_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
