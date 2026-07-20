#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - gets length of prefix substring
 * @s: pointer to string
 * @accept: bytes to accept
 *
 * Return: a pointer to dest
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			j = 0;
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
