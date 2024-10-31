// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font calligraffitti_regular_8

#include "font.h"

#include "calligraffitti_regular_8.h"

// '0'
static const char bitmap_48[] = {248,132,124};
// '1'
static const char bitmap_49[] = {192,52,12};
// '2'
static const char bitmap_50[] = {96,88,148,140,64};
// '3'
static const char bitmap_51[] = {64,136,148,84,60};
// '4'
static const char bitmap_52[] = {32,48,236,16,24};
// '5'
static const char bitmap_53[] = {140,139,73,49,1};
// '6'
static const char bitmap_54[] = {248,148,112};
// '7'
static const char bitmap_55[] = {98,26,6,2};
// '8'
static const char bitmap_56[] = {112,76,62,2};
// '9'
static const char bitmap_57[] = {184,164,124};
// ':'
static const char bitmap_58[] = {192};

static const char char_width[] = {3,3,5,5,5,5,3,4,4,3,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t calligraffitti_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
