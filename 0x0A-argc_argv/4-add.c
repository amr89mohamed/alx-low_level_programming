#include <stdio.h>
#include <stdlib.h>
/*
 * this funcation should returns
 * adds positive numbers.
 */int main(int argc, char *argv[])
{
int m = 0;
char *ch;
while (--argc)
{
for (ch = argv[argc]; *ch; ch++)
if (*ch < '0' || *ch > '9')
return (printf("Error\n"), 1);
m += atoi(argv[argc]);
}
printf("%d\n", m);
return (0);
}
