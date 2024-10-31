// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_bold_12

#include "font.h"
#include "roboto_slab_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,32,96,224,128};
// '1'
static const uint8_t bitmap_49[] = {48,48,240,240};
// '2'
static const uint8_t bitmap_50[] = {128,192,96,32,96,192,128};
// '3'
static const uint8_t bitmap_51[] = {128,192,96,32,96,224,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,224,224,0};
// '5'
static const uint8_t bitmap_53[] = {0,224,96,32,32,96,0};
// '6'
static const uint8_t bitmap_54[] = {192,224,96,32,96,0};
// '7'
static const uint8_t bitmap_55[] = {96,96,32,32,160,224,96};
// '8'
static const uint8_t bitmap_56[] = {0,192,224,32,96,192,128};
// '9'
static const uint8_t bitmap_57[] = {128,192,96,32,96,192,128};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {6,4,7,7,7,7,6,7,7,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
