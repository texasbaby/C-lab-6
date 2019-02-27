#include "task7.h"

void place(char labyrinth[N][M], int x, int y) // перемещение в ячейку массива с координатами (x,y)
{
    if(labyrinth[x - 1][y] == ' ')
    {
        labyrinth[x][y] = '*';
        place(labyrinth, x - 1, y);
    }
    if(labyrinth[x + 1][y] == ' ')
    {
        labyrinth[x][y] = '*';
        place(labyrinth, x + 1, y);
    }
    if(labyrinth[x][y - 1] == ' ')
    {
        labyrinth[x][y] = '*';
        place(labyrinth, x, y - 1);
    }
    if(labyrinth[x][y + 1] == ' ')
    {
        labyrinth[x][y] = '*';
        place(labyrinth, x, y + 1);
    }
    if(x <= 0 || x >= 28 || y <= 0 || y >= 9)
        return;
}
