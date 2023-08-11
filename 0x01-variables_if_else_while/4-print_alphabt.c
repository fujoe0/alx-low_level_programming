#include <stdio.h>

/**
 * main - A  program that prints the alphabet in lowercase
 * with the exception of letter 'q' and letter 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;

for (c = 'a'; c <= 'z'; c++)
if (c != 'e' && c != 'q')
putchar(c);
putchar('\n');
return (0);
}

