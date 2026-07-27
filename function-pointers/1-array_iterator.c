#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function on each array
* @array: pointer to an array
* @size: size of array
* @action: pointer to function
*
* Return: null
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

