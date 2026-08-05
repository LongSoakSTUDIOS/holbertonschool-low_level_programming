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
	_putchar(*s);
	_puts_recursion(s + 1);
}
