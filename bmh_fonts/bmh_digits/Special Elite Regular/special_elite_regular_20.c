// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font special_elite_regular_20

#include "font.h"
#include "special_elite_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {192,124,14,2,3,1,3,2,6,30,240,7,62,96,96,192,192,192,160,112,62,15};
// '1'
static const uint8_t bitmap_49[] = {2,2,2,2,3,255,172,0,0,0,0,0,192,192,192,192,192,255,192,192,192,192,192,128};
// '2'
static const uint8_t bitmap_50[] = {48,124,100,6,2,2,2,134,252,56,0,96,248,108,38,34,99,193,193,128,224,96};
// '3'
static const uint8_t bitmap_51[] = {0,15,65,97,113,121,109,71,131,0,28,124,96,96,192,64,96,112,59,31};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,96,24,12,6,255,234,0,0,0,4,15,15,12,12,204,76,204,255,255,204,204,196};
// '5'
static const uint8_t bitmap_53[] = {0,255,113,33,33,35,99,97,128,128,28,60,124,96,96,96,96,48,25,15};
// '6'
static const uint8_t bitmap_54[] = {128,240,12,134,198,194,195,138,158,30,0,7,63,97,192,192,192,192,225,97,63,30};
// '7'
static const uint8_t bitmap_55[] = {24,15,3,1,1,3,3,195,99,27,15,3,0,0,0,0,0,252,63,7,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,124,230,194,131,131,131,194,198,124,0,62,127,113,193,192,192,192,193,97,127,30};
// '9'
static const uint8_t bitmap_57[] = {120,252,134,2,3,3,2,6,236,248,224,16,120,249,227,195,195,97,33,57,15,3};
// ':'
static const uint8_t bitmap_58[] = {32,240,240,240,112,0,56,92,124,124,92,16};

static const uint8_t char_width[] = {11,12,11,10,13,10,11,12,11,11,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t special_elite_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
