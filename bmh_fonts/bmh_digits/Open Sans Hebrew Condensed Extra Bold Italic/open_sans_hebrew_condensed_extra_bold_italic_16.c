// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_extra_bold_italic_16

#include "font.h"
#include "open_sans_hebrew_condensed_extra_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,192,192,192,192,240,254,255,15,224,255,255,31};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,192,192,192,2,7,251,255,127,3};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,192,192,192,192,192,128,192,225,113,56,31,15,7};
// '3'
static const uint8_t bitmap_51[] = {0,0,192,192,192,192,192,192,128,0,17,24,252,255,247,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,192,224,248,252,239,255,255,255,33};
// '5'
static const uint8_t bitmap_53[] = {0,0,192,192,192,192,192,192,128,28,15,15,253,252,248,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,192,192,192,240,254,255,31,253,252,252,0};
// '7'
static const uint8_t bitmap_55[] = {128,192,192,192,192,192,192,192,128,192,240,124,31,7,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,192,192,192,192,247,255,31,252,255,247,3};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,192,192,192,128,31,63,191,208,255,127,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,12,14,12};

static const uint8_t char_width[] = {8,6,8,8,8,8,8,8,7,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_extra_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
