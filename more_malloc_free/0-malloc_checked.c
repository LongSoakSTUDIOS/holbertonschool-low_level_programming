#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 *
 * Return: 98 on fail, pointer to memory on success
 */
void  *malloc_checked(unsigned int b)
{
	int *t;

	t = malloc(sizeof(int) * b);
	if (t == NULL)
		exit(98);
	return(t);
}
