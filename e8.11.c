/*
  Write a function called arraySum that takes two arguments: an integer
  array, and the number of elements in the array.  Have the function
  return as its result the sum of the elements in the array.
 */

#include <stdio.h>

int arraySum (int numElements, int array[numElements])
{
  int sum = 0;

  for ( int i = 0; i < numElements; ++i) {
    sum += array[i];
  }


  return sum;
}


int main (void)
{

  int array[] = {1, 2, 3, 4, 5};
  int numElements = 5;

  printf ("The sum of each element in the array is %i\n",
          arraySum(numElements, array));

  return 0;
}
