#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = (unsigned long int)1 << (bits - 1);
	int leadingZeros = 1;
	
	for (int i = 0; i < bits; i++)
	{
		if ((n & mask) != 0)
		{
			leadingZeros = 0;
			putchar('1');
		}
		else if (!leadingZeros)
		{
			putchar('0');
		}
		
		mask >>= 1;
    }
	
	if (leadingZeros)
	{
		putchar('0');
	}
}

