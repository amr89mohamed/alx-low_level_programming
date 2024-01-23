#include "main.h"
/*
 * this funcation takes two arguments
 * the first is number @n
 * the secound is the squer_root @q
 * and returns @q as the result
*/int _sqrt_recursion2(int n, int q)
{
if (q * q == n)
{
return (q);
}
else if (q < 0)
{
return (-1);
}
return (_sqrt_recursion2(n, q - 1));
}

/*
 * this funcation cheack if @n
 * has a squer root or not
*/int _sqrt_recursion(int n)
{
return (_sqrt_recursion2(n, n));
}
