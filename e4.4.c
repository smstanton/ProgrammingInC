/*
  Write a program that converts 27 from degrees
  Fahrenheit (F) to degrees Celsius (C) using the
  following formula. 
*/

#include <stdio.h>

int main (void)
{
  float fahrenheit = 27;
  float celsius;

  celsius = (fahrenheit - 32) / 1.8;

  printf ("%f Fahrenheit in Celsius = %f\n", fahrenheit, celsius);

  return 0;
}
