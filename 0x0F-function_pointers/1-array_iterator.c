#include "function_pointers.h"
#include <stddef.h>
/*
 *this @array_iterator
 *which use the array argu inside the pointer @action to funcation
 * using the var @i as the base case for the for loop
 * by casting the @size to int data type
 */void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array && size && action)
for (i = 0; i < (int)size; i++)
{
action(array[i]);
}
}
