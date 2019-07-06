/*
  Write a function "prime" that returns 1 if its argument is a
  prime number returns 0 if otherwise.
 */


#include <stdio.h>

int prime (int x)
{

  _Bool isPrime = 1;

  if (x <= 1)
    isPrime = 0;  // by definition

  else if (x == 2)
    isPrime = 1;  // by definition

  else {

    for (int i = 2; i < x; ++i) {

      if (x % i == 0) {
        isPrime = 0;
      }
    }

  }
    
  return isPrime;
}

int main (void)
{
  int input;

  printf ("Enter an integer to test if is prime: ");
  scanf  ("%i", &input);

  printf ("Is %i prime?: %i\n", input, prime(input));

  return 0;
}
