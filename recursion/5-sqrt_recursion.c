#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates natty sqroot
 * @n: number to find sqroot of
 *
 * Return: if no sqroot return -1, else sqroot.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (guess_next(n, 0));
}

/**
 * guess_next - cycles through guess
 * @n: number to find sqroot of
 * @guess: counter for current guess
 * Return: if no sqroot return -1, else sqroot.
 */
int guess_next(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}

	if (guess * guess == n)
	{
		return (guess);
	}

	return (guess_next(n, guess + 1));

}
