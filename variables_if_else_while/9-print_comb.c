#include <stdio.h>

/**
 * main - printsa all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int number;

	number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);

}
