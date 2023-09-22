#include "main.h"
#include <stdio.h>

/**
 * print_buffer: prints the content of size bytes of the buffer pointed by b
 * @b: pointer to the buffer
 * @size: size the buffer pointed by b
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int u, v, w;

	if (size <= 0)
		printf("\n");
	else
	{
		for (u = 0; u < size; u += 10)
		{
			printf("%.8x:", u);

			for (v = u; v < u + 10; v++)
			{
				if (v % 2 == 0)
					printf(" ");
				if (v < size)
					printf("%.2x", *(b + v));
				else
					printf("  ");
			}

			printf(" ");

			for (w = u; w < u + 10; w++)
			{
				if (w >= size)
					break;
				if (*(b + w) < 32 || *(b + w) > 126)
					printf("%c", '.');
				else
				{
					printf("%c", *(b + w));
				}
			}

			printf("\n");
		}
	}
}

