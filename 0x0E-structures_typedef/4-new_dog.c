
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - Function that returns
* the length of a string.
* @s: string
* Description: Function that returns
* the length of a string.
*
* Return: ln
*/
int _strlen(char *s)
{
int ln;

ln = 0;

while (s[ln] != '\0')
	ln++;

return (ln);
}

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
char *copyname, *copyowner;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
copyname = malloc(sizeof(char) * (_strlen(name) + 1));
if (copyname == NULL)
return (NULL);
_strcpy(copyname, name);
copyowner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (copyowner == NULL)
return (NULL);
_strcpy(copyowner, owner);
new_dog->name = copyname;
new_dog->owner = copyowner;
new_dog->age = age;
return (new_dog);
}
