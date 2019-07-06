// Rewriting using global variables instead of arguments

/*
  Write a function called arraySum that takes two arguments: an integer
  array, and the number of elements in the array.  Have the function
  return as its result the sum of the elements in the array.
 */

#include <stdio.h>

int array[5] = {1, 2, 3, 4, 5};
int numElements;

int arraySum ()
{
  int sum = 0;

  for ( int i = 0; i < numElements; ++i) {
    sum += array[i];
  }


  return sum;
}


int main (void)
{

  numElements = 5;

  printf ("The sum of each element in the array is %i\n",
          arraySum());

  return 0;
}
