// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_italic_12

#include "font.h"
#include "tinos_bold_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,48,8,8,248,240};
// '1'
static const uint8_t bitmap_49[] = {0,16,248,120};
// '2'
static const uint8_t bitmap_50[] = {16,8,8,136,248,48};
// '3'
static const uint8_t bitmap_51[] = {16,136,136,200,120,48};
// '4'
static const uint8_t bitmap_52[] = {128,64,32,208,248};
// '5'
static const uint8_t bitmap_53[] = {0,112,72,72,200,136,8};
// '6'
static const uint8_t bitmap_54[] = {0,224,112,72,72,200,24};
// '7'
static const uint8_t bitmap_55[] = {24,8,8,200,104,24};
// '8'
static const uint8_t bitmap_56[] = {0,112,248,136,136,120,48};
// '9'
static const uint8_t bitmap_57[] = {0,240,184,8,8,248,224};
// ':'
static const uint8_t bitmap_58[] = {192,192};

static const uint8_t char_width[] = {7,4,6,6,5,7,7,6,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
