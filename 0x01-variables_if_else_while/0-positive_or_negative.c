#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	  {
	    scanf ("please enter the first number: %d", n);
	    printf("%d is positive\n", n);
	}
	else if (n == 0)
	  {
	    scanf ("please enter the second number: %d", n);
	  printf("%d is zero\n", n);
	    }
	else
	  {
	    scanf ("please enter the thired number: %d", n);
	    printf("%d is negative\n", n);
	  }
	return (0);
}
