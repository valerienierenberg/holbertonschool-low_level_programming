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
