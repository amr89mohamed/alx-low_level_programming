#include "main.h"
/*
 * funcation to
 * string to an integer
 */int _atoi(char *s)
{
unsigned int x;
int y;
do {
if (*s == '-')
y *= -1;
else if (*s >= '0' && *s <= '9')
x = (x * 10) + (*s - '0');
else if (x > 0)
break;
} while (*s++);
return (x *y);
}
