// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_20

#include "font.h"
#include "open_sans_hebrew_condensed_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,96,96,96,192,128,255,255,0,0,0,3,255};
// '1'
static const uint8_t bitmap_49[] = {0,128,128,64,224,1,1,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {192,96,96,96,96,192,128,0,0,0,192,112,63,15};
// '3'
static const uint8_t bitmap_51[] = {192,96,96,96,96,192,128,0,48,48,48,56,239,199};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,224,0,0,0,192,112,30,3,0,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,224,96,96,96,96,0,31,31,16,24,16,112,224};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,96,96,96,96,254,255,16,24,24,48,240};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,224,0,0,0,192,248,31,1};
// '8'
static const uint8_t bitmap_56[] = {128,192,96,32,96,192,192,0,135,239,56,48,56,238,199,0};
// '9'
static const uint8_t bitmap_57[] = {128,192,96,96,96,192,128,63,127,96,64,96,155,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,4,14,4};

static const uint8_t char_width[] = {7,5,7,7,9,7,7,7,8,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
