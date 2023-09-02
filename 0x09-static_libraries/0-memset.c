#include "main.h"
#include <stddef.h>
/*
 * this funcation
 * copy the mem
 */char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
