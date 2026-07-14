#include "main.h"
#include <stdio.h>
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
    while (counter < n)
    {
		printf("%d", a[counter]);
		while (counter != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		counter++;
    }
	_putchar('\n');
}