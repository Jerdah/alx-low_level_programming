#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string
 *
 * Return: result of conversion
 */
int _atoi(char *s)
{
	unsigned int nb = 0;
	int sign = 1;
	int flag = 0;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			if (sign > 0)
			{
				if (INT_MAX / 10 < (int) nb)
					return (INT_MAX);
				nb *= 10;
				if (INT_MAX - (*s - '0') < (int) nb)
					return (INT_MAX);
			}
			else
			{
				if (INT_MIN / 10 < (int) -nb)
					return (INT_MIN);
				nb *= 10;
				if (INT_MIN + (*s - '0') > (int) -nb)
					return (INT_MIN);
			}
			nb += (*s - '0');
		}
		else if (flag)
		{
			break;
		}
		else if (*s == '-')
		{
			sign *= -1;
		}
		++s;
	}

	return (nb * sign);
}

