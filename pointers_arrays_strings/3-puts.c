#include "main.h"
/**
 * _puts: prints a string, followed by a new line to stdout
 * @str: pointer to string
 *
 * Return: null
 */
void _puts(char *str)
{
    int counter;

    counter = 0;

    while(str[counter] != '\0')
    {
        _putchar(str[counter]);
    } 
}