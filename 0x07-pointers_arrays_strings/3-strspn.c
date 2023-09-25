#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @accept: characters to search for in the string.
 * @s: string to be searched.
 *
 * Return: number of bytes in the initial segment of @s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (count);
}
