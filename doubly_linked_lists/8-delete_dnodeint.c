#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node a given position
 * @head: head of the list
 * @index: where the node should be deleted from
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp->next != NULL)
		tmp->prev->next = tmp->next;
	if (tmp->prev != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
