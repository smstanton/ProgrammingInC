/*
  Write a program that accepts two integer values typed in by the user.
  Display the result of dividing the first integer by the second, to
  three-decimal-place accuracy.  Remember to have the program check for
  division by zero.
 */

#include <stdio.h>

int main (void)
{

  int valueA, valueB;
  float result;

  printf ("Enter two integer values to divide, separated by a space:\n");
  scanf  ("%i%i", &valueA, &valueB);

  if (valueB == 0)
    printf ("You are not allowed to divide by zero.\n");

  else {
    result = (float)valueA / valueB;
    printf ("%i divided by %i = %.3f.\n", valueA, valueB, result);
  }

  return 0;
}
