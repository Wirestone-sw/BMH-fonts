// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_bold_16

#include "font.h"
#include "open_sans_hebrew_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,192,192,192,192,128,0,255,255,129,0,0,231,255,255};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,192,192,192,2,7,3,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,192,192,192,192,192,192,0,128,193,224,112,56,31,15,7};
// '3'
static const uint8_t bitmap_51[] = {192,192,192,192,192,192,192,0,129,0,24,24,28,247,247,227};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,192,0,96,112,124,110,103,253,255,255,96};
// '5'
static const uint8_t bitmap_53[] = {192,192,192,192,192,192,192,0,143,31,15,12,28,252,248,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,192,192,192,192,0,255,255,153,12,12,156,248,248};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,192,0,0,0,192,240,252,63,7,1};
// '8'
static const uint8_t bitmap_56[] = {128,192,192,192,192,192,192,128,227,247,62,28,28,63,247,227};
// '9'
static const uint8_t bitmap_57[] = {128,192,192,192,192,192,128,0,31,63,56,48,144,217,255,127};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,6,134,6};

static const uint8_t char_width[] = {8,6,8,8,9,8,8,9,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
