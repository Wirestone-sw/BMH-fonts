// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_16

#include "font.h"
#include "open_sans_hebrew_condensed_light_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,64,64,64,128,255,0,0,0,255};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,1,0,255};
// '2'
static const uint8_t bitmap_50[] = {64,64,64,64,128,0,192,32,24,7};
// '3'
static const uint8_t bitmap_51[] = {64,64,64,64,128,0,8,8,20,227};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,0,0,64,112,78,65,255,64,64};
// '5'
static const uint8_t bitmap_53[] = {192,64,64,64,0,15,8,8,8,240};
// '6'
static const uint8_t bitmap_54[] = {0,192,64,64,64,255,8,4,8,240};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,64,192,0,0,128,112,14,1};
// '8'
static const uint8_t bitmap_56[] = {128,64,64,64,128,231,24,8,20,227};
// '9'
static const uint8_t bitmap_57[] = {128,64,64,64,128,31,16,16,144,127};
// ':'
static const uint8_t bitmap_58[] = {0,6};

static const uint8_t char_width[] = {5,3,5,5,7,5,5,6,5,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
