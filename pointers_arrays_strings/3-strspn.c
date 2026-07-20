#include "main.h"

/**
 * _memcpy - gets length of prefix substring
 * @s: pointer to string
 * @accept: bytes to accept
 *
 * Return: a pointer to dest
 */
unsigned int _strspn(char *s, char *accept)
{
    int counter;
    int length;
    int j;
	int match;

    counter = 0;
    length = 0;
    while (s[counter] != '\0') 
    {
		j = 0;
		match = 0;
        while (accept[j] != '\0')
        {
            if (s[counter] == accept[j])
			{
				match = 1;
			}
			j++;
        }
		if (match == 0)
		{
			return (length);
		}
		counter++;
		length++;
    }
    return (length);
}
