// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font coming_soon_regular_16

#include "font.h"
#include "coming_soon_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,32,96,96,192,128,0,255,0,0,0,0,0,129,126};
// '1'
static const uint8_t bitmap_49[] = {64,224,0,0,1,254};
// '2'
static const uint8_t bitmap_50[] = {128,192,32,32,32,32,64,192,0,128,64,32,16,16,8,7};
// '3'
static const uint8_t bitmap_51[] = {64,64,64,32,32,32,192,96,0,128,0,0,0,6,5,4,8,240};
// '4'
static const uint8_t bitmap_52[] = {128,0,0,0,0,0,224,0,0,0,31,16,16,16,16,31,240,16};
// '5'
static const uint8_t bitmap_53[] = {192,64,64,32,32,64,64,0,0,135,4,4,4,4,4,12,184,64};
// '6'
static const uint8_t bitmap_54[] = {128,64,32,32,32,32,32,64,0,127,132,2,2,2,2,2,134,124};
// '7'
static const uint8_t bitmap_55[] = {64,64,32,32,64,192,0,0,0,240,14,1};
// '8'
static const uint8_t bitmap_56[] = {192,32,32,32,32,32,32,192,0,113,138,4,4,4,4,6,137,240};
// '9'
static const uint8_t bitmap_57[] = {0,192,96,32,32,32,32,96,192,0,3,12,144,16,16,16,16,16,136,127};
// ':'
static const uint8_t bitmap_58[] = {0,8};

static const uint8_t char_width[] = {8,3,8,9,9,9,9,6,9,10,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t coming_soon_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
