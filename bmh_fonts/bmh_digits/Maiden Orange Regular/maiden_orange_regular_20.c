// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font maiden_orange_regular_20

#include "font.h"
#include "maiden_orange_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {248,254,7,3,1,3,7,254,248,15,63,112,96,96,96,112,63,15};
// '1'
static const uint8_t bitmap_49[] = {2,3,255,255,0,0,0,96,127,127,96,96};
// '2'
static const uint8_t bitmap_50[] = {31,31,3,3,131,195,255,126,120,124,102,99,97,97,120,120};
// '3'
static const uint8_t bitmap_51[] = {31,31,3,195,193,195,127,62,28,60,112,96,96,97,127,62};
// '4'
static const uint8_t bitmap_52[] = {0,192,112,60,15,255,255,0,0,7,7,6,6,102,127,127,102,34};
// '5'
static const uint8_t bitmap_53[] = {127,255,67,67,195,207,143,0,28,60,96,96,96,113,63,14};
// '6'
static const uint8_t bitmap_54[] = {248,252,134,194,195,134,158,8,63,127,193,192,192,193,127,63};
// '7'
static const uint8_t bitmap_55[] = {15,15,3,3,3,227,127,15,0,0,96,120,127,99,0,0};
// '8'
static const uint8_t bitmap_56[] = {60,255,227,195,193,195,255,62,0,63,63,97,96,96,96,113,63,14};
// '9'
static const uint8_t bitmap_57[] = {252,222,6,3,2,142,252,240,49,115,195,195,195,227,127,31};
// ':'
static const uint8_t bitmap_58[] = {128,192,128,193,225,64};

static const uint8_t char_width[] = {9,6,8,8,9,8,8,8,9,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t maiden_orange_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
