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

/*
 * if hash table, key, or value are equal to NULL, return 0
 * if key is an empty string, return 0
 * set idx variable equal to the key at which to add the new element to...
 * ...the hash table (using key_index function from task 2)
 * malloc space for our new node (called node) the size of hash_node_t struct
 * (check if malloc worked, if not return 0)
 * line 30-33: set the key, value, and next pointer of our new node
 * if ht->array[idx] == NULL (meaning there is no value existing at the index
 * we want at this time), go ahead and set that value equal to our new node
 * else:
 * set a temporary node equal to ht->array[idx]
 * while that temp node exists, if temp's key is equal to key passed to us,
 * free temp->value, set temp->value == value passed to us, and return 1
 * set temp = temp->next to move it along the array
 * outside of that while loop of temp existing,
 * set node->next = ht->array[idx], and then ht->array[idx] = node;
 * return 1
 */
