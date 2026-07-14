#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
    int counter;
	int length;
	
	length = 0;
    counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
	}
    length = counter;
    counter--;
    if (length % 2 == 1)
        counter = (length + 1) / 2;
    else
        counter = length / 2;
    while (counter <= length)
    {
        _putchar(str[counter]);
        counter++;
    }
    _putchar('\n');
}
