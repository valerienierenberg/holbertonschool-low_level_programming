#include "holberton.h"
/**
* *_strcat -  concatenates string
* @dest : destination
* @src : source
*
* Description: concatenates string
* Return: void
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

char *_strcat(char *dest, char *src)
{
  _strcpy (dest + _strlen (dest), src);
  return (dest);
}
