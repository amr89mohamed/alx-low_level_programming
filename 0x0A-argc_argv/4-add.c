#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
/*
 * this funcation will add +1 argu
 * and if the arguments have a non-
 * digit number it will return 1
*/int main(int argc, char *argv[])
{
int j;
int i;
int chan;
int results = 0;
char *ptr;
int len;
if (argc < 2)
{
printf("0\n");
return (1);
}
for (i = 1; i < argc; i++)
{
ptr = argv[i];
len = strlen(ptr);
for (j = 0; j < len; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
chan = atoi(argv[i]);
results += chan;
}
printf("%d\n", results);
return (0);
}
