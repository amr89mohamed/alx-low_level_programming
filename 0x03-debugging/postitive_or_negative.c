#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

void positive_or_negative(int i)
/* more headers goes there */
/*
*serves as the starting point for program execution */
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
