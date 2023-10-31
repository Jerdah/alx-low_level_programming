#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 *
 * @ac: argument count.
 * @av: array of strings.
 *
 * Return: NULL If ac is 0 or if av is NULL, return NULL.
 * otherwise, return a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k;
	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}

		total_length++;
	}

	concatenated = (char *)malloc(total_length * sizeof(char) + 1);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}

		concatenated[k] = '\n';
		k++;
	}

	concatenated[k] = '\0';

	return (concatenated);
}
