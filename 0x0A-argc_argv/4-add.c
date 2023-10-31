#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: count of command line arguments
 * @argv: array of argument strings
 *
 * Return: 0 (Success),
 * otherwise return 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *str;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			length = strlen(str);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(str + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
