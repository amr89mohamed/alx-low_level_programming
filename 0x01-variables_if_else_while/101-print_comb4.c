#include <stdio.h>
/*
 * This the main fincation
 * will recive nothing
 * have a three varibal
 */int main(void)
{
int i, s, d;
for (i = 0; i <= 8; i++)
{
for (s = i + 1; s <= 9; s++)
{
for (d = s + 1; d < 10; d++)
{
putchar((i % 10) + '0');
putchar((s % 10) + '0');
putchar((d % 10) + '0');
if (i == 7 && s == 8 && d == 9)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
