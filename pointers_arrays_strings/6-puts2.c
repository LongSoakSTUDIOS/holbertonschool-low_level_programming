#include "main.h"
/**
 * puts2 - prints every other character of a string starting from 1st char, followed by new line
 * @str: pointer to a string
 *
 * Return: nothing
 */
void puts2(char *str)
{
    int counter;
	int length;
	
	length = 0;
    counter = 0;
    while (str[counter] != '\0')
    {
        counter += 1;
	}
	length = counter;
	while (str[counter] != '\0' || str[counter] >= length)
    {
        counter += 2;
	}
    _putchar('\n');
}
