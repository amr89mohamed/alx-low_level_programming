#include "main.h"
/*
 * this funcation
 * copy the memory aria
 */char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int u;
for (u = 0; u < n; u++)
{
dest[u] = src[u];
}
return (dest);
}
