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
	unsigned long int idx = 0;
	hash_node_t *new = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	current = ht->array[idx];

	for (; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
		{
			if (strcmp(current->value, value) != 0)
			{
				free(current->value);
				current->value = strdup(value);
			}
			return (1);
		}
	}

	new = make_node(key, value);
	if (new == NULL)
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}

hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}
