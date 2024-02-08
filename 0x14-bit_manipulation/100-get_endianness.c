#include "main.h"

/**
 * get_endianness - function that checks the endianness of the system
 *
 * Return: 0 if big endian,
 * Else return 1 if little endian
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian_check = (char *)&check;

	return (*endian_check);
}
