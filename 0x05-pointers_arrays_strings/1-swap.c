#include "main.h"
#include <stdio.h>
/*
 * this funcation swap two values
 */void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
