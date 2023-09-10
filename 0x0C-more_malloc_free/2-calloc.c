#include "main.h"
/*
 * this the _memset funcation
 */char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n--)
*s++ = b;
return (p);
}
/*
 * this funcation should returns
 * allocates memory for an array, using malloc.
*/void *_calloc(unsigned int nmemb, unsigned int size)
{
void *x;
if (size == 0 || nmemb == 0)
return (NULL);
x = malloc(sizeof(int)  * nmemb);
if (x == 0)
return (NULL);
_memset(x, 0, sizeof(int) * nmemb);
return (x);
}