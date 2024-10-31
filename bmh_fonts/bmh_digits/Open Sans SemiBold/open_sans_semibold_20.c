// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_semibold_20

#include "font.h"
#include "open_sans_semibold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,240,252,254,7,3,3,3,7,254,252,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,24,28,12,6,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,14,6,3,3,3,3,199,254,124};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,2,6,135,131,131,131,131,199,126,62,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,192,224,56,28,15,255,255,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,255,255,195,195,195,195,195,131,131,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,224,248,124,142,198,195,195,195,195,131,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,195,243,127,31,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,126,254,199,195,131,195,199,126,126,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,248,254,206,7,3,3,3,135,254,252,240};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,32,112,112,32};

static const uint8_t char_width[] = {11,7,9,11,13,10,11,11,11,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_semibold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
