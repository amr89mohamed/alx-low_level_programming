#include "main.h"
#include <stdio.h>
/*
 * this funcation print the string reversed
 */void print_rev(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len++;
}
for (i = len - 1 ; i >= 0 ; i--)
{
_putchar(s[i]);
}
}
