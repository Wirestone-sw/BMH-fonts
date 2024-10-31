// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font montez_regular_12

#include "font.h"
#include "montez_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,48,24,16,48,192};
// '1'
static const uint8_t bitmap_49[] = {32,16,248,0};
// '2'
static const uint8_t bitmap_50[] = {120,8,8,136,112};
// '3'
static const uint8_t bitmap_51[] = {112,136,8,144,96};
// '4'
static const uint8_t bitmap_52[] = {0,192,56,240,8};
// '5'
static const uint8_t bitmap_53[] = {0,56,40,72,136};
// '6'
static const uint8_t bitmap_54[] = {128,224,80,72,128};
// '7'
static const uint8_t bitmap_55[] = {136,104,24};
// '8'
static const uint8_t bitmap_56[] = {48,72,136,136,120};
// '9'
static const uint8_t bitmap_57[] = {112,136,8,136,248};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {6,4,5,5,5,5,5,3,5,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t montez_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
