//
// Created by jose on 9/8/17.
//

#include "includes/program-procedures.h"


void ShowMainMenu() {
  system("clear");
  printf("\n\t\tTIME TRACKIN APPLICATION 0.0.1\n\n");
  printf("\nPlease select an option: \n");
  printf("\t1. Countdown \n");
  printf("\t2. Timer \n");
  printf("\n");
  printf("\t0. Exit \n");
}

int getUserInput() {
  int userOption = -1;
  printf("Please select an option: ");
  scanf("%i", &userOption);

  return (userOption);
}

void enterTimeParameters(Int* h, Int* m, Int* s) {
  printf("Please enter length of time: (hrs mins secs) ");
  scanf("%i %i %i", h, m, s);
}