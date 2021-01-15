#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the...
 * ...array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}

/*
 * if key is NULL (or does not exist) or size is equal to 0, return 0
 * otherwise, return the index of the key you are given.
 * (to do this, the hash_djb function is run on the key and that result is...
 * modded by the size of the array of the hash table)
 */
