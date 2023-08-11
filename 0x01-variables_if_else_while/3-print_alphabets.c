#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * and then in upper case
 *
 * Return: Always 0 (Success)
 */
int head(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (x = 'A'; x <= 'Z'; x++)
putchar(x);
putchar('\n');
return (0);
}

