#include "main.h"

/**
 * _strlen - count characters in a string
 * @s: array of elements
 * Return: Length of the string
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /* Count characters in the string */
	{
	i++;
	}

	return (i);
}

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	/* If the array is empty */
	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	/* Calculate the total size needed */
	size = (_strlen(s1) + _strlen(s2) + 1);

	/* Allocate memory */
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
	return (NULL);
	}

	/* Copy the first string */
	for (i = 0; *(s1 + i) != '\0'; i++)
	*(dst + i) = *(s1 + i);

	/* Concatenate the second string */
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
	*(dst + i) = *(s2 + j);
	i++;
	}

	return (dst);
}
