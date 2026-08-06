#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - calculates if number is a prime number
 * @n: number to find if prime
 *
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_div(n, 2));

}

/**
 * check_div - calculates if number is a prime number
 * @n: number to check prime of
 * @div: current divisor
 *
 * Return: 1 if prime number, 0 if not
 */
int check_div(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}
	return (check_div(n, div + 1));

}

