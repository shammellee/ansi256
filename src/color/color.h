#ifndef COLOR_H
#define COLOR_H

#define COLOR_BLACK (0)
#define COLOR_WHITE (231)

typedef unsigned int color;

typedef struct _color_range
{
  char *       name;
  color        start;
  color        end;
  unsigned int columns;
} color_range;

void color_range_header_print(color_range * r);
void color_print(color c, color text);

#endif // COLOR_H

