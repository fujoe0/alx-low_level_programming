#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: Number one.
 * @m: Number two.
 *
 * Return: Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int nbits = 0;

	while (xor_result)
	{
		nbits += xor_result & 1;
		xor_result >>= 1;
	}

	return (nbits);
}

