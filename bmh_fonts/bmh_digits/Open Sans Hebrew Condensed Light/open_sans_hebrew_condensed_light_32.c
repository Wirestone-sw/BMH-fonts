// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_32

#include "font.h"
#include "open_sans_hebrew_condensed_light_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,128,128,128,128,0,0,0,0,248,62,3,1,0,0,1,3,126,248,28,255,0,0,0,0,0,0,0,0,255,0,31,126,224,192,128,128,192,96,63,15};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,48,24,12,6,255,255,0,0,0,0,255,255,0,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,128,128,128,128,128,0,0,0,3,1,1,0,0,0,1,3,255,252,0,0,0,0,0,128,224,56,30,7,0,192,224,248,204,199,193,192,192,192,192,192};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,128,128,128,128,128,128,0,0,1,3,1,1,0,0,0,1,3,255,124,0,0,0,12,12,12,12,30,51,241,192,64,192,192,128,128,128,128,192,96,124,31};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,128,128,0,0,0,0,0,0,0,192,112,28,7,255,255,0,0,0,128,224,60,15,3,0,0,0,255,255,0,0,0,3,2,2,2,2,2,2,2,255,255,2,2,2};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,254,255,3,3,3,3,3,3,3,0,15,13,12,12,12,12,12,24,112,224,128,128,0,0,0,128,128,192,120,63};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,128,0,224,252,14,3,1,1,0,0,1,0,255,59,12,6,2,2,2,6,60,248,15,62,96,192,128,128,192,192,120,31};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,195,251,31,3,0,0,0,0,0,128,240,126,7,0,0,0,0,0,0,224,252,31,3,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,128,128,128,128,128,0,0,0,0,254,255,1,1,0,0,0,1,239,254,0,0,192,113,19,30,12,12,30,51,97,192,0,15,63,96,192,192,128,128,128,192,96,63,15};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,128,128,128,0,0,0,224,254,7,1,1,0,0,1,3,254,248,1,15,28,48,32,32,32,48,24,255,255,0,192,128,128,128,192,192,112,60,15,1};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128,192,128,1,3,3,192,192,192};

static const uint8_t char_width[] = {11,6,11,11,13,10,10,12,12,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_32 = {
    32,
    char_values,
    char_addr,
    char_width
};