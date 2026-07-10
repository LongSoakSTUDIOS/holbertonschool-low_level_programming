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
	return(digit);
}
