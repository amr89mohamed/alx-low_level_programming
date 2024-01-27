#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/*
 * this a functaion will print strings
 * separted by comma for each string
 * do two things
 * first print strings using viraidic funcations
 * second print comma between strings
 * @s is a varibal to store string for each itration
 * @str used in the va_start to store the arguments
*/void print_strings(const char *separator, const unsigned int n, ...)
{
int i;
char *s;
va_list str;
va_start(str, n);
for (i = 0; i < (int)n; i++)
{
s = va_arg(str, char *);
printf("%s", s);
if (separator != NULL && i < (int)n - 1)
{
printf("%s", separator);
}
}
va_end(str);
printf("\n");
}
