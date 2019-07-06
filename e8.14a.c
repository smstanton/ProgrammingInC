// Rewritten using global variables instead of arguments.

/*
  Write a function "prime" that returns 1 if its argument is a
  prime number returns 0 if otherwise.
 */


#include <stdio.h>

int input;

int prime ()
{

  _Bool isPrime = 1;

  if (input <= 1)
    isPrime = 0;  // by definition

  else if (input == 2)
    isPrime = 1;  // by definition

  else {

    for (int i = 2; i < input; ++i) {

      if (input % i == 0) {
        isPrime = 0;
      }
    }

  }
    
  return isPrime;
}

int main (void)
{

  printf ("Enter an integer to test if is prime: ");
  scanf  ("%i", &input);

  printf ("Is %i prime?: %i\n", input, prime());

  return 0;
}
