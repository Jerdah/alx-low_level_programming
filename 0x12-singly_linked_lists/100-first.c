#include <stdio.h>

/**
 * premain - function that prints a string before the main function executes.
 */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
