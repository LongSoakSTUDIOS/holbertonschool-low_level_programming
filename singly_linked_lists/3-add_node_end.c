#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - creates a new node at the end of the list
 * @head: head of the list
 * @str: string to be placed in new node
 *
 * Return: address of new element or null on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;
	unsigned int i;
	list_t *last_node;

	i = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (dup[i] != '\0')
	{
		i++;
	}

	if (*head == NULL)
	{
		*head = new_node;
	}

	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	new_node->str = dup;
	new_node->len = i;
	new_node->next = NULL;

	return (new_node);
}
