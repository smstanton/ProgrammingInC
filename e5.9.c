/*
  Re-write programs 5.2 through 5.5, replacing all the uses of the
  for statement by the equivalent while statements.
 */

#include <stdio.h>

int main (void)
{

  // 5.2
  int n, triangularNumber;

  triangularNumber = 0;
  n = 1;

  // for ( n = 1; n <= 200; n = n + 1 )
  //   triangularNumber = triangularNumber + n;

  while (n <= 200) {
    triangularNumber = triangularNumber + n;
    n = n + 1;
  }

  printf ("The 200th triangular number is %i\n", triangularNumber);



  // 5.3

  printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf (" n    Sum from 1 to n\n");
  printf ("---   ---------------\n");

  triangularNumber = 0;
  n = 1;

  // for ( n = 1; n <= 10; ++n) {
  //  triangularNumber += n;
  //  printf (" %2i          %i\n", n, triangularNumber);
  //}

  while (n <= 10) {
    triangularNumber += n;
    printf (" %2i          %i\n", n, triangularNumber);
    ++n;
  }



  // 5.4

  n = 1;
  int number;

  printf ("What triangular number do you want? ");
  scanf ("%i", &number);

  triangularNumber = 0;

  //for ( n = 1; n <= number; ++n )
  //  triangularNumber +=n;

  while (n <= number) {
    triangularNumber +=n;
    n++;
  }

  printf ("Triangular number %i is %i\n", number, triangularNumber);



  // 5.5

  int counter;
  n = 1;

  //for ( counter = 1; counter <= 5; ++counter ) {
  //  printf ("What triangular number do you want? ");
  //  scanf  ("%i", &number);

  //  triangularNumber = 0;

  //  for ( n = 1; n <= number; ++n)
  //    triangularNumber += n;

  //  printf ("Triangular number %i is %i\n\n", number, triangularNumber);
  // }

  while ( counter <= 5) {
    printf ("What triangular number do you want? ");
    scanf  ("%i", &number);

    triangularNumber = 0;

    while ( n <= number)
      {
        triangularNumber += n;
        n++;
      }

    printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    ++counter;
  }



  return 0;
}
