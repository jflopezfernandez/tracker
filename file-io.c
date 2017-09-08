//
// Created by jose on 9/8/17.
//

#include "includes/file-io.h"
#include "includes/timer.h"

void SaveProgress(TimeH t) {
  const char *name = EnterFilename();
  FILE *saveFile = fopen(name, "w+");
  free((void *) name);

  fprintf(saveFile, "%s %s\n%i\n%i\n%i\n\n", __DATE__, __TIME__, t->hours, t->minutes, t->seconds);
  fclose(saveFile);

  printf("\nSuccessfully saved file to disk... \n");
}

// TODO: Implement loading from file
//void LoadProgress(TimeH t) {
//  char buffer[128];
//  printf("Please enter file name: ");
//  scanf("%s", buffer);
//
//  const char *lastSave = getline()
//  t->hours
//}

// TODO: Add confirmation to file name entry dialog
const char* EnterFilename() {
  char *buffer = (char *) malloc (sizeof (char) * 128);

  printf("Please enter a name for the save file: ");
  fgets(buffer, sizeof (buffer) - 1, stdin);

  return (buffer);
}

// TODO: Implement file path entry
//const char* EnterFilePath() {
//  return ("[nothing yet]\n");
//}