#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		putchar('\n');
		letter++;
	}
	return (0);
}
