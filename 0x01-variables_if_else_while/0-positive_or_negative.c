#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: n equals a positive, zero or negative number at any one time
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*my code starts here*/

	if (n > 0)
		printf("%t is positive\n", n);
	else if (n == 0)
		printf("%t is zero\n", n);
	else
		printf("%t is negative\n", n);

	return (0);
}

