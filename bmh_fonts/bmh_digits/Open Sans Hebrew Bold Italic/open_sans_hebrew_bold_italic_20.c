// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_bold_italic_20

#include "font.h"
#include "open_sans_hebrew_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,192,248,252,126,15,7,7,143,255,254,252};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,16,56,60,28,238,254,255,63,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,4,14,14,7,7,135,255,255,254,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,2,14,134,135,135,199,239,127,126,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,192,224,240,56,220,255,255,127,3};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,192,252,255,255,199,199,199,135,7,7};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,128,224,248,124,158,206,199,199,199,135,7};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,6,7,7,7,135,231,247,255,63,15,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,124,254,255,199,195,231,127,126,60};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,224,252,254,254,7,7,135,255,254,254,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,48,56,56,56};

static const uint8_t char_width[] = {11,9,10,10,11,10,11,11,11,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
