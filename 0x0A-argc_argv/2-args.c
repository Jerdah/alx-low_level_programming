#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: count of command line arguments
 * @argv: array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
		printf("%s\n", argv[v]);
	}

	return (0);
}
