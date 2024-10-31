// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_extra_bold_16

#include "font.h"
#include "open_sans_hebrew_extra_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,192,192,192,192,192,0,255,255,255,128,129,255,255,255};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,192,192,192,192,2,7,3,253,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,128,192,192,192,192,192,192,128,0,129,195,225,240,249,191,159,135};
// '3'
static const uint8_t bitmap_51[] = {192,192,192,192,192,192,192,128,128,153,24,28,189,255,247,227};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,192,0,0,224,248,252,254,231,255,255,255,224,224};
// '5'
static const uint8_t bitmap_53[] = {192,192,192,192,192,192,192,0,159,159,31,29,157,253,249,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,192,192,192,192,192,255,255,255,157,140,252,252,248};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,1,1,193,241,253,127,15,3};
// '8'
static const uint8_t bitmap_56[] = {128,192,192,192,192,192,192,128,227,247,255,28,28,255,247,227};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,192,192,192,192,128,0,6,159,63,63,184,185,255,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,12,30,12};

static const uint8_t char_width[] = {8,7,9,8,10,8,8,8,8,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_extra_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
