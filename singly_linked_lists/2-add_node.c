#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - creates a new node
 * @head: head of the list
 * @str: string to be placed in new node
 *
 * Return: address of new element or null on fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		return (NULL);
	}
	new_node->str = dup;
	new_node->len = strlen(dup);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
