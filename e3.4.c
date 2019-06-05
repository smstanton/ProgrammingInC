/*
Write a program that subtracts the value 15 from 87 and
displays the result, together with an appropriate message,
at the terminal
*/

#include <stdio.h>

int main (void)
{
  int value1, value2, sum;
  value1 = 15;
  value2 = 87;
  sum = value2 - value1;

  printf ("%i minus %i equals %i\n", value2, value1, sum);

  return 0;
}
