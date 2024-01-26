#include "variadic_functions.h"

/**
 * print_all - functions prints anything
 * @format: string of characters representing the type of each argument
 *
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);

int i = 0;

while (format[i] != '\0')
{
	switch (format[i])
	{
		case 'c':
			{
				print_char(args);
				break;
			}
		case 'i':
			{
				print_int(args);
				break;
			}
		case 'f':
			{
				print_float(args);
				break;
			}
		case 's':
			{
				print_string(args);
				break;
			}
		default:
			{
				break;
			}
	}

	if (format[i + 1] != '\0')
	{
		printf(", ");
	}
	i++;
}

va_end(args);
printf("\n");
}
