#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit.
 *
 * Return: Value of the bit, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	unsigned long int mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}

