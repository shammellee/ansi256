#include <stdio.h>   // printf, fprintf(), sprintf(), scanf(), sscanf(), fgets(), stdin, stdout, stderr
#include <stdlib.h>  // General utilities: malloc(), calloc(), realloc(), free(), atoi(), exit(), EXIT_SUCCESS, EXIT_FAILURE
#include <string.h>  // strcmp(), strcpy(), strcat(), memcpy(), memset()

#include "color.h"

void color_range_header_print(color_range * r)
{
  char *    format = "%s [%u-%u]";
  int const size = snprintf(NULL, 0, format, r->name, r->start, r->end) + 1;
  char      heading[size];

  snprintf(heading, sizeof(heading), format, r->name, r->start, r->end);
  printf("\033[48;5;0;38;5;3m %-*s \033[0m\n", (5 * r->columns) - 2, heading);
}

void color_print(color c, color text)
{
  printf("\033[48;5;%um\033[38;5;%um%4d \033[0m", c, text, c);
}

