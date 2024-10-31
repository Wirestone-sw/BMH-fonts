// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font walter_turncoat_regular_8

#include "font.h"
#include "walter_turncoat_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {240,8,8,8,144,96};
// '1'
static const uint8_t bitmap_49[] = {16,248};
// '2'
static const uint8_t bitmap_50[] = {16,136,72,48};
// '3'
static const uint8_t bitmap_51[] = {8,40,40,48,192};
// '4'
static const uint8_t bitmap_52[] = {56,64,64,248,64};
// '5'
static const uint8_t bitmap_53[] = {120,40,40,40,192};
// '6'
static const uint8_t bitmap_54[] = {224,48,40,40,32,192};
// '7'
static const uint8_t bitmap_55[] = {8,8,200,40,24};
// '8'
static const uint8_t bitmap_56[] = {192,48,40,40,208};
// '9'
static const uint8_t bitmap_57[] = {48,72,72,200,112};
// ':'
static const uint8_t bitmap_58[] = {64};

static const uint8_t char_width[] = {6,2,4,5,5,5,6,5,5,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t walter_turncoat_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
