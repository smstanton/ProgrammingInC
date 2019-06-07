/*
  Write a program to generate and display a table of
  n and n squared, for integer values of n ranging
  from 1 to 10.  Be certain to print appropriate
  column headings.
 */
#include <stdio.h>

int main (void)
{
  printf (" n   n sq\n\n");

  for (int n = 1; n <= 10; n++)
    {
      printf ("%2i   %2i\n", n, n * n);
    }

  return 0;

}
