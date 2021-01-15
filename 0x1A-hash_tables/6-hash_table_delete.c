#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: is the hash table to be deleted
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node = NULL;

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
