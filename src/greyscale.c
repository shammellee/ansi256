#include <stdio.h>  // printf, fprintf(), sprintf(), scanf(), sscanf(), fgets(), stdin, stdout, stderr

#include "color/color.h"

static color_range grey       = {"Greyscale", 232, 255, 12};
static color       color_text = COLOR_WHITE;

void greyscale_print()
{
  color_range_header_print(&grey);

  for(color i = grey.start; i <= grey.end; i++)
  {
    color_print(i, color_text);

    if(grey.columns == grey.end - i)
    {
      color_text = COLOR_BLACK;
      printf("\n");
    }
  }

  printf("\n");
}

