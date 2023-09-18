#include "main.h"

/**
 * _strcpy - copies a string, including the terminating null-byte to the
 * buffer pointed to by dest
 *
 * @dest: the buffer where the string will be copied
 * @src: the string to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int pos = 0;

	if (dest && src)
	{
		while (*(src + len))
			++len;

		if (src + len < dest || dest + len < src)
		{
			do {
				*(dest + pos++) = *src++;
			} while (len--);
		}
	}

	return (dest);
}
