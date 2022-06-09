#include <stdio.h>  // printf, fprintf(), sprintf(), scanf(), sscanf(), fgets(), stdin, stdout, stderr

#include "color/color.h"

static color_range intense = {"High Intensity", 8, 15, 8};

void intense_print()
{
  color_range_header_print(&intense);

  for(int i = intense.start; i <= intense.end; i++)
    color_print(i, intense.end == i ? COLOR_BLACK : COLOR_WHITE);

  printf("\n");
}

