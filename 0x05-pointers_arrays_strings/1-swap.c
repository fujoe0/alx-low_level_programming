#include "main.h"
/**
 * swap_int - this swaps the values of two integers
 * @a: integer that is swapped
 * @b: integer that is swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
