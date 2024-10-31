// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font sunshiney_regular_12

#include "font.h"
#include "sunshiney_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,32,48,16,32,224,128};
// '1'
static const uint8_t bitmap_49[] = {64,240};
// '2'
static const uint8_t bitmap_50[] = {32,16,16,224};
// '3'
static const uint8_t bitmap_51[] = {32,16,224,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,224,16,192,48};
// '5'
static const uint8_t bitmap_53[] = {240,16,16,16,0,0};
// '6'
static const uint8_t bitmap_54[] = {192,32,152,136,192,128};
// '7'
static const uint8_t bitmap_55[] = {112,32,16,16,224,32};
// '8'
static const uint8_t bitmap_56[] = {0,192,160,144,144,96};
// '9'
static const uint8_t bitmap_57[] = {192,96,144,80,144,224};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {8,2,4,5,5,6,6,6,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t sunshiney_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
