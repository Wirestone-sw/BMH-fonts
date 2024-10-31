// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_light_italic_12

#include "font.h"
#include "open_sans_light_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,64,32,32,32,192};
// '1'
static const uint8_t bitmap_49[] = {64,64,224};
// '2'
static const uint8_t bitmap_50[] = {64,32,32,32,192};
// '3'
static const uint8_t bitmap_51[] = {64,32,32,32,192};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,64,224,0};
// '5'
static const uint8_t bitmap_53[] = {192,32,32,32,32};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,32,32,32};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,160,96};
// '8'
static const uint8_t bitmap_56[] = {0,192,32,32,32,192};
// '9'
static const uint8_t bitmap_57[] = {128,64,32,32,32,192};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {6,3,5,5,7,5,6,5,6,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_light_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
