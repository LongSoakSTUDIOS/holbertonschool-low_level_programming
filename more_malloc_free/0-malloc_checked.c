#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory bytes
 *
 * Return: 98 on fail, pointer to memory on success
 */
void  *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}

