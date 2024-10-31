// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_medium_16

#include "font.h"
#include "roboto_medium_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,112,48,48,112,224,192,63,127,224,192,192,224,127,63};
// '1'
static const uint8_t bitmap_49[] = {192,192,96,224,240,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {192,224,48,48,48,112,224,192,192,224,240,216,204,198,195,193};
// '3'
static const uint8_t bitmap_51[] = {192,224,48,48,48,112,224,192,48,112,198,198,198,239,127,56};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,112,240,240,0,48,56,62,51,49,48,255,255,48};
// '5'
static const uint8_t bitmap_53[] = {0,240,240,48,48,48,48,48,48,119,227,195,195,195,126,62};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,112,48,48,0,0,31,127,230,195,195,195,127,60};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,48,176,240,48,0,128,224,120,30,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,112,48,48,112,224,192,56,127,199,198,198,207,127,56};
// '9'
static const uint8_t bitmap_57[] = {192,224,112,48,48,112,224,128,3,7,204,204,236,118,63,15};
// ':'
static const uint8_t bitmap_58[] = {128,128,0,193,193,129};

static const uint8_t char_width[] = {8,5,8,8,9,8,8,8,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_medium_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
