#include "main.h"
/*
 * this fancation returns
 * the factorial number
 * for subisfic inputs
 */int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < -1)
{
return (-1);
}
return (n * factorial(n - 1));
}
