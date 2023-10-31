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
	int j, k, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	k = atoi(argv[2]);
	product = j * k;

	printf("%d\n", product);
	return (0);
}
