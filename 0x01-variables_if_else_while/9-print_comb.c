#include <stdio.h>
/*
 *this the main funcation, main is good*/ int main(void)
{
int d;
for (d = '1' ; d <= '9' ; d++)
{
putchar(d);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
