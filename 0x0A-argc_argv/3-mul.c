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
int x = 1;
if (argc > 1 || argc < 3)
{
for (i = 1; i < 3; i++)
x *= atoi(argv[i]);
printf("%d\n", x);
}
else
{
printf("error\n");
}
return (1);
}
