#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: count of command line arguments
 * @argv: array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
