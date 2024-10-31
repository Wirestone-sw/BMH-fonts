// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font chewy_regular_8

#include "font.h"

#include "chewy_regular_8.h"

// '0'
static const char bitmap_48[] = {112,140,132,196,120};
// '1'
static const char bitmap_49[] = {252};
// '2'
static const char bitmap_50[] = {204,236,180,156};
// '3'
static const char bitmap_51[] = {156,148,148,124};
// '4'
static const char bitmap_52[] = {28,16,252,16};
// '5'
static const char bitmap_53[] = {148,148,100};
// '6'
static const char bitmap_54[] = {112,152,148,112};
// '7'
static const char bitmap_55[] = {4,196,116,12};
// '8'
static const char bitmap_56[] = {120,164,180,172,64};
// '9'
static const char bitmap_57[] = {56,164,100,56};
// ':'
static const char bitmap_58[] = {160};

static const char char_width[] = {5,1,4,4,4,3,4,4,5,4,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t chewy_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
