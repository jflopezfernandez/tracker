//
// Created by jose on 9/8/17.
//

#ifndef TRACKER_PROGRAM_PROCEDURES_H
#define TRACKER_PROGRAM_PROCEDURES_H

#include <stdio.h>
#include <stdlib.h>

#define OPT_EXIT_PROGRAM 0
#define OPT_COUNTDOWN    1
#define OPT_TIMER        2

#define PRINT_ERROR printf("[ERROR] Could not understand input... \n"); \
                    printf("terminating... \n");                        \
                    system("pause");                                    \
                    system("clear");

#if defined (_WIN32)
#define CLEARSCREEN system("cls")
#else
#define CLEARSCREEN system("clear")
#endif

#define INITIALIZE_TIME_OBJECTS void* timeItem; \
                                int hrs  = 0;   \
                                int mins = 0;   \
                                int secs = 0;

typedef int Int;

void ShowMainMenu();
int getUserInput();
void enterTimeParameters(Int* h, Int* m, Int* s);

#endif //TRACKER_PROGRAM_PROCEDURES_H
