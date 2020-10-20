#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* new_dog- Function that creates a new dog.
* @name: name of dog.
* @age: age of dog.
* @owner: owner of dog.
*
* Return: Pointer to created dog structure or,
* NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
free(new_dog);
free(owner);
return (NULL);
}
if (owner == NULL)
{
free(new_dog);
free(name);
return (NULL);
}
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
