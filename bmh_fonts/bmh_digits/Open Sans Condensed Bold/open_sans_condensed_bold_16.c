// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_bold_16

#include "font.h"
#include "open_sans_condensed_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,128,128,128,0,255,255,1,1,255,255};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,6,7,3,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,128,128,0,3,129,225,113,63,15};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,128,0,3,49,49,57,255,207};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,128,128,0,128,240,188,143,255,255,255,128};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,128,128,31,31,25,25,249,241};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,128,128,128,254,255,27,25,249,241};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,1,1,225,253,63,7};
// '8'
static const uint8_t bitmap_56[] = {0,128,128,128,128,0,207,255,49,49,255,207};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,128,128,0,63,127,97,97,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,28,28,8};

static const uint8_t char_width[] = {6,5,6,6,8,6,6,6,6,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
