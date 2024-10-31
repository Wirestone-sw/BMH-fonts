// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font walter_turncoat_regular_16

#include "font.h"
#include "walter_turncoat_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,64,64,96,64,192,128,0,0,255,129,0,0,0,0,0,0,1,255,60};
// '1'
static const uint8_t bitmap_49[] = {0,128,96,224,0,1,1,0,255,128};
// '2'
static const uint8_t bitmap_50[] = {128,64,32,32,32,32,32,192,128,0,128,192,96,48,24,12,7,1};
// '3'
static const uint8_t bitmap_51[] = {128,64,64,96,64,64,64,128,0,0,0,0,0,12,4,4,14,11,184,224};
// '4'
static const uint8_t bitmap_52[] = {224,0,0,0,0,0,224,128,0,0,31,24,24,16,16,16,255,17,24,8};
// '5'
static const uint8_t bitmap_53[] = {224,32,32,32,32,32,32,32,0,0,143,132,4,2,2,2,2,134,236,56};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,64,64,96,96,0,0,0,52,254,139,13,4,4,6,6,4,12,152,240};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,192,64,64,64,192,192,0,0,0,128,192,48,24,6,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,128,64,64,96,96,192,128,0,0,192,240,31,12,8,8,8,12,14,19,240,64};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,64,64,96,64,64,192,0,3,15,24,16,16,16,16,216,125,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,48,32};

static const uint8_t char_width[] = {11,5,9,10,10,10,12,10,12,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t walter_turncoat_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
