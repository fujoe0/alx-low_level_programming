#include "main.h"

/**
 * * _memset - Entry point
 * @s: A pointer to the destination memory area where the constant byte will be stored.
 * @b: The constant byte that will be stored in the memory area.
 * @n: The number of bytes to fill with the constant byte.
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
