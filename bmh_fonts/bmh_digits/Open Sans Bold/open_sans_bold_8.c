// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_bold_8

#include "font.h"

#include "open_sans_bold_8.h"

// '0'
static const char bitmap_48[] = {224,184,8,240};
// '1'
static const char bitmap_49[] = {16,248};
// '2'
static const char bitmap_50[] = {136,72,48};
// '3'
static const char bitmap_51[] = {72,104,240};
// '4'
static const char bitmap_52[] = {192,160,152,248};
// '5'
static const char bitmap_53[] = {56,40,200};
// '6'
static const char bitmap_54[] = {224,208,40,232};
// '7'
static const char bitmap_55[] = {8,8,232,56};
// '8'
static const char bitmap_56[] = {144,120,104,240};
// '9'
static const char bitmap_57[] = {48,88,72,240};
// ':'
static const char bitmap_58[] = {144,144};

static const char char_width[] = {4,2,3,3,4,3,4,4,4,4,2};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t open_sans_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
