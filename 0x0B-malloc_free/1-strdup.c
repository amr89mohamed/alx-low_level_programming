#include "main.h"
#include <stdlib.h>
/*
 * this funcation will return
 * returns a pointer to a newly
 * allocated space in memory
 * which contains a copy of the
 * string given as a parameter.
 */char *_strdup(char *str)
{
int x = 0, size = 0;
char *c;
if (str == 0)
return (0);
for (; str[size] != '\0'; size++)
;
c = malloc(size * sizeof(*str) + 1);
if (c == 0)
return (0);
else
{
for (; x < size; x++)
c[x] = str[x];
}
return (c);
}
