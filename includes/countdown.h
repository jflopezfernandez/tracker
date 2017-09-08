//
// Created by jose on 9/8/17.
//

#ifndef TRACKER_COUNTDOWN_H
#define TRACKER_COUNTDOWN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Int;
typedef bool Status;
typedef struct {
  Status active;

  Int hours;
  Int minutes;
  Int seconds;
} Countdown;
typedef Countdown* CountdownH;

CountdownH createNewCountdown(int h, int m, int s);
void setCountdownParameters(CountdownH countdown, int h, int m, int s);

void DisplayCountdown(CountdownH countdown);

#define NEW_COUNTDOWN(t,a,b,c) CountdownH t = createNewCountdown(a,b,c)
#define PRINT_COUNTDOWN(t) DisplayCountdown(t)
#endif //TRACKER_COUNTDOWN_H
