// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font unkempt_bold_8

#include "font.h"

#include "unkempt_bold_8.h"

// '0'
static const char bitmap_48[] = {112,136,132,132,120};
// '1'
static const char bitmap_49[] = {4,124};
// '2'
static const char bitmap_50[] = {136,196,164,216};
// '3'
static const char bitmap_51[] = {36,76,76,60};
// '4'
static const char bitmap_52[] = {16,44,252,144};
// '5'
static const char bitmap_53[] = {104,148,148,108};
// '6'
static const char bitmap_54[] = {112,152,148,144,96};
// '7'
static const char bitmap_55[] = {8,132,100,28};
// '8'
static const char bitmap_56[] = {88,168,164,248};
// '9'
static const char bitmap_57[] = {24,164,164,120};
// ':'
static const char bitmap_58[] = {160};

static const char char_width[] = {5,2,4,4,4,4,5,4,4,4,1};

static const char* char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

static const char char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const struct font_t unkempt_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
