#include "main.h"

/**
 * get_endianness - A function that checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *h = (char *) &k;

	return (*h);
}
