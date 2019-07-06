/*
  Write a program to solve a quadratic equation.  The program should
  allow the user to enter the values for a, b, and c.  If the
  discriminant is less than zero, a message should be displayed that
  the roots are imaginary; otherwise, the program should then
  proceed to calculate and display the two roots of the equation.
 */

/*
  TODO This is incomplete.  I got the discriminant part down, as well
  as the overall point of calling functions.  The quadratic equation
  solver, "root", is not complete as I'm not sure how best to
  implement the formula in C. 
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

  while ( absoluteValue (guess * guess - x ) >= epsilon)
    guess = ( x / guess + guess ) / 2.0;

  return guess;
}

int discriminant_is_imaginary (int a, int b, int c)
{
  if (((b * b) - 4 * a * c) < 0)
    return 1;
  else
    return 0;
}

int root (int a, int b, int c)
{
  int root = ((b * -1) + squareRoot((b * b) - 4 * a * c)) / 2 * a;

  return root;
}


int main (void)
{

  int a, b, c;

  printf ("Enter an integer value for a: ");
  scanf  ("%i", &a);

  printf ("Enter an integer value for b: ");
  scanf  ("%i", &b);

  printf ("Enter an integer value for c: ");
  scanf  ("%i", &c);

  if (discriminant_is_imaginary(a, b, c))
    printf ("Roots are imaginary\n");
  else
    printf ("The roots are %i\n", root(a, b, c));
  

  return 0;
}
