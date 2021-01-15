#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: the hash table we want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated...
 * ... value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = node;
	else
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}
