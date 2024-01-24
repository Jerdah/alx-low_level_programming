#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - funtion that selects the correct function to perform
 * an operation
 * @s: the operation to be performed
 *
 * Return: a pointer to the correct function
 * Else return NULL if s is not one of the defined
 * operators ('+', '-', '*', '/', '%')
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	while (s && ops[i].op != NULL)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		++i;
	}

	return (NULL);
}
