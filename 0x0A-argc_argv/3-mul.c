#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: count of command line arguments
 * @argv: array of argument strings
 *
 * Return: 0 (Success),
 * otherwise return 1(Error)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2);
		int product = n * n2;

		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
