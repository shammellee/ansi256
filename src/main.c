#include <stdio.h>   // printf, fprintf(), sprintf(), scanf(), sscanf(), fgets(), stdin, stdout, stderr
#include <stdlib.h>  // General utilities: malloc(), calloc(), realloc(), free(), atoi(), exit(), EXIT_SUCCESS, EXIT_FAILURE

void standard_print();
void intense_print();
void spectrum_print();
void greyscale_print();

void newline() {printf("\n");}

int main()
{
  standard_print();
  newline();
  intense_print();
  newline();
  spectrum_print();
  newline();
  greyscale_print();

  return EXIT_SUCCESS;
}

