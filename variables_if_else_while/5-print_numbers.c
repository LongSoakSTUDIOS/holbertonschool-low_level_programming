#include <stdio.h>

/**
 * main - prints all single digit numbers fo base 10 from 0
 *
 * Return: 0 on sucess
 */

int main(void)
{
	int number;

	number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);

}
