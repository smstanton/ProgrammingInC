/*
  Write a program that calculates the sum of the digits of an
  integer.  The program should accept any arbitrary integer
  typed in by the user.
 */

#include <stdio.h>

int main (void)
{

  int number, sum = 0, right_digit;

  printf ("Enter an integer: ");
  scanf  ("%i", &number);

  while ( number != 0) {
    right_digit = number % 10;
    sum += right_digit;
    number = number / 10;
  }

  printf ("The sum of each digit in your number is: %i\n", sum);

  return 0;
}
