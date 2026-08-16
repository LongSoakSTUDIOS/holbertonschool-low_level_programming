#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes and frees a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node, *next_node;
	unsigned long int i = 0;


	if (ht == NULL)
	{
		return;
	}

	while (i < ht->size)
	{
		tmp_node = ht->array[i];
		while (tmp_node != NULL)
		{
			next_node = tmp_node->next;
			free(tmp_node->key);
			free(tmp_node->value);
			free(tmp_node);
			tmp_node = next_node;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
