#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This returns the sum of all its paramters.
 * @n: The number of parameters passed to the function.
 * @...: A variable num of parameters to calculate sum. for variadic functions
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
