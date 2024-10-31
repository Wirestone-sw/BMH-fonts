// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_italic_8

#include "font.h"
#include "tinos_bold_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {96,152,136,120};
// '1'
static const uint8_t bitmap_49[] = {200,56};
// '2'
static const uint8_t bitmap_50[] = {200,168,24};
// '3'
static const uint8_t bitmap_51[] = {168,232,88};
// '4'
static const uint8_t bitmap_52[] = {80,248,72};
// '5'
static const uint8_t bitmap_53[] = {128,184,168,72};
// '6'
static const uint8_t bitmap_54[] = {96,176,168,104};
// '7'
static const uint8_t bitmap_55[] = {200,40,24};
// '8'
static const uint8_t bitmap_56[] = {192,184,168,88};
// '9'
static const uint8_t bitmap_57[] = {144,168,232,48};
// ':'
static const uint8_t bitmap_58[] = {128,144};

static const uint8_t char_width[] = {4,2,3,3,3,4,4,3,4,4,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
