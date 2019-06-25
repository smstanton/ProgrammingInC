/*
  You don't need to use an array to generate Fibonacci numbers.
  You can simply use three variables: two to store the previous
  two Fibonacci numbers and one to store the current one.
  Rewrite Program 7.3 so that arrays are not used. Because you're
  no longer using an array, you need to display each Fibonacci
  number as you generate it.
 */

#include <stdio.h>

int main (void)
{
  int   Fibonacci[15], i;
  int   prev1, prev2, current;

  prev1 = 0;   // by definition
  prev2 = 1;   // ditto

  printf ("%i\n", prev1); 
  printf ("%i\n", prev2); 

  for (i = 2; i < 15; ++i) {
    current = prev1 + prev2;
    printf ("%i\n", current);
    prev1 = prev2;
    prev2 = current;
  }

  return 0;
}
