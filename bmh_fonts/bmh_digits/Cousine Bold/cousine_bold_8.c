// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_bold_8

#include "font.h"

#include "cousine_bold_8.h"

// '0'
static const char bitmap_48[] = {8,62,42,62};
// '1'
static const char bitmap_49[] = {34,62,32};
// '2'
static const char bitmap_50[] = {32,50,42,38};
// '3'
static const char bitmap_51[] = {34,42,62};
// '4'
static const char bitmap_52[] = {16,28,18,62,16};
// '5'
static const char bitmap_53[] = {46,38,58};
// '6'
static const char bitmap_54[] = {8,62,38,58};
// '7'
static const char bitmap_55[] = {34,26,6};
// '8'
static const char bitmap_56[] = {16,62,42,62};
// '9'
static const char bitmap_57[] = {4,46,42,62};
// ':'
static const char bitmap_58[] = {36};

static const char char_width[] = {4,3,4,3,5,3,4,3,4,4,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t cousine_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
