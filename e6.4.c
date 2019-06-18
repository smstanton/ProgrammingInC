/*
  Write a program that acts as a simple "printing" calculator.
  The program should allow the user to type in expressions of the form
  number    operator.
  The following operators should be recognized by the program:
  + - * / S E
  (more in the text)
 */

#include <stdio.h>

int main (void)
{

  char operator;
  double numberEntered;
  double total;

  printf ("Acceptable operators are +, -, *, / S (for set), and E (for end)\n");

  while (operator != 'E'){

    printf ("Enter a number with an operator in the format Number Operator, then press enter: ");
    scanf  (" %lf %c", &numberEntered, &operator);

      switch (operator)
        {
      
        case '+':
          total += numberEntered;
          break;

        case '-':
          total -= numberEntered;
          break;

        case '*':
          total *= numberEntered;
          break;

        case '/':
          if ( numberEntered == 0)
            printf ("Division by zero.\n");
          else
          total /= numberEntered;
          break;

        case 'S':
          total = numberEntered;
            break;

        }


    printf ("= %lf\n", total); 

  }

  return 0;
}
