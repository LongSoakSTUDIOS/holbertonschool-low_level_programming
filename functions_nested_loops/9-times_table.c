#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: always 0
*/
void times_table(void)
{
	int firstUnit;
	int secondUnit;
	int result;
	
	firstUnit = 0;
	result = 0;

	while (firstUnit <= 9)
	{
		secondUnit = 0;
		while (secondUnit <= 9)
			{	
				result = firstUnit * secondUnit;
				if (result >= 10)
				{
					_putchar(result / 10 + '0');
				}
				_putchar(result % 10 + '0');
				if (secondUnit != 9)
				{
					_putchar(',');
					_putchar(' ');

				}
				secondUnit++;
			}
		_putchar('\n');
		firstUnit++;
	}
}
