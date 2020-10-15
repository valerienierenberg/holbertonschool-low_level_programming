#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _calloc- allocates memory for an array using malloc
* @nmemb: number of elements of array
* @size: bytes in each element of array
* Return: NULL nmemb or size is 0, NULL if malloc fails
* Otherwise, returns a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
unsigned int total;
char *allocated;

if (nmemb == 0 || size == 0)
	return (NULL);

total = nmemb * size;

allocated = malloc(sizeof(char) * total);

if (allocated == NULL)
	return (NULL);

for (i = 0; i < total; i++)
	allocated[i] = 0;

return (allocated);
}
