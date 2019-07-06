/*
  Write a function that raises an integer to a positive integer power.
  Call the function x_to_the_n taking two integer arguments x and n.
  Have the function return a long int, which represents the results of calculating
  x to the n.
 */

#include <stdio.h>

long int x_to_the_n (int x, int n)
{
  long int result = x;

  for ( int i = 1; i < n; ++i)
    result *=x;

  return result;
}

int main (void)
{

  int x = 2;
  int y = 3;

  printf ("%i to the %i = %li\n", x, y, x_to_the_n(x, y));

  return 0;
}
