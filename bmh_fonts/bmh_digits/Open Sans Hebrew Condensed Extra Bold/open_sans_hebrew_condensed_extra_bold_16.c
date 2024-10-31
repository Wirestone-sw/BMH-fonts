// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_extra_bold_16

#include "font.h"
#include "open_sans_hebrew_condensed_extra_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,192,192,192,128,0,255,255,195,128,255,255,126};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,192,192,192,1,7,3,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,192,192,192,192,128,129,193,240,125,63,15};
// '3'
static const uint8_t bitmap_51[] = {192,192,192,192,192,128,0,129,24,24,157,255,247,224};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,192,192,0,224,248,254,231,255,255,255,224};
// '5'
static const uint8_t bitmap_53[] = {192,192,192,192,192,192,0,143,31,15,156,252,248,96};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,192,192,192,0,255,255,157,12,252,248,112};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,0,128,240,254,63,7,0};
// '8'
static const uint8_t bitmap_56[] = {128,192,192,192,192,128,0,247,255,63,28,255,247,193};
// '9'
static const uint8_t bitmap_57[] = {128,192,192,192,192,128,0,31,63,57,176,255,255,62};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,12,14,12};

static const uint8_t char_width[] = {7,6,6,7,8,7,7,7,7,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_extra_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
