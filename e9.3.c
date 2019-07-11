/*
  Write a function elapsed_time that takes as its arguments two time
  structures and returns a time structure that represents the elapsed
  time between the two times. 
 */

#include <stdio.h>

struct time
{
  int hour;
  int minutes;
  int seconds;
};


struct time elapsed_time (struct time time1, struct time time2)
{
  struct time dif;

  int time1InSeconds = (time1.hour * 3600) + (time1.minutes * 60)
    + (time1.seconds);

  int time2InSeconds = (time2.hour * 3600) + (time2.minutes * 60)
    + (time2.seconds);



  // Determine how many seconds have elapsed 
    // printf ("Time1 in seconds: %i \n", time1InSeconds);
    // printf ("Time2 in seconds: %i \n", time2InSeconds);
  int secondsElapsed = time2InSeconds - time1InSeconds;
    // printf ("ATime elapsed in seconds: %i \n", secondsElapsed);

  // Logic for passing midnight
  if ( secondsElapsed < 0) {
    secondsElapsed += 86400;
    printf ("BTime elapsed in seconds: %i \n", secondsElapsed);

  }


  // printf ("CTime elapsed in seconds: %i \n", secondsElapsed);


  // Determine number of hours
  dif.hour = secondsElapsed / 3600;
  secondsElapsed %= 3600;
    // printf ("Dif.hours: %i \n", dif.hour);
    // printf ("secondsElapsed now: %i \n", secondsElapsed);


  // Determine number of minutes
  dif.minutes = secondsElapsed / 60;
  secondsElapsed %= 60;
    // printf ("Dif.minutes: %i \n", dif.minutes);
    // printf ("secondsElapsed now: %i \n", secondsElapsed);


  // Determine number of seconds
  dif.seconds = secondsElapsed;

  return dif;
}


int main (void)
{
  struct time time1 = { 3, 45, 15 };
  struct time time2 = { 9, 44, 3 };
  struct time difference = elapsed_time (time1, time2);

  printf ("The difference is %.2i:%.2i:%.2i\n", difference.hour,
          difference.minutes, difference.seconds);

  return 0;
}
