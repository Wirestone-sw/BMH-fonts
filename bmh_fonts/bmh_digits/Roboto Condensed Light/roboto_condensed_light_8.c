// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_light_8

#include "font.h"

#include "roboto_condensed_light_8.h"

// '0'
static const char bitmap_48[] = {248,132,252};
// '1'
static const char bitmap_49[] = {252};
// '2'
static const char bitmap_50[] = {136,196,188,128};
// '3'
static const char bitmap_51[] = {200,164,252};
// '4'
static const char bitmap_52[] = {96,88,252,64};
// '5'
static const char bitmap_53[] = {220,180,64};
// '6'
static const char bitmap_54[] = {248,244};
// '7'
static const char bitmap_55[] = {4,228,28};
// '8'
static const char bitmap_56[] = {248,164,252};
// '9'
static const char bitmap_57[] = {56,196,252};
// ':'
static const char bitmap_58[] = {64};

static const char char_width[] = {3,1,4,3,4,3,2,3,3,3,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t roboto_condensed_light_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
