#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate the string 
 * @str: pointer to a string
 *
 * Return: NULL if str=NULL or insufficent memory, otherwise pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *dup;

	i = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (i != '\0')
		i++;

	dup = malloc(sizeof(char) * length);

	if (dup == NULL)
		return (NULL);

	i=0;
	while(i <= length)
	{
		dup[i] = str[i];
		i++;
	}
	dup[length + 1] = '\0';
	free(dup);

	return (dup);
}


