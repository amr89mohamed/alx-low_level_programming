#include <stdio.h>
/*
 * this funcation
 * print the arguments
 * one by one
 * followed by \n
*/int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
