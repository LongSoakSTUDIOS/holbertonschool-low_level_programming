#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array(unsigned int size, char c)
 * size:
 * c:
 *
 * Return: 
 */
char *create_array(unsigned int size, char c)
{
	int *t;

	if (size == 0)
	{
		return (NULL);
	}
	else
		t = malloc(sizeof(*t) * n);
	return (t);
}
