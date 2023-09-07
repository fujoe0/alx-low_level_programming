#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Description: This function allocates memory for an array of `nmemb` elements
 * each of size `size` bytes, using `malloc`. Initializes the allocated memory
 * to zero using `memset`. If `nmemb` or `size` is zero, or if malloc fails to
 * allocate memory, it returns NULL.
 *
 * Return: A pointer to the allocated and initialized memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int i = 0;
	int j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = nmemb * size;
	p = malloc(j);
	if (p == NULL)
	{
		return (NULL);
	}
		while (i < j)
		{
			p[i] = 0;
			i++;
		}
	return (p);
}
