// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font schoolbell_regular_20

#include "font.h"
#include "schoolbell_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,192,192,192,128,0,0,255,195,0,0,0,0,193,255,12};
// '1'
static const uint8_t bitmap_49[] = {192,192,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,192,192,64,192,192,128,0,0,0,0,0,0,128,192,224,112,31,15,0};
// '3'
static const uint8_t bitmap_51[] = {128,128,128,192,192,192,128,128,0,0,1,1,96,112,112,120,217,207,135,0};
// '4'
static const uint8_t bitmap_52[] = {128,128,0,0,0,0,128,192,0,0,127,127,64,64,64,64,193,255,240,192};
// '5'
static const uint8_t bitmap_53[] = {128,128,192,192,64,64,64,192,0,0,0,31,25,16,16,48,48,32,96,192,192,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,96,0,0,0,0,0,192,254,111,97,96,96,96,224,192,0};
// '7'
static const uint8_t bitmap_55[] = {64,192,192,192,192,192,192,192,192,192,0,0,0,0,0,128,240,63,7,0};
// '8'
static const uint8_t bitmap_56[] = {128,192,192,192,64,64,192,240,112,1,199,246,60,28,62,243,193,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,192,96,96,224,192,62,103,97,96,96,96,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192};

static const uint8_t char_width[] = {9,2,11,10,10,11,10,10,9,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t schoolbell_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
