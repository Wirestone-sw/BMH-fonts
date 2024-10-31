// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_light_20

#include "font.h"
#include "open_sans_light_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,224,60,6,3,1,1,1,3,6,124,224};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,12,4,2,241,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,2,2,1,1,1,1,131,230,56};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,2,2,3,129,129,129,129,67,102,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,64,48,8,4,3,255,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,124,71,65,65,65,65,193,129,1,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,240,140,134,66,65,65,65,129,129,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,225,57,15,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,60,98,65,129,129,129,65,98,60,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,120,140,2,1,1,1,1,2,6,252,192};
// ':'
static const uint8_t bitmap_58[] = {0,48};

static const uint8_t char_width[] = {11,5,9,10,13,10,11,11,11,11,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_light_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
