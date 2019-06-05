/*
  Write a program to find the next largest even multiple for
  the following values of i and j.
*/

#include <stdio.h>

int main (void)
{

  int i = 365;
  int j = 7;

  printf ("Next multiple for %i and %i = %i\n",
          i, j, i + j - i % j);

  i = 12258;
  j = 23;

  printf ("Next multiple for %i and %i = %i\n",
          i, j, i + j - i % j);

  i = 996;
  j = 4;

  printf ("Next multiple for %i and %i = %i\n",
          i, j, i + j - i % j);

}
