#include "variadic_functions.h"

/**
 * print_char - function prints a single character
 * @args: pointer to the variable argument list
 *
 * Return: the number of bytes printed
 */
int print_char(va_list args)
{
	return (printf("%c", va_arg(args, int)));
}

/**
 * print_float - function prints a floating-point number
 * @args: pointer to the variable argument list
 *
 * Return: the number of bytes printed
 */
int print_float(va_list args)
{
	return (printf("%f", va_arg(args, double)));
}

/**
 * print_int - function prints an integer
 * @args: pointer to the variable argument list
 *
 * Return: the number of bytes printed
 */
int print_int(va_list args)
{
	return (printf("%i", va_arg(args, int)));
}

/**
 * print_str - function prints a string
 * @args: pointer to the variable argument list
 *
 * Return: the number of bytes printed
 */
int print_str(va_list args)
{
	const char *str = va_arg(args, const char *);

	if (!str)
		str = "(nil)";
	return (printf("%s", str));
}

/**
 * print_all - functions prints anything
 * @format: string of characters representing the type of each argument
 * @n: no. of arguments that follow the format string in the
 * variable argument list
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				{
					char c = (char) va_arg(args, int);

					printf("%c, ", c);
					break;
				}
			case 'i':
				{
					int n = va_arg(args, int);

					printf("%d, ", n);
					break;
				}
			case 'f':
				{
					double f = va_arg(args, double);

					printf("%f, ", f);
					break;
				}
			case 's':
				{
					char *s = va_arg(args, char *);

					if (!s)
						printf("(nil), ");
					else
						printf("%s, ", s);
					break;
				}
			default:
				break;
		}
		j++;
	}

	va_end(args);
	printf("\n");
}
