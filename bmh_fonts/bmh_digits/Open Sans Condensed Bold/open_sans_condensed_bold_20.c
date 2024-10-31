// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_bold_20

#include "font.h"
#include "open_sans_condensed_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,248,254,255,3,3,255,254,252};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,24,60,28,14,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,6,7,3,3,199,255,254,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,2,135,131,131,199,255,126,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,224,248,62,239,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,248,255,255,195,195,195,131,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,240,252,62,199,195,195,195,128};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,3,3,3,131,243,255,127,15};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,28,126,255,195,195,255,62,28};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,252,254,255,3,3,255,254,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,96,240,240,96};

static const uint8_t char_width[] = {8,7,8,8,10,8,8,8,8,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
