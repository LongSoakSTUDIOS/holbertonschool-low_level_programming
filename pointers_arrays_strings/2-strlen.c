#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to char s
 *
 * Return: int
 */
int _strlen(char *s)
{
    int counter;

    counter = 0;
    while ( s[counter] != '\0')
    {
        counter++;
    }

    return (counter);
}