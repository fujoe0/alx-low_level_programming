#include <stdio.h>

/**
 * main - This program prints all single digit numbers
 * starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0;
while (x < 10)
{
putchar(x + '0');
x++;
}
putchar('\n');
return (0);
}

