// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_20

#include "font.h"
#include "open_sans_hebrew_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,240,252,14,3,3,3,3,6,30,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,8,28,4,6,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,2,6,2,3,3,3,3,198,254,56};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,2,6,131,131,131,131,131,71,126,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,48,28,6,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,255,255,131,195,195,131,131,131,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,192,248,28,134,194,195,195,195,131,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,195,243,63,15};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,62,102,195,131,131,195,67,126,60};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,120,254,6,3,3,3,3,6,222,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,56,56};

static const uint8_t char_width[] = {10,6,10,10,12,9,11,10,10,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
