#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit.
 *
 * Return: Value of the bit or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 64)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}

