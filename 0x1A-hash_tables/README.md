# README.md for project 0x1A-hash_tables

0-hash_table_create.c - function that creates a hash table. Returns a pointer to the newly created hash table, or if something went wrong, returns NULL\
1-djb2.c - hash function implementing the djb2 algorithm.\
2-key_index.c - function that gives you the index of a key. Uses the hash_djb2 function. Returns the index at which the key/value pair should be stored in the array of the hash table\
3-hash_table_set.c - function that adds an element to the hash table. Returns: 1 if it succeeded, 0 otherwise. In case of collision, a new node is added at the beginning of the list\
4-hash_table_get.c - function that retrieves a value associated with a key. Returns the value associated with the element, or NULL if key couldn’t be found\
5-hash_table_print.c - function that prints a hash table.\
6-hash_table_delete.c - function that deletes a hash table.\
100-sorted_hash_table.c - rewriting of the previous functions using given data structures.\
hash_tables.h - header file containing all libraries and function prototypes
