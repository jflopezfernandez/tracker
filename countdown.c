//
// Created by jose on 9/8/17.
//

#include "includes/countdown.h"


CountdownH createNewCountdown(int h, int m, int s) {
  CountdownH newCountdown = (CountdownH) malloc(sizeof(Countdown));

  setCountdownParameters(newCountdown,h,m,s);

  return (newCountdown);
}

void setCountdownParameters(CountdownH countdown, int h, int m, int s) {
  if ((s < 0) || (m < 0) || (h < 0)) {
    printf("One of your parameters is negative. Please check and resubmit. \n");

    return;
  }

  if (s > 59) {
    countdown->seconds = s % 60;

    m += s / 60;
  } else {
    countdown->seconds = s;
  }

  if (m > 59) {
    countdown->minutes = m % 60;

    h += m / 60;
  } else {
    countdown->minutes = m;
  }

  countdown->hours = h;
}

void DisplayCountdown(CountdownH countdown) {
  printf("Countdown: %02i:%02i:%02i\n", countdown->hours, countdown->minutes, countdown->seconds);
}