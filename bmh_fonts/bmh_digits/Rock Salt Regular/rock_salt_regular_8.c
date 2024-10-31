// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rock_salt_regular_8

#include "font.h"
#include "rock_salt_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {160,96,96,192};
// '1'
static const uint8_t bitmap_49[] = {224};
// '2'
static const uint8_t bitmap_50[] = {128,64,32,224};
// '3'
static const uint8_t bitmap_51[] = {128,64,32,224};
// '4'
static const uint8_t bitmap_52[] = {128,96,0,192,48};
// '5'
static const uint8_t bitmap_53[] = {192,96,32,32,16,16};
// '6'
static const uint8_t bitmap_54[] = {192,32,16,16};
// '7'
static const uint8_t bitmap_55[] = {64,64,32,32,208,48};
// '8'
static const uint8_t bitmap_56[] = {128,64,32,224,32,48};
// '9'
static const uint8_t bitmap_57[] = {128,128,64,64};
// ':'
static const uint8_t bitmap_58[] = {128,128};

static const uint8_t char_width[] = {4,1,4,4,5,6,4,6,6,4,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rock_salt_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
