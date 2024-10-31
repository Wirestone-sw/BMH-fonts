// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font creepster_caps_regular_8

#include "font.h"

#include "creepster_caps_regular_8.h"

// '0'
static const char bitmap_48[] = {204,252,16};
// '1'
static const char bitmap_49[] = {136,252};
// '2'
static const char bitmap_50[] = {136,220,188};
// '3'
static const char bitmap_51[] = {68,86,126};
// '4'
static const char bitmap_52[] = {92,252};
// '5'
static const char bitmap_53[] = {188,172,252};
// '6'
static const char bitmap_54[] = {120,236,252};
// '7'
static const char bitmap_55[] = {28,236,28};
// '8'
static const char bitmap_56[] = {92,172,252};
// '9'
static const char bitmap_57[] = {24,188,124};
// ':'
static const char bitmap_58[] = {160};

static const char char_width[] = {3,2,3,3,2,3,3,3,3,3,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t creepster_caps_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
