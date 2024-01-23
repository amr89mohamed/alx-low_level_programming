#include "main.h"
/*
 * this fun takes 2 args
 * @n is the number to cheack if prime
 * it return 0, if not it return 1
 * @ y is from 2 to n - 1
*/int is_prime_number2(int n, int y)
{
if (y == n)
{
return (1);
}
else if (n % y == 0)
{
return (0);
}
else
return (is_prime_number2(n, y + 1));
}

/*
 * this funcation pass the @n arg to
 * a 2nd funcation to cheack if prime or not
*/int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_number2(n, 2));
}
