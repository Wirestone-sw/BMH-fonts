// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font maiden_orange_regular_12

#include "font.h"
#include "maiden_orange_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {56,238,1,1,131,124};
// '1'
static const uint8_t bitmap_49[] = {2,254,0};
// '2'
static const uint8_t bitmap_50[] = {7,199,33,49,223};
// '3'
static const uint8_t bitmap_51[] = {3,199,17,17,239,68};
// '4'
static const uint8_t bitmap_52[] = {96,120,78,254,64};
// '5'
static const uint8_t bitmap_53[] = {144,190,18,34,230};
// '6'
static const uint8_t bitmap_54[] = {56,255,25,25,243};
// '7'
static const uint8_t bitmap_55[] = {6,2,194,122,14};
// '8'
static const uint8_t bitmap_56[] = {64,191,17,17,191,228};
// '9'
static const uint8_t bitmap_57[] = {76,155,49,17,254};
// ':'
static const uint8_t bitmap_58[] = {48};

static const uint8_t char_width[] = {6,3,5,6,5,5,5,5,6,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t maiden_orange_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
