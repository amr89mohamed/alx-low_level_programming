#include "main.h"
/*
 * this funcation will return
 * allocates memory using
*/void *malloc_checked(unsigned int b)
{
int *x = malloc(b);
if (x == 0)
exit(98);
return (x);
}