#include <stdio.h>
#include <stdlib.h>
/*
 * this fancation takes
 * two argu from the commend line
 * and return the results of mult
 * if the argu's less than two
 * it will return Error
*/int main(int argc, char *argv[])
{
int oper1, oper2, result;
if (argc < 3)
{
printf("Error\n");
return (1);
}
oper1  = atoi(argv[1]);
oper2  = atoi(argv[2]);
result = oper1 *oper2;
printf("%d\n", result);
return (0);
}
