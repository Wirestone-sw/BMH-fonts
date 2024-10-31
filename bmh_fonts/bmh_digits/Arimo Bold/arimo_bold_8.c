// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_8

#include "font.h"

#include "arimo_bold_8.h"

// '0'
static const char bitmap_48[] = {120,132,132,120};
// '1'
static const char bitmap_49[] = {136,132,252,128};
// '2'
static const char bitmap_50[] = {136,228,180,136};
// '3'
static const char bitmap_51[] = {72,148,156,104};
// '4'
static const char bitmap_52[] = {96,88,252,64};
// '5'
static const char bitmap_53[] = {88,148,148,100};
// '6'
static const char bitmap_54[] = {120,148,148,96};
// '7'
static const char bitmap_55[] = {4,228,60,4};
// '8'
static const char bitmap_56[] = {104,148,148,104};
// '9'
static const char bitmap_57[] = {24,164,164,120};
// ':'
static const char bitmap_58[] = {144};

static const char char_width[] = {4,4,4,4,4,4,4,4,4,4,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t arimo_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
