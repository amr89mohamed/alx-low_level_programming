#include "function_pointers.h"
/*
 * this funcation search for
 * the int inside @array
 * using the funcation pointer @cmp
*/int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && size && cmp)
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
