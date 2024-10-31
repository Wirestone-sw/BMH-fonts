// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font luckiest_guy_regular_12

#include "font.h"
#include "luckiest_guy_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {56,254,255,199,135,255,254,124};
// '1'
static const uint8_t bitmap_49[] = {7,255,255,63};
// '2'
static const uint8_t bitmap_50[] = {130,142,199,254,254,188};
// '3'
static const uint8_t bitmap_51[] = {138,134,183,183,254,254,200};
// '4'
static const uint8_t bitmap_52[] = {56,62,62,240,255,255,48};
// '5'
static const uint8_t bitmap_53[] = {192,223,223,219,251,243,96};
// '6'
static const uint8_t bitmap_54[] = {120,254,255,155,155,251,245};
// '7'
static const uint8_t bitmap_55[] = {7,131,227,251,127,31};
// '8'
static const uint8_t bitmap_56[] = {100,255,255,147,219,255,254};
// '9'
static const uint8_t bitmap_57[] = {12,223,223,211,255,255,126};
// ':'
static const uint8_t bitmap_58[] = {16,184,48};

static const uint8_t char_width[] = {8,4,6,7,7,7,7,6,7,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t luckiest_guy_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
