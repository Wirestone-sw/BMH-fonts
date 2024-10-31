// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_thin_8

#include "font.h"

#include "roboto_slab_thin_8.h"

// '0'
static const char bitmap_48[] = {248,4,4,252};
// '1'
static const char bitmap_49[] = {4,252};
// '2'
static const char bitmap_50[] = {12,132,100,24};
// '3'
static const char bitmap_51[] = {136,36,36,220};
// '4'
static const char bitmap_52[] = {192,176,140,240};
// '5'
static const char bitmap_53[] = {172,20,20,228};
// '6'
static const char bitmap_54[] = {248,20,20,228};
// '7'
static const char bitmap_55[] = {4,196,52,12};
// '8'
static const char bitmap_56[] = {216,36,36,220};
// '9'
static const char bitmap_57[] = {56,68,68,252};
// ':'
static const char bitmap_58[] = {16};

static const char char_width[] = {4,2,4,4,4,4,4,4,4,4,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t roboto_slab_thin_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
