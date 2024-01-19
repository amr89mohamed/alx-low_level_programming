#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * this funcation return @void
 * take two arguments 2d array
 * @grid && int @height
*/void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
