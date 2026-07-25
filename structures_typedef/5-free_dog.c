#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - frees dogs
* @d: pointer to dog data type
*
* Return: Always nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return NULL;
	free(d->name);
	free(d->owner);
	free(d);
}

