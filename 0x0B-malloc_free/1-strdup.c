#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string
 * @str: the string to be duplicated
 *
 * Return: NULL if string equals NULL,
 * otherwise return a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *strduplicate;
	unsigned int len = 0;
	unsigned int v;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	strduplicate = (char *)malloc((len + 1) * sizeof(char));

	if (strduplicate == NULL)
		return (NULL);

	for (v = 0; v <= len; v++)
		strduplicate[v] = str[v];

	return (strduplicate);
}
