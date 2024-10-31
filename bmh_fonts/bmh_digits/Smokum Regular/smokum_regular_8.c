// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font smokum_regular_8

#include "font.h"

#include "smokum_regular_8.h"

// '0'
static const char bitmap_48[] = {124,68,124};
// '1'
static const char bitmap_49[] = {68,120};
// '2'
static const char bitmap_50[] = {100,124};
// '3'
static const char bitmap_51[] = {100,124};
// '4'
static const char bitmap_52[] = {124,80};
// '5'
static const char bitmap_53[] = {124,116};
// '6'
static const char bitmap_54[] = {124,124};
// '7'
static const char bitmap_55[] = {76,60};
// '8'
static const char bitmap_56[] = {124,84,124};
// '9'
static const char bitmap_57[] = {124,124};
// ':'
static const char bitmap_58[] = {160,176};

static const char char_width[] = {3,2,2,2,2,2,2,2,3,2,2};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t smokum_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
