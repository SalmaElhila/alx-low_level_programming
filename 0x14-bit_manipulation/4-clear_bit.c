#include "main.h"

/**
 * clear_bit - A function that sets the value of a given bit to 0
 * @n: pointer to the number to change; variable 01
 * @index: index of the bit to clear; variable 02
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


