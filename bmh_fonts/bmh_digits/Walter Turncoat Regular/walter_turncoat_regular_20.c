// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font walter_turncoat_regular_20

#include "font.h"
#include "walter_turncoat_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,128,128,128,128,128,0,0,0,0,0,248,254,6,3,1,1,0,1,1,1,3,6,254,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,56,12,7,255,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,128,128,128,128,128,0,0,4,6,3,1,1,0,0,129,193,127,62};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,128,128,128,128,128,0,0,0,0,0,2,3,1,33,96,32,32,113,113,95,206,128,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,255,254,0,0,0,0,0,0,255,255,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,131,195,195,67,67,67,67,195,195,128,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,128,128,128,128,128,128,0,0,0,240,248,238,102,51,49,49,49,48,48,48,96,192,128};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,2,2,2,2,2,194,226,58,30,6};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,128,128,128,128,128,0,0,0,0,0,0,152,254,103,97,97,64,96,97,227,255,158,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,128,128,128,128,128,128,0,0,0,8,126,231,131,129,129,129,128,129,193,195,254,252};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0};

static const uint8_t char_width[] = {14,5,11,13,13,13,14,13,15,13,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t walter_turncoat_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
