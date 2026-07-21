#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - create an array of chars, initialise with c
 * size: 
 * c:
 *
 * Return: null if size = 0, otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	

	t = malloc(sizeof(char) * size);

	while(i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
