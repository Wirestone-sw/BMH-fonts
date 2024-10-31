// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_24

#include "font.h"
#include "open_sans_hebrew_condensed_light_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,16,24,8,24,112,192,255,3,0,0,0,0,0,255,3,31,48,32,32,48,28,7};
// '1'
static const uint8_t bitmap_49[] = {192,96,48,248,248,0,0,0,255,255,0,0,0,63,63};
// '2'
static const uint8_t bitmap_50[] = {16,16,24,8,8,24,112,192,0,0,0,0,192,112,30,3,48,56,38,35,32,32,32,32};
// '3'
static const uint8_t bitmap_51[] = {48,16,24,8,8,24,112,192,0,0,16,16,24,40,102,195,48,32,32,32,32,32,24,15};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,224,56,248,0,0,0,192,112,28,3,0,0,255,0,0,2,3,2,2,2,2,2,63,2,2};
// '5'
static const uint8_t bitmap_53[] = {0,248,24,24,24,24,24,0,12,15,8,8,8,24,48,224,48,32,32,32,32,48,24,15};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,16,24,8,24,0,252,255,24,8,8,8,24,224,3,31,48,32,32,32,24,15};
// '7'
static const uint8_t bitmap_55[] = {24,24,24,24,24,24,152,248,24,0,0,0,0,224,60,7,0,0,0,32,56,15,1,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,240,16,8,8,24,48,224,0,129,199,44,24,16,40,102,195,0,15,24,32,32,32,32,48,31,2};
// '9'
static const uint8_t bitmap_57[] = {192,112,16,8,8,16,112,128,15,56,96,64,64,32,16,255,0,32,32,32,48,24,15,1};
// ':'
static const uint8_t bitmap_58[] = {0,0,7,2,56,48};

static const uint8_t char_width[] = {8,5,8,8,10,8,8,9,9,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
