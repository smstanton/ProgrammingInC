/*
  Write a function lcm that takes two integer arguments and
  returns their lcm.  The lcm function should calculate the
  least common multiple by calling the gcd function from
  program 8.6 in accordance with the given identity.
 */

#include <stdio.h>

int gcd (int u, int v)
{
  int temp;

  while ( v != 0 ) {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;

}


int lcm (int x, int y)
{
  int lcm = (x * y) / gcd (x, y);

  return lcm;
}

int main (void)
{
  int x, y;

  printf ("Enter an integer value for x: ");
  scanf  ("%i", &x);

  printf ("Enter an integer value for y: ");
  scanf  ("%i", &y);

  printf ("The lcm of %i and %i is %i\n", x, y, lcm(x, y));

  return 0;
}
