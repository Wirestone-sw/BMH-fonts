// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font schoolbell_regular_8

#include "font.h"
#include "schoolbell_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,132,248};
// '1'
static const uint8_t bitmap_49[] = {252};
// '2'
static const uint8_t bitmap_50[] = {136,196,164,152};
// '3'
static const uint8_t bitmap_51[] = {132,148,180,72};
// '4'
static const uint8_t bitmap_52[] = {60,32,32,252};
// '5'
static const uint8_t bitmap_53[] = {24,148,164,96};
// '6'
static const uint8_t bitmap_54[] = {224,188,160,64};
// '7'
static const uint8_t bitmap_55[] = {4,68,60,4};
// '8'
static const uint8_t bitmap_56[] = {100,90,86,98};
// '9'
static const uint8_t bitmap_57[] = {16,40,252};
// ':'
static const uint8_t bitmap_58[] = {160};

static const uint8_t char_width[] = {3,1,4,4,4,4,4,4,4,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t schoolbell_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
