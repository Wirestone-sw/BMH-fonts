// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_semibold_italic_8

#include "font.h"
#include "open_sans_semibold_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {192,48,8,248};
// '1'
static const uint8_t bitmap_49[] = {16,240,8};
// '2'
static const uint8_t bitmap_50[] = {136,72,56};
// '3'
static const uint8_t bitmap_51[] = {8,72,248};
// '4'
static const uint8_t bitmap_52[] = {160,144,248};
// '5'
static const uint8_t bitmap_53[] = {48,40,200};
// '6'
static const uint8_t bitmap_54[] = {192,112,40,200};
// '7'
static const uint8_t bitmap_55[] = {136,72,56,8};
// '8'
static const uint8_t bitmap_56[] = {128,112,72,248};
// '9'
static const uint8_t bitmap_57[] = {112,72,248};
// ':'
static const uint8_t bitmap_58[] = {128,16};

static const uint8_t char_width[] = {4,3,3,3,3,3,4,4,4,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_semibold_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
