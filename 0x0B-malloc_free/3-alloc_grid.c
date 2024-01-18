#include "main.h"
#include <stdlib.h>
#include <string.h>
/*
 * thid funcation returns a pointer
 * to a 2d int arr
 * where is @dd is the 2d arr name
*/int **alloc_grid(int width, int height)
{
int j;
int **dd;
if (width <= 0 || height <= 0)
{
return (NULL);
}
dd = malloc(width * (sizeof(int *)));
if (dd == NULL)
{
return (NULL);
}
for (j = 0; j < height; j++)
{
dd[j] = malloc(height * (sizeof(int)));
}
return (dd);
}
