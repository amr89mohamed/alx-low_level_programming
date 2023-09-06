#include "main.h"
#include <stdlib.h>
/*
 * this funcation should return
 *  creates an array of chars
 * and initializes it with a specific char.
 */char *create_array(unsigned int size, char c)
{
char *p = malloc(size);
if (size == 0 || p == 0)
return (0);
while (size--)
p[size] = c;
return (p);
}
