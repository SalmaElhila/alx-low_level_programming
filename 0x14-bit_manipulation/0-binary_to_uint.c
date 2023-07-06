#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number it is the variable
 *
 * Return: the function returns a printed number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		result = 2 * result + (b[j] - '0');
	}

	return (result);
}
