#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat(char *s1, char *s2)
 * @s1: pointer to string
 * @s2:	pointer to string
 *
 * Return: NULL on failure, pointer to s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int length1;
	int length2;
	char *catted;
	int cat_length;
	
	i = 0;
	j = 0;
	length1 = 0; 
	length2 = 0;

	while (s1[i] != '\0')
		i++;
	length1 = i;
	while (s2[j] != '\0')
		j++;
	length2 = j;
	cat_length = i + j;
	catted = malloc(sizeof(char) * (cat_length + 1));
	if (catted == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while(i < length1)
	{
		catted[i] = s1[i];
		i++;
	}
	while(j < length2)
	{
		catted[i + j] = s2[j];
		j++;
	}
	catted[cat_length + 1] = '\0';

	return(catted);
}

