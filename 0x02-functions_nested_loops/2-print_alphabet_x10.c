#include "2-alphabet_x10.h"
#include "main.h"
/*
 *this a print funcation */ void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
for (c = 'a' ; c <= 'z' ; c++)
_putchar(c);
_putchar('\n');
i++;
}
}
