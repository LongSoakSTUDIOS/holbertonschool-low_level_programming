#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: pointer to string
 * @c: char to find
 *
 * Return: a pointer c in s
 */
char *_strchr(char *s, char c)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
			return (&s[i]);
        }
        i++;
    }
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
