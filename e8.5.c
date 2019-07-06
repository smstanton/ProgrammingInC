/*
  The criteria uses for termination of the loop in the squareRoot
  function of program 8.8 is not suitable for use when computing
  the square root of very large or very small numbers.  Rather
  than computing the difference between the value of x and the
  value of guess, the program should compare the ratio of the
  two values to 1.  The closer this ration gets to 1, the more
  accurate the approximation of the square root.  Modify program
  8.8 so this new termination criteria is used. 
 */

/*
  TODO This is incomplete, I don't understand what algorithm the
  text is looking for
*/

#include <stdio.h>

float absoluteValue (float x)
{
  if ( x < 0 )
    x = -x;
  return (x);
}


// Function to compute the square root of a number

float squareRoot (float x)
{
  const float  epsilon = .00001;
  float        guess   = 1.0;

  while ( absoluteValue (guess / epsilon ) >= 1) {
    guess = ( guess / guess ) / 2.0;
    printf ("%f\n", guess);
      }

  return guess;
}

int main (void)
{
  printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
  printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
  printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));

  return 0;
}
