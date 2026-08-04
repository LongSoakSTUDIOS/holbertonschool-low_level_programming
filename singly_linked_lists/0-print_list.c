#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to the head of a list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	int i;

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%i] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}

