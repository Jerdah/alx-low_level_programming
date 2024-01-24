#include "3-calc.h"
#include <stdio.h>

/**
 * main - calculator
 * @argc: size of the argument vector
 * @argv: iargument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
