// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font luckiest_guy_regular_8

#include "font.h"

#include "luckiest_guy_regular_8.h"

// '0'
static const char bitmap_48[] = {28,62,35,62,28};
// '1'
static const char bitmap_49[] = {63,63};
// '2'
static const char bitmap_50[] = {51,51,63,54};
// '3'
static const char bitmap_51[] = {51,59,63,62};
// '4'
static const char bitmap_52[] = {14,14,63,63};
// '5'
static const char bitmap_53[] = {62,55,63,59};
// '6'
static const char bitmap_54[] = {28,63,47,59,16};
// '7'
static const char bitmap_55[] = {35,59,63,7};
// '8'
static const char bitmap_56[] = {30,63,43,62};
// '9'
static const char bitmap_57[] = {38,63,59,30};
// ':'
static const char bitmap_58[] = {30,18};

static const char char_width[] = {5,2,4,4,4,4,5,4,4,4,2};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t luckiest_guy_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
