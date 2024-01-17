#include "main.h"
#include <stdlib.h>
/*
 * this the create array fancation
 * which intialize char @c to array @s
 * using the size enterd by the user @size
*/char *create_array(unsigned int size, char c)
{
char *s;
int i;
int len;
s = malloc(size * sizeof(char));
if (size == 0 || s == NULL)
{
return (NULL);
}
len = (int)size;
for (i = 0; i < len; i++)
{
s[i] = c;
}
s[i] = '\0';
return (s);
}
