// This program generates the first 15 Fibonacci numbers without using arrays

#include <stdio.h>

int main(void) {

  // Declare fibonacci numbers
  unsigned int minus2 = 0;
  unsigned int minus1 = 1;
  unsigned int current = minus2 + minus1;

  // Print the first three Fibonacci numbers
  printf ("The first Fibonacci numbers are:\n");
  printf (" 1:    %d\n",minus2);
  printf (" 2:    %d\n", minus1);
  printf (" 3:    %d\n", current);

  // print the final 12 Fibonacci numbers
  for (int i = 4; i < 16; i++) {
    minus2 = minus1;
    minus1 = current;
    current = minus2 + minus1;
    printf ("%2d:  %3d\n", i, current);
  }
  
  return 0;
}