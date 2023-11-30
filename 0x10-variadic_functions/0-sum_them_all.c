#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/*
 * this funcation
 * will return the sum
 * of all of the parmeters
 */int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int x, sum = 0;
if (n == 0)
return (0);
va_start(valist, n);
for (x = 0; x < n; x++)
{
sum += va_arg(valist, const unsigned int);
}
va_end(valist);
return (sum);
}
