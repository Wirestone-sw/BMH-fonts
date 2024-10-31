// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_light_italic_8

#include "font.h"

#include "open_sans_condensed_light_italic_8.h"

// '0'
static const char bitmap_48[] = {224,16,248};
// '1'
static const char bitmap_49[] = {192,56};
// '2'
static const char bitmap_50[] = {200,56};
// '3'
static const char bitmap_51[] = {8,248};
// '4'
static const char bitmap_52[] = {192,160,248};
// '5'
static const char bitmap_53[] = {32,56,200};
// '6'
static const char bitmap_54[] = {224,48,200};
// '7'
static const char bitmap_55[] = {200,56};
// '8'
static const char bitmap_56[] = {192,56,248};
// '9'
static const char bitmap_57[] = {32,88,248};
// ':'
static const char bitmap_58[] = {128};

static const char char_width[] = {3,2,2,2,3,3,3,2,3,3,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t open_sans_condensed_light_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
