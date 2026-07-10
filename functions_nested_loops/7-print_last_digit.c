#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n - int to get last digit of
*
*Return: always 0
*/
int print_last_digit(int n)
{
	int digit;
	
	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return(digit);
}
