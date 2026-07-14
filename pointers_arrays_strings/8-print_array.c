#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an array
 * @n: int amount to print
 * 
 * Return: nothing
 */
void print_array(int *a, int n)
{
    int counter;

    counter = 0;

    while (a[counter] <= n)
    {
        _putchar(a[counter]);
		_putchar(',');
		_putchar(' ');
    }
	_putchar('\n');
}