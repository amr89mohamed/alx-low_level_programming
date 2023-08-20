#include "main.h"
#include <stdio.h>
/*
 * this a funcation
 * wich will print numbers
 * from 0 to 14
 * 10 times
 */void more_numbers(void)
{
int i = 0;
int j;
while (i <= 14)
{
j = 0;
while (j <= 10)
_putchar('\n');
j++;
}
_putchar('0' + i);
i++;
}
