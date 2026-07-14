#include "main.h"
/**
 * puts_half - prints half of a string
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
    counter = 0;
    while (counter >= length / 2)
    {
        _putchar(str[counter]);
        counter++;
    }
}