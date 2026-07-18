#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer to string
 * @src: pointer to string
 * @int: amount of bytes avaliable
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
    int length1;
    int length2;
    int counter;

    length1 = 0;
    length2 = 0;
    counter = 0;
    while (dest[length1] != '\0')
        length1++;
    while (src[length2] != '\0')
        length2++;
    while(counter <= length2)
    {
        if (counter == n)
            return (dest);
        dest[length1 + counter] = src[counter];
        counter++;
    }
    return (dest);
}