#include <stdio.h>
/*
 * this the main funcation
 * will print numbers
 * two times
 */int main(void)
{
int i, d, s, o;
for (i = 0; i <= 9 ; i++)
{
for (d = i ; d <= 9; d++)
{
for (s = 0; s <= 9; s++)
{
for (o = s + 1; o < 10; o++)
{
if (i == d)
{
putchar ((s % 10) + '0');
putchar ((o % 10) + '0');
putchar(' ');
putchar((i % 10) + '0');
putchar((d % 10) + '0');
if (i == 9 && d == 9 && s == 8 && o == 9)
break;
if (i == 9 && d == 9 && s == 8 && o == 9)
break;
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
