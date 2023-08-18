#include <time.h>
#include <stdio.h>
#include "main.h"
 /*
  *more headers goes there
  *serves as the starting point for program execution
  *this the funcation decleratio */ void positive_or_negative(int i)
{
  /* 
   *this the main funcation */ int main(void)
{
int i;
i = 98;
positive_or_negative(i);
return (0);
}
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
}
