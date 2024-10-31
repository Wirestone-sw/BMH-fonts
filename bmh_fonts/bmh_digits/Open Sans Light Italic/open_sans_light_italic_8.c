// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_light_italic_8

#include "font.h"
#include "open_sans_light_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {240,8,248};
// '1'
static const uint8_t bitmap_49[] = {240};
// '2'
static const uint8_t bitmap_50[] = {128,72,56};
// '3'
static const uint8_t bitmap_51[] = {72,248};
// '4'
static const uint8_t bitmap_52[] = {192,160,144,248};
// '5'
static const uint8_t bitmap_53[] = {48,40,200};
// '6'
static const uint8_t bitmap_54[] = {240,40,200};
// '7'
static const uint8_t bitmap_55[] = {8,200,56};
// '8'
static const uint8_t bitmap_56[] = {128,112,72,248};
// '9'
static const uint8_t bitmap_57[] = {112,72,248};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {3,1,3,2,4,3,3,3,4,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_light_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
