#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string via recursion
 * @s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	write(1, &*s, 1);
	_puts_recursion(s + 1);
}
