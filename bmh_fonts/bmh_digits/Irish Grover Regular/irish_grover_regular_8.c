// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font irish_grover_regular_8

#include "font.h"
#include "irish_grover_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {112,140,132,248};
// '1'
static const uint8_t bitmap_49[] = {136,252};
// '2'
static const uint8_t bitmap_50[] = {156,68,164,220};
// '3'
static const uint8_t bitmap_51[] = {204,164,180,120};
// '4'
static const uint8_t bitmap_52[] = {48,44,252,176};
// '5'
static const uint8_t bitmap_53[] = {92,228,148,108};
// '6'
static const uint8_t bitmap_54[] = {112,232,172,224};
// '7'
static const uint8_t bitmap_55[] = {136,132,244,12};
// '8'
static const uint8_t bitmap_56[] = {208,184,164,252};
// '9'
static const uint8_t bitmap_57[] = {24,172,100,56};
// ':'
static const uint8_t bitmap_58[] = {160};

static const uint8_t char_width[] = {4,2,4,4,4,4,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t irish_grover_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
