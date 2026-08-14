#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node a given position
 * @h: head of the list
 * @idx: where the node should be added
 * @n: int to store in node
 *
 * Return: address of node, null on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int i = 0;
	dlistint_t *tmp;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		new_node->n = n;
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h == NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;

	tmp->next = new_node;

	return (new_node);

}
