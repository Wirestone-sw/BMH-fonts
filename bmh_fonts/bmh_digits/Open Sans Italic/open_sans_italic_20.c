// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_italic_20

#include "font.h"
#include "open_sans_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,240,124,30,6,3,3,3,7,254,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,8,12,12,198,255,63,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,4,6,3,3,3,131,231,126,24};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,4,134,131,131,131,195,103,62,8};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,192,96,48,28,198,255,31,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,240,255,199,195,195,195,131,3,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,192,240,156,206,198,195,195,131,3,3};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,2,3,3,3,3,195,227,59,15,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,24,126,198,131,131,195,71,62,28};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,240,252,14,7,3,3,3,207,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,96,112,48};

static const uint8_t char_width[] = {11,7,9,9,12,9,11,10,11,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
