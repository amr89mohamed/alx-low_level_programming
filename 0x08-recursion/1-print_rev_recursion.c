#include "main.h"
/*
 * this funcation
 * will return the text
 * reversed
 * to the std/out
 */void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
