#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog- Function that frees dogs.
* @d: pointer char to a structure
*
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

