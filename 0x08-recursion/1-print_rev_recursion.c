#include "main.h"
/*
 * this funcation to pront
 * reversed
 */ void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
}