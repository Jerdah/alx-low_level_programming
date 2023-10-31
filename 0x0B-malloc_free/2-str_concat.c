#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated to @s2
 *
 * Return: NULL if memory allocation fails,
 * or return a pointer to an empty string if @s1 and @s2 are NULL,
 * otherwise return a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0;
	unsigned int v, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (v = 0; v < len1; v++)
		concatenated[v] = s1[v];

	for (k = 0; k < len2; k++)
		concatenated[v + k] = s2[k];

	concatenated[v + k] = '\0';

	return (concatenated);
}
