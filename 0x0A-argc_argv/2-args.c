#include <stdio.h>
/*
 * this funcation will return
 *prints all arguments it receives.
*/int main(int argc, char const *argv[])
{
int x = 0;
while (argc--)
{
printf("%s\n", argv[x]);
x++;
}
return (0);
}