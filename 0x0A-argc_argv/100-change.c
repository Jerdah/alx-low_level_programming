#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: count of command line arguments
 * @argv: array of argument strings
 *
 * Return: 0 (Success),
 * otherwise, 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int coins[] = {25, 10, 5, 2, 1};
		int coincount = 0;
		int v;

		for (v = 0; v < 5; v++)
	{
		coincount += cents / coins[v];
		cents %= coins[v];
	}

	printf("%d\n", coincount);
	}

	return (0);
}
