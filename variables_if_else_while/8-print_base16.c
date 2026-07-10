#include <stdio.h>

/**
 * main - prints all numbers of base 16
 *
 * Return: 0 on success
 */
int main(void)
{
	int number;
	char letter;

	number = '0';
	letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (number > '9' && letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
