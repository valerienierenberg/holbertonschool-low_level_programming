#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strcpy - Function that copies the string pointed to by src,
* including the terminating null byte (\0), to the
* buffer pointed to by dest.
* @dest: destination of string
* @src: source of string to be copied to dest
* Description: Function that copies the string pointed to by src,
* including the terminating null byte (\0), to the
* buffer pointed to by dest.
* Return: void
*
*/
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

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
	return (NULL);
(*new_dog).name = malloc(sizeof(name) + 1);
	if (name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
(*new_dog).owner = malloc(sizeof(owner) + 1);
	if ((*new_dog).owner == NULL)
	{
	free((*new_dog).name);
	free(new_dog);
	return (NULL);
	}
	_strcpy((*new_dog).name, name);
	_strcpy((*new_dog).owner, owner);
	(*new_dog).age = age;
	return (new_dog);
}

