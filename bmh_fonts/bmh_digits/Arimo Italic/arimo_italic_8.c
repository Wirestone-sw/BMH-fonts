// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_italic_8

#include "font.h"

#include "arimo_italic_8.h"

// '0'
static const char bitmap_48[] = {112,140,132,124};
// '1'
static const char bitmap_49[] = {128,136,252,128};
// '2'
static const char bitmap_50[] = {204,164,28};
// '3'
static const char bitmap_51[] = {64,132,164,92};
// '4'
static const char bitmap_52[] = {96,80,232,92};
// '5'
static const char bitmap_53[] = {128,156,148,100};
// '6'
static const char bitmap_54[] = {96,152,148,100};
// '7'
static const char bitmap_55[] = {228,20,12};
// '8'
static const char bitmap_56[] = {192,188,164,92};
// '9'
static const char bitmap_57[] = {144,172,164,120};
// ':'
static const char bitmap_58[] = {128,16};

static const char char_width[] = {4,4,3,4,4,4,4,3,4,4,2};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t arimo_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
