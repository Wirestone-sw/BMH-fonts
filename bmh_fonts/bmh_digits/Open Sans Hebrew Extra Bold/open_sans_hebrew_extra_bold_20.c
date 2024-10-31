// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_extra_bold_20

#include "font.h"
#include "open_sans_hebrew_extra_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,248,252,254,255,15,7,15,255,254,252,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,16,120,120,60,30,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,4,12,30,30,15,15,143,255,255,254,254,56};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,6,30,207,207,199,207,255,255,126,62,8};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,240,252,62,255,255,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,192,255,255,255,207,207,207,207,207,143,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,240,248,252,254,222,207,199,199,199,207,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,207,255,255,255,127,15};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,28,126,254,255,231,199,239,255,126,126,24};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,252,254,254,255,143,15,143,254,254,252,240};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,56,120,120,56};

static const uint8_t char_width[] = {11,9,12,11,13,11,11,11,11,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_extra_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
