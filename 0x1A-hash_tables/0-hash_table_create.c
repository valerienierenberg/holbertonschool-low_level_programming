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
/*
 * declare hash table variable to create
 * if size of hash table is 0, return NULL
 * malloc size for our new hash table
 * (check if malloc worked; if not, return NULL)
 * set the size of our newhashtable equal to the size passed to us in function
 * malloc space (size of a hash node struct) for the array of our newhashtable
 * (check if that malloc worked; if not, return NULL)
 * return newhashtable
 */
