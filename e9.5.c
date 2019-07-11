/*
  Write a function called clockKeeper that takes as its argument a
  dateAndTime structure as defined in this chapter.  The function
  should call the timeUpdate function, and if the time reaches
  midnight, the function should call the dateUpdate function to
  switch over to the next day.  Have the function return the
  updated dateAndTime structure.
 */

#include <stdio.h>
#include <stdbool.h>

struct dateAndTime
{
  int day;
  int month;
  int year;
  int hour;
  int minutes;
  int seconds;
};


struct dateAndTime now, later;


struct dateAndTime timeUpdate (struct dateAndTime current)
{
  ++current.seconds;

  if ( current.seconds == 60) {       // next minute
    current.seconds = 0;
    ++current.minutes;

    if ( current.minutes == 60) {    // next hour
      current.minutes = 0;
      ++current.hour;

      if ( current.hour == 24) {     // midnight
        current.hour = 0;
      }
    }
  }

  return current;
}

// Function to calculate tomorrow's date

struct dateAndTime dateUpdate (struct dateAndTime today)
{
  struct dateAndTime tomorrow;
  int numberOfDays (struct dateAndTime d);

  if (today.day != numberOfDays (today) ) {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  }

  else if ( today.month == 12) {       // end of year
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  }

  else {                               // end of month
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }

  return tomorrow;

}


// Function to find the number of days in a month

int numberOfDays (struct dateAndTime d)
{
  int         days;
  bool        isLeapYear (struct dateAndTime d);
  const int   daysPerMonth[12] =
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  if ( isLeapYear (d) == true && d.month == 2 )
    days = 29;
  else
    days = daysPerMonth[d.month - 1];

  return days;
}


// Function to determine if its a leap year

bool isLeapYear (struct dateAndTime d)
{
  bool leapYearFlag;

  if ( (d.year % 4 == 0 && d.year % 100 != 0) ||
       d.year % 400 == 0)
    leapYearFlag = true;    // It's a leap year
  else
    leapYearFlag = false;   // Not a leap year

  return leapYearFlag;

}

struct dateAndTime clockKeeper (struct dateAndTime current)
{
  struct dateAndTime future = timeUpdate (current);

  if ( future.hour == 0
       && future.minutes == 0
       && future.seconds == 0) {

    // There is probably a better way to do this
    struct dateAndTime tempFuture = dateUpdate (future);
    future.day = tempFuture.day;
    future.month = tempFuture.month;
    future.year = tempFuture.year;

  }

  return future;
}

int main (void)
{
 
  printf ("Enter the date and time (dd:mm:yyyy:hh:mm:ss): ");
  scanf  ("%i:%i:%i:%i:%i:%i",
          &now.day, &now.month, &now.year, &now.hour,
          &now.minutes, &now.seconds);

  later = clockKeeper (now);

  printf ("Updated time is: %i:%i:%i:%.2i:%.2i:%.2i\n", later.day,
          later.month, later.year, later.hour, later.minutes,
          later.seconds );

  return 0;
}

