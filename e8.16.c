/*
  Modify Program 8.14 so that the user can convert any number of integers.
  Make provision for the program to terminate when a zero is typed in as
  the value of the number to be converted.
 */

// Program to convert a positive integer to another base

#include <stdio.h>

int       convertedNumber[64];
long int  numberToConvert;
int       base;
int       digit = 0;
int       numberEntered;

void getNumberAndBase (void)
{
  printf ("Number to be converted? ");
  scanf ("%li", &numberToConvert);
  numberEntered = numberToConvert;

  if (numberEntered == 0)
    return;

  printf ("Base? ");
  scanf ("%i", &base);



  if ( base < 2 || base > 16) {
    printf ("Bad base - must be between 2 and 16\n");
    base = 10;
  }
}

void convertNumber (void)
{
  do {
    convertedNumber[digit] = numberToConvert % base;
    ++digit;
    numberToConvert /= base;
  }
  while (numberToConvert != 0);

}

void displayConvertedNumber (void)
{
  const char baseDigits[16] = {
              '0', '1', '2', '3', '4', '5', '6', '7',
              '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int nextDigit;

  printf ("Converted number = ");

  for (--digit; digit >= 0; -- digit ) {
    nextDigit = convertedNumber[digit];
    printf ("%c", baseDigits[nextDigit]);
  }

  printf ("\n");
}

int main (void)
{
  void getNumberAndBase (void), convertNumber (void),
    displayNumber (void);

  
  do {
    getNumberAndBase ();

    if (numberEntered == 0)
      break;

    convertNumber ();
    displayConvertedNumber ();
  }
  while (numberEntered != 0);


  return 0;
}
