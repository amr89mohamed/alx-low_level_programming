#include "main.h"
/*
 * this fancation will
 * take a string argument
 * from the main fancation
 * and print it
 * using the recurision method
 * to put it to the std/out
 */void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}

