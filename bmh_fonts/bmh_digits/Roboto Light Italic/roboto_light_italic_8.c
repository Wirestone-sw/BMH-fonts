// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_light_italic_8

#include "font.h"
#include "roboto_light_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {248,136,132,124};
// '1'
static const uint8_t bitmap_49[] = {200,60};
// '2'
static const uint8_t bitmap_50[] = {136,200,164,152};
// '3'
static const uint8_t bitmap_51[] = {200,136,164,92};
// '4'
static const uint8_t bitmap_52[] = {96,80,232,92};
// '5'
static const uint8_t bitmap_53[] = {216,148,100};
// '6'
static const uint8_t bitmap_54[] = {240,168,148,100};
// '7'
static const uint8_t bitmap_55[] = {196,52,12};
// '8'
static const uint8_t bitmap_56[] = {232,152,164,124};
// '9'
static const uint8_t bitmap_57[] = {184,196,56};
// ':'
static const uint8_t bitmap_58[] = {64};

static const uint8_t char_width[] = {4,2,4,4,4,3,4,3,4,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_light_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
