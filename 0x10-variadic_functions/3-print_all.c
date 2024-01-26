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
 * variable argument list
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	print_fn_t fn_list[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_str},
		{ 0,  NULL}
	};
	char *sep[] = {"", ", "};
	unsigned int bytes = 0, fn_index = 0, format_index = 0;

	va_start(args, format);
	while (format && format[format_index])
	{
		fn_index = 0;
		while (fn_list[fn_index].format)
		{
			if (format[format_index] == fn_list[fn_index].format)
			{
				printf("%s", sep[bytes != 0]);
				bytes += fn_list[fn_index].fn(args);
				break;
			}
			++fn_index;
		}
		++format_index;
	}
	printf("\n");
	va_end(args);
}
