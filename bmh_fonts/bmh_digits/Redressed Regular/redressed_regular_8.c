// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font redressed_regular_8

#include "font.h"

#include "redressed_regular_8.h"

// '0'
static const char bitmap_48[] = {48,200,132,132,120};
// '1'
static const char bitmap_49[] = {8,252};
// '2'
static const char bitmap_50[] = {136,132,228,152};
// '3'
static const char bitmap_51[] = {8,36,156,96};
// '4'
static const char bitmap_52[] = {88,64,252};
// '5'
static const char bitmap_53[] = {24,20,164,100};
// '6'
static const char bitmap_54[] = {96,152,152,148,96};
// '7'
static const char bitmap_55[] = {8,228,20,12};
// '8'
static const char bitmap_56[] = {64,184,180,232};
// '9'
static const char bitmap_57[] = {24,164,164,104,16};
// ':'
static const char bitmap_58[] = {80};

static const char char_width[] = {5,2,4,4,3,4,5,4,4,5,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t redressed_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
