#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: amount of memory to fill
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int counter;

    counter = 0;
    while (counter < n)
    {
        s[counter] = b;
        counter++;
    }
    return (s);
}
