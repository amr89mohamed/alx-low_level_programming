#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/*
 * This the print_numbers funcation
 * do two things
 * first print separator for between two numbers using for loop
 * second print numbers using the viriadic funcations
*/void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
unsigned int num;
va_list inte;
va_start(inte, n);
for (i = 0; i < (int)n; i++)
{
num = va_arg(inte, int);
printf("%d", num);
if (separator != NULL && i < (int)n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}
