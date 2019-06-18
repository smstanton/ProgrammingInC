/*
Write a program that asks the user to type in two integer values at the terminal.
Test these two numbers to determine if the first is evenly divisible by the
second, and then display an appropriate message at the terminal.
 */

#include <stdio.h>

int main (void)
{

  int valueA, valueB;

  printf ("Enter two integer values to compare, separated by a space:\n");
  scanf  ("%i%i", &valueA, &valueB);

  if (valueA % valueB == 0)
    printf ("The first is evenly divisible by the second.\n");

  else
    printf ("The first is not evenly divisible by the second.\n");

  return 0;
}
