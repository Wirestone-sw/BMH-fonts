// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font chewy_regular_16

#include "font.h"
#include "chewy_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,192,224,224,224,192,192,0,62,255,255,195,129,128,192,225,255,63};
// '1'
static const uint8_t bitmap_49[] = {64,224,224,192,0,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,224,224,224,224,192,192,195,241,249,188,159,143,131};
// '3'
static const uint8_t bitmap_51[] = {192,192,224,96,96,96,224,192,128,152,136,140,140,206,255,123};
// '4'
static const uint8_t bitmap_52[] = {224,224,0,0,224,224,0,0,15,15,14,14,255,255,6,6};
// '5'
static const uint8_t bitmap_53[] = {192,224,224,224,224,96,0,127,255,223,220,252,252,120};
// '6'
static const uint8_t bitmap_54[] = {0,0,192,224,240,112,48,0,0,124,255,255,199,134,134,142,252,120};
// '7'
static const uint8_t bitmap_55[] = {192,192,224,224,224,224,224,224,192,0,0,192,240,248,62,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,224,96,96,224,224,192,0,192,243,255,31,14,14,159,251,249,224};
// '9'
static const uint8_t bitmap_57[] = {128,192,224,96,96,96,224,192,128,7,15,28,152,216,248,124,63,15};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,152,152,152};

static const uint8_t char_width[] = {10,4,8,8,8,7,9,9,10,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t chewy_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
