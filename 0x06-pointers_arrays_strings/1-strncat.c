#include "main.h"

/**
 * _strncat - concatenates destination and source strings but uses n bytes
 * 	from source string; source string doesn't need to be null-terminated
 * 	if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_str_length = 0;
	int src_str_length = 0;

	while (dest[dest_str_length] != '\0')
	{
		dest_str_length++;
	}

	while (src[src_str_length] != '\0' && src_str_length < n)
	{
		dest[dest_str_length] = src[src_str_length];
		dest_str_length++;
		src_str_length++;
	}

	dest[dest_str_length] = '\0';

	return (dest);
}
