// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font coming_soon_regular_8

#include "font.h"
#include "coming_soon_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {240,8,8,240};
// '1'
static const uint8_t bitmap_49[] = {240};
// '2'
static const uint8_t bitmap_50[] = {132,196,164,156};
// '3'
static const uint8_t bitmap_51[] = {8,8,56,200};
// '4'
static const uint8_t bitmap_52[] = {112,64,64,248};
// '5'
static const uint8_t bitmap_53[] = {184,40,40,232};
// '6'
static const uint8_t bitmap_54[] = {240,40,40,40,192};
// '7'
static const uint8_t bitmap_55[] = {8,248};
// '8'
static const uint8_t bitmap_56[] = {208,40,40,56,192};
// '9'
static const uint8_t bitmap_57[] = {112,72,136,72,240};
// ':'
static const uint8_t bitmap_58[] = {64};

static const uint8_t char_width[] = {4,1,4,4,4,4,5,2,5,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t coming_soon_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
