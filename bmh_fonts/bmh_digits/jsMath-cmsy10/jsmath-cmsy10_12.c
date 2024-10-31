// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmsy10_12

#include "font.h"
#include "jsmath-cmsy10_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,120};
// '1'
static const uint8_t bitmap_49[] = {192,32,32,96,192,128,64,32};
// '2'
static const uint8_t bitmap_50[] = {192,160,144,144,144,144,144};
// '3'
static const uint8_t bitmap_51[] = {144,144,144,144,144,224,128};
// '4'
static const uint8_t bitmap_52[] = {128,96,24,4,2,12,16,96};
// '5'
static const uint8_t bitmap_53[] = {112,144,16,16,16,16,16,144};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,96,24,6};
// '7'
static const uint8_t bitmap_55[] = {224};
// '8'
static const uint8_t bitmap_56[] = {28,224,32,32,160,112,12};
// '9'
static const uint8_t bitmap_57[] = {68,68,68,68,68,252};
// ':'
static const uint8_t bitmap_58[] = {64,64,64,64,64,64,64,192};

static const uint8_t char_width[] = {3,8,7,7,8,8,6,1,7,6,8};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmsy10_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
