#include <stdio.h>
#include <stdlib.h>

/**
 * is_numeric - function checks if a string is numeric
 * @str: string to be checked by is_numeric
 *
 * Return: 1 if the string is numeric, 0 otherwise
 *
 */

int is_numeric(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}


/**
 * main - Entry point
 * @argc: No of arguments
 * @argv: array of arguments
 *
 * Return: 0 if the multiplication was performed successfully,
 * Else return 98
 *
 */

int main(int argc, char *argv[])
{
	long num1;
	long num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_numeric(argv[1]) || !is_numeric(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	printf("%ld\n", num1 * num2);

	return (0);
}
