#include "function_pointers.h"

/**
 * print_name - function prints a name using the function supplied by the caller
 * @name: name to be printed
 * @f: function to call to print the name
 *
 */
void print_name(char *name, func_type f)
{
	f(name);
}
