#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the amount of elements in a list
 * @h: pointer to the head of a list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	long int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
