#ifndef TASK_7
#define TASK_7

#define MAX_SIZE 256
#define DELAY_SIZE 1

void getLabyrinthSize(FILE *fileName);
void getLabyrinth(FILE *filename);
void printLabyrinth();
void GetRandomCoordinatesToStart(int *X, int *Y);
void place(int x, int y);

#endif