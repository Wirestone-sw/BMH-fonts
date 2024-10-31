// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_bold_16

#include "font.h"
#include "open_sans_hebrew_condensed_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,192,192,192,128,255,255,0,0,255,255};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,192,192,3,3,1,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,192,192,192,192,192,128,0,129,192,112,60,31,7};
// '3'
static const uint8_t bitmap_51[] = {192,192,192,192,192,128,0,24,24,28,247,227};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,192,0,0,96,120,94,71,255,255,64,64};
// '5'
static const uint8_t bitmap_53[] = {192,192,192,192,192,0,143,15,12,28,248,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,192,192,192,255,255,8,12,252,248};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,0,128,240,254,31,3};
// '8'
static const uint8_t bitmap_56[] = {128,192,192,192,192,128,247,255,28,28,247,231};
// '9'
static const uint8_t bitmap_57[] = {128,192,192,192,192,128,31,63,48,144,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,6,134,6};

static const uint8_t char_width[] = {6,5,7,6,8,6,6,6,6,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
