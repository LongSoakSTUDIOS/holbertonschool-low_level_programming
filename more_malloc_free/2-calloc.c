#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: bytes to allocate
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		((unsigned int *)a)[i] = 0;
		i++;
	}
	return (a);
}

