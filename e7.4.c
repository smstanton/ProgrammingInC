/*
  Write a program that calculates the average of an array of 10
  floating-point values.
 */

#include <stdio.h>

int main (void)
{
  float total, average, floats[10];

  printf ("Enter 10 floats from which to calculate an average:\n");

  for ( int i = 0; i < 10; ++i) {
    printf ("Enter float: ");
    scanf  ("%f", &floats[i]);
  }

  for ( int i = 0; i < 10; ++i) {
    total += floats[i];
  }

  average = total / 10;

  printf ("The average is: %f\n", average);

  return 0;
}
