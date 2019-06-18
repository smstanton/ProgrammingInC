/*
  Write a program that takes an integer keyed in from the terminal and
  extracts and displays each digit of the integer in English.  So, if
  the user types in 932, the program should display:
  nine three two.
 */

#include <stdio.h>

int main (void)
{

  int numberEntered, numberToPrint, reversedInput = 0;
  int numberOfDigits = 0;

  printf ("Enter an integer: ");
  scanf  (" %i", &numberEntered);

	// Start by reversing the input number
	do {
      reversedInput *= 10;
      reversedInput = reversedInput + numberEntered % 10;
      numberEntered /= 10;
      numberOfDigits++;

  } while (numberEntered != 0);


  do {
    numberToPrint = reversedInput % 10;
    reversedInput /= 10;
    numberOfDigits--;

    switch (numberToPrint)
    {
      case 1:
        printf ("one ");
        break;


      case 2:
        printf ("two ");
        break;


      case 3:
        printf ("three ");
        break;


      case 4:
        printf ("four ");
        break;


      case 5:
        printf ("five ");
        break;


      case 6:
        printf ("six ");
        break;


      case 7:
        printf ("seven ");
        break;


      case 8:
        printf ("eight ");
        break;


      case 9:
        printf ("nine ");
        break;


      case 0:
        printf ("zero ");
        break;

    }

      numberEntered = numberEntered / 10;

  } while (numberOfDigits != 0);

  printf ("\n");

  return 0;

  }
