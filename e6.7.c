/*
  Make 6.10 more efficient...
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  int    p, d;
  _Bool  isPrime;

  for ( p = 2; p <= 50; p++ ) {
    isPrime = true;
    //printf ("Checking %i\n", p);

    for ( d = 2; d < p && isPrime; d+=1 ) {

      if ( p % d == 0)
        isPrime = false;

      if (d > 2) // skip all even values of d greater than 2
        d++;
    }

    if ( isPrime != false )
      printf ("%i \n", p);


    if (p > 2)
      p++; // skip all even values of p greater than 2
  }

  printf ("\n");
  return 0;
}
