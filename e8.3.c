/*
  Modify program 8.8 so that the value of epsilon is passed as an
  argument to the function.  Try experimenting with different values
  of epsilon to see the effect it ha on the value of the square root.
 */

#include <stdio.h>

float absoluteValue (float x)
{
  if ( x < 0 )
    x = -x;
  return (x);
}


// Function to compute the square root of a number

float squareRoot (float x, float epsilon)
{
  // const float  epsilon = .00001;
  float        guess   = 1.0;

  while ( absoluteValue (guess * guess - x ) >= epsilon)
    guess = ( x / guess + guess ) / 2.0;

  return guess;
}

int main (void)
{
  printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, .00001));
  printf ("squareRoot (144.0) = %f\n", squareRoot (144.0, .00001));
  printf ("squareRoot (17.5) = %f\n", squareRoot (17.5, .00001));

  return 0;
}
