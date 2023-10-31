#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	int v;

	for (v = 1; v < argc; v++)
	{
		int i, len = strlen(argv[v]);
		int sum = 0;

		for (i = 0; i < len; i++)
		{
			if (!isdigit(argv[v][i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(&argv[v][i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
