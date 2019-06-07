/*
  A triangular number can also be represented by
  the following formula.  Write a program that
  generates a table of triangular numbers using the
  preceding formula.  Have the program generate
  every fifth triangular number between 5 and 50.
 */

#include <stdio.h>

int main (void)
{
  int n, max = 50;

  for (n = 5; n <= 50; n += 5)
    {
      printf ("%i\n", n * (n + 1) / 2);
    }

  return 0;

}
