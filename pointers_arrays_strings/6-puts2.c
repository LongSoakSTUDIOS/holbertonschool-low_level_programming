#include "main.h"
/**
 * puts2 - prints every other character of a string starting from 1st char, followed by new line
 * @str: pointer to a string
 *
 * Return: null
 */
void puts2(char *str)
{
    int counter;

    counter = 0;
    while(str[counter] != '\0')
    {
        _putchar(str[counter]);
        counter++;
        counter++;
	}
    _putchar('\n');
}
