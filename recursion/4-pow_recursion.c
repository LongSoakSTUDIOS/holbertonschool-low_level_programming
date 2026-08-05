#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculates the value of x^y
 * @x: base number
 * @y: power number
 * Return: -1 if y is lower than 0, result on succ
 */
int _pow_recursion(int x, int y)
{
	int sum;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	sum = x * _pow_recursion(x, y - 1);

	return (sum);

}
