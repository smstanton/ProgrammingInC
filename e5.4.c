/*
  Write a program to generate and print a table of
  the first 10 factorials
*/

#include <stdio.h>

int main (void)
{

  int max = 10;
  int factorial = 0;

  for (int num = 1; num <= max; num++)
    {
      factorial += num;
      printf ("%2i   %2i\n", num, factorial);
    }
}
