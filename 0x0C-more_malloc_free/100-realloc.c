#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* _realloc- reallocates a memory block using malloc and free
* @new_size: new size in bytes of new memory block
* @old_size: old size in bytes of allocated space for ptr
* @ptr: originial pointer
* Return: NULL if new_size is equal to zero and ptr is not NULL
* If new_size == old_size, do not do anything and return ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

char *new;
unsigned int i;

if (old_size == new_size)
	return (ptr);

if (ptr == NULL)
{
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	return (new);
}

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

new = malloc(new_size);

if (new == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
new[i] = ((char *)ptr)[i];

free(ptr);
return (new);
}
