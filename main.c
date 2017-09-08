/** 10,000 Hour Mastery Tracker
 *
 *  Description: The goal of this application is to help people track their
 *               time on the way to their 10,000 hour mastery goal.
 *
 *  Author: Jose Fernando Lopez Fernandez
 *
 *
 */

#include "includes/main.h"
#include "includes/timer.h"
#include "includes/file-io.h"
#include "includes/countdown.h"
#include "includes/program-procedures.h"

/** pthread minimal working example */
void *inc_x(void *x_void_ptr) {
  /* increment x to 100 */
  int *x_ptr = (int *) x_void_ptr;
  while (++(*x_ptr) < 100);

  printf("x increment finished\n");

  /* The function must return something - NULL is fine */
  return (NULL);
}


int main()
{
  int x = 0, y = 0;
  printf("x: %d, y: %d\n", x, y);

  /* this variable is our reference to the second thread */
  pthread_t inc_x_thread;

  /* create second thread which exectues inc_x(&x) */
  if (pthread_create(&inc_x_thread, NULL, inc_x, &x)) {
    fprintf(stderr, "Error creating thread\n");

    return (EXIT_FAILURE);
  }

  /* incremenent y to 100 in the first thread */
  while (++y < 100);

  printf("y increment finished\n");

  /* wait for the second thread to finish */
  if (pthread_join(inc_x_thread, NULL)) {
    fprintf(stderr, "Error joining thread\n");

    return (EXIT_FAILURE + 1);
  }

  /* show the results - x is now 100 thanks to the second thread */
  printf("x: %d, y: %d\n", x, y);


  /*
  INITIALIZE_TIME_OBJECTS
  ShowMainMenu();
  int userOption = getUserInput();

  switch (userOption) {
    case (OPT_COUNTDOWN):
      enterTimeParameters(&hrs, &mins, &secs);
      timeItem = createNewCountdown(hrs, mins, secs);
      DisplayCountdown(timeItem);

      // TODO: Run countdown

      break;

    case (OPT_TIMER):
      timeItem = createNewTimer(0,0,0);
      DisplayProgress(timeItem);

      // TODO: Run timer and prompt to save to file

      break;

    case (OPT_EXIT_PROGRAM):
      CLEARSCREEN;
      break;

    default:
      PRINT_ERROR
  }
  */
  return (EXIT_SUCCESS);
}