// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_bold_italic_16

#include "font.h"
#include "open_sans_hebrew_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,192,192,192,192,128,254,255,7,1,128,240,255,63};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,192,192,192,7,3,241,255,63,3};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,192,192,192,192,128,128,193,225,112,56,29,15,7};
// '3'
static const uint8_t bitmap_51[] = {0,0,192,192,192,192,192,192,128,128,0,1,24,24,152,252,247,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,192,112,120,108,103,243,255,127,97};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,192,192,192,192,192,192,128,8,31,15,13,156,248,248,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,192,192,192,64,252,255,31,13,12,252,252,112,0};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,128,224,240,124,31,7,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,192,192,192,192,192,192,224,247,31,28,24,252,247,71};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,192,192,192,192,128,31,31,63,48,144,253,255,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,128,6,6,6};

static const uint8_t char_width[] = {8,6,8,9,8,9,9,8,9,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
