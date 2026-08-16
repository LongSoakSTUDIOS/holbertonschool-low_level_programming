#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the has table
 * @ht: hashtable
 * @key: string used to link to hash output
 * @value: size of the table
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	hash_node_t *tmp;
	char *tmp_string;
	unsigned long int index;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);

	tmp_string = strdup(value);
	if (tmp_string == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = tmp_string;
			return (1);
		}
		tmp = tmp->next;
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(tmp_string);
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(tmp_string);
		free(new_element);
		return (0);
	}
	new_element->value = tmp_string;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
