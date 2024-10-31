// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_16

#include "font.h"
#include "open_sans_hebrew_condensed_16.h"

// '0'
static const uint8_t bitmap_48[] = {224,48,16,16,224,127,192,128,192,127};
// '1'
static const uint8_t bitmap_49[] = {64,32,16,240,0,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {48,16,16,48,224,192,176,152,134,131};
// '3'
static const uint8_t bitmap_51[] = {48,16,16,16,224,192,130,130,197,125};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,224,240,240,0,16,28,19,16,255,255,16};
// '5'
static const uint8_t bitmap_53[] = {240,16,16,16,16,195,130,130,194,126};
// '6'
static const uint8_t bitmap_54[] = {192,112,16,16,16,127,194,131,131,126};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,144,240,16,0,224,60,7,0,0};
// '8'
static const uint8_t bitmap_56[] = {224,16,16,16,240,0,121,135,130,135,249,48};
// '9'
static const uint8_t bitmap_57[] = {224,16,16,48,224,135,132,132,100,63};
// ':'
static const uint8_t bitmap_58[] = {128,128,193,193};

static const uint8_t char_width[] = {5,4,5,5,7,5,5,6,6,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
