#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * this funcation
 * should return the address
 * of chartype
 */char *create_array(unsigned int size, char c)
{
char *i;
unsigned int x;
if (size == 0)
{
return (NULL);
}
i = malloc((size) * sizeof(char));
if (i == NULL)
{
return (NULL);
}
x = 0;
while (x < size)
{
i[x] = c;
x++;
}
i[x] = '\0';
return (i);
}
