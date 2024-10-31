// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_black_8

#include "font.h"

#include "roboto_black_8.h"

// '0'
static const char bitmap_48[] = {120,252,132,248};
// '1'
static const char bitmap_49[] = {8,252};
// '2'
static const char bitmap_50[] = {136,204,164,152};
// '3'
static const char bitmap_51[] = {72,204,164,248};
// '4'
static const char bitmap_52[] = {64,112,76,252};
// '5'
static const char bitmap_53[] = {96,220,148,244};
// '6'
static const char bitmap_54[] = {112,248,148,244};
// '7'
static const char bitmap_55[] = {4,196,116,28};
// '8'
static const char bitmap_56[] = {72,252,164,248};
// '9'
static const char bitmap_57[] = {24,188,164,120};
// ':'
static const char bitmap_58[] = {72,72};

static const char char_width[] = {4,2,4,4,4,4,4,4,4,4,2};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t roboto_black_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
