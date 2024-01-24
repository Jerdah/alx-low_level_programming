#include "function_pointers.h"

/**
 * print_name - function print a name using the function supplied by the caller
 * @name: name to be printed
 * @f: function to call to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
