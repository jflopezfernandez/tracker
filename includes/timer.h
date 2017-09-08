//
// Created by jose on 9/8/17.
//

#ifndef TRACKER_TIMER_H
#define TRACKER_TIMER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

typedef int Int;
typedef bool Status;
typedef struct {
  Status active;

  Int hours;
  Int minutes;
  Int seconds;
} Time;

typedef Time* TimeH;

TimeH createNewTimer(Int h, Int m, Int s);
void setTimerValues(TimeH timer, Int h, Int m, Int s);
void DisplayProgress(TimeH progress);

Status getTimerStatus(TimeH t);
void PrintTimerStatus(TimeH t);

void StartTimer(TimeH t);
void Tick(TimeH t);

void Increment(TimeH t);

// Friendlier typedefs and macros
typedef TimeH TIMER;
#define NEW_TIMER(t) TIMER t = createNewTimer(0,0,0)
#define SET_TIMER(t,a,b,c) setTimerValues(t,a,b,c)
#define PROGRESS(t) DisplayProgress(t)
#endif //TRACKER_TIMER_H
