// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_italic_24

#include "font.h"
#include "open_sans_hebrew_condensed_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,192,240,48,24,24,120,240,128,0,248,255,7,0,0,0,192,255,63,1,15,63,56,48,48,56,30,7,1,0,0};
// '1'
static const uint8_t bitmap_49[] = {128,192,96,48,240,248,0,0,224,255,15,0,32,62,63,1,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,48,48,24,24,24,248,240,64,0,0,0,128,224,112,56,15,3,0,60,54,51,49,48,48,48,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,48,16,24,24,24,184,240,64,0,0,0,16,16,56,56,236,199,3,0,48,48,32,48,48,48,28,15,3,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,96,248,248,8,128,192,112,24,14,3,193,254,31,1,0,3,3,3,3,3,59,63,3,3,3,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,248,24,24,24,24,24,24,0,0,30,31,8,24,24,248,240,0,0,48,48,48,48,48,24,28,15,3,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,224,112,48,24,24,24,24,0,248,254,23,8,8,12,248,248,0,0,7,63,56,48,48,48,28,15,3,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,32,24,24,24,24,24,152,248,120,24,0,0,0,0,128,224,120,30,7,1,0,0,32,48,60,15,3,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,224,112,16,24,24,24,240,224,192,227,47,60,24,56,236,198,3,0,63,48,32,48,48,24,15,7,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,224,112,48,24,24,120,240,28,63,115,96,96,32,208,255,31,48,48,48,48,28,14,3,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,7,7,2,48,56,56,0,0,0};

static const uint8_t char_width[] = {11,6,10,11,11,11,11,12,10,9,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
