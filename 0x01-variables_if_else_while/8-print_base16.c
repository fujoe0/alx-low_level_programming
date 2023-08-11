#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * using putchar function three times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = 48; x < 58; x++)
putchar(x);
for (x = 97; x < 103; x++)
putchar(x);
putchar('\n');
return (0);
}

