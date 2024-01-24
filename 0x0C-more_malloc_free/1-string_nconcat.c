#include "main.h"

#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum no. of bytes to use from the second string
 *
 * Return: On succes, return a pointer to the character of the new string,
 * Else, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	size_t len_s1, len_s2;

	if (!s1 || !s2)
		return (NULL);

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	res = malloc(len_s1 + n + 1);
	if (!res)
		return (NULL);

	memcpy(res, s1, len_s1);
	memcpy(res + len_s1, s2, n);
	res[len_s1 + n] = '\0';

	return (res);
}
