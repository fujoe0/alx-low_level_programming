#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings, up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Description: This function concatenates s1 and the first 'n' bytes of s2,
 * allocating memory for the resulting string. If s1 is NULL, it is treated as
 * an empty string. If s2 is NULL, it is also treated as an empty string. If n
 * is greater than or equal to the length of s2, it copies the entire s2. The
 * resulting string is null-terminated.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;

	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

	return (p);
}
