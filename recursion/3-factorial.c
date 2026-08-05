#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a given number
 * @n: given number
 *
 * Return: -1 on error, >0 on success
 */
int factorial(int n)
{
	int sum;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	sum = n * (factorial(n - 1));

	return (sum);
}
