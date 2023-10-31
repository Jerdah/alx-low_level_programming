#include "main.h"
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
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
