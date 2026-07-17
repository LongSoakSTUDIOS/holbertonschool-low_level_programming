#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest:  pointer to buffer
 * @src: pointer to string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int counter;

    counter = 0;
    while (src[counter] != '\0')
    {
        dest[counter] = src[counter];
        counter++;
    }
    dest[counter] = '\0';
    return (dest);
}
