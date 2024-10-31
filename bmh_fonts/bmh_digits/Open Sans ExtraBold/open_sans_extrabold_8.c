// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_extrabold_8

#include "font.h"
#include "open_sans_extrabold_8.h"

// '0'
static const uint8_t bitmap_48[] = {240,248,8,240};
// '1'
static const uint8_t bitmap_49[] = {48,248,248};
// '2'
static const uint8_t bitmap_50[] = {16,152,88,56};
// '3'
static const uint8_t bitmap_51[] = {120,120,248};
// '4'
static const uint8_t bitmap_52[] = {192,224,248,248,128};
// '5'
static const uint8_t bitmap_53[] = {56,120,248};
// '6'
static const uint8_t bitmap_54[] = {224,240,56,232};
// '7'
static const uint8_t bitmap_55[] = {24,152,248,56};
// '8'
static const uint8_t bitmap_56[] = {144,248,104,248};
// '9'
static const uint8_t bitmap_57[] = {48,120,88,240};
// ':'
static const uint8_t bitmap_58[] = {144,144};

static const uint8_t char_width[] = {4,3,4,3,5,3,4,4,4,4,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_extrabold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
