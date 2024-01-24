#include "main.h"

#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: max no. of bytes to use from the second string
 *
 * Return: On success, return a pointer to the character of the new string
 * Else, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, k;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;

	if (s1 != NULL)
	{
		while (s1[len_s1] != '\0')
		{
			len_s1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len_s2] != '\0' && len_s2 < n)
		{
			len_s2++;
		}
	}

	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}

	for (k = 0; k < len_s2; k++)
	{
		result[len_s1 + k] = s2[k];
	}

	result[len_s1 + len_s2] = '\0';

	return (result);
}

