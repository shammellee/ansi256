#ifndef COLOR_H
#define COLOR_H

#define COLOR_BLACK (0)
#define COLOR_WHITE (231)

typedef unsigned int color;

typedef struct _color Color;
typedef struct _color_rgba ColorRGBA;
typedef struct _color_hsla ColorHSLA;
typedef struct _color_palette ColorPalette;

typedef struct _color_range
{
  char *       name;
  color        start;
  color        end;
  unsigned int columns;
} color_range;

Color color_from_rgb();
void color_to_rgb();
Color color_from_hsl();
void color_to_hsl();
Color color_from_hex();

ColorPalette color_palette_create();
void color_palette_add(Color * c, ColorPalette * const p);
void color_palette_remove(Color * c, ColorPalette * const p);
Color color_palette_pop(ColorPalette * const p);
void color_palette_push(Color const * const c, ColorPalette * const p);
Color color_palette_shift(ColorPalette * const p);
void color_palette_unshift(Color const * const c, ColorPalette * const p);
void color_palette_destroy();



void color_range_header_print(color_range * r);
void color_print(color c, color text);

#endif // COLOR_H

