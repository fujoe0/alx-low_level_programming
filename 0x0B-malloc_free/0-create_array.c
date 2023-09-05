#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars dynamically
 * @size: size of the array
 * @c: the character to initialize the array with
 *
 * Return: On success, returns a pointer to the newly created array.
 * If size is 0 or if memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;               /* Declare a pointer to char for the array */
	unsigned int position;      /* Declares variable to keep track of position */

	if (size == 0)
	{
	return (NULL);          /* Return NULL if size is 0 (edge case) */
	}

	buffer = (char *) malloc(size * sizeof(c)); /* Allocate memory for array */

	if (buffer == 0)
	{
	return (NULL);          /* Return NULL if memory allocation fails */
	}
	else
	{
	position = 0;           /* Initialize the position to 0 */

	while (position < size)
	{
	*(buffer + position) = c; /* Set each element to the character c */
	position++;
	}

	return (buffer);        /* Return a pointer to the newly created array */
	}
}
