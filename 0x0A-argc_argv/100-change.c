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
	int num, v, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (v = 0; v < 5 && num >= 0; v++)
	{
		while (num >= coins[v])
		{
			result++;
			num -= coins[v];
		}
	}

	return (0);
}
