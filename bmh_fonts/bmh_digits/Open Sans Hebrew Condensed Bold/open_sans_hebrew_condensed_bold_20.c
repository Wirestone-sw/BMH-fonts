// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_bold_20

#include "font.h"
#include "open_sans_hebrew_condensed_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,248,254,255,7,7,255,254,252};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,16,56,28,14,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,6,14,7,7,135,255,254,124};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,6,15,135,135,199,255,126,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,192,240,124,15,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,240,255,255,199,199,199,135,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,240,252,62,206,199,199,199,135};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,7,7,7,7,231,255,255,31};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,60,126,255,195,195,255,126,60};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,252,254,255,7,7,255,254,252};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,56,56,56,48};

static const uint8_t char_width[] = {8,7,8,8,10,8,8,8,8,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
