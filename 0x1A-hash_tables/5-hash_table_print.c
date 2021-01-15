#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: is the hash table
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	unsigned long int n = 0;
	unsigned int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = n; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				if (comma)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				comma = 1;
			}
		}
	}
	printf("}");
	printf("\n");
}
