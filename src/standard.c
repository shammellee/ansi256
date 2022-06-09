#include <stdio.h>  // printf, fprintf(), sprintf(), scanf(), sscanf(), fgets(), stdin, stdout, stderr

#include "color/color.h"

static color_range standard = {"Standard", 0, 7, 8};

void standard_print()
{
  color_range_header_print(&standard);

  for(int i = standard.start; i <= standard.end; i++)
    color_print(i, COLOR_WHITE);

  printf("\n");
}

