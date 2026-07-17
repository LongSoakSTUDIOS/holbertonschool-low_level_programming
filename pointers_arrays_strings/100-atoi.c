#include "main.h"
/**
 * *_atioi - coverts a string to an integer
 * @s:  pointer to string
 * Return: the pointer to dest
 */
int _atoi(char *s)
{
    int counter;

    counter = 0;
    int res = 0;
    while (s[counter] != '\0')
    {
        res = res * 10 + (s[counter] - '0');
        counter++;
    }
    return (res);
}
