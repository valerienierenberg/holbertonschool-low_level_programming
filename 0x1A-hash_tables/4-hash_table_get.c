#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	for (node = ht->array[key_index((unsigned char *)key, ht->size) % ht->size];
	node != 0; node = node->next)
	{
		if (!strcmp(node->key, key))
			return (node->value);
	}
	return (NULL);
}

/*
* {
*	unsigned long int idx = 0;
*	hash_node_t *temp;
*
*	if (ht == NULL || key == NULL)
*		return (NULL);
*
*	idx = key_index((const unsigned char *)key, ht->size);
*	temp = ht->array[idx];
*
*	for (; temp != NULL; temp = temp->next)
*	{
*		if (strcmp(temp->key, key) == 0)
*			return (temp->value);
*	}
*	return (NULL);
* }
*/
