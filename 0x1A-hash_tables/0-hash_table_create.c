#include "hash_tables.h"
/**
* hash_table_create- function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table, or
* if something went wrong, returns NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhashtable = NULL;

	if (size == 0)
		return (NULL);

	newhashtable = malloc(sizeof(hash_table_t));
	if (newhashtable == NULL)
		return (NULL);

	newhashtable->size = size;
	newhashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newhashtable->array == NULL)
		return (NULL);

	return (newhashtable);
}
