/*
  A program to calculate the number of elapsed days between two dates.
 */

/* Note: There is an error in the book for these dates.  The solution
   below was confirmed online with another calculator.
 */

#include <stdio.h>

struct date
{
  int month;
  int day;
  int year;
};


int calculateN (struct date date)
{
  int n;
  int f; // year calc
  int g; // month calc

  if ( date.month <= 2) {
    f = date.year - 1;
  } else {
    f = date.year;
  }

  if ( date.month <= 2 ) {
    g = date.month + 13;
  } else {
    g = date.month + 1;
  }

  n = (1461 * f) / 4 + (153 * g) / 5 + date.day;

  // printf("F = %i\n", f);
  // printf("G = %i\n", g);
  // printf ("Day = %i\n", date.day);
  // printf("N = %i\n\n", n);
                         

  return n;
}

int main (void)
{
  struct date date1 = {8, 8, 2004};
  struct date date2 = {2, 22, 2005};
  int difference = calculateN (date2) - calculateN (date1);

  printf ("The difference is: %i\n", difference);

  return 0;
}
