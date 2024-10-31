// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font smokum_regular_20

#include "font.h"
#include "smokum_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,128,128,128,0,255,7,7,7,7,255};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,0,0,7,7,255,0,0};
// '2'
static const uint8_t bitmap_50[] = {128,128,128,128,128,0,15,135,135,71,71,63};
// '3'
static const uint8_t bitmap_51[] = {128,128,128,128,128,0,15,71,71,71,71,191};
// '4'
static const uint8_t bitmap_52[] = {0,128,128,128,128,0,0,224,159,135,255,135,128,192};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,128,127,39,39,39,207};
// '6'
static const uint8_t bitmap_54[] = {128,128,128,128,0,128,255,71,71,71,71,136};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,15,7,7,7,199,63,7};
// '8'
static const uint8_t bitmap_56[] = {0,128,128,128,128,0,255,71,71,71,71,191};
// '9'
static const uint8_t bitmap_57[] = {128,128,128,128,128,0,127,131,131,131,71,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,96,240,112,96};

static const uint8_t char_width[] = {6,5,6,6,7,5,6,7,6,6,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t smokum_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
