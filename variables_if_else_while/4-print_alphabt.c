#include <stdio.h>

/**
 * main - prints alphabet in lowercase not including q and e
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}

