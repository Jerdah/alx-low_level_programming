#include "variadic_functions.h"

/**
 * print_strings - function prints strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_liist args;
	unsigned int i;

	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(args);
	printf("\n");
}
