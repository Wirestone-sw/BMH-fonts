// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cherry_cream_soda_regular_20

#include "font.h"
#include "cherry_cream_soda_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,128,128,192,192,192,192,192,192,192,248,252,254,255,15,3,1,1,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {192,192,192,192,192,192,192,0,0,0,255,255,255,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,192,192,192,192,192,192,192,128,128,28,31,31,31,3,1,0,0,0,128,193,225,255};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,128,128,192,192,192,192,192,192,192,128,128,128,132,135,135,7,3,1,96,96,96,96,240,249,255};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,128,192,224,224,224,224,32,192,224,240,248,252,220,206,199,195,193,192,255,255,255,192};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,224,224,96,96,96,96,96,96,96,96,96,128,159,159,159,31,28,12,12,12,12,12,12,28,24};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,128,128,192,192,192,128,192,240,248,124,60,62,30,31,27,27,25,25,24,56,48};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,96,96,96,96,224,224,224,0,0,0,0,128,192,224,240,124,62,15,7,3,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,128,192,192,192,192,192,192,192,128,128,128,192,207,239,127,121,48,48,48,48,48,48,48,121,127};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,192,192,192,192,192,192,192,192,128,60,127,255,227,193,193,128,128,128,128,128,192,193,227};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,192,192,192,192};

static const uint8_t char_width[] = {14,7,13,15,15,14,15,14,15,14,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cherry_cream_soda_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
