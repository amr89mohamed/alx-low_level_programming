
#include "main.h"
/*
 * this a funcation decleration
 * which print multible _
 * in one line
 */void print_line(int n)
{
if (n > 0)
{
int i = 0;
while (i < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
