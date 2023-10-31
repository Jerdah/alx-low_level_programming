#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * @argc: countof command line arguments
 * @argv: array of argument strings
 *
 * Return: 0 (Success),
 * otherwise return 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int v;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	for (v = 1; v < argc; v++)

	{
		int n = atoi(argv[v]);

		if (n < 0 || !isdigit(argv[v][0]))
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
