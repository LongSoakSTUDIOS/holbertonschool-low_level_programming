#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2:	string 2
 * @n: first bytes of n
 *
 * Return: pointer to allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int length1;
	unsigned int length2;
	char *concat;

	i = 0;
	j = 0;
	length1 = 0;
	length2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while(s1[i] != '\0')
		i++;
	length1 = i;
	while(s2[j] != '\0')
		j++;
	length2 = j;
	if (n >= j)
		length2 = j;
	else
		length2 = n;
	concat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < length1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < length2)
	{
		concat[j + i] = s2[j];
		j++;
	}
	concat[i + j] = '\0';
	return (concat);
}

