#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - prints alphabet in lowercase followed by a new line
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char letter;
	int counter;

	letter = 'a';
	counter = '0';
	while (counter <= '9')
	{
		letter = 'a';
	
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');
	counter++;
	}
	
}
