#include "main.h"

/**
 * _strlen - count array
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
 * _strcpy - copy arrays
 * @src: source array
 * @dest: destination array
 * Return: Pointer to the destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - create a duplicate string
 * @str: source string
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}
