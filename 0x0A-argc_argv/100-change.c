#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * this application will return
 * how many coins needed to
 * give the claint back his change
*/int main(int argc, char *argv[])
{
int courters = 0;
int tenth = 0;
int fiveth = 0;
int onest = 0;
int twond = 0;
int cents;
int tottal;
if (argc == 2)
{
cents = atoi(argv[1]);
while (cents >= 25)
{
courters += 1;
cents =  cents - 25;
}
while (cents >= 10)
{
tenth += 1;
cents = cents - 10;
}
while (cents >= 5)
{
fiveth += 1;
cents =  cents - 5;
}
while (cents >= 2)
{
twond += 1;
cents =  cents - 2;
}
while (cents >= 1)
{
onest += 1;
cents = cents - 1;
}
tottal = courters + tenth + fiveth + twond + onest;
printf("%d\n", tottal);
}
else
{
printf("Error\n");
return (1);
}
if (cents > 0)
{
printf("0\n");
return (1);
}
return (0);
}
