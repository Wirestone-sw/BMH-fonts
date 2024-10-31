// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rancho_regular_8

#include "font.h"

#include "rancho_regular_8.h"

// '0'
static const char bitmap_48[] = {120,132,196,56};
// '1'
static const char bitmap_49[] = {252};
// '2'
static const char bitmap_50[] = {204,164,156};
// '3'
static const char bitmap_51[] = {68,148,92,32};
// '4'
static const char bitmap_52[] = {44,252,32};
// '5'
static const char bitmap_53[] = {92,148,84,32};
// '6'
static const char bitmap_54[] = {120,148,148,96};
// '7'
static const char bitmap_55[] = {4,244,12};
// '8'
static const char bitmap_56[] = {108,148,252};
// '9'
static const char bitmap_57[] = {28,164,124};
// ':'
static const char bitmap_58[] = {96};

static const char char_width[] = {4,1,3,4,3,4,4,3,3,3,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t rancho_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
