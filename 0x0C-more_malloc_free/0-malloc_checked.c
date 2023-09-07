#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Description: This function allocates memory using malloc and checks
 * for allocation failure. If allocation fails, it exits with status 98.
 *
 * Return: A pointer to the allocated memory if successful, or exits on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);  /* Allocate 'b' bytes of memory */

	if (ptr == NULL)
	{
		exit(98);  /* If malloc fails, exit with status 98 */
	}
	return ptr;  /* Return the pointer to the allocated memory */
}
