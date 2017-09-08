//
// Created by jose on 9/8/17.
//

#ifndef TRACKER_FILE_IO_H
#define TRACKER_FILE_IO_H

#include "timer.h"

void SaveProgress(TimeH t);
void LoadProgress(TimeH t);

static const char* EnterFilename();
static const char* EnterFilepath();

// Friendlier Typedefs and Macros
#define SAVE(t) SaveProgress(t)
#endif //TRACKER_FILE_IO_H
