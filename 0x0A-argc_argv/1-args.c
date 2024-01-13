#include <stdio.h>
/*
 * this fancation
 * will print the numbar
 * of the arguments passes
 * to the programe from
 * the commend line
 */int main(int argc, char *argv[])
{
if (argv != 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
