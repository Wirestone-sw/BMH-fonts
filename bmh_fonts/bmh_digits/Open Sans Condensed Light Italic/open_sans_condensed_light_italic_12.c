// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_light_italic_12

#include "font.h"
#include "open_sans_condensed_light_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,64,32,224};
// '1'
static const uint8_t bitmap_49[] = {64,224};
// '2'
static const uint8_t bitmap_50[] = {0,32,32,224};
// '3'
static const uint8_t bitmap_51[] = {32,32,224};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,64,224};
// '5'
static const uint8_t bitmap_53[] = {128,96,32,32};
// '6'
static const uint8_t bitmap_54[] = {128,64,32,32};
// '7'
static const uint8_t bitmap_55[] = {32,32,224,32};
// '8'
static const uint8_t bitmap_56[] = {0,192,32,32,224};
// '9'
static const uint8_t bitmap_57[] = {128,96,32,224};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {4,2,4,3,5,4,4,4,5,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_light_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
