#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: copy location
 * @n: amount of memory to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int counter;

	counter = 0;
    while (counter < n)
    {
        dest[counter] = src[counter];
        counter++;
    }
    return (dest);
}
