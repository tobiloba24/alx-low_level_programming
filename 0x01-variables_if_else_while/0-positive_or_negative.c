#include <stdlib.h>
#include <time.h>
/* more header goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main- the main function
 *
 * Return: should be 0 when succesful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}