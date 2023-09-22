#include "main.h"

/**
 * string_toupper - convert lowercase letters of a string to uppercase
 * @str: pointer string to be converted
 *
 * Return: converted letter or c if conversion was not possible
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
