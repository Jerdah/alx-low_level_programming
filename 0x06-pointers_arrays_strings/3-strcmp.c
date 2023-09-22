#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a string to compare
 * @s2: the other string to compare
 *
 * Description:
 *- This functions compares two strings s1 and s2.
 *
 * Return: 0 if @s1 is found or matches @s2;
 * else return an integer < 0 if @s1 is found to be < @s2;
 * else return an integer > 0 is @s1 is found to be > @s2
 */
int _strcmp(char *s1, char *s2)
{
	int u = 0;

	while (s1[u] != '\0' && s2[u] != '\0' && s1[u] == s2[u])
	{
		u++;
	}

	return (s1[u] - s2[u]);
}
