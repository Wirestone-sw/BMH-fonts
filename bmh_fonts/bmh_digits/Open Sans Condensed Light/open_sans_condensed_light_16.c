// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_light_16

#include "font.h"
#include "open_sans_condensed_light_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,128,128,0,255,0,0,0,255};
// '1'
static const uint8_t bitmap_49[] = {0,128,1,255};
// '2'
static const uint8_t bitmap_50[] = {128,128,128,128,0,0,0,192,48,15};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,0,1,16,16,40,231};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,0,128,96,24,6,1,254};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,128,31,16,16,16,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,128,128,254,17,16,16,224};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,0,0,0,192,56,7};
// '8'
static const uint8_t bitmap_56[] = {0,128,128,128,0,207,48,16,48,207};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,128,0,31,32,32,32,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,12};

static const uint8_t char_width[] = {5,2,5,5,6,5,5,6,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_light_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
