/*
  Prime numbers can also be generated by an algorithm known as the
  Sieve of Erastosthenes.  Write a program that implements this
  algorithm.  have the program find all prime numbers up to n = 150.
  What can you say about this algorithm as compared to the ones used
  in the text for calculating prime numbers?
 */

/* TODO Come back to this exercise.
  This exercise is incomplete.  I am struggling to comprehend the
   algorithm as the text explains it.
 */
#include <stdio.h>

int main (void)
{
  int n = 150;
  int p[n];

  // Step 1: initialize entire array to 0 (for false)
  for ( int index = 0; index < 150; ++index) {
    p[index] = 0;
  }

  // Step 2: set i to 2
  int i = 2;

  // Step 3: if i > n, the algorithm terminates
  while (i < n) {
    if (p[i] == 0) {

      // Step 4: if p[i] is 0, then i is prime
      p[i] = 1;

      // Step 5: For all positive integer values of j,
      // set p to 1
      for ( int j = i * 2; j <= n; j+=i ) {

        //printf ("here");
        p[i * j] = 1;

      }
    }

    ++i;
     
  }

  for ( int index = 0; index < 150; ++index) {
    printf ("%i ", p[index]);
  }

  printf ("\n");

  return 0;
}
