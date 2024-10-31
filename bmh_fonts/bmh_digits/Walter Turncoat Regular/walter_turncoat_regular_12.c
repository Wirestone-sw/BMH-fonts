// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font walter_turncoat_regular_12

#include "font.h"
#include "walter_turncoat_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,32,32,16,32,32,96,128};
// '1'
static const uint8_t bitmap_49[] = {64,32,240};
// '2'
static const uint8_t bitmap_50[] = {32,16,16,16,16,176,96};
// '3'
static const uint8_t bitmap_51[] = {32,32,16,16,32,224,0,0};
// '4'
static const uint8_t bitmap_52[] = {240,0,0,0,240,64,0};
// '5'
static const uint8_t bitmap_53[] = {16,240,144,144,144,144,144,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,32,32,144,16,0,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,16,144,112,16};
// '8'
static const uint8_t bitmap_56[] = {0,128,96,32,16,48,224,192,0};
// '9'
static const uint8_t bitmap_57[] = {192,96,32,16,16,32,96,128};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {9,3,7,8,7,8,9,8,9,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t walter_turncoat_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
