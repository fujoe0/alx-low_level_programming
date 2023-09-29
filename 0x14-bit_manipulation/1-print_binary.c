#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long int.
 *
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	int shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (shift = sizeof(unsigned long int) * 8 - 1; shift >= 0; shift--)
	{
		if (n & (1UL << shift))
			_putchar('1');
		else
			_putchar('0');
	}
}

