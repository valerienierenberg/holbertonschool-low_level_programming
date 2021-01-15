#include "hash_tables.h"
/**
* shash_table_create- function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table, or
* if something went wrong, returns NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newhashtable = NULL;

	if (size == 0)
		return (NULL);

	newhashtable = malloc(sizeof(shash_table_t));
	if (newhashtable == NULL)
		return (NULL);

	newhashtable->size = size;
	newhashtable->array = malloc(sizeof(shash_node_t *) * size);
	if (newhashtable->array == NULL)
		return (NULL);

	return (newhashtable);
}

/**
* shash_table_set - Function that adds an element to the hash table.
* @ht: the hash table we want to add or update the key/value to
* @key: is the key. key can not be an empty string
* @value: is the value associated with the key. value must be duplicated...
* ... value can be an empty string
* Return: 1 if it succeeded, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	shash_node_t *temp;
unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(shash_node_t *));
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

/**
 * shash_table_get - Function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL if key can't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (key == NULL)
		return (NULL);

	for (node = ht->array[key_index((unsigned char *)key, ht->size) % ht->size];
	node != 0; node = node->next)
	{
		if (!strcmp(node->key, key))
			return (node->value);
	}
	return (NULL);
}

/**
 * shash_table_print - Function that prints a hash table.
 * @ht: is the hash table
 * Return: none
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
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

/**
 * shash_table_print_rev - Function that prints a hash table in reverse.
 * @ht: is the hash table
 * Return: none
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
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


/**
* shash_table_delete - Function that deletes a hash table
* @ht: is the hash table to be deleted
* Return: void
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				node = ht->array[i];
				free(node->key);
				free(node->value);
				ht->array[i] = ht->array[i]->next;
				free(node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
