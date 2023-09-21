#include "main.h"

/**
 * _strcat - concatenates the destination string and the source string, and
 *	the result is stored in the destination string.
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_str_length = 0;
	int src_str_length = 0;

	while (dest[dest_str_length] != '\0')
	{
		dest_str_length++;
	}

	do

	{
		dest[dest_str_length] = src[src_str_length];
		dest_str_length++;
		src_str_length++;
	}

	while (src[src_str_length - 1] != '\0');

	if (dest_str_length > 0)
	{
		dest[dest_str_length] = '\0';
	}

	return (dest);
}
