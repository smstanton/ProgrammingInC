/*
  Write a program that evaluates the following expression
  and displays the results.  Remember to use the exponential
  format to display the result.
 */

#include <stdio.h>

int main (void)
{
  float result;

	result = (3.31e-8 * 2.01e-7) / (7.16e-6 * 2.01e-8);
	printf("result = %e", result);

	return 0;
}
