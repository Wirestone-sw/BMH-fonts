// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font permanent_marker_regular_16

#include "font.h"
#include "permanent_marker_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,128,192,128,0,0,192,240,248,62,31,15,7,143,255,252,224};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,128,0,128,240,255,255,14};
// '2'
static const uint8_t bitmap_50[] = {192,192,192,192,192,192,192,192,0,0,0,193,225,241,249,189,159,207,199,195,192,192};
// '3'
static const uint8_t bitmap_51[] = {128,192,192,192,192,192,192,192,131,159,159,159,255,255,243,225};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,128,0,0,31,62,56,248,248,255,63,24,24};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,192,192,128,128,128,128,128,143,159,159,159,187,243,227,3,3,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,128,0,252,191,239,243,241,240,224};
// '7'
static const uint8_t bitmap_55[] = {128,192,192,192,192,192,192,128,0,0,0,1,49,113,177,249,249,127,63,56,24,16};
// '8'
static const uint8_t bitmap_56[] = {0,192,192,192,192,192,128,192,128,231,255,189,188,253,239,14,7,3};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,192,192,192,128,0,15,15,15,13,238,255,63,6};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,144,56,24};

static const uint8_t char_width[] = {11,5,11,8,9,10,7,11,9,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t permanent_marker_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
