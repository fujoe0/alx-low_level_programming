#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long int.
 *
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) || started)
		{
			_putchar((n & mask) ? '1' : '0');
			started = 1;
		}
		mask >>= 1;
	}
}

