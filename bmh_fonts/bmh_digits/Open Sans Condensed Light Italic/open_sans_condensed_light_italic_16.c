// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_light_italic_16

#include "font.h"
#include "open_sans_condensed_light_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,0,248,6,1,0,240,15};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,2,225,30,1};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,128,0,128,64,32,24,7};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,0,17,16,40,200,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,128,128,64,48,12,226,31,0};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,128,128,31,16,48,224,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,128,240,46,17,16,224,0};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,0,192,48,12,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,128,128,0,128,64,47,16,48,200,7};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,0,28,35,32,32,249,6};
// ':'
static const uint8_t bitmap_58[] = {0,12};

static const uint8_t char_width[] = {6,4,5,5,7,5,6,5,7,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_light_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
