#include "main.h"
/*
 * this funcation will
 * that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
*/void free_grid(int **grid, int height)
{
int x = 0;
for (; x < height ; x++)
free(grid[x]);
free(grid)
}
