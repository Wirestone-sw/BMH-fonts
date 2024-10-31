// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_light_20

#include "font.h"
#include "open_sans_hebrew_light_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,224,60,2,1,1,1,1,2,6,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,8,12,4,2,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,2,2,1,1,1,1,130,124};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,2,2,129,129,129,129,129,66,126,8};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,64,48,8,6,1,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,252,135,129,129,129,129,129,1,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,128,240,140,130,66,65,65,129,129,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,129,225,25,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,60,66,65,129,129,129,67,38,24};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,120,140,2,1,1,1,1,2,132,248};
// ':'
static const uint8_t bitmap_58[] = {0,48};

static const uint8_t char_width[] = {10,5,8,10,12,9,10,10,10,10,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_light_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
