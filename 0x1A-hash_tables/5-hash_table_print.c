#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: is the hash table
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;
    unsigned long int i = 0;
    unsigned long int n = 0;

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
                printf("'%s'%s': '%s'", n == 0 ? "" : ", ",
                node->key, node->value), n++;
                node = node->next;
            }
        }
    }
    printf("}");
    printf("\n");
}
