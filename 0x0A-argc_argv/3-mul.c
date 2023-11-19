#include <stdio.h>
#include <stdlib.h>
/*
 * this funcation
 * will return
 * the result of
 * multiplay two
 *numbers*/int main(int argc, char *argv[])
{
int i;
int x;
if (argc > 2 && argc <= 3)
{
x = 1;
for (i = 1; i < argc; i++)
x *= atoi(argv[i]);
printf("%d\n", x);
}
else
{
printf("Error\n");
}
return (1);
}
