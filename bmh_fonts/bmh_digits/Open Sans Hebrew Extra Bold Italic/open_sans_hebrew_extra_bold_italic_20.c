// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_extra_bold_italic_20

#include "font.h"
#include "open_sans_hebrew_extra_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,192,248,252,254,126,15,7,255,255,254,252};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,0,48,120,56,60,222,254,255,255,63,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,4,30,30,15,143,207,255,255,254,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,6,14,207,207,199,207,255,127,126,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,224,240,120,220,255,255,255,31,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,224,252,255,255,223,207,207,207,143,15,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,128,240,248,252,190,222,207,239,199,199,15,3};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,14,15,15,15,207,239,255,255,127,63,15,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,16,124,254,255,239,199,239,255,126,62};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,240,252,254,254,159,15,135,255,254,254,252};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,48,120,120,120,16};

static const uint8_t char_width[] = {11,10,10,10,12,11,12,12,11,11,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_extra_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
