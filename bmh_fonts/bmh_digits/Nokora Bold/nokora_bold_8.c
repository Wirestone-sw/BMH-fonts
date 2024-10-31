// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_bold_8

#include "font.h"

#include "nokora_bold_8.h"

// '0'
static const char bitmap_48[] = {120,204,132,248};
// '1'
static const char bitmap_49[] = {8,252};
// '2'
static const char bitmap_50[] = {128,196,164,152};
// '3'
static const char bitmap_51[] = {128,164,180,248};
// '4'
static const char bitmap_52[] = {96,80,252,252};
// '5'
static const char bitmap_53[] = {128,156,148,228};
// '6'
static const char bitmap_54[] = {112,232,148,228};
// '7'
static const char bitmap_55[] = {4,196,116,28};
// '8'
static const char bitmap_56[] = {72,188,180,248};
// '9'
static const char bitmap_57[] = {24,172,164,120};
// ':'
static const char bitmap_58[] = {64,72};

static const char char_width[] = {4,2,4,4,4,4,4,4,4,4,2};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t nokora_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
