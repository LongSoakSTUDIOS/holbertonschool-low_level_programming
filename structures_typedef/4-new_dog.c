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

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		return (NULL);
	}

	dog2->name = malloc(6);
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = name;
	dog2->age = age;
	dog2->owner = malloc(9);
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	dog2->owner = owner;

	return (dog2);
}

