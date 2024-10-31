// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font slackey_regular_16

#include "font.h"
#include "slackey_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,192,192,96,96,96,224,192,128,255,255,255,0,0,0,0,255,255,255};
// '1'
static const uint8_t bitmap_49[] = {192,192,192,224,0,1,255,255,255,224};
// '2'
static const uint8_t bitmap_50[] = {192,224,224,224,224,224,224,224,192,227,225,240,240,216,220,207,199,195};
// '3'
static const uint8_t bitmap_51[] = {224,224,224,224,224,224,224,224,224,0,192,204,204,238,238,239,251,249,249,240};
// '4'
static const uint8_t bitmap_52[] = {192,192,0,0,0,224,224,224,224,0,31,31,31,28,28,255,255,255,255,28};
// '5'
static const uint8_t bitmap_53[] = {224,224,224,224,96,96,96,96,96,96,207,239,239,239,140,140,252,252,252,240};
// '6'
static const uint8_t bitmap_54[] = {128,224,224,96,96,96,224,224,224,224,255,255,159,152,24,24,27,249,249,225};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,224,3,3,195,224,248,126,31,7,1};
// '8'
static const uint8_t bitmap_56[] = {192,192,224,96,96,96,96,224,192,0,231,255,188,24,24,24,24,255,255,231};
// '9'
static const uint8_t bitmap_57[] = {224,240,240,48,48,48,48,240,240,224,15,207,207,200,200,200,204,255,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,56,56};

static const uint8_t char_width[] = {10,5,9,10,10,10,10,9,10,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t slackey_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
