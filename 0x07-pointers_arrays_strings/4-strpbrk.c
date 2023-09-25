#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to be searched.
 * @accept: pointer to the set of bytes to search for.
 *
 * Return: pointer to the byte in @s that matches one of the bytes in @accept,
 * else NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr_s;
	char *ptr_accept;

	for (ptr_s = s; *ptr_s != '\0'; ptr_s++)
	{
		for (ptr_accept = accept; *ptr_accept != '\0'; ptr_accept++)
		{
			if (*ptr_s == *ptr_accept)
				return (ptr_s);
		}
	}

	return (NULL);
}
