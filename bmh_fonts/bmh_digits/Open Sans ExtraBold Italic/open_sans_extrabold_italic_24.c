// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_extrabold_italic_24

#include "font.h"
#include "open_sans_extrabold_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,192,224,240,240,248,120,248,248,248,240,224,128,252,255,255,255,255,7,0,0,240,255,255,255,255,15,7,31,31,63,63,60,60,63,31,31,15,3,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,192,224,240,240,248,248,248,248,8,1,7,7,3,195,253,255,255,255,63,1,0,0,0,0,56,63,63,63,63,7,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,32,224,240,240,120,120,120,248,248,240,240,224,0,0,0,128,129,192,224,240,252,127,63,31,15,7,60,62,63,63,63,63,63,61,60,60,60,60,12,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,112,240,248,120,120,120,248,248,248,240,224,0,0,0,0,60,60,60,60,254,255,255,231,231,3,30,62,60,60,60,60,60,62,63,31,31,15,7,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,224,240,248,248,248,248,8,224,240,248,252,222,207,199,251,255,255,255,255,193,0,3,3,3,3,3,51,63,63,63,63,7,3,3,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,128,248,248,248,248,120,120,120,120,120,120,24,0,0,28,31,31,31,31,31,254,254,254,252,248,0,0,30,30,60,60,60,60,60,62,63,31,31,15,7,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,224,240,240,240,120,120,120,120,120,120,240,254,255,255,255,63,28,30,254,254,254,252,248,0,7,15,31,63,63,60,60,62,63,31,15,7,3,0};
// '7'
static const uint8_t bitmap_55[] = {0,64,120,120,120,120,120,120,248,248,248,248,248,248,56,0,0,0,128,192,240,252,254,255,127,31,7,1,0,0,48,56,62,63,63,31,15,3,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,240,248,248,120,120,248,248,240,240,192,192,224,231,255,255,127,62,124,254,255,255,231,3,1,15,31,31,63,62,60,60,62,63,31,31,15,1,0};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,240,240,248,120,120,248,248,240,240,192,14,127,255,255,255,249,240,112,252,255,255,255,127,60,60,60,60,60,60,30,31,31,15,7,1,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,128,128,128,0,0,0,6,15,15,15,15,7,28,62,62,62,30,0,0,0};

static const uint8_t char_width[] = {14,12,14,14,14,15,14,15,14,13,8};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_extrabold_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
