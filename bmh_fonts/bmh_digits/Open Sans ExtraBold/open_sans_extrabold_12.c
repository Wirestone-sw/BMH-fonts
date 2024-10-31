// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_extrabold_12

#include "font.h"
#include "open_sans_extrabold_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,96,96,224,192,0};
// '1'
static const uint8_t bitmap_49[] = {128,192,224,224,224};
// '2'
static const uint8_t bitmap_50[] = {64,192,96,96,96,224,192};
// '3'
static const uint8_t bitmap_51[] = {0,96,96,96,96,224,192};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,224,224,224,0};
// '5'
static const uint8_t bitmap_53[] = {224,224,96,96,96,96};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,96,96,96,96,0};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,224,224,96};
// '8'
static const uint8_t bitmap_56[] = {0,192,224,96,96,224,192,0};
// '9'
static const uint8_t bitmap_57[] = {128,192,224,96,96,224,192,0};
// ':'
static const uint8_t bitmap_58[] = {128,128};

static const uint8_t char_width[] = {8,5,7,7,8,6,8,7,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_extrabold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
