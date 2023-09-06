#include "main.h"
#include <stdlib.h>
/*
 * this funcation should return
 *  a pointer to a 2 dimensional array of integers
*/int **alloc_grid(int width, int height)
{
int **p, x, y;
p = malloc(sizeof(*p) * height);
if (width <= 0 || height <= 0 || p == 0)
{
return (NULL);
}
else
{
for (x = 0; x < height; x++)
p[x] = malloc(sizeof(**p) * width);
if (p[x] == 0)
{
while (x--)
free(p[x]);
free(p);
return (NULL);
}
for (y = 0; y < width ; y++)
p[x][y] = 0;
}
return (p);
}
