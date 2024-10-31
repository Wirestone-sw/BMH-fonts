// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font aclonica_regular_16

#include "font.h"
#include "aclonica_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {240,252,252,14,6,2,2,6,254,252,248,3,15,15,28,24,16,16,24,31,15,7};
// '1'
static const uint8_t bitmap_49[] = {12,252,252,252,252,0,48,63,63,63,63,48};
// '2'
static const uint8_t bitmap_50[] = {12,28,14,6,130,130,198,238,254,124,56,28,30,31,27,25,25,25,24,24,24,24};
// '3'
static const uint8_t bitmap_51[] = {0,4,4,14,70,66,66,102,254,252,152,0,4,12,30,28,24,16,16,24,29,31,15,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,240,112,16,0,252,252,252,0,4,7,7,7,4,4,4,63,63,63,4};
// '5'
static const uint8_t bitmap_53[] = {0,192,252,252,252,204,204,204,140,140,12,0,8,24,28,56,48,32,32,48,49,63,31,14};
// '6'
static const uint8_t bitmap_54[] = {240,248,252,78,102,34,34,98,230,206,204,3,15,15,24,16,16,16,24,31,31,15};
// '7'
static const uint8_t bitmap_55[] = {12,12,12,12,12,204,252,252,124,28,0,0,48,60,63,31,7,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {128,156,254,254,70,66,70,230,254,188,136,15,15,31,24,16,16,16,24,31,31,15};
// '9'
static const uint8_t bitmap_57[] = {120,252,254,134,130,2,2,134,254,252,248,8,12,25,17,17,17,25,25,15,15,7};
// ':'
static const uint8_t bitmap_58[] = {192,224,192,48,57,56};

static const uint8_t char_width[] = {11,6,11,12,11,12,11,10,11,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t aclonica_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
