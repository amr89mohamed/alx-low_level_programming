#include "main.h"
/*
 * this funcayion which will count
 * the factorial for each number
 */int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else  if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
