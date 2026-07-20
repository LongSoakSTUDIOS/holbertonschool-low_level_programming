#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
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
        dest[length1 + counter] = src[counter];
        counter++;
    }
    return (dest);
}
