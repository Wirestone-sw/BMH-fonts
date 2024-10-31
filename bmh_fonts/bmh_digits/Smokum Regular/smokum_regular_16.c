// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font smokum_regular_16

#include "font.h"
#include "smokum_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {64,224,96,96,224,31,224,224,224,255};
// '1'
static const uint8_t bitmap_49[] = {224,224,224,0,0,128,224,255,224,224};
// '2'
static const uint8_t bitmap_50[] = {224,96,96,96,224,16,232,228,228,243};
// '3'
static const uint8_t bitmap_51[] = {128,96,96,96,224,16,224,228,228,255};
// '4'
static const uint8_t bitmap_52[] = {0,224,224,96,0,11,232,255,232,28};
// '5'
static const uint8_t bitmap_53[] = {128,96,96,96,224,247,226,226,226,252};
// '6'
static const uint8_t bitmap_54[] = {128,96,96,96,224,95,228,226,226,253};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,1,192,48,14,1};
// '8'
static const uint8_t bitmap_56[] = {128,96,96,96,224,59,228,228,228,255};
// '9'
static const uint8_t bitmap_57[] = {192,96,96,96,224,19,228,228,228,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,140,206,132};

static const uint8_t char_width[] = {5,5,5,5,5,5,5,5,5,5,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t smokum_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
