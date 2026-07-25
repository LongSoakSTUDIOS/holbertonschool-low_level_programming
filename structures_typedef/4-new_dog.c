#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to a string
 * @age: float
 * @owner: pointer to a string
 *
 * Return: a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	char *dogName;
	char *dogOwner;

	dogName = name;
	dogOwner = owner;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		free(dog2);
		return (NULL);
	}

	dog2->name = dogName;
	dog2->age = age;
	dog2->owner = dogOwner;

	return (dog2);
}
