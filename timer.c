//
// Created by jose on 9/8/17.
//

#include <pthread.h>

#include "includes/timer.h"

TimeH createNewTimer(Int h, Int m, Int s) {
  TimeH newTimer = (TimeH) malloc(sizeof (Time));

  setTimerValues(newTimer,h,m,s);

  return (newTimer);
}

void setTimerValues(TimeH timer, Int h, Int m, Int s) {

  if ((h < 0) || (m < 0) || (s < 0)) {
    printf("You cannot have negative time values, please check and resubmit. \n");

    return;
  }

  if (s > 59) {
    timer->seconds = s % 60;
    m += s / 60;
  } else {
    timer->seconds = s;
  }

  if (m > 60) {
    timer->minutes = m % 60;
    h += m / 60;
  } else {
    timer->minutes = m;
  }

  timer->hours = h;
}

void DisplayProgress(TimeH progress) {
  printf("%04i:%02i:%02i\n", progress->hours, progress->minutes, progress->seconds);
}

Status getTimerStatus(TimeH t) {
  if (t->active == true)
    return (true);
  else
    return (false);
}

void PrintTimerStatus(TimeH t) {
  char *stat;

  if (getTimerStatus(t) == true)
    stat = "True";
  else
    stat = "False";

  printf("Timer active: %s\n", stat);
}

void StartTimer(TimeH t) {
  if (t->active) {
    printf("Timer is already running");
  } else {
    t->active = true;

    Tick(t);
  }
}

void Tick(TimeH t) {
  while (t->active) {
    Increment(t);
    system("clear");
    DisplayProgress(t);
    sleep(1);
  }
}

// TODO: Need to create a second thread to handle input checking so user can pause or stop the timer
void Increment(TimeH t) {
  if (t->seconds == 59) {
    if (t->minutes == 59) {
      ++t->hours;

      t->minutes = 0;
      t->seconds = 0;
    } else {
      ++t->minutes;

      t->seconds = 0;
    }
  } else {
    ++t->seconds;
  }
}