// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font syncopate_bold_16

#include "font.h"
#include "syncopate_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {224,240,248,56,28,12,12,12,28,56,248,3,7,15,14,28,24,24,24,28,14,15};
// '1'
static const uint8_t bitmap_49[] = {28,12,252,252,0,0,31,31};
// '2'
static const uint8_t bitmap_50[] = {24,28,12,12,12,12,12,140,156,248,248,112,24,28,28,28,30,30,31,27,27,25,24,24};
// '3'
static const uint8_t bitmap_51[] = {0,28,12,12,204,204,204,204,204,252,248,56,12,28,24,24,24,24,24,24,28,15,15,7};
// '4'
static const uint8_t bitmap_52[] = {0,128,192,224,112,56,28,252,252,0,7,7,7,7,6,6,6,31,31,6};
// '5'
static const uint8_t bitmap_53[] = {252,252,204,204,204,204,204,204,140,140,0,13,28,24,24,24,24,24,24,29,15,7};
// '6'
static const uint8_t bitmap_54[] = {224,248,220,236,102,102,102,102,102,230,198,3,7,14,12,24,24,24,24,24,28,15};
// '7'
static const uint8_t bitmap_55[] = {12,12,12,12,12,12,204,236,252,124,60,12,0,0,16,24,30,31,15,3,1,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,184,252,230,230,230,230,230,230,230,252,7,15,15,29,24,24,24,24,24,24,29};
// '9'
static const uint8_t bitmap_57[] = {120,252,252,206,134,134,134,134,206,220,248,0,28,25,25,25,25,25,25,13,12,7};
// ':'
static const uint8_t bitmap_58[] = {224,224,224,28,28,28};

static const uint8_t char_width[] = {11,4,12,12,10,11,11,12,11,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t syncopate_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
