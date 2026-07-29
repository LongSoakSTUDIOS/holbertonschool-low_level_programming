#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 *
 * Return: if n = 0, 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum;

	i = 0;
	sum = 0;
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
