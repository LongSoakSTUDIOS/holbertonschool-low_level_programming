#include "main.h"
/**
*print_sign - prints sign of the variable n
*@n: int to check for postive or negative
*
*Return: 1 for postive, 0 if zero, -1 for negative
*/
int print_sign(int n)
{
	if(n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
