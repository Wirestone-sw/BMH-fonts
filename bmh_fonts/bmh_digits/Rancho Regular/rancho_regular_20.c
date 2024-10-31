// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rancho_regular_20

#include "font.h"
#include "rancho_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,192,224,192,192,128,0,254,255,3,0,1,0,1,255,254};
// '1'
static const uint8_t bitmap_49[] = {128,192,224,224,0,128,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,192,96,64,192,192,0,2,7,1,128,192,224,112,63,15};
// '3'
static const uint8_t bitmap_51[] = {0,96,96,96,96,96,96,224,224,0,0,128,0,56,28,30,55,113,224,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,192,224,0,0,248,188,207,195,192,255,255,192,192};
// '5'
static const uint8_t bitmap_53[] = {192,192,192,192,192,192,192,224,0,63,127,48,24,24,56,112,240,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,224,192,192,0,254,255,51,24,24,24,112,241,192};
// '7'
static const uint8_t bitmap_55[] = {96,224,96,96,96,96,224,224,224,0,0,0,192,248,126,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,192,64,96,192,192,0,207,255,120,48,48,56,255,207};
// '9'
static const uint8_t bitmap_57[] = {192,224,96,32,32,96,192,128,31,63,96,96,96,48,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,64,96,96};

static const uint8_t char_width[] = {9,4,9,10,9,9,9,9,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rancho_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
