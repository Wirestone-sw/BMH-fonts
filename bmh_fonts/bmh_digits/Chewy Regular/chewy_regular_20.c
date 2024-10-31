// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font chewy_regular_20

#include "font.h"
#include "chewy_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,128,128,128,128,0,0,0,0,224,248,254,255,63,15,7,7,7,31,255,254,248};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,128,3,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,192,192,192,192,128,0,0,0,14,15,15,135,195,243,255,63,15,0};
// '3'
static const uint8_t bitmap_51[] = {0,128,192,192,192,192,192,128,0,3,231,227,115,113,249,255,223,143};
// '4'
static const uint8_t bitmap_52[] = {128,192,128,0,0,128,192,192,0,0,0,255,255,255,240,240,255,255,255,112,112,32};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,192,192,192,192,192,192,0,63,127,127,127,49,49,113,241,224,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,192,192,192,0,0,224,248,252,127,127,119,115,241,224,224,128};
// '7'
static const uint8_t bitmap_55[] = {128,128,192,192,192,192,192,192,192,192,128,1,1,1,1,193,241,253,255,63,15,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,128,192,192,192,192,192,128,0,0,0,14,159,255,255,251,241,241,249,255,207,135,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,192,192,192,192,128,128,0,62,127,255,227,225,225,227,255,255,126};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,192,192,192,128};

static const uint8_t char_width[] = {13,4,11,9,11,10,11,11,13,10,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t chewy_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
