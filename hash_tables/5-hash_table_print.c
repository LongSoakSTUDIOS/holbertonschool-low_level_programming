#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node;
	unsigned long int i = 0, printed = 0;


	if (ht == NULL)
	{
		return;
	}

	printf("{");
	while (i < ht->size)
	{
		tmp_node = ht->array[i];
		while (tmp_node != NULL)
		{
			if (printed == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp_node->key, tmp_node->value);
			printed = 1;
			tmp_node = tmp_node->next;
		}
		i++;
	}
	printf("}\n");

}
