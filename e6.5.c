/*
  You developed Program 5.9 to reverse the digits of an integer
  typed in from the terminal.  However, this program does not
  function well if you type in a negative number.  Find out what
  happens in such a case and then modify the program so that negative
  numbers are correctly handled.  For example, if the number -8645
  is typed in, the output of the program should be 5468-.
 */

#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int number, right_digit;
  _Bool isNegative = 0;
  printf ("Enter your number.\n");
  scanf ("%i", &number);

  if (number < 0)
    isNegative = 1;

  do {
    right_digit = abs(number) % 10;
    printf ("%i", right_digit);
    number = abs(number) / 10;
  }
  while ( number != 0 );

  if (isNegative == 1)
    printf ("-");

  printf ("\n");

  return 0;
}
