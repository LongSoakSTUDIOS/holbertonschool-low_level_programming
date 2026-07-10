#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
