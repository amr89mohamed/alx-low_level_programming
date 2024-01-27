#include <stdarg.h>
#include "variadic_functions.h"
/*
 * this a varaidic funcation
 * take a varibal number of arguments
 * and sum it all
 * @i is the number of the for loop itrat
 * @s the varibal stor the sum of the argument
 * @x assignd each argument to it
*/int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int s = 0;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
unsigned int x = va_arg(args, unsigned int);
s += x;
}
va_end(args);
return (s);
}
