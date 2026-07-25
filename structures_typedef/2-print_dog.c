#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_dog - prints a struct dog
 * @d: struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
	{
		return;
	}
	name = d->name;
	if (name == NULL)
		name = "nil";
	printf("Name: %s\n", name);
	age = d->age;
	printf("Age: %f\n", age);

	owner = d->owner;
	if (owner == NULL)
		owner = "nil";
	printf("Owner: %s\n", owner);
}

