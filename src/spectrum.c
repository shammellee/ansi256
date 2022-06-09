#include <stdio.h>  // printf, fprintf(), sprintf(), scanf(), sscanf(), fgets(), stdin, stdout, stderr

#include "color/color.h"

static color_range spectrum   = {"Spectrum", 16, 231, 18};
static color       color_text = COLOR_WHITE;

void spectrum_print()
{
  color_range_header_print(&spectrum);

  for(color i = spectrum.start; i < spectrum.end; i += spectrum.columns * 2)
  {
    for(unsigned int j = 0; j < spectrum.columns; j++)
    {
      color c = i + j;

      color_print(c, color_text);

      if(spectrum.columns == spectrum.end - c)
      {
        i          = -2;
        color_text = COLOR_BLACK;
      }
    }

    printf("\n");
  }
}

