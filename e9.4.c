/*
  Use functions developed in the previous exercise to develop
  a program that displays the day of the week on which a
  particular date falls.  Make certain that the program displays
  the day of the week in English (such as "Monday").
 */

/*
  Note: The example in the text is incorrect.  Text thinks 8/8/04
  was a Tuesday, when in fact it was a Sunday.
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


int dayOfWeek (int difference)
{
  return (difference - 621049) % 7;
}


int main (void)
{
  struct date date1 = {8, 8, 2004};
  int date1N = calculateN (date1);
  int day = dayOfWeek (date1N);

  printf ("Date's N is: %i\n", date1N);
  printf ("Date falls on a: ");

  /*
   Switch would be better elsewhere, but we haven't learned
   character strings yet
  */

  switch (day)
  {
  case 0:
    printf ("Sunday\n");
    break;
  }

  switch (day)
    {
    case 1:
      printf ("Monday\n");
      break;
    }

  switch (day)
    {
    case 2:
      printf ("Tuesday\n");
      break;
    }

  switch (day)
    {
    case 3:
      printf ("Wednesday\n");
      break;
    }

  switch (day)
    {
    case 4:
      printf ("Thursday\n");
      break;
    }

  switch (day)
    {
    case 5:
      printf ("Friday\n");
      break;
    }

  switch (day)
    {
    case 6:
      printf ("Saturday\n");
      break;
    }


  return 0;
}
